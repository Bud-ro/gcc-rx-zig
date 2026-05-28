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
insn_current_length (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return 0;

    }
}

int
insn_variable_length_p (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return 0;

    }
}

int
insn_min_length (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 119:  /* *subsi3_flags */
    case 117:  /* subsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 6;
        }
      else
        {
	  return 3;
        }

    case 102:  /* *iorsi3_flags */
    case 100:  /* iorsi3 */
    case 92:  /* mulsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else if (which_alternative == 4)
        {
	  return 5;
        }
      else if (which_alternative == 5)
        {
	  return 6;
        }
      else if (which_alternative == 6)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 72:  /* *andsi3_flags */
    case 70:  /* andsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else if (which_alternative == 4)
        {
	  return 5;
        }
      else if (which_alternative == 5)
        {
	  return 6;
        }
      else if (which_alternative == 6)
        {
	  return 2;
        }
      else
        {
	  return 5;
        }

    case 63:  /* *addsi3_flags */
    case 61:  /* addsi3_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 3;
        }
      else if (which_alternative == 4)
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 5;
        }
      else if (which_alternative == 6)
        {
	  return 6;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if (((1ULL << which_alternative) & 0x300ULL))
        {
	  return 3;
        }
      else if (which_alternative == 10)
        {
	  return 4;
        }
      else if (which_alternative == 11)
        {
	  return 5;
        }
      else
        {
	  return 6;
        }

    case 55:  /* *stcc_reg */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 3;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 5;
        }
      else if (which_alternative == 4)
        {
	  return 6;
        }
      else
        {
	  return 7;
        }

    case 4:  /* cmpsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else if (which_alternative == 4)
        {
	  return 5;
        }
      else
        {
	  return 6;
        }

    case 312:  /* exchangeqi */
    case 311:  /* exchangehi */
    case 310:  /* exchangesi */
    case 309:  /* exchangesf */
    case 228:  /* sync_lock_test_and_setsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 6;
        }

    case 308:  /* movdi */
      return 16 /* 0x10 */;

    case 307:  /* nop */
    case 303:  /* brk */
    case 242:  /* mvfdr */
    case 19:  /* simple_return */
      return 1;

    case 306:  /* mvfcp */
    case 240:  /* bfmovz */
    case 239:  /* bfmov */
    case 213:  /* bitinvert_in_memory */
    case 189:  /* fix_truncsfsi2_mem */
    case 186:  /* subsf3_mem */
    case 181:  /* mulsf3_mem */
    case 179:  /* divsf3_mem */
    case 174:  /* addsf3_mem */
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
    case 118:  /* *subsi3_flags_mem */
    case 116:  /* subsi3_mem */
    case 101:  /* *iorsi3_flags_mem */
    case 99:  /* iorsi3_mem */
    case 91:  /* mulsi3_mem */
    case 71:  /* *andsi3_flags_mem */
    case 69:  /* andsi3_mem */
    case 62:  /* *addsi3_flags_mem */
    case 60:  /* addsi3_mem */
    case 12:  /* *cmpsf_mem */
    case 3:  /* *cmpsi_mem */
      return 5;

    case 305:  /* wait */
    case 299:  /* setpsw */
    case 298:  /* clrpsw */
    case 294:  /* rmpa32 */
    case 293:  /* rmpa16 */
    case 292:  /* rmpa8 */
    case 291:  /* rmpa */
    case 238:  /* mvfdc */
    case 234:  /* rx_setmem */
    case 233:  /* rx_cpymem */
    case 231:  /* rx_movstr */
    case 115:  /* *sat */
    case 94:  /* negdf2 */
    case 58:  /* absdf2 */
    case 43:  /* stack_dpopm */
    case 42:  /* stack_popm */
    case 41:  /* stack_pop */
    case 40:  /* stack_dpushm */
    case 39:  /* stack_pushm */
    case 38:  /* stack_push */
    case 23:  /* exception_return */
    case 22:  /* fast_interrupt_return */
    case 20:  /* deallocate_and_return */
    case 18:  /* tablejump */
    case 17:  /* indirect_jump */
      return 2;

    case 301:  /* mvtc */
    case 187:  /* subsf3v1 */
    case 182:  /* mulsf3v1 */
    case 180:  /* divsf3 */
    case 175:  /* addsf3v1 */
    case 13:  /* *cmpsf */
    case 9:  /* *tstsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 7;
        }

    case 296:  /* lrintsf2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 5;
        }

    case 235:  /* rx_cmpstrn */
      return 9;

    case 232:  /* rx_strend */
      return 10 /* 0xa */;

    case 230:  /* xchg_memhi */
    case 229:  /* xchg_memqi */
    case 198:  /* floatsisf2_mem */
    case 127:  /* xorsi3_mem */
    case 122:  /* *sbb_flags_mem */
    case 120:  /* sbb_internal_mem */
    case 95:  /* negsf2 */
    case 85:  /* sminsi3_mem */
    case 83:  /* smaxsi3_mem */
    case 81:  /* umulsidi3_mem */
    case 79:  /* mulsidi3_mem */
    case 77:  /* udivsi3_mem */
    case 75:  /* divsi3_mem */
    case 66:  /* *adc_flags_mem */
    case 64:  /* adc_internal_mem */
    case 8:  /* *tstsi_mem */
      return 6;

    case 194:  /* floatunssisf2 */
    case 192:  /* fixuns_truncsfsi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 4;
        }

    case 188:  /* subsf3v2 */
    case 183:  /* mulsf3v2 */
    case 176:  /* addsf3v2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 7;
        }
      else
        {
	  return 3;
        }

    case 129:  /* *xorsi3_flags */
    case 128:  /* xorsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 5;
        }
      else if (which_alternative == 3)
        {
	  return 6;
        }
      else if (which_alternative == 4)
        {
	  return 7;
        }
      else
        {
	  return 6;
        }

    case 112:  /* *ashlsi3_flags */
    case 111:  /* ashlsi3 */
    case 110:  /* *lshrsi3_flags */
    case 109:  /* lshrsi3 */
    case 108:  /* *ashrsi3_flags */
    case 107:  /* ashrsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 98:  /* *one_cmplsi2_flags */
    case 97:  /* one_cmplsi2 */
    case 96:  /* *negsi2_flags */
    case 93:  /* negsi2 */
    case 59:  /* *abssi2_flags */
    case 57:  /* abssi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 86:  /* sminsi3 */
    case 84:  /* smaxsi3 */
    case 80:  /* mulsidi3 */
    case 78:  /* udivsi3 */
    case 76:  /* divsi3 */
    case 67:  /* *adc_flags */
    case 65:  /* adc_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 5;
        }
      else if (which_alternative == 3)
        {
	  return 6;
        }
      else
        {
	  return 7;
        }

    case 56:  /* *stcc_rev */
    case 54:  /* *stcc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 5;
        }
      else if (which_alternative == 2)
        {
	  return 6;
        }
      else
        {
	  return 7;
        }

    case 33:  /* movdf */
    case 37:  /* zero_extendqisi2 */
    case 36:  /* zero_extendhisi2 */
    case 26:  /* call_value_internal */
    case 25:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 35:  /* extendqisi2 */
    case 34:  /* extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 6;
        }

    case 32:  /* *movqi_internal */
    case 31:  /* *movhi_internal */
    case 30:  /* *movsi_internal */
    case 29:  /* *movsf_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 3;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 5;
        }
      else if (which_alternative == 4)
        {
	  return 6;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if (which_alternative == 6)
        {
	  return 2;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if (which_alternative == 8)
        {
	  return 3;
        }
      else if (which_alternative == 9)
        {
	  return 4;
        }
      else if (which_alternative == 10)
        {
	  return 2;
        }
      else if (which_alternative == 11)
        {
	  return 6;
        }
      else if (which_alternative == 12)
        {
	  return 5;
        }
      else if (which_alternative == 13)
        {
	  return 6;
        }
      else if (which_alternative == 14)
        {
	  return 7;
        }
      else if (which_alternative == 15)
        {
	  return 8;
        }
      else if (which_alternative == 16)
        {
	  return 8;
        }
      else
        {
	  return 2;
        }

    case 28:  /* sibcall_value_internal */
    case 27:  /* sibcall_internal */
    case 16:  /* jump */
      return 4;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    case 359:  /* define_peephole, /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5011 */
    case 227:  /* *insv_cond_lt */
    case 225:  /* *insv_cond */
    case 224:  /* *insv_cond_mem */
    case 223:  /* rx_insv_reg */
    case 126:  /* subdi3_internal */
    case 125:  /* subdi3_internal_mem2 */
    case 124:  /* subdi3_internal_mem */
    case 114:  /* ssaddsi3 */
    case 113:  /* ssaddsi3_mem */
    case 90:  /* unsign_minqi3_mem */
    case 89:  /* unsign_minhi3_mem */
    case 88:  /* unsign_maxhi3_mem */
    case 87:  /* unsign_maxqi3_mem */
    case 68:  /* adddi3_internal */
    case 53:  /* *movsicc */
    case 52:  /* *movsicc_mem */
    case 51:  /* *movsicc_tstz */
    case 50:  /* *movsicc_tst */
    case 49:  /* *movsicc_tst_mem */
    case 48:  /* cstoresf4 */
    case 47:  /* cstoresf4_mem */
    case 45:  /* cstoresi4 */
    case 44:  /* cstoresi4_mem */
    case 24:  /* naked_return */
    case 15:  /* *conditional_branch */
    case 11:  /* *cbranchsf4 */
    case 10:  /* *cbranchsf4_mem */
    case 7:  /* *cbranchsi4_tst_ext */
    case 6:  /* *cbranchsi4_tst */
    case 5:  /* *cbranchsi4_tst_mem */
    case 2:  /* *cbranchsi4 */
    case 1:  /* *cbranchsi4_mem */
      return 8;

    default:
      return 3;

    }
}

