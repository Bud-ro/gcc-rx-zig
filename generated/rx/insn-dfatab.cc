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
internal_dfa_insn_code (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  int cached_timings ATTRIBUTE_UNUSED;

  switch (recog_memoized (insn))
    {
    case 181:  /* movdf */
    case 180:  /* movdi */
    case 152:  /* xchg_memhi */
    case 151:  /* xchg_memqi */
    case 150:  /* sync_lock_test_and_setsi */
      return 2;

    case 135:  /* mulsf3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 3;
        }
      else
        {
	  return 7;
        }

    case 134:  /* divsf3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 13 /* 0xd */;
        }

    case 136:  /* subsf3 */
    case 133:  /* addsf3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 5;
        }
      else
        {
	  return 9;
        }

    case 85:  /* *sbb_flags */
    case 84:  /* sbb_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 3;
        }

    case 83:  /* *subsi3_flags */
    case 82:  /* subsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0xfULL))
        {
	  return 0;
        }
      else
        {
	  return 3;
        }

    case 63:  /* mulsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 6)
        {
	  return 0;
        }
      else
        {
	  return 3;
        }

    case 169:  /* lrintsf2 */
    case 138:  /* floatsisf2 */
    case 137:  /* fix_truncsfsi2 */
    case 54:  /* umulsidi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 5;
        }

    case 53:  /* mulsidi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x1fULL))
        {
	  return 2;
        }
      else
        {
	  return 5;
        }

    case 167:  /* rmpa */
    case 52:  /* udivsi3 */
      return 10 /* 0xa */;

    case 157:  /* rx_cmpstrn */
    case 156:  /* rx_setmem */
    case 155:  /* rx_cpymem */
    case 154:  /* rx_strend */
    case 153:  /* rx_movstr */
    case 51:  /* divsi3 */
      return 11 /* 0xb */;

    case 69:  /* *iorsi3_flags */
    case 68:  /* iorsi3 */
    case 48:  /* *andsi3_flags */
    case 47:  /* andsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0xffULL))
        {
	  return 0;
        }
      else
        {
	  return 3;
        }

    case 88:  /* *xorsi3_flags */
    case 87:  /* xorsi3 */
    case 62:  /* umaxqi3_ur */
    case 61:  /* umaxhi3_ur */
    case 60:  /* uminqi3_ur */
    case 59:  /* uminhi3_ur */
    case 58:  /* umaxqi3_u */
    case 57:  /* umaxhi3_u */
    case 56:  /* sminsi3 */
    case 55:  /* smaxsi3 */
    case 45:  /* *adc_flags */
    case 44:  /* adc_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x1fULL))
        {
	  return 0;
        }
      else
        {
	  return 3;
        }

    case 43:  /* *addsi3_flags */
    case 42:  /* addsi3_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x1fffULL))
        {
	  return 0;
        }
      else
        {
	  return 3;
        }

    case 33:  /* stack_popm */
      return 6;

    case 32:  /* stack_pop */
      return 1;

    case 31:  /* stack_pushm */
      return 5;

    case 29:  /* zero_extendqisi2 */
    case 28:  /* zero_extendhisi2 */
    case 27:  /* extendqisi2 */
    case 26:  /* extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 25:  /* *movqi_internal */
    case 24:  /* *movhi_internal */
    case 23:  /* *movsi_internal */
    case 22:  /* *movsf_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative != 5)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 175:  /* brk */
    case 16:  /* exception_return */
      return 9;

    case 14:  /* pop_and_return */
      return 8;

    case 13:  /* deallocate_and_return */
    case 12:  /* simple_return */
      return 7;

    case 144:  /* bitclr_in_memory */
    case 142:  /* bitinvert_in_memory */
    case 140:  /* bitset_in_memory */
    case 132:  /* comparesi3_sign_extendqi */
    case 131:  /* comparesi3_zero_extendqi */
    case 130:  /* comparesi3_sign_extendhi */
    case 129:  /* comparesi3_zero_extendhi */
    case 128:  /* multsi3_sign_extendqi */
    case 127:  /* sminsi3_sign_extendqi */
    case 126:  /* smaxsi3_sign_extendqi */
    case 125:  /* multsi3_zero_extendqi */
    case 124:  /* sminsi3_zero_extendqi */
    case 123:  /* smaxsi3_zero_extendqi */
    case 122:  /* multsi3_sign_extendhi */
    case 121:  /* sminsi3_sign_extendhi */
    case 120:  /* smaxsi3_sign_extendhi */
    case 119:  /* multsi3_zero_extendhi */
    case 118:  /* sminsi3_zero_extendhi */
    case 117:  /* smaxsi3_zero_extendhi */
    case 116:  /* minussi3_sign_extendqi */
    case 115:  /* udivsi3_sign_extendqi */
    case 114:  /* divsi3_sign_extendqi */
    case 113:  /* minussi3_zero_extendqi */
    case 112:  /* udivsi3_zero_extendqi */
    case 111:  /* divsi3_zero_extendqi */
    case 110:  /* minussi3_sign_extendhi */
    case 109:  /* udivsi3_sign_extendhi */
    case 108:  /* divsi3_sign_extendhi */
    case 107:  /* minussi3_zero_extendhi */
    case 106:  /* udivsi3_zero_extendhi */
    case 105:  /* divsi3_zero_extendhi */
    case 104:  /* xorsi3_sign_extendqi */
    case 103:  /* iorsi3_sign_extendqi */
    case 102:  /* andsi3_sign_extendqi */
    case 101:  /* plussi3_sign_extendqi */
    case 100:  /* xorsi3_zero_extendqi */
    case 99:  /* iorsi3_zero_extendqi */
    case 98:  /* andsi3_zero_extendqi */
    case 97:  /* plussi3_zero_extendqi */
    case 96:  /* xorsi3_sign_extendhi */
    case 95:  /* iorsi3_sign_extendhi */
    case 94:  /* andsi3_sign_extendhi */
    case 93:  /* plussi3_sign_extendhi */
    case 92:  /* xorsi3_zero_extendhi */
    case 91:  /* iorsi3_zero_extendhi */
    case 90:  /* andsi3_zero_extendhi */
    case 89:  /* plussi3_zero_extendhi */
    case 21:  /* sibcall_value_internal */
    case 20:  /* sibcall_internal */
    case 19:  /* call_value_internal */
    case 18:  /* call_internal */
    case 15:  /* fast_interrupt_return */
    case 11:  /* tablejump */
    case 10:  /* indirect_jump */
    case 9:  /* jump */
    case 8:  /* *conditional_branch */
      return 3;

    case 7:  /* *cmpsf */
    case 5:  /* *tstsi */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 0;
        }
      else
        {
	  return 3;
        }

    case 2:  /* *cmpsi */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3fULL))
        {
	  return 0;
        }
      else
        {
	  return 3;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
      if ((cached_timings = get_attr_timings (insn)) == 11 /* 0xb */)
        {
	  return 0;
        }
      else if (cached_timings == 12 /* 0xc */)
        {
	  return 1;
        }
      else if (cached_timings == 22 /* 0x16 */)
        {
	  return 2;
        }
      else if (cached_timings == 33 /* 0x21 */)
        {
	  return 3;
        }
      else if (cached_timings == 34 /* 0x22 */)
        {
	  return 4;
        }
      else if (cached_timings == 44 /* 0x2c */)
        {
	  return 5;
        }
      else if (cached_timings == 45 /* 0x2d */)
        {
	  return 6;
        }
      else if (cached_timings == 55 /* 0x37 */)
        {
	  return 7;
        }
      else if (cached_timings == 56 /* 0x38 */)
        {
	  return 8;
        }
      else if (cached_timings == 66 /* 0x42 */)
        {
	  return 9;
        }
      else if (cached_timings == 1010 /* 0x3f2 */)
        {
	  return 10 /* 0xa */;
        }
      else if (cached_timings == 1111 /* 0x457 */)
        {
	  return 11 /* 0xb */;
        }
      else if (cached_timings == 1616 /* 0x650 */)
        {
	  return 12 /* 0xc */;
        }
      else if (cached_timings == 1818 /* 0x71a */)
        {
	  return 13 /* 0xd */;
        }
      else
        {
	  return 15 /* 0xf */;
        }

    default:
      return 0;

    }
}

