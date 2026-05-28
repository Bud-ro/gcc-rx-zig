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
position) this from-source, Clang-built `cc1` emits a `rotl`+`and` sequence
instead of a single `bclr`, so it produces 5 `bclr` where upstream GCC emits 6.
The analogous `bset`/`bnot` variable-position forms match, and the `bclr`
register-bit insn exists in `rx.md`, so this is a `cc1` optimizer-behavior
difference (same family as other Clang-vs-GCC codegen differences), not a
correctness bug. See the comment in `tests/cases/pr83831.c`.