int
insn_default_length (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 119:  /* *subsi3_flags */
    case 117:  /* subsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 6;
        }
      else
        {
	  return 3;
        }

    case 102:  /* *iorsi3_flags */
    case 100:  /* iorsi3 */
    case 92:  /* mulsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else if (which_alternative == 4)
        {
	  return 5;
        }
      else if (which_alternative == 5)
        {
	  return 6;
        }
      else if (which_alternative == 6)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 72:  /* *andsi3_flags */
    case 70:  /* andsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else if (which_alternative == 4)
        {
	  return 5;
        }
      else if (which_alternative == 5)
        {
	  return 6;
        }
      else if (which_alternative == 6)
        {
	  return 2;
        }
      else
        {
	  return 5;
        }

    case 63:  /* *addsi3_flags */
    case 61:  /* addsi3_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x7ULL))
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 3;
        }
      else if (which_alternative == 4)
        {
	  return 4;
        }
      else if (which_alternative == 5)
        {
	  return 5;
        }
      else if (which_alternative == 6)
        {
	  return 6;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if (((1ULL << which_alternative) & 0x300ULL))
        {
	  return 3;
        }
      else if (which_alternative == 10)
        {
	  return 4;
        }
      else if (which_alternative == 11)
        {
	  return 5;
        }
      else
        {
	  return 6;
        }

    case 55:  /* *stcc_reg */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 3;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 5;
        }
      else if (which_alternative == 4)
        {
	  return 6;
        }
      else
        {
	  return 7;
        }

    case 4:  /* cmpsi_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else if (which_alternative == 3)
        {
	  return 4;
        }
      else if (which_alternative == 4)
        {
	  return 5;
        }
      else
        {
	  return 6;
        }

    case 312:  /* exchangeqi */
    case 311:  /* exchangehi */
    case 310:  /* exchangesi */
    case 309:  /* exchangesf */
    case 228:  /* sync_lock_test_and_setsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 6;
        }

    case 308:  /* movdi */
      return 16 /* 0x10 */;

    case 307:  /* nop */
    case 303:  /* brk */
    case 242:  /* mvfdr */
    case 19:  /* simple_return */
      return 1;

    case 306:  /* mvfcp */
    case 240:  /* bfmovz */
    case 239:  /* bfmov */
    case 213:  /* bitinvert_in_memory */
    case 189:  /* fix_truncsfsi2_mem */
    case 186:  /* subsf3_mem */
    case 181:  /* mulsf3_mem */
    case 179:  /* divsf3_mem */
    case 174:  /* addsf3_mem */
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
    case 118:  /* *subsi3_flags_mem */
    case 116:  /* subsi3_mem */
    case 101:  /* *iorsi3_flags_mem */
    case 99:  /* iorsi3_mem */
    case 91:  /* mulsi3_mem */
    case 71:  /* *andsi3_flags_mem */
    case 69:  /* andsi3_mem */
    case 62:  /* *addsi3_flags_mem */
    case 60:  /* addsi3_mem */
    case 12:  /* *cmpsf_mem */
    case 3:  /* *cmpsi_mem */
      return 5;

    case 305:  /* wait */
    case 299:  /* setpsw */
    case 298:  /* clrpsw */
    case 294:  /* rmpa32 */
    case 293:  /* rmpa16 */
    case 292:  /* rmpa8 */
    case 291:  /* rmpa */
    case 238:  /* mvfdc */
    case 234:  /* rx_setmem */
    case 233:  /* rx_cpymem */
    case 231:  /* rx_movstr */
    case 115:  /* *sat */
    case 94:  /* negdf2 */
    case 58:  /* absdf2 */
    case 43:  /* stack_dpopm */
    case 42:  /* stack_popm */
    case 41:  /* stack_pop */
    case 40:  /* stack_dpushm */
    case 39:  /* stack_pushm */
    case 38:  /* stack_push */
    case 23:  /* exception_return */
    case 22:  /* fast_interrupt_return */
    case 20:  /* deallocate_and_return */
    case 18:  /* tablejump */
    case 17:  /* indirect_jump */
      return 2;

    case 301:  /* mvtc */
    case 187:  /* subsf3v1 */
    case 182:  /* mulsf3v1 */
    case 180:  /* divsf3 */
    case 175:  /* addsf3v1 */
    case 13:  /* *cmpsf */
    case 9:  /* *tstsi */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 7;
        }

    case 296:  /* lrintsf2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 5;
        }

    case 235:  /* rx_cmpstrn */
      return 9;

    case 232:  /* rx_strend */
      return 10 /* 0xa */;

    case 230:  /* xchg_memhi */
    case 229:  /* xchg_memqi */
    case 198:  /* floatsisf2_mem */
    case 127:  /* xorsi3_mem */
    case 122:  /* *sbb_flags_mem */
    case 120:  /* sbb_internal_mem */
    case 95:  /* negsf2 */
    case 85:  /* sminsi3_mem */
    case 83:  /* smaxsi3_mem */
    case 81:  /* umulsidi3_mem */
    case 79:  /* mulsidi3_mem */
    case 77:  /* udivsi3_mem */
    case 75:  /* divsi3_mem */
    case 66:  /* *adc_flags_mem */
    case 64:  /* adc_internal_mem */
    case 8:  /* *tstsi_mem */
      return 6;

    case 194:  /* floatunssisf2 */
    case 192:  /* fixuns_truncsfsi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 4;
        }

    case 188:  /* subsf3v2 */
    case 183:  /* mulsf3v2 */
    case 176:  /* addsf3v2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 7;
        }
      else
        {
	  return 3;
        }

    case 129:  /* *xorsi3_flags */
    case 128:  /* xorsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 5;
        }
      else if (which_alternative == 3)
        {
	  return 6;
        }
      else if (which_alternative == 4)
        {
	  return 7;
        }
      else
        {
	  return 6;
        }

    case 112:  /* *ashlsi3_flags */
    case 111:  /* ashlsi3 */
    case 110:  /* *lshrsi3_flags */
    case 109:  /* lshrsi3 */
    case 108:  /* *ashrsi3_flags */
    case 107:  /* ashrsi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 98:  /* *one_cmplsi2_flags */
    case 97:  /* one_cmplsi2 */
    case 96:  /* *negsi2_flags */
    case 93:  /* negsi2 */
    case 59:  /* *abssi2_flags */
    case 57:  /* abssi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 86:  /* sminsi3 */
    case 84:  /* smaxsi3 */
    case 80:  /* mulsidi3 */
    case 78:  /* udivsi3 */
    case 76:  /* divsi3 */
    case 67:  /* *adc_flags */
    case 65:  /* adc_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 5;
        }
      else if (which_alternative == 3)
        {
	  return 6;
        }
      else
        {
	  return 7;
        }

    case 56:  /* *stcc_rev */
    case 54:  /* *stcc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 5;
        }
      else if (which_alternative == 2)
        {
	  return 6;
        }
      else
        {
	  return 7;
        }

    case 33:  /* movdf */
    case 37:  /* zero_extendqisi2 */
    case 36:  /* zero_extendhisi2 */
    case 26:  /* call_value_internal */
    case 25:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 35:  /* extendqisi2 */
    case 34:  /* extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 6;
        }

    case 32:  /* *movqi_internal */
    case 31:  /* *movhi_internal */
    case 30:  /* *movsi_internal */
    case 29:  /* *movsf_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else if (which_alternative == 1)
        {
	  return 3;
        }
      else if (which_alternative == 2)
        {
	  return 4;
        }
      else if (which_alternative == 3)
        {
	  return 5;
        }
      else if (which_alternative == 4)
        {
	  return 6;
        }
      else if (which_alternative == 5)
        {
	  return 2;
        }
      else if (which_alternative == 6)
        {
	  return 2;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else if (which_alternative == 8)
        {
	  return 3;
        }
      else if (which_alternative == 9)
        {
	  return 4;
        }
      else if (which_alternative == 10)
        {
	  return 2;
        }
      else if (which_alternative == 11)
        {
	  return 6;
        }
      else if (which_alternative == 12)
        {
	  return 5;
        }
      else if (which_alternative == 13)
        {
	  return 6;
        }
      else if (which_alternative == 14)
        {
	  return 7;
        }
      else if (which_alternative == 15)
        {
	  return 8;
        }
      else if (which_alternative == 16)
        {
	  return 8;
        }
      else
        {
	  return 2;
        }

    case 28:  /* sibcall_value_internal */
    case 27:  /* sibcall_internal */
    case 16:  /* jump */
      return 4;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    case 359:  /* define_peephole, /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5011 */
    case 227:  /* *insv_cond_lt */
    case 225:  /* *insv_cond */
    case 224:  /* *insv_cond_mem */
    case 223:  /* rx_insv_reg */
    case 126:  /* subdi3_internal */
    case 125:  /* subdi3_internal_mem2 */
    case 124:  /* subdi3_internal_mem */
    case 114:  /* ssaddsi3 */
    case 113:  /* ssaddsi3_mem */
    case 90:  /* unsign_minqi3_mem */
    case 89:  /* unsign_minhi3_mem */
    case 88:  /* unsign_maxhi3_mem */
    case 87:  /* unsign_maxqi3_mem */
    case 68:  /* adddi3_internal */
    case 53:  /* *movsicc */
    case 52:  /* *movsicc_mem */
    case 51:  /* *movsicc_tstz */
    case 50:  /* *movsicc_tst */
    case 49:  /* *movsicc_tst_mem */
    case 48:  /* cstoresf4 */
    case 47:  /* cstoresf4_mem */
    case 45:  /* cstoresi4 */
    case 44:  /* cstoresi4_mem */
    case 24:  /* naked_return */
    case 15:  /* *conditional_branch */
    case 11:  /* *cbranchsf4 */
    case 10:  /* *cbranchsf4_mem */
    case 7:  /* *cbranchsi4_tst_ext */
    case 6:  /* *cbranchsi4_tst */
    case 5:  /* *cbranchsi4_tst_mem */
    case 2:  /* *cbranchsi4 */
    case 1:  /* *cbranchsi4_mem */
      return 8;

    default:
      return 3;

    }
}

