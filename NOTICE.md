# NOTICE — licenses and attribution

This repository builds a Renesas RX bare-metal cross-toolchain entirely from
source. The binaries it produces (`rx-elf-gcc`, `cc1`, the binutils tools,
`libgcc.a`, …) are derived works of GCC and GNU Binutils and are covered by
those projects' licenses, reproduced here in `COPYING` (GPLv2),
`COPYING.LIB` (LGPLv2.1), `COPYING3` (GPLv3), and `COPYING3.LIB` (LGPLv3).

## Components and licenses

| Component | Version | License | Source |
|-----------|---------|---------|--------|
| GCC (cc1, gcc driver) | 14.2.0 | GPLv3-or-later | ftp.gnu.org/gnu/gcc, fetched at build time |
| GNU Binutils (as, ld, ar, …) | 2.44 | GPLv3-or-later | ftp.gnu.org/gnu/binutils, fetched at build time |
| Renesas RX backend patches | 14.2.0.202511 | GPLv3-or-later (part of GCC) | `vendor/patches/{gcc,binutils}-rx.patch` |
| libgcc (`libgcc.a`, crt\*.o) | 14.2.0 | GPLv3 **with GCC Runtime Library Exception** | built from the GCC source above |
| Build scripts (this repo + gcc-cross-zig) | — | GPL-2.0-or-later | this repository |

## GCC Runtime Library Exception (important for users)

`libgcc.a` and the startup objects are licensed under GPLv3 **with the GCC
Runtime Library Exception**. That exception is what permits linking these
runtime routines (soft-float, 64-bit integer helpers, builtins, …) into your
own firmware — including proprietary firmware — without the GPL extending to
your code, provided you compile that code with this GPL-compatible GCC. See
the GCC documentation for the exact terms.

## Source availability (GPL compliance)

The toolchain is built from unmodified upstream GCC and Binutils tarballs
(downloaded at build time; their hashes are pinned in `build.zig.zon`) plus the
Renesas RX patches committed in `vendor/patches/`. A binary release therefore
corresponds exactly to:

* the upstream GCC 14.2.0 and Binutils 2.44 source, plus
* the patches in `vendor/patches/`, applied with `patch -p1`.

This satisfies the GPL requirement to provide the complete corresponding source
for the distributed binaries. No GCC- or Binutils-generated files are vendored;
everything is regenerated from that source during the build.

## Attribution

The RX backend (and its DPFPU/TFU/ISA-v3 extensions in the patches) is the work
of Red Hat and Renesas Electronics, contributed to GCC. GCC and Binutils are
copyright the Free Software Foundation and contributors.
