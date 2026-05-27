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
    case 83:  /* *subsi3_flags */
    case 82:  /* subsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 6;
        }
      else if (which_alternative == 3)
        {
	  return 3;
        }
      else
        {
	  return 5;
        }

    case 69:  /* *iorsi3_flags */
    case 68:  /* iorsi3 */
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
      else if (which_alternative == 7)
        {
	  return 3;
        }
      else
        {
	  return 5;
        }

    case 63:  /* mulsi3 */
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
	  return 5;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 48:  /* *andsi3_flags */
    case 47:  /* andsi3 */
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

    case 43:  /* *addsi3_flags */
    case 42:  /* addsi3_internal */
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
      else if (which_alternative == 12)
        {
	  return 6;
        }
      else
        {
	  return 5;
        }

    case 39:  /* *stcc_reg */
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

    case 25:  /* *movqi_internal */
    case 24:  /* *movhi_internal */
    case 23:  /* *movsi_internal */
    case 22:  /* *movsf_internal */
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
	  return 2;
        }
      else if (which_alternative == 5)
        {
	  return 4;
        }
      else if (which_alternative == 6)
        {
	  return 6;
        }
      else if (which_alternative == 7)
        {
	  return 5;
        }
      else if (which_alternative == 8)
        {
	  return 6;
        }
      else if (which_alternative == 9)
        {
	  return 7;
        }
      else
        {
	  return 8;
        }

    case 2:  /* *cmpsi */
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
      else
        {
	  return 5;
        }

    case 181:  /* movdf */
    case 180:  /* movdi */
      return 16 /* 0x10 */;

    case 179:  /* nop */
    case 175:  /* brk */
    case 12:  /* simple_return */
      return 1;

    case 177:  /* wait */
    case 171:  /* setpsw */
    case 170:  /* clrpsw */
    case 167:  /* rmpa */
    case 156:  /* rx_setmem */
    case 155:  /* rx_cpymem */
    case 153:  /* rx_movstr */
    case 81:  /* *sat */
    case 33:  /* stack_popm */
    case 32:  /* stack_pop */
    case 31:  /* stack_pushm */
    case 30:  /* stack_push */
    case 16:  /* exception_return */
    case 15:  /* fast_interrupt_return */
    case 13:  /* deallocate_and_return */
    case 11:  /* tablejump */
    case 10:  /* indirect_jump */
      return 2;

    case 176:  /* int */
    case 174:  /* mvtipl */
    case 172:  /* mvfc */
    case 168:  /* revw */
    case 166:  /* racw */
    case 165:  /* mvtaclo */
    case 164:  /* mvtachi */
    case 163:  /* mvfacmi */
    case 162:  /* mvfachi */
    case 161:  /* mullo */
    case 160:  /* mulhi */
    case 159:  /* maclo */
    case 158:  /* machi */
    case 148:  /* *bmcc */
    case 145:  /* *insv_imm */
    case 143:  /* bitclr */
    case 141:  /* bitinvert */
    case 139:  /* bitset */
    case 73:  /* *rotrsi3_flags */
    case 72:  /* rotrsi3 */
    case 71:  /* *rotlsi3_flags */
    case 70:  /* rotlsi3 */
    case 50:  /* bswaphi2 */
    case 49:  /* bswapsi2 */
    case 35:  /* *sccc */
    case 14:  /* pop_and_return */
      return 3;

    case 173:  /* mvtc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 7;
        }

    case 169:  /* lrintsf2 */
    case 137:  /* fix_truncsfsi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 5;
        }

    case 157:  /* rx_cmpstrn */
      return 9;

    case 154:  /* rx_strend */
      return 10 /* 0xa */;

    case 152:  /* xchg_memhi */
    case 151:  /* xchg_memqi */
      return 6;

    case 150:  /* sync_lock_test_and_setsi */
    case 138:  /* floatsisf2 */
    case 85:  /* *sbb_flags */
    case 84:  /* sbb_internal */
    case 54:  /* umulsidi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 6;
        }

    case 136:  /* subsf3 */
    case 135:  /* mulsf3 */
    case 134:  /* divsf3 */
    case 133:  /* addsf3 */
    case 7:  /* *cmpsf */
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
	  return 5;
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
    case 53:  /* mulsidi3 */
    case 52:  /* udivsi3 */
    case 51:  /* divsi3 */
    case 45:  /* *adc_flags */
    case 44:  /* adc_internal */
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

    case 79:  /* *ashlsi3_flags */
    case 78:  /* ashlsi3 */
    case 77:  /* *lshrsi3_flags */
    case 76:  /* lshrsi3 */
    case 75:  /* *ashrsi3_flags */
    case 74:  /* ashrsi3 */
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

    case 67:  /* *one_cmplsi2_flags */
    case 66:  /* one_cmplsi2 */
    case 65:  /* *negsi2_flags */
    case 64:  /* negsi2 */
    case 41:  /* *abssi2_flags */
    case 40:  /* abssi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 38:  /* *stcc */
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

    case 29:  /* zero_extendqisi2 */
    case 28:  /* zero_extendhisi2 */
    case 19:  /* call_value_internal */
    case 18:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 27:  /* extendqisi2 */
    case 26:  /* extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 6;
        }

    case 21:  /* sibcall_value_internal */
    case 20:  /* sibcall_internal */
    case 9:  /* jump */
      return 4;

    case 5:  /* *tstsi */
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
	  return 6;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    case 149:  /* *insv_cond_lt */
    case 147:  /* *insv_cond */
    case 146:  /* rx_insv_reg */
    case 86:  /* subdi3_internal */
    case 80:  /* ssaddsi3 */
    case 46:  /* adddi3_internal */
    case 37:  /* *movsicc */
    case 36:  /* cstoresf4 */
    case 34:  /* cstoresi4 */
    case 17:  /* naked_return */
    case 8:  /* *conditional_branch */
    case 6:  /* *cbranchsf4 */
    case 4:  /* *cbranchsi4_tst_ext */
    case 3:  /* *cbranchsi4_tst */
    case 1:  /* *cbranchsi4 */
      return 8;

    default:
      return 5;

    }
}

