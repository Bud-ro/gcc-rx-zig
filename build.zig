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

    patchSourceTree(b, patch_dir, gcc_src_path, patches_path, null);
    patchSourceTree(b, bu_patch_dir, bu_src_path, patches_path,
        std.fmt.allocPrint(b.allocator,
            "bison -o '{s}/gas/config/rx-parse.c' -d '{s}/gas/config/rx-parse.y'",
            .{ bu_patch_dir, bu_patch_dir },
        ) catch @panic("OOM"));

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
        .gcc_target_opt_files = &.{ "config/rx/rx.opt", "config/rx/elf.opt" },
        .gtyp_input_list = b.path("config/rx/gtyp-input.list.in"),
        .gcc_generated_extra_headers = &.{"config/rx/rx-opts.h"},
        // genmultilib args from config/rx/t-rx (MULTILIB_OPTIONS, _DIRNAMES,
        // _MATCHES, _EXCEPTIONS, 3 empty, _REQUIRED, 2 empty, "yes").
        .multilib_genargs = &.{
            "m64bit-doubles  nofpu        mbig-endian-data  mjsr mdfpu mno-allow-string-insns mcpu=rx64m misa=v3",
            "64-bit-double  no-fpu-libs   big-endian-data  jsr dfpu no-strings rxv2 rxv3",
            "nofpu=mnofpu  nofpu=mcpu?rx200  nofpu=mcpu?rx100",
            "*mcpu=*/*misa=v3*",
            "",
            "",
            "",
            "m64bit-doubles nofpu mbig-endian-data mjsr mno-allow-string-insns m64bit-doubles/nofpu m64bit-doubles/mbig-endian-data m64bit-doubles/mjsr m64bit-doubles/mno-allow-string-insns nofpu/mbig-endian-data nofpu/mjsr nofpu/mno-allow-string-insns mbig-endian-data/mjsr mbig-endian-data/mno-allow-string-insns mjsr/mno-allow-string-insns m64bit-doubles/nofpu/mbig-endian-data m64bit-doubles/nofpu/mjsr m64bit-doubles/nofpu/mno-allow-string-insns m64bit-doubles/mbig-endian-data/mjsr m64bit-doubles/mbig-endian-data/mno-allow-string-insns m64bit-doubles/mjsr/mno-allow-string-insns nofpu/mbig-endian-data/mjsr nofpu/mbig-endian-data/mno-allow-string-insns nofpu/mjsr/mno-allow-string-insns mbig-endian-data/mjsr/mno-allow-string-insns m64bit-doubles/nofpu/mbig-endian-data/mjsr m64bit-doubles/nofpu/mbig-endian-data/mno-allow-string-insns m64bit-doubles/nofpu/mjsr/mno-allow-string-insns m64bit-doubles/mbig-endian-data/mjsr/mno-allow-string-insns nofpu/mbig-endian-data/mjsr/mno-allow-string-insns m64bit-doubles/nofpu/mbig-endian-data/mjsr/mno-allow-string-insns mcpu=rx64m m64bit-doubles/mcpu=rx64m nofpu/mcpu=rx64m mbig-endian-data/mcpu=rx64m mjsr/mcpu=rx64m mno-allow-string-insns/mcpu=rx64m m64bit-doubles/nofpu/mcpu=rx64m m64bit-doubles/mbig-endian-data/mcpu=rx64m m64bit-doubles/mjsr/mcpu=rx64m m64bit-doubles/mno-allow-string-insns/mcpu=rx64m nofpu/mbig-endian-data/mcpu=rx64m nofpu/mjsr/mcpu=rx64m nofpu/mno-allow-string-insns/mcpu=rx64m mbig-endian-data/mjsr/mcpu=rx64m mbig-endian-data/mno-allow-string-insns/mcpu=rx64m mjsr/mno-allow-string-insns/mcpu=rx64m m64bit-doubles/nofpu/mbig-endian-data/mcpu=rx64m m64bit-doubles/nofpu/mjsr/mcpu=rx64m m64bit-doubles/nofpu/mno-allow-string-insns/mcpu=rx64m m64bit-doubles/mbig-endian-data/mjsr/mcpu=rx64m m64bit-doubles/mbig-endian-data/mno-allow-string-insns/mcpu=rx64m m64bit-doubles/mjsr/mno-allow-string-insns/mcpu=rx64m nofpu/mbig-endian-data/mjsr/mcpu=rx64m nofpu/mbig-endian-data/mno-allow-string-insns/mcpu=rx64m nofpu/mjsr/mno-allow-string-insns/mcpu=rx64m mbig-endian-data/mjsr/mno-allow-string-insns/mcpu=rx64m m64bit-doubles/nofpu/mbig-endian-data/mjsr/mcpu=rx64m m64bit-doubles/nofpu/mbig-endian-data/mno-allow-string-insns/mcpu=rx64m m64bit-doubles/nofpu/mjsr/mno-allow-string-insns/mcpu=rx64m m64bit-doubles/mbig-endian-data/mjsr/mno-allow-string-insns/mcpu=rx64m nofpu/mbig-endian-data/mjsr/mno-allow-string-insns/mcpu=rx64m m64bit-doubles/nofpu/mbig-endian-data/mjsr/mno-allow-string-insns/mcpu=rx64m misa=v3 m64bit-doubles/misa=v3 nofpu/misa=v3 mbig-endian-data/misa=v3 mjsr/misa=v3 mno-allow-string-insns/misa=v3 m64bit-doubles/nofpu/misa=v3 m64bit-doubles/mbig-endian-data/misa=v3 m64bit-doubles/mjsr/misa=v3 m64bit-doubles/mdfpu/misa=v3 m64bit-doubles/mno-allow-string-insns/misa=v3 nofpu/mbig-endian-data/misa=v3 nofpu/mjsr/misa=v3 nofpu/mno-allow-string-insns/misa=v3 mbig-endian-data/mjsr/misa=v3 mbig-endian-data/mno-allow-string-insns/misa=v3 mjsr/mno-allow-string-insns/misa=v3 m64bit-doubles/nofpu/mbig-endian-data/misa=v3 m64bit-doubles/nofpu/mjsr/misa=v3 m64bit-doubles/nofpu/mno-allow-string-insns/misa=v3 m64bit-doubles/mbig-endian-data/mjsr/misa=v3 m64bit-doubles/mbig-endian-data/mdfpu/misa=v3 m64bit-doubles/mbig-endian-data/mno-allow-string-insns/misa=v3 m64bit-doubles/mjsr/mdfpu/misa=v3 m64bit-doubles/mjsr/mno-allow-string-insns/misa=v3 m64bit-doubles/mdfpu/mno-allow-string-insns/misa=v3 nofpu/mbig-endian-data/mjsr/misa=v3 nofpu/mbig-endian-data/mno-allow-string-insns/misa=v3 nofpu/mjsr/mno-allow-string-insns/misa=v3 mbig-endian-data/mjsr/mno-allow-string-insns/misa=v3 m64bit-doubles/nofpu/mbig-endian-data/mjsr/misa=v3 m64bit-doubles/nofpu/mbig-endian-data/mno-allow-string-insns/misa=v3 m64bit-doubles/nofpu/mjsr/mno-allow-string-insns/misa=v3 m64bit-doubles/mbig-endian-data/mjsr/mdfpu/misa=v3 m64bit-doubles/mbig-endian-data/mjsr/mno-allow-string-insns/misa=v3 m64bit-doubles/mbig-endian-data/mdfpu/mno-allow-string-insns/misa=v3 m64bit-doubles/mjsr/mdfpu/mno-allow-string-insns/misa=v3 nofpu/mbig-endian-data/mjsr/mno-allow-string-insns/misa=v3 m64bit-doubles/nofpu/mbig-endian-data/mjsr/mno-allow-string-insns/misa=v3 m64bit-doubles/mbig-endian-data/mjsr/mdfpu/mno-allow-string-insns/misa=v3",
            "",
            "",
            "yes",
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

    // Codegen regression suite: compile tests/cases/*.c with the freshly built
    // rx-elf-gcc and check the embedded scan-assembler assertions and snapshots.
    const gcc_path = b.fmt("{s}/bin/rx-elf-gcc", .{b.install_path});

    const run_tests = b.addSystemCommand(&.{ "sh", b.pathFromRoot("tests/run.sh"), gcc_path });
    run_tests.step.dependOn(b.getInstallStep());
    const test_step = b.step("test", "Run the RX codegen regression suite");
    test_step.dependOn(&run_tests.step);

    const update_tests = b.addSystemCommand(&.{ "sh", b.pathFromRoot("tests/run.sh"), gcc_path, "--update" });
    update_tests.step.dependOn(b.getInstallStep());
    const update_step = b.step("test-update", "Regenerate RX codegen snapshots");
    update_step.dependOn(&update_tests.step);
}

/// Copy upstream source tree and overlay patches. Skips if .patched sentinel exists.
fn patchSourceTree(
    b: *std.Build,
    dest: []const u8,
    upstream: []const u8,
    patches: []const u8,
    extra_cmd: ?[]const u8,
) void {
    const script = std.fmt.allocPrint(b.allocator,
        \\set -e
        \\test -f '{0s}/.patched' && exit 0
        \\rm -rf '{0s}'
        \\cp -a '{1s}' '{0s}'
        \\for d in bfd gas/config opcodes include gcc; do
        \\  if [ -d '{2s}/'$d ]; then
        \\    cp -a '{2s}/'$d/* '{0s}/'$d/ 2>/dev/null || true
        \\  fi
        \\done
        \\{3s}
        \\touch '{0s}/.patched'
    , .{ dest, upstream, patches, extra_cmd orelse "" }) catch @panic("OOM");

    _ = b.run(&.{ "sh", "-c", script });
}
