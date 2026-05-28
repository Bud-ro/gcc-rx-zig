# gcc-rx-zig

Renesas RX bare-metal cross-compiler (GCC 14.2.0 + Binutils 2.44), built from source with [Zig](https://ziglang.org/). Shared build logic lives in [gcc-cross-zig](https://github.com/Bud-ro/gcc-cross-zig).

```bash
sudo apt install libgmp-dev libmpfr-dev libmpc-dev   # or: brew install gmp mpfr libmpc
zig build -Doptimize=ReleaseFast
```

Produces `rx-elf-gcc`, `cc1`, `rx-elf-as`, `rx-elf-ld`, `rx-elf-objcopy`, `rx-elf-objdump`, `rx-elf-readelf`, `rx-elf-ar`, `rx-elf-nm`, `rx-elf-strip`, `rx-elf-size`, `rx-elf-ranlib`, `rx-elf-strings`, `rx-elf-addr2line`, `rx-elf-c++filt`, `rx-elf-elfedit` in `zig-out/bin/`.

The toolchain vendors no GCC- or Binutils-generated files and no patched
source trees — every generated file is produced from source at build time, and
the Renesas RX patches are applied from `vendor/patches/` with `patch -p1`.

## libgcc

```bash
zig build libgcc         # build + install libgcc.a (default multilib) and crt*.o
```

Compiles GCC's runtime library (soft-float, 64-bit integer helpers, `__builtin_*`
lowering) from source with the freshly built `rx-elf-gcc` and installs a
`libgcc.a` per multilib variant under `zig-out/lib/gcc/rx-unknown-elf/14.2.0/`.
Link it for any firmware that uses floating point, 64-bit math, or compiler
builtins; the driver's `-print-libgcc-file-name` selects the variant matching
your `-mcpu`/`-m64bit-doubles`/`-nofpu` flags. `libgcc.a` carries the **GCC
Runtime Library Exception** (see `NOTICE.md`), so it can be linked into
proprietary firmware.

Variants built by default: the base (RXv1, hardware FPU, 32-bit `double`) plus
RXv2 (`-mcpu=rx64m`), RXv3 (`-misa=v3`), 64-bit `double`, and no-FPU. Set
`libgcc_multilib_dirs` to `&.{"@all"}` in `build.zig` to build all ~104 variants.
Not yet produced: C++ static-ctor `crtbegin`/`crtend` (an RX assembler quirk).

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

## License

GPL — this builds GCC and Binutils. See `NOTICE.md` for the full component
breakdown, the GCC Runtime Library Exception that applies to `libgcc.a`, and
the source-availability statement. License texts are in `COPYING*`.