int
insn_default_length (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 83:  /* *subsi3_flags */
    case 82:  /* subsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 2;
        }
      else if (which_alternative == 2)
        {
	  return 6;
        }
      else if (which_alternative == 3)
        {
	  return 3;
        }
      else
        {
	  return 5;
        }

    case 69:  /* *iorsi3_flags */
    case 68:  /* iorsi3 */
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
      else if (which_alternative == 7)
        {
	  return 3;
        }
      else
        {
	  return 5;
        }

    case 63:  /* mulsi3 */
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
	  return 5;
        }
      else if (which_alternative == 7)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 48:  /* *andsi3_flags */
    case 47:  /* andsi3 */
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

    case 43:  /* *addsi3_flags */
    case 42:  /* addsi3_internal */
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
      else if (which_alternative == 12)
        {
	  return 6;
        }
      else
        {
	  return 5;
        }

    case 39:  /* *stcc_reg */
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

    case 25:  /* *movqi_internal */
    case 24:  /* *movhi_internal */
    case 23:  /* *movsi_internal */
    case 22:  /* *movsf_internal */
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
	  return 2;
        }
      else if (which_alternative == 5)
        {
	  return 4;
        }
      else if (which_alternative == 6)
        {
	  return 6;
        }
      else if (which_alternative == 7)
        {
	  return 5;
        }
      else if (which_alternative == 8)
        {
	  return 6;
        }
      else if (which_alternative == 9)
        {
	  return 7;
        }
      else
        {
	  return 8;
        }

    case 2:  /* *cmpsi */
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
      else
        {
	  return 5;
        }

    case 181:  /* movdf */
    case 180:  /* movdi */
      return 16 /* 0x10 */;

    case 179:  /* nop */
    case 175:  /* brk */
    case 12:  /* simple_return */
      return 1;

    case 177:  /* wait */
    case 171:  /* setpsw */
    case 170:  /* clrpsw */
    case 167:  /* rmpa */
    case 156:  /* rx_setmem */
    case 155:  /* rx_cpymem */
    case 153:  /* rx_movstr */
    case 81:  /* *sat */
    case 33:  /* stack_popm */
    case 32:  /* stack_pop */
    case 31:  /* stack_pushm */
    case 30:  /* stack_push */
    case 16:  /* exception_return */
    case 15:  /* fast_interrupt_return */
    case 13:  /* deallocate_and_return */
    case 11:  /* tablejump */
    case 10:  /* indirect_jump */
      return 2;

    case 176:  /* int */
    case 174:  /* mvtipl */
    case 172:  /* mvfc */
    case 168:  /* revw */
    case 166:  /* racw */
    case 165:  /* mvtaclo */
    case 164:  /* mvtachi */
    case 163:  /* mvfacmi */
    case 162:  /* mvfachi */
    case 161:  /* mullo */
    case 160:  /* mulhi */
    case 159:  /* maclo */
    case 158:  /* machi */
    case 148:  /* *bmcc */
    case 145:  /* *insv_imm */
    case 143:  /* bitclr */
    case 141:  /* bitinvert */
    case 139:  /* bitset */
    case 73:  /* *rotrsi3_flags */
    case 72:  /* rotrsi3 */
    case 71:  /* *rotlsi3_flags */
    case 70:  /* rotlsi3 */
    case 50:  /* bswaphi2 */
    case 49:  /* bswapsi2 */
    case 35:  /* *sccc */
    case 14:  /* pop_and_return */
      return 3;

    case 173:  /* mvtc */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 7;
        }

    case 169:  /* lrintsf2 */
    case 137:  /* fix_truncsfsi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 5;
        }

    case 157:  /* rx_cmpstrn */
      return 9;

    case 154:  /* rx_strend */
      return 10 /* 0xa */;

    case 152:  /* xchg_memhi */
    case 151:  /* xchg_memqi */
      return 6;

    case 150:  /* sync_lock_test_and_setsi */
    case 138:  /* floatsisf2 */
    case 85:  /* *sbb_flags */
    case 84:  /* sbb_internal */
    case 54:  /* umulsidi3 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 3;
        }
      else
        {
	  return 6;
        }

    case 136:  /* subsf3 */
    case 135:  /* mulsf3 */
    case 134:  /* divsf3 */
    case 133:  /* addsf3 */
    case 7:  /* *cmpsf */
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
	  return 5;
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
    case 53:  /* mulsidi3 */
    case 52:  /* udivsi3 */
    case 51:  /* divsi3 */
    case 45:  /* *adc_flags */
    case 44:  /* adc_internal */
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

    case 79:  /* *ashlsi3_flags */
    case 78:  /* ashlsi3 */
    case 77:  /* *lshrsi3_flags */
    case 76:  /* lshrsi3 */
    case 75:  /* *ashrsi3_flags */
    case 74:  /* ashrsi3 */
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

    case 67:  /* *one_cmplsi2_flags */
    case 66:  /* one_cmplsi2 */
    case 65:  /* *negsi2_flags */
    case 64:  /* negsi2 */
    case 41:  /* *abssi2_flags */
    case 40:  /* abssi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 3;
        }

    case 38:  /* *stcc */
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

    case 29:  /* zero_extendqisi2 */
    case 28:  /* zero_extendhisi2 */
    case 19:  /* call_value_internal */
    case 18:  /* call_internal */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case 27:  /* extendqisi2 */
    case 26:  /* extendhisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 6;
        }

    case 21:  /* sibcall_value_internal */
    case 20:  /* sibcall_internal */
    case 9:  /* jump */
      return 4;

    case 5:  /* *tstsi */
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
	  return 6;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      /* FALLTHRU */
    case 149:  /* *insv_cond_lt */
    case 147:  /* *insv_cond */
    case 146:  /* rx_insv_reg */
    case 86:  /* subdi3_internal */
    case 80:  /* ssaddsi3 */
    case 46:  /* adddi3_internal */
    case 37:  /* *movsicc */
    case 36:  /* cstoresf4 */
    case 34:  /* cstoresi4 */
    case 17:  /* naked_return */
    case 8:  /* *conditional_branch */
    case 6:  /* *cbranchsf4 */
    case 4:  /* *cbranchsi4_tst_ext */
    case 3:  /* *cbranchsi4_tst */
    case 1:  /* *cbranchsi4 */
      return 8;

    default:
      return 5;

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

