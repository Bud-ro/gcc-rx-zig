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
    case 296:  /* lrintsf2 */
    case 194:  /* floatunssisf2 */
    case 192:  /* fixuns_truncsfsi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 5;
        }

    case 179:  /* divsf3_mem */
      return 13 /* 0xd */;

    case 202:  /* sqrtdf2 */
    case 201:  /* sqrtsf2 */
    case 180:  /* divsf3 */
    case 178:  /* divdf3 */
      return 12 /* 0xc */;

    case 129:  /* *xorsi3_flags */
    case 128:  /* xorsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x1fULL))
        {
	  return 0;
        }
      else
        {
	  return 3;
        }

    case 312:  /* exchangeqi */
    case 311:  /* exchangehi */
    case 310:  /* exchangesi */
    case 309:  /* exchangesf */
    case 308:  /* movdi */
    case 297:  /* lrintdf2 */
    case 230:  /* xchg_memhi */
    case 229:  /* xchg_memqi */
    case 228:  /* sync_lock_test_and_setsi */
    case 200:  /* floatsidf2 */
    case 199:  /* floatsisf2 */
    case 197:  /* extendsfdf2 */
    case 196:  /* truncdfsf2 */
    case 195:  /* floatunssidf2 */
    case 193:  /* fixuns_truncdfsi2 */
    case 191:  /* fix_truncdfsi2 */
    case 190:  /* fix_truncsfsi2 */
    case 82:  /* umulsidi3 */
    case 80:  /* mulsidi3 */
      return 2;

    case 294:  /* rmpa32 */
    case 293:  /* rmpa16 */
    case 292:  /* rmpa8 */
    case 291:  /* rmpa */
    case 78:  /* udivsi3 */
    case 77:  /* udivsi3_mem */
      return 10 /* 0xa */;

    case 235:  /* rx_cmpstrn */
    case 234:  /* rx_setmem */
    case 233:  /* rx_cpymem */
    case 232:  /* rx_strend */
    case 231:  /* rx_movstr */
    case 76:  /* divsi3 */
    case 75:  /* divsi3_mem */
      return 11 /* 0xb */;

    case 42:  /* stack_popm */
      return 6;

    case 41:  /* stack_pop */
      return 1;

    case 198:  /* floatsisf2_mem */
    case 189:  /* fix_truncsfsi2_mem */
    case 188:  /* subsf3v2 */
    case 187:  /* subsf3v1 */
    case 185:  /* subdf3 */
    case 177:  /* adddf3 */
    case 176:  /* addsf3v2 */
    case 175:  /* addsf3v1 */
    case 90:  /* unsign_minqi3_mem */
    case 89:  /* unsign_minhi3_mem */
    case 88:  /* unsign_maxhi3_mem */
    case 87:  /* unsign_maxqi3_mem */
    case 81:  /* umulsidi3_mem */
    case 79:  /* mulsidi3_mem */
    case 39:  /* stack_pushm */
      return 5;

    case 37:  /* zero_extendqisi2 */
    case 36:  /* zero_extendhisi2 */
    case 35:  /* extendqisi2 */
    case 34:  /* extendhisi2 */
    case 33:  /* movdf */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 32:  /* *movqi_internal */
    case 31:  /* *movhi_internal */
    case 30:  /* *movsi_internal */
    case 29:  /* *movsf_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x1fc3fULL))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 303:  /* brk */
    case 242:  /* mvfdr */
    case 186:  /* subsf3_mem */
    case 174:  /* addsf3_mem */
    case 23:  /* exception_return */
      return 9;

    case 21:  /* pop_and_return */
      return 8;

    case 181:  /* mulsf3_mem */
    case 20:  /* deallocate_and_return */
    case 19:  /* simple_return */
      return 7;

    case 221:  /* *bitclr_in_memory_2 */
    case 218:  /* *bitclr_in_memory2 */
    case 217:  /* bitclr_in_memory */
    case 216:  /* bclr_memory */
    case 213:  /* bitinvert_in_memory */
    case 212:  /* bnot_memory */
    case 209:  /* *bitset_in_memory_2 */
    case 208:  /* *bitset_in_memory2 */
    case 207:  /* *bitset_in_memory */
    case 206:  /* bitset_in_memory */
    case 184:  /* muldf3 */
    case 183:  /* mulsf3v2 */
    case 182:  /* mulsf3v1 */
    case 173:  /* comparesi3_sign_extendqi */
    case 172:  /* comparesi3_zero_extendqi */
    case 171:  /* comparesi3_sign_extendhi */
    case 170:  /* comparesi3_zero_extendhi */
    case 169:  /* multsi3_sign_extendqi */
    case 168:  /* sminsi3_sign_extendqi */
    case 167:  /* smaxsi3_sign_extendqi */
    case 166:  /* multsi3_zero_extendqi */
    case 165:  /* sminsi3_zero_extendqi */
    case 164:  /* smaxsi3_zero_extendqi */
    case 163:  /* multsi3_sign_extendhi */
    case 162:  /* sminsi3_sign_extendhi */
    case 161:  /* smaxsi3_sign_extendhi */
    case 160:  /* multsi3_zero_extendhi */
    case 159:  /* sminsi3_zero_extendhi */
    case 158:  /* smaxsi3_zero_extendhi */
    case 157:  /* minussi3_sign_extendqi */
    case 156:  /* udivsi3_sign_extendqi */
    case 155:  /* divsi3_sign_extendqi */
    case 154:  /* minussi3_zero_extendqi */
    case 153:  /* udivsi3_zero_extendqi */
    case 152:  /* divsi3_zero_extendqi */
    case 151:  /* minussi3_sign_extendhi */
    case 150:  /* udivsi3_sign_extendhi */
    case 149:  /* divsi3_sign_extendhi */
    case 148:  /* minussi3_zero_extendhi */
    case 147:  /* udivsi3_zero_extendhi */
    case 146:  /* divsi3_zero_extendhi */
    case 145:  /* xorsi3_sign_extendqi */
    case 144:  /* iorsi3_sign_extendqi */
    case 143:  /* andsi3_sign_extendqi */
    case 142:  /* plussi3_sign_extendqi */
    case 141:  /* xorsi3_zero_extendqi */
    case 140:  /* iorsi3_zero_extendqi */
    case 139:  /* andsi3_zero_extendqi */
    case 138:  /* plussi3_zero_extendqi */
    case 137:  /* xorsi3_sign_extendhi */
    case 136:  /* iorsi3_sign_extendhi */
    case 135:  /* andsi3_sign_extendhi */
    case 134:  /* plussi3_sign_extendhi */
    case 133:  /* xorsi3_zero_extendhi */
    case 132:  /* iorsi3_zero_extendhi */
    case 131:  /* andsi3_zero_extendhi */
    case 130:  /* plussi3_zero_extendhi */
    case 127:  /* xorsi3_mem */
    case 122:  /* *sbb_flags_mem */
    case 120:  /* sbb_internal_mem */
    case 118:  /* *subsi3_flags_mem */
    case 116:  /* subsi3_mem */
    case 101:  /* *iorsi3_flags_mem */
    case 99:  /* iorsi3_mem */
    case 91:  /* mulsi3_mem */
    case 85:  /* sminsi3_mem */
    case 83:  /* smaxsi3_mem */
    case 71:  /* *andsi3_flags_mem */
    case 69:  /* andsi3_mem */
    case 66:  /* *adc_flags_mem */
    case 64:  /* adc_internal_mem */
    case 62:  /* *addsi3_flags_mem */
    case 60:  /* addsi3_mem */
    case 28:  /* sibcall_value_internal */
    case 27:  /* sibcall_internal */
    case 26:  /* call_value_internal */
    case 25:  /* call_internal */
    case 22:  /* fast_interrupt_return */
    case 18:  /* tablejump */
    case 17:  /* indirect_jump */
    case 16:  /* jump */
    case 15:  /* *conditional_branch */
    case 12:  /* *cmpsf_mem */
    case 8:  /* *tstsi_mem */
    case 3:  /* *cmpsi_mem */
      return 3;

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

