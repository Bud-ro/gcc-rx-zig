static const char *const multilib_raw[] = {
". !m64bit-doubles !mnofpu !mbig-endian-data !mpid !mno-allow-string-insns;",
"64-bit-double m64bit-doubles !mnofpu !mbig-endian-data !mpid !mno-allow-string-insns;",
"no-fpu-libs !m64bit-doubles mnofpu !mbig-endian-data !mpid !mno-allow-string-insns;",
"big-endian-data !m64bit-doubles !mnofpu mbig-endian-data !mpid !mno-allow-string-insns;",
"pid !m64bit-doubles !mnofpu !mbig-endian-data mpid !mno-allow-string-insns;",
"no-strings !m64bit-doubles !mnofpu !mbig-endian-data !mpid mno-allow-string-insns;",
"pid/no-strings !m64bit-doubles !mnofpu !mbig-endian-data mpid mno-allow-string-insns;",
"big-endian-data/pid !m64bit-doubles !mnofpu mbig-endian-data mpid !mno-allow-string-insns;",
"big-endian-data/no-strings !m64bit-doubles !mnofpu mbig-endian-data !mpid mno-allow-string-insns;",
"big-endian-data/pid/no-strings !m64bit-doubles !mnofpu mbig-endian-data mpid mno-allow-string-insns;",
"no-fpu-libs/big-endian-data !m64bit-doubles mnofpu mbig-endian-data !mpid !mno-allow-string-insns;",
"no-fpu-libs/pid !m64bit-doubles mnofpu !mbig-endian-data mpid !mno-allow-string-insns;",
"no-fpu-libs/no-strings !m64bit-doubles mnofpu !mbig-endian-data !mpid mno-allow-string-insns;",
"no-fpu-libs/pid/no-strings !m64bit-doubles mnofpu !mbig-endian-data mpid mno-allow-string-insns;",
"no-fpu-libs/big-endian-data/pid !m64bit-doubles mnofpu mbig-endian-data mpid !mno-allow-string-insns;",
"no-fpu-libs/big-endian-data/no-strings !m64bit-doubles mnofpu mbig-endian-data !mpid mno-allow-string-insns;",
"no-fpu-libs/big-endian-data/pid/no-strings !m64bit-doubles mnofpu mbig-endian-data mpid mno-allow-string-insns;",
"64-bit-double/no-fpu-libs m64bit-doubles mnofpu !mbig-endian-data !mpid !mno-allow-string-insns;",
"64-bit-double/big-endian-data m64bit-doubles !mnofpu mbig-endian-data !mpid !mno-allow-string-insns;",
"64-bit-double/pid m64bit-doubles !mnofpu !mbig-endian-data mpid !mno-allow-string-insns;",
"64-bit-double/no-strings m64bit-doubles !mnofpu !mbig-endian-data !mpid mno-allow-string-insns;",
"64-bit-double/pid/no-strings m64bit-doubles !mnofpu !mbig-endian-data mpid mno-allow-string-insns;",
"64-bit-double/big-endian-data/pid m64bit-doubles !mnofpu mbig-endian-data mpid !mno-allow-string-insns;",
"64-bit-double/big-endian-data/no-strings m64bit-doubles !mnofpu mbig-endian-data !mpid mno-allow-string-insns;",
"64-bit-double/big-endian-data/pid/no-strings m64bit-doubles !mnofpu mbig-endian-data mpid mno-allow-string-insns;",
"64-bit-double/no-fpu-libs/big-endian-data m64bit-doubles mnofpu mbig-endian-data !mpid !mno-allow-string-insns;",
"64-bit-double/no-fpu-libs/pid m64bit-doubles mnofpu !mbig-endian-data mpid !mno-allow-string-insns;",
"64-bit-double/no-fpu-libs/no-strings m64bit-doubles mnofpu !mbig-endian-data !mpid mno-allow-string-insns;",
"64-bit-double/no-fpu-libs/pid/no-strings m64bit-doubles mnofpu !mbig-endian-data mpid mno-allow-string-insns;",
"64-bit-double/no-fpu-libs/big-endian-data/pid m64bit-doubles mnofpu mbig-endian-data mpid !mno-allow-string-insns;",
"64-bit-double/no-fpu-libs/big-endian-data/no-strings m64bit-doubles mnofpu mbig-endian-data !mpid mno-allow-string-insns;",
"64-bit-double/no-fpu-libs/big-endian-data/pid/no-strings m64bit-doubles mnofpu mbig-endian-data mpid mno-allow-string-insns;",
NULL
};

static const char *const multilib_reuse_raw[] = {
NULL
};

static const char *const multilib_matches_raw[] = {
"mnofpu nofpu;",
"mcpu=rx200 nofpu;",
"mcpu=rx100 nofpu;",
"m64bit-doubles m64bit-doubles;",
"mnofpu mnofpu;",
"mbig-endian-data mbig-endian-data;",
"mpid mpid;",
"mno-allow-string-insns mno-allow-string-insns;",
NULL
};

static const char *multilib_extra = "";

static const char *const multilib_exclusions_raw[] = {
NULL
};

static const char *multilib_options = "m64bit-doubles mnofpu mbig-endian-data mpid mno-allow-string-insns";