int
bypass_p (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return 0;

    }
}

int
num_delay_slots (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return 0;

    }
}

enum attr_insn_group
get_attr_insn_group (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 32:  /* *movqi_internal */
    case 31:  /* *movhi_internal */
    case 30:  /* *movsi_internal */
    case 29:  /* *movsf_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x1ffULL))
        {
	  return INSN_GROUP_IEX;
        }
      else if (which_alternative == 9)
        {
	  return INSN_GROUP_ILS;
        }
      else if (which_alternative == 10)
        {
	  return INSN_GROUP_IEX;
        }
      else if (((1ULL << which_alternative) & 0x1f800ULL))
        {
	  return INSN_GROUP_ILS;
        }
      else
        {
	  return INSN_GROUP_ISNG;
        }

    case 34:  /* extendhisi2 */
    case 35:  /* extendqisi2 */
    case 36:  /* zero_extendhisi2 */
    case 37:  /* zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return INSN_GROUP_IEX;
        }
      else
        {
	  return INSN_GROUP_ILS;
        }

    case 192:  /* fixuns_truncsfsi2 */
    case 194:  /* floatunssisf2 */
    case 296:  /* lrintsf2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return INSN_GROUP_IFE;
        }
      else
        {
	  return INSN_GROUP_ISNG;
        }

    case 13:  /* *cmpsf */
      return INSN_GROUP_IF1;

    case 182:  /* mulsf3v1 */
    case 183:  /* mulsf3v2 */
      return INSN_GROUP_IFM;

    case 175:  /* addsf3v1 */
    case 176:  /* addsf3v2 */
    case 187:  /* subsf3v1 */
    case 188:  /* subsf3v2 */
    case 190:  /* fix_truncsfsi2 */
    case 199:  /* floatsisf2 */
      return INSN_GROUP_IFE;

    case 38:  /* stack_push */
    case 41:  /* stack_pop */
      return INSN_GROUP_ILS;

    case 25:  /* call_internal */
    case 26:  /* call_value_internal */
      return INSN_GROUP_IBS;

    case 16:  /* jump */
    case 17:  /* indirect_jump */
    case 18:  /* tablejump */
    case 27:  /* sibcall_internal */
    case 28:  /* sibcall_value_internal */
      return INSN_GROUP_IBR;

    case 15:  /* *conditional_branch */
      return INSN_GROUP_IBC;

    case 92:  /* mulsi3 */
    case 243:  /* emula_A0 */
    case 244:  /* emula_A1 */
    case 245:  /* emaca_A0 */
    case 246:  /* emaca_A1 */
    case 247:  /* emsba_A0 */
    case 248:  /* emsba_A1 */
    case 249:  /* maclh_A0 */
    case 250:  /* maclh_A1 */
    case 251:  /* machi */
    case 252:  /* machi_A1 */
    case 253:  /* maclo */
    case 254:  /* maclo_A1 */
    case 255:  /* mullh_A0 */
    case 256:  /* mullh_A1 */
    case 257:  /* mulhi */
    case 258:  /* mulhi_A1 */
    case 259:  /* mullo */
    case 260:  /* mullo_A1 */
    case 261:  /* msblh_A0 */
    case 262:  /* msblh_A1 */
    case 263:  /* msbhi_A0 */
    case 264:  /* msbhi_A1 */
    case 265:  /* msblo_A0 */
    case 266:  /* msblo_A1 */
    case 267:  /* mvfachi */
    case 268:  /* mvfachi_A0 */
    case 269:  /* mvfachi_A1 */
    case 270:  /* mvfacmi */
    case 271:  /* mvfacmi_A0 */
    case 272:  /* mvfacmi_A1 */
    case 273:  /* mvfaclo_A0 */
    case 274:  /* mvfaclo_A1 */
    case 275:  /* mvfacgu_A0 */
    case 276:  /* mvfacgu_A1 */
    case 277:  /* mvtachi */
    case 278:  /* mvtachi_A1 */
    case 279:  /* mvtaclo */
    case 280:  /* mvtaclo_A1 */
    case 281:  /* mvtacgu_A0 */
    case 282:  /* mvtacgu_A1 */
    case 283:  /* rdacw_A0 */
    case 284:  /* rdacw_A1 */
    case 285:  /* rdacl_A0 */
    case 286:  /* rdacl_A1 */
    case 287:  /* racw */
    case 288:  /* racw_A1 */
    case 289:  /* racl_A0 */
    case 290:  /* racl_A1 */
      return INSN_GROUP_IML;

    case 57:  /* abssi2 */
    case 59:  /* *abssi2_flags */
    case 73:  /* bswapsi2 */
    case 74:  /* bswaphi2 */
    case 84:  /* smaxsi3 */
    case 86:  /* sminsi3 */
    case 103:  /* rotlsi3 */
    case 104:  /* *rotlsi3_flags */
    case 105:  /* rotrsi3 */
    case 106:  /* *rotrsi3_flags */
    case 115:  /* *sat */
    case 295:  /* revw */
      return INSN_GROUP_IEP;

    case 4:  /* cmpsi_internal */
    case 9:  /* *tstsi */
    case 46:  /* *sccc */
    case 54:  /* *stcc */
    case 56:  /* *stcc_rev */
    case 61:  /* addsi3_internal */
    case 63:  /* *addsi3_flags */
    case 65:  /* adc_internal */
    case 67:  /* *adc_flags */
    case 70:  /* andsi3 */
    case 72:  /* *andsi3_flags */
    case 93:  /* negsi2 */
    case 95:  /* negsf2 */
    case 96:  /* *negsi2_flags */
    case 97:  /* one_cmplsi2 */
    case 98:  /* *one_cmplsi2_flags */
    case 100:  /* iorsi3 */
    case 102:  /* *iorsi3_flags */
    case 107:  /* ashrsi3 */
    case 108:  /* *ashrsi3_flags */
    case 109:  /* lshrsi3 */
    case 110:  /* *lshrsi3_flags */
    case 111:  /* ashlsi3 */
    case 112:  /* *ashlsi3_flags */
    case 117:  /* subsi3 */
    case 119:  /* *subsi3_flags */
    case 121:  /* sbb_internal */
    case 123:  /* *sbb_flags */
    case 204:  /* *bitset */
    case 205:  /* bset */
    case 211:  /* binvert */
    case 214:  /* *bitclr */
    case 215:  /* bclr */
    case 219:  /* *bittest */
    case 222:  /* *insv_imm */
    case 226:  /* *bmcc */
    case 307:  /* nop */
      return INSN_GROUP_IEX;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return INSN_GROUP_ISNG;

    }
}

