# gcc-rx-zig

Renesas RX bare-metal cross-compiler (GCC 14.2.0 + Binutils 2.42), built from source with [Zig](https://ziglang.org/). Shared build logic lives in [gcc-cross-zig](https://github.com/Bud-ro/gcc-cross-zig).

```bash
sudo apt install libgmp-dev libmpfr-dev libmpc-dev   # or: brew install gmp mpfr libmpc
zig build -Doptimize=ReleaseFast
```

Produces `rx-elf-gcc`, `cc1`, `rx-elf-as`, `rx-elf-ld`, `rx-elf-objcopy`, `rx-elf-objdump`, `rx-elf-readelf`, `rx-elf-ar`, `rx-elf-nm`, `rx-elf-strip`, `rx-elf-size`, `rx-elf-ranlib`, `rx-elf-strings`, `rx-elf-addr2line`, `rx-elf-c++filt`, `rx-elf-elfedit` in `zig-out/bin/`.
