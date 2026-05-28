# NOTICE — licenses and attribution

This repository builds a Renesas RX bare-metal cross-toolchain entirely from
source. The binaries it produces (`rx-elf-gcc`, `cc1`, the binutils tools,
`libgcc.a`, …) are derived works of GCC and GNU Binutils and are covered by
those projects' licenses, reproduced here in `COPYING` (GPLv2),
`COPYING.LIB` (LGPLv2.1), `COPYING3` (GPLv3), `COPYING3.LIB` (LGPLv3), and
`COPYING.RUNTIME` (the GCC Runtime Library Exception, v3.1).

## Components and licenses

| Component | Version | License | Source |
|-----------|---------|---------|--------|
| GCC (cc1, gcc driver) | 14.2.0 | GPLv3-or-later | upstream tarball, pinned in `build.zig.zon`, fetched at build time |
| GNU Binutils (as, ld, ar, …) | 2.44 | GPLv3-or-later | upstream tarball, pinned in `build.zig.zon`, fetched at build time |
| Renesas RX backend patches | 14.2.0.202511 | GPLv3-or-later (part of GCC) | `vendor/patches/{gcc,binutils}-rx.patch` |
| libgcc (`libgcc.a`) | 14.2.0 | GPLv3 **with GCC Runtime Library Exception** | built from the GCC source above |
| Build scripts (this repo + gcc-cross-zig) | — | GPL-2.0-or-later | this repository |
| GMP, MPFR, MPC | host | LGPL/GPL | host build-time dependencies only; **not** redistributed in or linked into any produced binary |

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
for the distributed binaries. The entire GCC compiler-generation pipeline (the
`gen*` host tools, option tables, gengtype, etc.) is run from that source at
build time rather than vendored. A small number of build inputs are checked in
under `config/` and `include/` — autoconf `config.h`-style headers and a few
Binutils target tables (e.g. `vendor/ld/eelf32rx.c`, `include/targmatch.h`,
`include/ldemul-list.h`); these are derived from the same GPL'd upstream source
and carry its license.

## Attribution

The RX backend (and its DPFPU/TFU/ISA-v3 extensions in the patches) is the work
of Red Hat and Renesas Electronics, contributed to GCC and Binutils under
GPLv3-or-later. The patch files in `vendor/patches/` carry a provenance header
describing their origin (the diff between upstream and the Renesas GNU RX
distribution). GCC and Binutils are copyright the Free Software Foundation and
contributors.
