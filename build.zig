//! Build rx-elf cross-compiler toolchain (binutils 2.44 + GCC 14.2.0).
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

    // Patch source trees synchronously during build() so that cwd_relative
    // LazyPaths are valid when the build graph references config.in templates
    // and source files. Using addSystemCommand would be too late -- Zig resolves
    // autoconf_undef template paths during graph construction.
    const gcc_src_path = gcc_src.path(".").getPath(b);
    const bu_src_path = binutils_src.path(".").getPath(b);
    const patches_path = b.path("patched").getPath(b);

    const patch_dir = b.cache_root.join(b.allocator, &.{"patched-gcc-rx"}) catch @panic("OOM");
    const bu_patch_dir = b.cache_root.join(b.allocator, &.{"patched-binutils-rx"}) catch @panic("OOM");

    patchSourceTree(b.allocator, patch_dir, gcc_src_path, patches_path, &.{
        "gcc",
    }, null);
    patchSourceTree(b.allocator, bu_patch_dir, bu_src_path, patches_path, &.{
        "bfd",
        "gas/config",
        "opcodes",
        "include",
    }, "bison -o \"{0s}/gas/config/rx-parse.c\" -d \"{0s}/gas/config/rx-parse.y\"");

    const patched_gcc_root: std.Build.LazyPath = .{ .cwd_relative = patch_dir };
    const patched_bu_root: std.Build.LazyPath = .{ .cwd_relative = bu_patch_dir };

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
    const specs_step = b.step("specs", "Generate specs file with Renesas DPFPU support");
    specs_step.dependOn(&gen_specs.step);
}

/// Copy upstream source tree and overlay patches. Skips if .patched sentinel exists.
fn patchSourceTree(
    allocator: std.mem.Allocator,
    dest: []const u8,
    upstream: []const u8,
    patches: []const u8,
    subdirs: []const []const u8,
    post_cmd: ?[]const u8,
) void {
    const sentinel = std.fmt.allocPrint(allocator, "{s}/.patched", .{dest}) catch @panic("OOM");
    if (std.fs.cwd().access(sentinel, .{})) |_| return else |_| {}

    var script = std.ArrayList(u8).init(allocator);
    const w = script.writer();
    w.print("set -e; rm -rf '{s}'; cp -a '{s}' '{s}'", .{ dest, upstream, dest }) catch @panic("OOM");
    for (subdirs) |sub| {
        w.print("; cp -a '{s}/{s}/'* '{s}/{s}/' 2>/dev/null || true", .{ patches, sub, dest, sub }) catch @panic("OOM");
    }
    if (post_cmd) |cmd| {
        w.print("; ", .{}) catch @panic("OOM");
        w.print(cmd, .{dest}) catch @panic("OOM");
    }
    w.print("; touch '{s}/.patched'", .{dest}) catch @panic("OOM");

    var child = std.process.Child.init(.{
        .allocator = allocator,
        .argv = &.{ "sh", "-c", script.items },
    });
    const term = child.spawnAndWait() catch @panic("failed to patch source tree");
    if (term != .{ .exited = 0 }) @panic("patch script failed");
}
