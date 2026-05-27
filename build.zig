//! Build rx-elf cross-compiler toolchain (binutils 2.42 + GCC 14.2.0).
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

    gcc_cross.buildToolchain(b, binutils_src, gcc_src, target, optimize, .{
        .target_triple = "rx-elf",
        .target_cpu = "rx",
        .target_canonical = "rx-unknown-elf",
        .target_os = "elf",
        .target_vendor = "unknown",

        .binutils_version = .{ .major = 2, .minor = 42, .patch = 0 },
        .gcc_version = "14.2.0",
        .gcc_datestamp = "20240801",

        // BFD configuration
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

        // GCC
        .generated_dir = b.path("generated/rx"),
        .config_dir = b.path("config/rx"),
        .libcpp_config_dir = b.path("config/libcpp"),
        .libdecnumber_config_dir = b.path("config/libdecnumber"),
        .backtrace_stub = b.path("config/backtrace-stub.cc"),
        .libcody_config = b.path("config/libcody-config.h"),
        .gcc_target_srcs = &.{
            "config/rx/rx.cc",
            "config/default-c.cc",
        },

        // Include paths
        .include_dir = b.path("include"),
        .vendor_ld_dir = b.path("vendor/ld"),

        // Tool from gcc-cross-zig
        .find_replace_zig = cross_dep.path("find_replace.zig"),
    });
}
