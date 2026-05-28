#!/bin/sh
# RX codegen regression suite.
#
# For each tests/cases/*.c:
#   - compile to assembly with the flags from its dg-options directive
#   - check every scan-assembler / scan-assembler-not / scan-assembler-times
#     assertion embedded in the source (format borrowed from GCC's DejaGnu suite)
#   - if a matching tests/snapshots/<name>.s exists, diff the normalized
#     assembly against it to catch any codegen drift
#
# Usage: run.sh <path-to-rx-elf-gcc> [--update]
set -eu

GCC="$1"
UPDATE="${2:-}"
HERE="$(cd "$(dirname "$0")" && pwd)"
CASES="$HERE/cases"
SNAPS="$HERE/snapshots"
WORK="$(mktemp -d)"
trap 'rm -rf "$WORK"' EXIT

# Cases that also keep a committed assembly snapshot for drift detection.
# Kept small on purpose -- representative codegen, not every test.
SNAPSHOT_CASES=" abi-add5 movsicc-1 pr83831 "

is_snapshot_case() {
  case "$SNAPSHOT_CASES" in *" $1 "*) return 0 ;; *) return 1 ;; esac
}

fail=0
total=0
checks=0

# Strip volatile lines so snapshots are stable across machines/toolchain paths.
normalize() {
  grep -vE '^\s*(\.file|\.ident|#)' "$1" | sed 's/[[:space:]]*$//'
}

# Extract the quoted pattern from a dg-final scan directive line.
pattern_of() {
  printf '%s\n' "$1" | sed -e 's/.*scan-assembler[a-z-]*[[:space:]]*"//' -e 's/"[^"]*$//'
}

for c in "$CASES"/*.c; do
  name="$(basename "$c" .c)"
  total=$((total + 1))

  opts="$(grep -o 'dg-options "[^"]*"' "$c" | sed 's/dg-options "//;s/"//' || true)"
  : "${opts:=-Os}"

  asm="$WORK/$name.s"
  if ! "$GCC" -S $opts "$c" -o "$asm" 2>"$WORK/$name.err"; then
    echo "FAIL $name: compilation failed"
    cat "$WORK/$name.err"
    fail=$((fail + 1))
    continue
  fi

  case_failed=0

  # scan-assembler "PAT"  -> must be present
  grep -o 'scan-assembler "[^"]*"' "$c" 2>/dev/null | while IFS= read -r d; do
    pat="$(pattern_of "$d")"
    if ! grep -Eq "$pat" "$asm"; then
      echo "FAIL $name: expected /$pat/ in assembly"
      exit 1
    fi
  done || case_failed=1

  # scan-assembler-not "PAT"  -> must be absent
  grep -o 'scan-assembler-not "[^"]*"' "$c" 2>/dev/null | while IFS= read -r d; do
    pat="$(pattern_of "$d")"
    if grep -Eq "$pat" "$asm"; then
      echo "FAIL $name: did not expect /$pat/ in assembly"
      exit 1
    fi
  done || case_failed=1

  # scan-assembler-times "PAT" N  -> must appear exactly N times
  grep -o 'scan-assembler-times "[^"]*" [0-9]*' "$c" 2>/dev/null | while IFS= read -r d; do
    pat="$(pattern_of "$d")"
    want="$(printf '%s\n' "$d" | grep -o '[0-9]*$')"
    got="$(grep -Eo "$pat" "$asm" | wc -l | tr -d ' ')"
    if [ "$got" != "$want" ]; then
      echo "FAIL $name: expected /$pat/ x$want, found x$got"
      exit 1
    fi
  done || case_failed=1

  checks=$((checks + 1))

  # Snapshot comparison (drift detection).
  snap="$SNAPS/$name.s"
  if [ "$UPDATE" = "--update" ]; then
    if is_snapshot_case "$name"; then
      normalize "$asm" > "$snap"
      echo "snapshot updated: $name"
    fi
  elif [ -f "$snap" ]; then
    normalize "$asm" > "$WORK/$name.norm"
    if ! diff -u "$snap" "$WORK/$name.norm" > "$WORK/$name.diff"; then
      echo "FAIL $name: assembly drifted from snapshot"
      cat "$WORK/$name.diff"
      case_failed=1
    fi
  fi

  if [ "$case_failed" = 0 ]; then
    echo "ok   $name"
  else
    fail=$((fail + 1))
  fi
done

echo "---"
echo "$total cases, $fail failed"
[ "$fail" = 0 ]
