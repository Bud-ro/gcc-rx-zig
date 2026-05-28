//! Build rx-elf cross-compiler toolchain (binutils 2.42 + GCC 14.2.0).
//! Includes Renesas RX-specific patches (from 14.2.0.202511 release).
//! Uses shared build logic from gcc-cross-zig.
//! SPDX-License-Identifier: GPL-2.0-or-later

const std = @import("std");
const gcc_cross = @import("gcc_cross");

pub fn build(b: *std.Build) void {
    const target = b.standardTargetOptions(.{});
    const optimize = b.standardOptimizeOption(.{});

    const cross_dep = b.dependency("gcc_cross", .{});
    const binutils_src = b.dependency("binutils_src", .{});
    const gcc_src = b.dependency("gcc_src", .{});

    // Create patched GCC source tree via system commands.
    // We copy the upstream source to a writable location, then overlay
    // our Renesas patches on top. This ensures ALL compilation units see
    // the same patched headers (tree-core.h enum changes shift global_trees indices).
    const patch_dir = b.cache_root.join(b.allocator, &.{"patched-gcc-rx"}) catch @panic("OOM");
    const patch_step = b.addSystemCommand(&.{
        "sh", "-c", b.fmt(
            \\set -e
            \\DEST="{0s}"
            \\SRC="$1"
            \\PATCHES="$2"
            \\if [ ! -f "$DEST/.patched" ]; then
            \\  rm -rf "$DEST"
            \\  cp -a "$SRC" "$DEST"
            \\  cp -a "$PATCHES/gcc/"* "$DEST/gcc/"
            \\  touch "$DEST/.patched"
            \\fi
        , .{patch_dir}),
        "_",
    });
    patch_step.addDirectoryArg(gcc_src.path("."));
    patch_step.addDirectoryArg(b.path("patched"));
    patch_step.setCwd(b.path("."));

    // Use the patched directory as gcc source root
    const patched_gcc_root: std.Build.LazyPath = .{ .cwd_relative = patch_dir };

    // Also create patched binutils source tree for DPFPU assembler support
    const bu_patch_dir = b.cache_root.join(b.allocator, &.{"patched-binutils-rx"}) catch @panic("OOM");
    const bu_patch_step = b.addSystemCommand(&.{
        "sh", "-c", b.fmt(
            \\set -e
            \\DEST="{0s}"
            \\SRC="$1"
            \\PATCHES="$2"
            \\if [ ! -f "$DEST/.patched" ]; then
            \\  rm -rf "$DEST"
            \\  cp -a "$SRC" "$DEST"
            \\  cp -a "$PATCHES/bfd/"* "$DEST/bfd/" 2>/dev/null || true
            \\  cp -a "$PATCHES/gas/config/"* "$DEST/gas/config/" 2>/dev/null || true
            \\  cp -a "$PATCHES/opcodes/"* "$DEST/opcodes/" 2>/dev/null || true
            \\  cp -a "$PATCHES/include/"* "$DEST/include/" 2>/dev/null || true
            \\  echo '/* merged into bfdio.c in 2.44 */' > "$DEST/bfd/bfdwin.c"
            \\  bison -o "$DEST/gas/config/rx-parse.c" -d "$DEST/gas/config/rx-parse.y" 2>/dev/null || true
            \\  touch "$DEST/.patched"
            \\fi
        , .{bu_patch_dir}),
        "_",
    });
    bu_patch_step.addDirectoryArg(binutils_src.path("."));
    bu_patch_step.addDirectoryArg(b.path("patched"));
    bu_patch_step.setCwd(b.path("."));

    const patched_bu_root: std.Build.LazyPath = .{ .cwd_relative = bu_patch_dir };

    // Ensure patching happens before compilation
    b.getInstallStep().dependOn(&patch_step.step);
    b.getInstallStep().dependOn(&bu_patch_step.step);

    gcc_cross.buildToolchain(b, binutils_src, gcc_src, target, optimize, .{
        .target_triple = "rx-elf",
        .target_cpu = "rx",
        .target_canonical = "rx-unknown-elf",
        .target_os = "elf",
        .target_vendor = "unknown",

        .binutils_version = .{ .major = 2, .minor = 44, .patch = 0 },
        .gcc_version = "14.2.0",
        .gcc_datestamp = "20240801",

        // BFD
        .bfd_default_vector = "rx_elf32_le_vec",
        .bfd_select_vectors = &.{ "rx_elf32_le_vec", "rx_elf32_be_vec", "rx_elf32_be_ns_vec", "elf32_le_vec", "elf32_be_vec" },
        .bfd_select_vecs_str = "&rx_elf32_le_vec,&rx_elf32_be_vec,&rx_elf32_be_ns_vec,&elf32_le_vec,&elf32_be_vec",
        .bfd_select_archs_str = "&bfd_rx_arch",
        .bfd_elf_target_srcs = &.{"elf32-rx.c"},
        .bfd_cpu_arch_src = "cpu-rx.c",

        // Opcodes
        .opcodes_target_srcs = &.{ "rx-dis.c", "rx-decode.c" },
        .opcodes_arch_flag = "-DARCH_rx",

        // GAS
        .gas_target_srcs = &.{ "tc-rx.c", "obj-elf.c", "atof-ieee.c", "rx-parse.c" },
        .gas_default_arch = "rx",

        // LD
        .ld_default_emulation = "elf32rx",
        .ld_emulation_file = b.path("vendor/ld/eelf32rx.c"),

        // Use patched source roots for both GCC and binutils
        .gcc_source_root_override = patched_gcc_root,
        .binutils_source_root_override = patched_bu_root,
        .generated_dir = b.path("generated/rx"),
        .config_dir = b.path("config/rx"),
        .libcpp_config_dir = b.path("config/libcpp"),
        .libdecnumber_config_dir = b.path("config/libdecnumber"),
        .backtrace_stub = b.path("config/backtrace-stub.cc"),
        .libcody_config = b.path("config/libcody-config.h"),
        .gcc_target_srcs = &.{
            "config/rx/rx.cc",
            "config/rx/rx-pragma.cc",
            "config/default-c.cc",
        },
        .gcc_common_out_file = "common/config/rx/rx-common.cc",

        // Include paths
        .include_dir = b.path("include"),
        .vendor_ld_dir = b.path("vendor/ld"),

        // Tool
        .find_replace_zig = cross_dep.path("find_replace.zig"),
    });

    // Ensure patching happens before any compilation
    b.getInstallStep().dependOn(&patch_step.step);
    b.getInstallStep().dependOn(&bu_patch_step.step);

    // Generate specs file with Renesas ASM_SPEC additions (-misa, -mdfpu pass-through).
    // The driver uses upstream rx.h specs which lack DPFPU flags.
    const specs_dir = b.fmt("lib/gcc/rx-unknown-elf/14.2.0", .{});
    const gen_specs = b.addSystemCommand(&.{
        "sh", "-c", b.fmt(
            \\set -e
            \\SPECS_DIR="{0s}/{1s}"
            \\mkdir -p "$SPECS_DIR"
            \\GCC="{0s}/bin/rx-elf-gcc"
            \\"$GCC" -dumpspecs > "$SPECS_DIR/specs" 2>/dev/null
            \\sed -i '/^\*asm:/{{n;s/$/ %{{misa=*}} %{{mdfpu:-dfpu}}/}}' "$SPECS_DIR/specs"
        , .{ b.install_path, specs_dir }),
    });
    gen_specs.step.dependOn(b.getInstallStep());
    // Make specs generation a named step users can run
    const specs_step = b.step("specs", "Generate specs file with Renesas DPFPU support");
    specs_step.dependOn(&gen_specs.step);
}
