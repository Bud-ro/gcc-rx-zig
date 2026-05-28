/* Common hooks for Renesas RX.
   Copyright (C) 2008-2024 Free Software Foundation, Inc.

   This file is part of GCC.

   GCC is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   GCC is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with GCC; see the file COPYING3.  If not see
   <http://www.gnu.org/licenses/>.  */

#include <sstream>
#define INCLUDE_STRING
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "diagnostic-core.h"
#include "multilib.h" /* before tm.h */
#include "tm.h"
#include "common/common-target.h"
#include "common/common-target-def.h"
#include "opts.h"
#include "flags.h"

/* Extra processing for target specific command line options.  */

static bool
rx_handle_option (struct gcc_options *opts,
		  struct gcc_options *opts_set ATTRIBUTE_UNUSED,
		  const struct cl_decoded_option *decoded,
		  location_t loc)
{
  size_t code = decoded->opt_index;
  int value = decoded->value;

  switch (code)
    {
    case OPT_mint_register_:
      /* Make sure that the -mint-register option is in range.  Other
	 handling in rx_option_override.  */
      return value >= 0 && value <= 3;
      break;

    case OPT_mmax_constant_size_:
      /* Make sure that the -mmax-constant_size option is in range.  */
      return value >= 0 && value <= 4;

    case OPT_mcpu_:
      if ((enum rx_cpu_types) value == RX200 || 
          (enum rx_cpu_types) value == RX100)
	opts->x_target_flags |= MASK_NO_USE_FPU;
      break;
      
    case OPT_fpu:
      if (opts->x_rx_cpu_type == RX200)
	error_at (loc, "the RX200 cpu does not have FPU hardware");
      else if (opts->x_rx_cpu_type == RX100)
	error_at (loc, "the RX100 cpu does not have FPU hardware");
      break;

    default:
      break;
    }

  return true;
}

/* Find last switch with the prefix, options are take last one in general,
   return NULL if not found, and return the option value if found, it could
   return empty string if the option has no value.  */

static const char *
find_last_appear_switch (
  const struct switchstr *switches,
  int n_switches,
  const char *prefix)
{
  int i;
  size_t len = strlen (prefix);

  for (i = 0; i < n_switches; ++i)
    {
      const struct switchstr *this_switch = &switches[n_switches - i - 1];

      if (this_switch->live_cond & SWITCH_FALSE)
	continue;

      if (strncmp (this_switch->part1, prefix, len) == 0)
	return this_switch->part1 + len;
    }

  return NULL;
}

/* Implement TARGET_COMPUTE_MULTILIB.  */
static const char *
rx_compute_multilib(
    const struct switchstr *switches,
    int n_switches,
    const char *multilib_dir,
    const char *multilib_defaults ATTRIBUTE_UNUSED,
    const char *multilib_select,
    const char *multilib_matches ATTRIBUTE_UNUSED,
    const char *multilib_exclusions ATTRIBUTE_UNUSED,
    const char *multilib_reuse ATTRIBUTE_UNUSED)
{
  /* Already found suitable, multi-lib, just use that.  */
  if (multilib_dir != NULL || n_switches == 0)
    return multilib_dir;

  std::istringstream iss;
  iss.str(multilib_options);

  std::string multi_pattern;
  bool has_dfpu = find_last_appear_switch(switches, n_switches, "mdfpu");
  for (std::string token; std::getline(iss, token, ' ');)
  {
    // Construct multilib selection pattern.
    // If mdfpu was specified don't negate m64bit-doubles.
    if (find_last_appear_switch(switches, n_switches, token.c_str()) == NULL &&
        (!has_dfpu || token != "m64bit-doubles"))
      multi_pattern.append("!");

    multi_pattern.append(token);
    multi_pattern.append(" ");
  }

  // Find and return the multilib dir based on the adjusted selection pattern.
  for (int i = 0; i < sizeof(multilib_raw) / sizeof(multilib_raw[0]); i++)
  {
    if (!multilib_raw[i])
      break;
    const char *start = std::strchr(multilib_raw[i], ' ') + 1;
    if (std::strncmp(multi_pattern.c_str(), start, strlen(multi_pattern.c_str()) - 1) == 0)
      return xstrdup(std::string(multilib_raw[i], start - 1).c_str());
  }
  return multilib_dir;
}

#undef  TARGET_HANDLE_OPTION
#define TARGET_HANDLE_OPTION			rx_handle_option

#undef  TARGET_EXCEPT_UNWIND_INFO
#define TARGET_EXCEPT_UNWIND_INFO		sjlj_except_unwind_info

#undef TARGET_COMPUTE_MULTILIB
#define TARGET_COMPUTE_MULTILIB rx_compute_multilib

struct gcc_targetm_common targetm_common = TARGETM_COMMON_INITIALIZER;
