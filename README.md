# gcc-rx-zig

Renesas RX bare-metal cross-compiler (GCC 14.2.0 + Binutils 2.44), built from source with [Zig](https://ziglang.org/). Shared build logic lives in [gcc-cross-zig](https://github.com/Bud-ro/gcc-cross-zig).

```bash
sudo apt install libgmp-dev libmpfr-dev libmpc-dev   # or: brew install gmp mpfr libmpc
zig build -Doptimize=ReleaseFast
```

Produces `rx-elf-gcc`, `cc1`, `rx-elf-as`, `rx-elf-ld`, `rx-elf-objcopy`, `rx-elf-objdump`, `rx-elf-readelf`, `rx-elf-ar`, `rx-elf-nm`, `rx-elf-strip`, `rx-elf-size`, `rx-elf-ranlib`, `rx-elf-strings`, `rx-elf-addr2line`, `rx-elf-c++filt`, `rx-elf-elfedit` in `zig-out/bin/`.

## Codegen regression suite

```bash
zig build test           # compile tests/cases/*.c, check assertions + snapshots
zig build test-update    # regenerate the committed assembly snapshots
```

`tests/cases/` holds C sources (mostly pulled from GCC's own `gcc.target/rx`
DejaGnu suite) with embedded `scan-assembler` / `scan-assembler-not` /
`scan-assembler-times` assertions, plus `abi-add5.c` exercising the RX
argument-passing convention. A few cases also keep a normalized assembly
snapshot in `tests/snapshots/` for drift detection.

### Known divergence

`pr83831` documents one tracked difference: for `x & ~(1 << y)` (variable bit
position) the Renesas-patched RX backend emits a `rotl`+`and` sequence instead
of a single `bclr`, so it produces 5 `bclr` where mainline GCC's testsuite
expects 6 (the analogous `bset`/`bnot` variable-position forms still match).

This is a property of the **Renesas backend patches**, not our build. Verified
two ways: (1) a reference `cc1` built from the identical patched source via the
normal `configure`/`make` path produces byte-for-byte identical assembly to our
zig/Clang-built `cc1`; (2) Renesas's own complete source distribution, built
their normal way, emits the same 5. Correctness is unaffected. See the comment
in `tests/cases/pr83831.c`.