int
get_attr_timings (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  switch (recog_memoized (insn))
    {
    case 135:  /* mulsf3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 55 /* 0x37 */;
        }

    case 134:  /* divsf3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 1616 /* 0x650 */;
        }
      else
        {
	  return 1818 /* 0x71a */;
        }

    case 136:  /* subsf3 */
    case 133:  /* addsf3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 44 /* 0x2c */;
        }
      else
        {
	  return 66 /* 0x42 */;
        }

    case 83:  /* *subsi3_flags */
    case 82:  /* subsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0xfULL))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 33 /* 0x21 */;
        }

    case 63:  /* mulsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3fULL))
        {
	  return 11 /* 0xb */;
        }
      else if (which_alternative == 6)
        {
	  return 33 /* 0x21 */;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 53:  /* mulsidi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x1fULL))
        {
	  return 22 /* 0x16 */;
        }
      else
        {
	  return 44 /* 0x2c */;
        }

    case 69:  /* *iorsi3_flags */
    case 68:  /* iorsi3 */
    case 48:  /* *andsi3_flags */
    case 47:  /* andsi3 */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0xffULL))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 33 /* 0x21 */;
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
	  return 11 /* 0xb */;
        }
      else
        {
	  return 33 /* 0x21 */;
        }

    case 43:  /* *addsi3_flags */
    case 42:  /* addsi3_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x1fffULL))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 33 /* 0x21 */;
        }

    case 25:  /* *movqi_internal */
    case 24:  /* *movhi_internal */
    case 23:  /* *movsi_internal */
    case 22:  /* *movsf_internal */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x1fULL))
        {
	  return 11 /* 0xb */;
        }
      else if (which_alternative == 5)
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 7:  /* *cmpsf */
    case 5:  /* *tstsi */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3ULL))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 33 /* 0x21 */;
        }

    case 2:  /* *cmpsi */
      extract_constrain_insn_cached (insn);
      if (((1ULL << which_alternative) & 0x3fULL))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 33 /* 0x21 */;
        }

    case 12:  /* simple_return */
    case 13:  /* deallocate_and_return */
      return 55 /* 0x37 */;

    case 14:  /* pop_and_return */
      return 56 /* 0x38 */;

    case 26:  /* extendhisi2 */
    case 27:  /* extendqisi2 */
    case 28:  /* zero_extendhisi2 */
    case 29:  /* zero_extendqisi2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 31:  /* stack_pushm */
      return 44 /* 0x2c */;

    case 32:  /* stack_pop */
      return 12 /* 0xc */;

    case 33:  /* stack_popm */
      return 45 /* 0x2d */;

    case 84:  /* sbb_internal */
    case 85:  /* *sbb_flags */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 33 /* 0x21 */;
        }

    case 8:  /* *conditional_branch */
    case 9:  /* jump */
    case 10:  /* indirect_jump */
    case 11:  /* tablejump */
    case 15:  /* fast_interrupt_return */
    case 18:  /* call_internal */
    case 19:  /* call_value_internal */
    case 20:  /* sibcall_internal */
    case 21:  /* sibcall_value_internal */
    case 89:  /* plussi3_zero_extendhi */
    case 90:  /* andsi3_zero_extendhi */
    case 91:  /* iorsi3_zero_extendhi */
    case 92:  /* xorsi3_zero_extendhi */
    case 93:  /* plussi3_sign_extendhi */
    case 94:  /* andsi3_sign_extendhi */
    case 95:  /* iorsi3_sign_extendhi */
    case 96:  /* xorsi3_sign_extendhi */
    case 97:  /* plussi3_zero_extendqi */
    case 98:  /* andsi3_zero_extendqi */
    case 99:  /* iorsi3_zero_extendqi */
    case 100:  /* xorsi3_zero_extendqi */
    case 101:  /* plussi3_sign_extendqi */
    case 102:  /* andsi3_sign_extendqi */
    case 103:  /* iorsi3_sign_extendqi */
    case 104:  /* xorsi3_sign_extendqi */
    case 105:  /* divsi3_zero_extendhi */
    case 106:  /* udivsi3_zero_extendhi */
    case 107:  /* minussi3_zero_extendhi */
    case 108:  /* divsi3_sign_extendhi */
    case 109:  /* udivsi3_sign_extendhi */
    case 110:  /* minussi3_sign_extendhi */
    case 111:  /* divsi3_zero_extendqi */
    case 112:  /* udivsi3_zero_extendqi */
    case 113:  /* minussi3_zero_extendqi */
    case 114:  /* divsi3_sign_extendqi */
    case 115:  /* udivsi3_sign_extendqi */
    case 116:  /* minussi3_sign_extendqi */
    case 117:  /* smaxsi3_zero_extendhi */
    case 118:  /* sminsi3_zero_extendhi */
    case 119:  /* multsi3_zero_extendhi */
    case 120:  /* smaxsi3_sign_extendhi */
    case 121:  /* sminsi3_sign_extendhi */
    case 122:  /* multsi3_sign_extendhi */
    case 123:  /* smaxsi3_zero_extendqi */
    case 124:  /* sminsi3_zero_extendqi */
    case 125:  /* multsi3_zero_extendqi */
    case 126:  /* smaxsi3_sign_extendqi */
    case 127:  /* sminsi3_sign_extendqi */
    case 128:  /* multsi3_sign_extendqi */
    case 129:  /* comparesi3_zero_extendhi */
    case 130:  /* comparesi3_sign_extendhi */
    case 131:  /* comparesi3_zero_extendqi */
    case 132:  /* comparesi3_sign_extendqi */
    case 140:  /* bitset_in_memory */
    case 142:  /* bitinvert_in_memory */
    case 144:  /* bitclr_in_memory */
      return 33 /* 0x21 */;

    case 51:  /* divsi3 */
    case 153:  /* rx_movstr */
    case 154:  /* rx_strend */
    case 155:  /* rx_cpymem */
    case 156:  /* rx_setmem */
    case 157:  /* rx_cmpstrn */
      return 1111 /* 0x457 */;

    case 52:  /* udivsi3 */
    case 167:  /* rmpa */
      return 1010 /* 0x3f2 */;

    case 54:  /* umulsidi3 */
    case 137:  /* fix_truncsfsi2 */
    case 138:  /* floatsisf2 */
    case 169:  /* lrintsf2 */
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 22 /* 0x16 */;
        }
      else
        {
	  return 44 /* 0x2c */;
        }

    case 16:  /* exception_return */
    case 175:  /* brk */
      return 66 /* 0x42 */;

    case 150:  /* sync_lock_test_and_setsi */
    case 151:  /* xchg_memqi */
    case 152:  /* xchg_memhi */
    case 180:  /* movdi */
    case 181:  /* movdf */
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