int
get_attr_timings (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 129:  /* *xorsi3_flags */
    case 128:  /* xorsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x1fULL))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 33 /* 0x21 */;
        }

    case 32:  /* *movqi_internal */
    case 31:  /* *movhi_internal */
    case 30:  /* *movsi_internal */
    case 29:  /* *movsf_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3fULL))
        {
	  return 11 /* 0xb */;
        }
      else if (((1ULL << which_alternative) & 0x3c0ULL))
        {
	  return 12 /* 0xc */;
        }
      else if (((1ULL << which_alternative) & 0x1fc00ULL))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 21:  /* pop_and_return */
      return 56 /* 0x38 */;

    case 33:  /* movdf */
    case 34:  /* extendhisi2 */
    case 35:  /* extendqisi2 */
    case 36:  /* zero_extendhisi2 */
    case 37:  /* zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 41:  /* stack_pop */
      return 12 /* 0xc */;

    case 42:  /* stack_popm */
      return 45 /* 0x2d */;

    case 179:  /* divsf3_mem */
      return 1818 /* 0x71a */;

    case 19:  /* simple_return */
    case 20:  /* deallocate_and_return */
    case 181:  /* mulsf3_mem */
      return 55 /* 0x37 */;

    case 39:  /* stack_pushm */
    case 79:  /* mulsidi3_mem */
    case 81:  /* umulsidi3_mem */
    case 87:  /* unsign_maxqi3_mem */
    case 88:  /* unsign_maxhi3_mem */
    case 89:  /* unsign_minhi3_mem */
    case 90:  /* unsign_minqi3_mem */
    case 175:  /* addsf3v1 */
    case 176:  /* addsf3v2 */
    case 177:  /* adddf3 */
    case 185:  /* subdf3 */
    case 187:  /* subsf3v1 */
    case 188:  /* subsf3v2 */
    case 189:  /* fix_truncsfsi2_mem */
    case 198:  /* floatsisf2_mem */
      return 44 /* 0x2c */;

    case 178:  /* divdf3 */
    case 180:  /* divsf3 */
    case 201:  /* sqrtsf2 */
    case 202:  /* sqrtdf2 */
      return 1616 /* 0x650 */;

    case 3:  /* *cmpsi_mem */
    case 8:  /* *tstsi_mem */
    case 12:  /* *cmpsf_mem */
    case 15:  /* *conditional_branch */
    case 16:  /* jump */
    case 17:  /* indirect_jump */
    case 18:  /* tablejump */
    case 22:  /* fast_interrupt_return */
    case 25:  /* call_internal */
    case 26:  /* call_value_internal */
    case 27:  /* sibcall_internal */
    case 28:  /* sibcall_value_internal */
    case 60:  /* addsi3_mem */
    case 62:  /* *addsi3_flags_mem */
    case 64:  /* adc_internal_mem */
    case 66:  /* *adc_flags_mem */
    case 69:  /* andsi3_mem */
    case 71:  /* *andsi3_flags_mem */
    case 83:  /* smaxsi3_mem */
    case 85:  /* sminsi3_mem */
    case 91:  /* mulsi3_mem */
    case 99:  /* iorsi3_mem */
    case 101:  /* *iorsi3_flags_mem */
    case 116:  /* subsi3_mem */
    case 118:  /* *subsi3_flags_mem */
    case 120:  /* sbb_internal_mem */
    case 122:  /* *sbb_flags_mem */
    case 127:  /* xorsi3_mem */
    case 130:  /* plussi3_zero_extendhi */
    case 131:  /* andsi3_zero_extendhi */
    case 132:  /* iorsi3_zero_extendhi */
    case 133:  /* xorsi3_zero_extendhi */
    case 134:  /* plussi3_sign_extendhi */
    case 135:  /* andsi3_sign_extendhi */
    case 136:  /* iorsi3_sign_extendhi */
    case 137:  /* xorsi3_sign_extendhi */
    case 138:  /* plussi3_zero_extendqi */
    case 139:  /* andsi3_zero_extendqi */
    case 140:  /* iorsi3_zero_extendqi */
    case 141:  /* xorsi3_zero_extendqi */
    case 142:  /* plussi3_sign_extendqi */
    case 143:  /* andsi3_sign_extendqi */
    case 144:  /* iorsi3_sign_extendqi */
    case 145:  /* xorsi3_sign_extendqi */
    case 146:  /* divsi3_zero_extendhi */
    case 147:  /* udivsi3_zero_extendhi */
    case 148:  /* minussi3_zero_extendhi */
    case 149:  /* divsi3_sign_extendhi */
    case 150:  /* udivsi3_sign_extendhi */
    case 151:  /* minussi3_sign_extendhi */
    case 152:  /* divsi3_zero_extendqi */
    case 153:  /* udivsi3_zero_extendqi */
    case 154:  /* minussi3_zero_extendqi */
    case 155:  /* divsi3_sign_extendqi */
    case 156:  /* udivsi3_sign_extendqi */
    case 157:  /* minussi3_sign_extendqi */
    case 158:  /* smaxsi3_zero_extendhi */
    case 159:  /* sminsi3_zero_extendhi */
    case 160:  /* multsi3_zero_extendhi */
    case 161:  /* smaxsi3_sign_extendhi */
    case 162:  /* sminsi3_sign_extendhi */
    case 163:  /* multsi3_sign_extendhi */
    case 164:  /* smaxsi3_zero_extendqi */
    case 165:  /* sminsi3_zero_extendqi */
    case 166:  /* multsi3_zero_extendqi */
    case 167:  /* smaxsi3_sign_extendqi */
    case 168:  /* sminsi3_sign_extendqi */
    case 169:  /* multsi3_sign_extendqi */
    case 170:  /* comparesi3_zero_extendhi */
    case 171:  /* comparesi3_sign_extendhi */
    case 172:  /* comparesi3_zero_extendqi */
    case 173:  /* comparesi3_sign_extendqi */
    case 182:  /* mulsf3v1 */
    case 183:  /* mulsf3v2 */
    case 184:  /* muldf3 */
    case 206:  /* bitset_in_memory */
    case 207:  /* *bitset_in_memory */
    case 208:  /* *bitset_in_memory2 */
    case 209:  /* *bitset_in_memory_2 */
    case 212:  /* bnot_memory */
    case 213:  /* bitinvert_in_memory */
    case 216:  /* bclr_memory */
    case 217:  /* bitclr_in_memory */
    case 218:  /* *bitclr_in_memory2 */
    case 221:  /* *bitclr_in_memory_2 */
      return 33 /* 0x21 */;

    case 75:  /* divsi3_mem */
    case 76:  /* divsi3 */
    case 231:  /* rx_movstr */
    case 232:  /* rx_strend */
    case 233:  /* rx_cpymem */
    case 234:  /* rx_setmem */
    case 235:  /* rx_cmpstrn */
      return 1111 /* 0x457 */;

    case 77:  /* udivsi3_mem */
    case 78:  /* udivsi3 */
    case 291:  /* rmpa */
    case 292:  /* rmpa8 */
    case 293:  /* rmpa16 */
    case 294:  /* rmpa32 */
      return 1010 /* 0x3f2 */;

    case 192:  /* fixuns_truncsfsi2 */
    case 194:  /* floatunssisf2 */
    case 296:  /* lrintsf2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 22 /* 0x16 */;
        }
      else
        {
	  return 44 /* 0x2c */;
        }

    case 23:  /* exception_return */
    case 174:  /* addsf3_mem */
    case 186:  /* subsf3_mem */
    case 242:  /* mvfdr */
    case 303:  /* brk */
      return 66 /* 0x42 */;

    case 80:  /* mulsidi3 */
    case 82:  /* umulsidi3 */
    case 190:  /* fix_truncsfsi2 */
    case 191:  /* fix_truncdfsi2 */
    case 193:  /* fixuns_truncdfsi2 */
    case 195:  /* floatunssidf2 */
    case 196:  /* truncdfsf2 */
    case 197:  /* extendsfdf2 */
    case 199:  /* floatsisf2 */
    case 200:  /* floatsidf2 */
    case 228:  /* sync_lock_test_and_setsi */
    case 229:  /* xchg_memqi */
    case 230:  /* xchg_memhi */
    case 297:  /* lrintdf2 */
    case 308:  /* movdi */
    case 309:  /* exchangesf */
    case 310:  /* exchangesi */
    case 311:  /* exchangehi */
    case 312:  /* exchangeqi */
      return 22 /* 0x16 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    default:
      return 11 /* 0xb */;

    }
}

