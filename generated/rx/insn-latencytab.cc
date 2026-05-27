/* Generated automatically by the program `genattrtab'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "options.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-attr.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "toplev.h"
#include "flags.h"
#include "emit-rtl.h"

#define operands recog_data.operand

int
insn_default_latency (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  int cached_timings ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 29:  /* zero_extendqisi2 */
    case 28:  /* zero_extendhisi2 */
    case 27:  /* extendqisi2 */
    case 26:  /* extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 25:  /* *movqi_internal */
    case 24:  /* *movhi_internal */
    case 23:  /* *movsi_internal */
    case 22:  /* *movsf_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 5)
        {
	  return 1;
        }
      else
        {
	  return 2;
        }

    case 33:  /* stack_popm */
    case 32:  /* stack_pop */
    case 14:  /* pop_and_return */
      return 2;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      if ((cached_timings = get_attr_timings (insn)) == 11 /* 0xb */)
        {
	  return 1;
        }
      else if (cached_timings == 12 /* 0xc */)
        {
	  return 2;
        }
      else if (cached_timings == 22 /* 0x16 */)
        {
	  return 1;
        }
      else if (cached_timings == 33 /* 0x21 */)
        {
	  return 1;
        }
      else if (cached_timings == 34 /* 0x22 */)
        {
	  return 2;
        }
      else if (cached_timings == 44 /* 0x2c */)
        {
	  return 1;
        }
      else if (cached_timings == 45 /* 0x2d */)
        {
	  return 2;
        }
      else if (cached_timings == 55 /* 0x37 */)
        {
	  return 1;
        }
      else if (cached_timings == 56 /* 0x38 */)
        {
	  return 2;
        }
      else if (cached_timings == 66 /* 0x42 */)
        {
	  return 1;
        }
      else if (cached_timings == 1010 /* 0x3f2 */)
        {
	  return 1;
        }
      else if (cached_timings == 1111 /* 0x457 */)
        {
	  return 1;
        }
      else if (cached_timings == 1616 /* 0x650 */)
        {
	  return 1;
        }
      else if (cached_timings == 1818 /* 0x71a */)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    default:
      return 1;

    }
}

