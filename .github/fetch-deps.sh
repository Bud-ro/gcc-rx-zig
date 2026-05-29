#!/usr/bin/env bash
# Pre-fetch all build dependencies into the Zig global package cache, with
# retries to absorb transient upstream mirror failures (502 / dropped
# connections). URLs are read straight from build.zig.zon so this never drifts
# from the manifest. On a warm cache each fetch is a fast content-hash no-op.
set -euo pipefail

: "${ZIG_GLOBAL_CACHE_DIR:?ZIG_GLOBAL_CACHE_DIR must be set}"

mapfile -t urls < <(grep -oE '(git\+)?https?://[^"]+' build.zig.zon)
echo "Fetching ${#urls[@]} dependencies into $ZIG_GLOBAL_CACHE_DIR"

for url in "${urls[@]}"; do
  for attempt in 1 2 3 4 5; do
    if zig fetch --global-cache-dir "$ZIG_GLOBAL_CACHE_DIR" "$url"; then
      break
    fi
    if [ "$attempt" -eq 5 ]; then
      echo "::error::failed to fetch $url after 5 attempts"
      exit 1
    fi
    echo "::warning::fetch of $url failed (attempt $attempt); retrying"
    sleep $((attempt * 10))
  done
done