int
eligible_for_delay (rtx_insn *delay_insn ATTRIBUTE_UNUSED, int slot, 
		   rtx_insn *candidate_insn, int flags ATTRIBUTE_UNUSED)
{
  rtx_insn *insn ATTRIBUTE_UNUSED;

  if (num_delay_slots (delay_insn) == 0)
    return 0;
  gcc_assert (slot < 0);

  if (!INSN_P (candidate_insn))
    return 0;

  insn = candidate_insn;
  switch (slot)
    {
    default:
      gcc_unreachable ();
    }
}

int
eligible_for_annul_true (rtx_insn *delay_insn ATTRIBUTE_UNUSED,
    int slot ATTRIBUTE_UNUSED,
    rtx_insn *candidate_insn ATTRIBUTE_UNUSED,
    int flags ATTRIBUTE_UNUSED)
{
  return 0;
}

int
eligible_for_annul_false (rtx_insn *delay_insn ATTRIBUTE_UNUSED,
    int slot ATTRIBUTE_UNUSED,
    rtx_insn *candidate_insn ATTRIBUTE_UNUSED,
    int flags ATTRIBUTE_UNUSED)
{
  return 0;
}

int
const_num_delay_slots (rtx_insn *insn)
{
  switch (recog_memoized (insn))
    {
    default:
      return 1;
    }
}

EXPORTED_CONST int length_unit_log = 0;
