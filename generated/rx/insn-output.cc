/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "flags.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "memmodel.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "regs.h"
#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char *
output_14 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 485 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
	switch(GET_CODE(operands[0]))
	{
	case ORDERED:
		return "dcmpun\t%2, %1\n\tmvfdr\n\tbz\t%3";
    case UNORDERED:
		return "dcmpun\t%2, %1\n\tmvfdr\n\tbnz\t%3";
    case EQ:
		return "dcmpeq\t%2, %1\n\tmvfdr\n\tbz\t%3";
    case NE:
		return "dcmpeq\t%2, %1\n\tmvfdr\n\tbnz\t%3";
	case LT:
		return "dcmplt\t%2, %1\n\tmvfdr\n\tbz\t%3";
	case LE:
		return "dcmple\t%2, %1\n\tmvfdr\n\tbz\t%3";
	case GT:
		return "dcmplt\t%1, %2\n\tmvfdr\n\tbz\t%3";
	case GE:
		return "dcmple\t%1, %2\n\tmvfdr\n\tbz\t%3";
  case UNEQ:
		return "dcmpun\t%2, %1\n\tmvfdr\n\tbnz\t%3\n\tdcmpeq\t%2, %1\n\tmvfdr\n\tbz\t%3";
	case UNLT:
		return "dcmpun\t%2, %1\n\tmvfdr\n\tbnz\t%3\n\tdcmplt\t%2, %1\n\tmvfdr\n\tbz\t%3";
	case UNLE:
		return "dcmpun\t%2, %1\n\tmvfdr\n\tbnz\t%3\n\tdcmple\t%2, %1\n\tmvfdr\n\tbz\t%3";
	case UNGT:
		return "dcmpun\t%2, %1\n\tmvfdr\n\tbnz\t%3\n\tdcmplt\t%1, %2\n\tmvfdr\n\tbz\t%3";
	case UNGE:
		return "dcmpun\t%2, %1\n\tmvfdr\n\tbnz\t%3\n\tdcmple\t%1, %2\n\tmvfdr\n\tbz\t%3";
  case LTGT:
    return "dcmplt\t%2, %1\n\tmvfdr\n\tbz\t%3\n\tdcmplt\t%1, %2\n\tmvfdr\n\tbz\t%3";
	default:
		gcc_unreachable ();
	}
  }
}

static const char *
output_18 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 569 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{ return TARGET_PID ? (TARGET_AS100_SYNTAX ? "\n?:\tbra\t%0"
					     : "\n1:\tbra\t%0")
	                                     : "\n1:jmp\t%0";
  }
}

static const char *
output_21 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 614 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    rx_emit_stack_popm (operands, false);
    return "";
  }
}

static const char * const output_25[] = {
  "jsr\t%0",
  "bsr\t%A0",
};

static const char * const output_26[] = {
  "jsr\t%1",
  "bsr\t%A1",
};

static const char *
output_29 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 836 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_30 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 836 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_31 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 836 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_32 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 836 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 849 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{ 
	switch(which_alternative)
	{
	case 0: return "dmov.D\t%1, %0";
	case 1: return "dmov.D\t%1, %0";
	case 2: return "dmov.D\t%1, %0";
	case 3: 
	case 4:
			return "dmov.L\t%L1, %L0\n\tdmov.L\t%H1, %H0";
	case 5: 
		{
			long t[2];
      REAL_VALUE_TO_TARGET_DOUBLE (*CONST_DOUBLE_REAL_VALUE (operands[1]), t);
			t[0] = WORDS_BIG_ENDIAN? t[1] : t[0];
			/* if the lower 32 bits are != 0 */
			if(t[0] != 0)
			{
				return "dmov.L\t%L1, %L0\n\tdmov.L\t%H1, %H0";
			}
			else
			{
				return "dmov.D\t%H1, %H0";
			}
		}
		/* TODO: remove this at some point */
	case 6: if(REGNO(operands[1]) > REGNO(operands[0]))
				return "mov.L\t%L1, %L0\n\tmov.L\t%H1, %H0";
			else
				return "mov.L\t%H1, %H0\n\tmov.L\t%L1, %L0";
	}
  }
}

static const char *
output_34 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 890 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_35 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 890 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_36 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 901 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{ return rx_gen_move_template (operands, true); }
}

static const char *
output_37 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 901 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{ return rx_gen_move_template (operands, true); }
}

static const char *
output_39 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 925 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
	rx_emit_stack_pushm (operands);
    return "";
  }
}

static const char *
output_42 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 964 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    rx_emit_stack_popm (operands, true);
    return "";
  }
}

static const char *
output_54 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1336 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    if (GET_CODE (operands[2]) == EQ)
      return "stz\t%1, %0";
    else
     return "stnz\t%1, %0";
  }
}

static const char *
output_55 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1355 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    PUT_CODE (operands[2], reverse_condition (GET_CODE (operands[2])));
    return "b%B2 1f\n\tmov %1, %0\n1:";
  }
}

static const char *
output_56 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 1371 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  if (GET_CODE (operands[2]) == EQ)
    return "stnz\t%1, %0";
  else
    return "stz\t%1, %0";
}
}

static const char * const output_57[] = {
  "abs\t%0",
  "abs\t%1, %0",
};

static const char * const output_59[] = {
  "abs\t%0",
  "abs\t%1, %0",
};

static const char * const output_61[] = {
  "add\t%2, %0",
  "add\t%2, %0",
  "sub\t%N2, %0",
  "add\t%2, %0",
  "add\t%2, %0",
  "add\t%2, %0",
  "add\t%2, %0",
  "add\t%1, %0",
  "add\t%2, %1, %0",
  "add\t%2, %1, %0",
  "add\t%2, %1, %0",
  "add\t%2, %1, %0",
  "add\t%2, %1, %0",
};

static const char * const output_63[] = {
  "add\t%2, %0",
  "add\t%2, %0",
  "sub\t%N2, %0",
  "add\t%2, %0",
  "add\t%2, %0",
  "add\t%2, %0",
  "add\t%2, %0",
  "add\t%1, %0",
  "add\t%2, %1, %0",
  "add\t%2, %1, %0",
  "add\t%2, %1, %0",
  "add\t%2, %1, %0",
  "add\t%2, %1, %0",
};

static const char * const output_70[] = {
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%1, %0",
  "and\t%2, %1, %0",
};

static const char * const output_72[] = {
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%1, %0",
  "and\t%2, %1, %0",
};

static const char * const output_92[] = {
  "mul\t%2, %0",
  "mul\t%2, %0",
  "mul\t%2, %0",
  "mul\t%2, %0",
  "mul\t%2, %0",
  "mul\t%Q2, %0",
  "mul\t%1, %0",
  "mul\t%2, %1, %0",
};

static const char * const output_93[] = {
  "neg\t%0",
  "neg\t%1, %0",
};

static const char * const output_96[] = {
  "neg\t%0",
  "neg\t%1, %0",
};

static const char * const output_97[] = {
  "not\t%0",
  "not\t%1, %0",
};

static const char * const output_98[] = {
  "not\t%0",
  "not\t%1, %0",
};

static const char * const output_100[] = {
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%Q2, %0",
  "or\t%1, %0",
  "or\t%2, %1, %0",
};

static const char * const output_102[] = {
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%Q2, %0",
  "or\t%1, %0",
  "or\t%2, %1, %0",
};

static const char * const output_107[] = {
  "shar\t%2, %0",
  "shar\t%2, %0",
  "shar\t%2, %1, %0",
};

static const char * const output_108[] = {
  "shar\t%2, %0",
  "shar\t%2, %0",
  "shar\t%2, %1, %0",
};

static const char * const output_109[] = {
  "shlr\t%2, %0",
  "shlr\t%2, %0",
  "shlr\t%2, %1, %0",
};

static const char * const output_110[] = {
  "shlr\t%2, %0",
  "shlr\t%2, %0",
  "shlr\t%2, %1, %0",
};

static const char * const output_111[] = {
  "shll\t%2, %0",
  "shll\t%2, %0",
  "shll\t%2, %1, %0",
};

static const char * const output_112[] = {
  "shll\t%2, %0",
  "shll\t%2, %0",
  "shll\t%2, %1, %0",
};

static const char * const output_117[] = {
  "sub\t%2, %0",
  "sub\t%2, %0",
  "add\t%N2, %0",
  "sub\t%2, %1, %0",
};

static const char * const output_119[] = {
  "sub\t%2, %0",
  "sub\t%2, %0",
  "add\t%N2, %0",
  "sub\t%2, %1, %0",
};

static const char * const output_175[] = {
  "fadd\t%2, %0",
  "fadd\t%2, %0",
};

static const char * const output_176[] = {
  "fadd\t%2, %0",
  "fadd\t%2, %0",
  "fadd\t%1, %2, %0",
};

static const char * const output_182[] = {
  "fmul\t%2, %0",
  "fmul\t%2, %0",
};

static const char * const output_183[] = {
  "fmul\t%2, %0",
  "fmul\t%2, %0",
  "fmul\t%1, %2, %0",
};

static const char * const output_187[] = {
  "fsub\t%Q2, %0",
  "fsub\t%Q2, %0",
};

static const char * const output_188[] = {
  "fsub\t%Q2, %0",
  "fsub\t%Q2, %0",
  "fsub\t%2, %1, %0",
};

static const char *
output_222 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 3527 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  if (INTVAL (operands[2]) & 1)
    return "bset\t%1, %0";
  else
    return "bclr\t%1, %0";
}
}

static const char *
output_308 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 4875 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_359 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 5018 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
	rtx note;
	HOST_WIDE_INT val = INTVAL (operands[2]);

	/* check if dest reg is unused. only then we can replace the and with an btst
	otherwise we can replace it with an bclr see below  */
	for (note = REG_NOTES (insn); note; note = XEXP (note, 1))
	    if (REG_NOTE_KIND (note) == REG_UNUSED)
	    	if((exact_log2 (INTVAL (operands[2])) >= 0) &&
	    		(exact_log2 (INTVAL (operands[2])) <= 31) &&
	    		(REGNO (XEXP (note, 0)) == REGNO(operands[0])))
		    	{
					operands[2] = gen_rtx_CONST_INT(SImode, exact_log2 (INTVAL (operands[2])));
					return "btst %2, %0";
				}
			else if((REGNO (XEXP (note, 0)) == CC_REG) &&
						(exact_log2(0xFFFFFFFF & ~ val) >= 0) && (exact_log2(0xFFFFFFFF & ~ val) <= 31))
	    	{
				operands[2] = gen_rtx_CONST_INT(SImode, exact_log2(0xFFFFFFFF & ~ val));
				return "bclr %2, %0";
			}
	/* otherwise we don't do eny replacement  */
	return "and %2, %0";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    label_ref_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "ri",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    label_ref_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "r,Uint04,Int08,Sint16,Sint24,i",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    label_ref_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rx_zs_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "ri",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    label_ref_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rx_zs_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_constshift_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_constshift_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    label_ref_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rx_z_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "r,i",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    label_ref_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rx_fp_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "rF",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    label_ref_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rx_fp_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "r,F",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_rtsd_vector,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    rx_call_operand,
    "r,CALL_OP_SYMBOL_REF",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rx_call_operand,
    "r,CALL_OP_SYMBOL_REF",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_symbolic_call_operand,
    "Symbol",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rx_symbolic_call_operand,
    "Symbol",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,r,r,r,r,r,r,Rreg,m,Q,Q,Q,Q,r,Q",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Uint04,Int08,Sint16,Sint24,i,r,Rreg,Rd05,Rd08,m,r,r,Int08,Sint16,Sint24,i,RpdaRpid,Q",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,r,r,r,r,r,r,Rreg,m,Q,Q,Q,Q,r,Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Uint04,Int08,Sint16,Sint24,i,r,Rreg,Rd05,Rd08,m,r,r,Int08,Sint16,Sint24,i,RpdaRpid,Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,r,r,r,r,r,r,Rreg,m,Q,Q,Q,Q,r,Q",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Uint04,Int08,Sint16,Sint24,i,r,Rreg,Rd05,Rd08,m,r,r,Int08,Sint16,Sint24,i,RpdaRpid,Q",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,r,r,r,r,r,r,Rreg,m,Q,Q,Q,Q,r,Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Uint04,Int08,Sint16,Sint24,i,r,Rreg,Rd05,Rd08,m,r,r,Int08,Sint16,Sint24,i,RpdaRpid,Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=DFPUreg,DFPUreg,Q,r,DFPUreg,DFPUreg,r",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "DFPUreg,Q,DFPUreg,DFPUreg,r,DoubleC,r",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_store_multiple_vector,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_load_multiple_vector,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "ri",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_fp_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_fp_comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "rF",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    rx_z_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "ri",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    rx_z_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_constshift_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_constshift_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_z_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "i,ri,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "ri,i,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q,Q,Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "i,ri,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "ri,i,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "ri,ri,ri",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "+r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "Sint08,Sint16,Sint24,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_z_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "+r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "r,Uint04,Sint08,Sint16,Sint24,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r,r,r,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0,0,0,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "rQ,Uint04,NEGint4,Sint08,Sint16,Sint24,i,0,r,Sint08,Sint16,Sint24,i",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r,r,r,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0,0,0,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "r,Uint04,NEGint4,Sint08,Sint16,Sint24,i,0,r,Sint08,Sint16,Sint24,i",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "r,Sint08,Sint16,Sint24,i",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,Sint08,Sint16,Sint24,i",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "riQ",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "%1",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "riQ",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    E_SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r,r,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0,0,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "rQ,Uint04,Sint08,Sint16,Sint24,i,0,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0,0,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,Uint04,Sint08,Sint16,Sint24,i,0,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "r,Sint08,Sint16,Sint24,i",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "r,Sint08,Sint16,Sint24,i",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_compare_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0,0,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "r,Uint04,Sint08,Sint16,Sint24,i,0,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_shift_operand,
    "rn",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_shift_operand,
    "r,n,n",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "ri",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "r,Uint04,n,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,Uint04,n,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_compare_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_compare_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "1",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&r,&r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_compare_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "1,1",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_compare_operand,
    "r,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,Sint08,Sint16,Sint24,i,Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "r,F",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "r,F,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "r,F",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "r,F,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_compare_operand,
    "r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_compare_operand,
    "DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&DFPUreg",
    E_DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "r,Q",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&DFPUreg",
    E_DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "r,Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&DFPUreg",
    E_DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_compare_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=RXV2,RXV2",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "r,Q",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_shift_operand,
    "ri",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "+Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "ri",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "+Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "ri",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "+Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rx_bitset_operand,
    "i",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "ri",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "+Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    rx_bitclr_operand,
    "i",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_shift_operand,
    "ri",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "+r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "ri",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "+r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "+r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rshift_operator,
    "",
    E_SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_compare_operand,
    "=r,Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    rx_compare_operand,
    "=Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    rx_compare_operand,
    "=Q",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "ri",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "Uint05",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "Uint05",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "Uintz5",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_compare_operand,
    "r,Q",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "DFPUreg",
    E_DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&DFPUreg",
    E_DFmode,
    0,
    0,
    0,
    0
  },
  {
    immediate_operand,
    "i,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "r,i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "Uint04",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rmi",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+r,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "+r,Q",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "+r,Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "+r,Q",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+r,r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "+r,Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,Uint04,Int08,Sint16,Sint24,i,Q",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    rx_fp_comparison_operator,
    "",
    E_VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    rx_symbolic_call_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    rx_symbolic_call_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_speed_source_operand,
    "",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    rx_source_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_restricted_mem_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    rx_source_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    E_BLKmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    E_SImode,
    0,
    0,
    1,
    0
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data_d insn_data[] = 
{
  /* <internal>:0 */
  {
    "*placeholder_for_nothing",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:239 */
  {
    "*cbranchsi4_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1],
    4,
    4,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:257 */
  {
    "*cbranchsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[5],
    4,
    4,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:285 */
  {
    "*cmpsi_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:296 */
  {
    "cmpsi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmpsi_internal },
    &operand_data[9],
    2,
    2,
    0,
    6,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:308 */
  {
    "*cbranchsi4_tst_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[11],
    4,
    4,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:328 */
  {
    "*cbranchsi4_tst",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[15],
    4,
    4,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:349 */
  {
    "*cbranchsi4_tst_ext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[19],
    5,
    5,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:379 */
  {
    "*tstsi_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tst\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[1],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:392 */
  {
    "*tstsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "tst\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[24],
    2,
    2,
    0,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:416 */
  {
    "*cbranchsf4_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[26],
    4,
    4,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:434 */
  {
    "*cbranchsf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[30],
    4,
    4,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:452 */
  {
    "*cmpsf_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcmp\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[26],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:464 */
  {
    "*cmpsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcmp\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[34],
    2,
    2,
    0,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:476 */
  {
    "cbranchdf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_14 },
#else
    { 0, 0, output_14 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchdf4 },
    &operand_data[36],
    4,
    4,
    0,
    1,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:527 */
  {
    "*conditional_branch",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "b%B1\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[39],
    2,
    2,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:544 */
  {
    "jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bra\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_jump },
    &operand_data[39],
    1,
    1,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:554 */
  {
    "indirect_jump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "jmp\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_indirect_jump },
    &operand_data[1],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:564 */
  {
    "tablejump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_18 },
#else
    { 0, 0, output_18 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tablejump },
    &operand_data[41],
    2,
    2,
    0,
    1,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:584 */
  {
    "simple_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rts",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_simple_return },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:595 */
  {
    "deallocate_and_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rtsd\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_deallocate_and_return },
    &operand_data[43],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:607 */
  {
    "pop_and_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_21 },
#else
    { 0, 0, output_21 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pop_and_return },
    &operand_data[44],
    2,
    2,
    0,
    1,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:623 */
  {
    "fast_interrupt_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rtfi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fast_interrupt_return },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:632 */
  {
    "exception_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rte",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_exception_return },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:641 */
  {
    "naked_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "; Naked function: epilogue provided by programmer.",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_naked_return },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:670 */
  {
    "call_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_25 },
#else
    { 0, output_25, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_internal },
    &operand_data[46],
    1,
    1,
    0,
    2,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:698 */
  {
    "call_value_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_26 },
#else
    { 0, output_26, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value_internal },
    &operand_data[47],
    2,
    2,
    0,
    2,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:731 */
  {
    "sibcall_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bra\t%A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_internal },
    &operand_data[49],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:757 */
  {
    "sibcall_value_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bra\t%A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_value_internal },
    &operand_data[50],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:829 */
  {
    "*movsf_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_29 },
#else
    { 0, 0, output_29 },
#endif
    { 0 },
    &operand_data[52],
    2,
    2,
    0,
    18,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:829 */
  {
    "*movsi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_30 },
#else
    { 0, 0, output_30 },
#endif
    { 0 },
    &operand_data[54],
    2,
    2,
    0,
    18,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:829 */
  {
    "*movhi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_31 },
#else
    { 0, 0, output_31 },
#endif
    { 0 },
    &operand_data[56],
    2,
    2,
    0,
    18,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:829 */
  {
    "*movqi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_32 },
#else
    { 0, 0, output_32 },
#endif
    { 0 },
    &operand_data[58],
    2,
    2,
    0,
    18,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:845 */
  {
    "movdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdf },
    &operand_data[60],
    2,
    2,
    0,
    7,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:885 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_34 },
#else
    { 0, 0, output_34 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhisi2 },
    &operand_data[62],
    2,
    2,
    0,
    2,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:885 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_35 },
#else
    { 0, 0, output_35 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqisi2 },
    &operand_data[64],
    2,
    2,
    0,
    2,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:896 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_36 },
#else
    { 0, 0, output_36 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendhisi2 },
    &operand_data[62],
    2,
    2,
    0,
    2,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:896 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_37 },
#else
    { 0, 0, output_37 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqisi2 },
    &operand_data[64],
    2,
    2,
    0,
    2,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:907 */
  {
    "stack_push",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "push.l\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_push },
    &operand_data[1],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:919 */
  {
    "stack_pushm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_39 },
#else
    { 0, 0, output_39 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_pushm },
    &operand_data[66],
    2,
    2,
    0,
    1,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:934 */
  {
    "stack_dpushm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpushm.l\tdcmr-dcmr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_dpushm },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:945 */
  {
    "stack_pop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_pop },
    &operand_data[68],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:958 */
  {
    "stack_popm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_42 },
#else
    { 0, 0, output_42 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_popm },
    &operand_data[69],
    2,
    2,
    0,
    1,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:973 */
  {
    "stack_dpopm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dpopm.l\tdcmr-dcmr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_dpopm },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:983 */
  {
    "cstoresi4_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoresi4_mem },
    &operand_data[71],
    4,
    4,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1007 */
  {
    "cstoresi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoresi4 },
    &operand_data[75],
    4,
    4,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1031 */
  {
    "*sccc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sc%B1.L\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[71],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1041 */
  {
    "cstoresf4_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoresf4_mem },
    &operand_data[79],
    4,
    4,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1064 */
  {
    "cstoresf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cstoresf4 },
    &operand_data[83],
    4,
    4,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1108 */
  {
    "*movsicc_tst_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[87],
    6,
    6,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1138 */
  {
    "*movsicc_tst",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[93],
    6,
    6,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1168 */
  {
    "*movsicc_tstz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[99],
    7,
    7,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1207 */
  {
    "*movsicc_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[106],
    6,
    6,
    0,
    3,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1256 */
  {
    "*movsicc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[112],
    6,
    6,
    0,
    3,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1327 */
  {
    "*stcc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_54 },
#else
    { 0, 0, output_54 },
#endif
    { 0 },
    &operand_data[118],
    3,
    3,
    1,
    4,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1346 */
  {
    "*stcc_reg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_55 },
#else
    { 0, 0, output_55 },
#endif
    { 0 },
    &operand_data[121],
    3,
    3,
    1,
    6,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1363 */
  {
    "*stcc_rev",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_56 },
#else
    { 0, 0, output_56 },
#endif
    { 0 },
    &operand_data[118],
    3,
    3,
    1,
    4,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1383 */
  {
    "abssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_57 },
#else
    { 0, output_57, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_abssi2 },
    &operand_data[124],
    2,
    2,
    0,
    2,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1395 */
  {
    "absdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dabs\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_absdf2 },
    &operand_data[126],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1405 */
  {
    "*abssi2_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_59 },
#else
    { 0, output_59, 0 },
#endif
    { 0 },
    &operand_data[124],
    2,
    2,
    1,
    2,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1435 */
  {
    "addsi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3_mem },
    &operand_data[128],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1447 */
  {
    "addsi3_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_61 },
#else
    { 0, output_61, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3_internal },
    &operand_data[131],
    3,
    3,
    0,
    13,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1472 */
  {
    "*addsi3_flags_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[128],
    3,
    3,
    2,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1486 */
  {
    "*addsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_63 },
#else
    { 0, output_63, 0 },
#endif
    { 0 },
    &operand_data[134],
    3,
    3,
    2,
    13,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1524 */
  {
    "adc_internal_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc %2,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adc_internal_mem },
    &operand_data[128],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1539 */
  {
    "adc_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adc_internal },
    &operand_data[137],
    3,
    3,
    0,
    5,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1554 */
  {
    "*adc_flags_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc %2,%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[128],
    3,
    3,
    2,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1576 */
  {
    "*adc_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[140],
    3,
    3,
    2,
    5,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1650 */
  {
    "adddi3_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adddi3_internal },
    &operand_data[143],
    6,
    7,
    3,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1718 */
  {
    "andsi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi3_mem },
    &operand_data[128],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1730 */
  {
    "andsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_70 },
#else
    { 0, output_70, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi3 },
    &operand_data[150],
    3,
    3,
    0,
    8,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1765 */
  {
    "*andsi3_flags_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[128],
    3,
    3,
    2,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1779 */
  {
    "*andsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_72 },
#else
    { 0, output_72, 0 },
#endif
    { 0 },
    &operand_data[153],
    3,
    3,
    2,
    8,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1802 */
  {
    "bswapsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "revl\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bswapsi2 },
    &operand_data[144],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1812 */
  {
    "bswaphi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "revw\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bswaphi2 },
    &operand_data[156],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1821 */
  {
    "divsi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "div\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsi3_mem },
    &operand_data[158],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1833 */
  {
    "divsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "div\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsi3 },
    &operand_data[161],
    3,
    3,
    0,
    5,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1846 */
  {
    "udivsi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "divu\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivsi3_mem },
    &operand_data[158],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1859 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "divu\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivsi3 },
    &operand_data[161],
    3,
    3,
    0,
    5,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1877 */
  {
    "mulsidi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "emul\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsidi3_mem },
    &operand_data[164],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1890 */
  {
    "mulsidi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "emul\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsidi3 },
    &operand_data[167],
    3,
    3,
    0,
    5,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1908 */
  {
    "umulsidi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "emulu\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsidi3_mem },
    &operand_data[164],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1919 */
  {
    "umulsidi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "emulu\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umulsidi3 },
    &operand_data[170],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1930 */
  {
    "smaxsi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "max\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxsi3_mem },
    &operand_data[128],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1941 */
  {
    "smaxsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "max\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxsi3 },
    &operand_data[137],
    3,
    3,
    0,
    5,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1953 */
  {
    "sminsi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "min\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminsi3_mem },
    &operand_data[128],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1964 */
  {
    "sminsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "min\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminsi3 },
    &operand_data[137],
    3,
    3,
    0,
    5,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1978 */
  {
    "unsign_maxqi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movu.B\t%0, %0\n\tmax\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unsign_maxqi3_mem },
    &operand_data[173],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1989 */
  {
    "unsign_maxhi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movu.W\t%0, %0\n\tmax\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unsign_maxhi3_mem },
    &operand_data[176],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2000 */
  {
    "unsign_minhi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movu.W\t%0, %0\n\tmin\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unsign_minhi3_mem },
    &operand_data[176],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2012 */
  {
    "unsign_minqi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movu.B\t%0, %0\n\tmin\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_unsign_minqi3_mem },
    &operand_data[173],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2023 */
  {
    "mulsi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3_mem },
    &operand_data[128],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2034 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_92 },
#else
    { 0, output_92, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3 },
    &operand_data[179],
    3,
    3,
    0,
    8,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2054 */
  {
    "negsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_93 },
#else
    { 0, output_93, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negsi2 },
    &operand_data[124],
    2,
    2,
    0,
    2,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2066 */
  {
    "negdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dneg\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negdf2 },
    &operand_data[126],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2076 */
  {
    "negsf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t#-2147483648, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negsf2 },
    &operand_data[182],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2088 */
  {
    "*negsi2_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_96 },
#else
    { 0, output_96, 0 },
#endif
    { 0 },
    &operand_data[124],
    2,
    2,
    1,
    2,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2102 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_97 },
#else
    { 0, output_97, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmplsi2 },
    &operand_data[124],
    2,
    2,
    0,
    2,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2114 */
  {
    "*one_cmplsi2_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_98 },
#else
    { 0, output_98, 0 },
#endif
    { 0 },
    &operand_data[124],
    2,
    2,
    1,
    2,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2128 */
  {
    "iorsi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "\n\
   or\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorsi3_mem },
    &operand_data[128],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2141 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_100 },
#else
    { 0, output_100, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorsi3 },
    &operand_data[179],
    3,
    3,
    0,
    8,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2176 */
  {
    "*iorsi3_flags_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "\n\
  or\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[128],
    3,
    3,
    2,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2191 */
  {
    "*iorsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_102 },
#else
    { 0, output_102, 0 },
#endif
    { 0 },
    &operand_data[179],
    3,
    3,
    2,
    8,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2213 */
  {
    "rotlsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rotl\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rotlsi3 },
    &operand_data[184],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2224 */
  {
    "*rotlsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rotl\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[184],
    3,
    3,
    2,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2237 */
  {
    "rotrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rotr\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rotrsi3 },
    &operand_data[184],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2248 */
  {
    "*rotrsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rotr\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[184],
    3,
    3,
    2,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2261 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_107 },
#else
    { 0, output_107, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrsi3 },
    &operand_data[187],
    3,
    3,
    0,
    3,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2275 */
  {
    "*ashrsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_108 },
#else
    { 0, output_108, 0 },
#endif
    { 0 },
    &operand_data[187],
    3,
    3,
    2,
    3,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2291 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_109 },
#else
    { 0, output_109, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrsi3 },
    &operand_data[187],
    3,
    3,
    0,
    3,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2305 */
  {
    "*lshrsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_110 },
#else
    { 0, output_110, 0 },
#endif
    { 0 },
    &operand_data[187],
    3,
    3,
    2,
    3,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2321 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_111 },
#else
    { 0, output_111, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlsi3 },
    &operand_data[187],
    3,
    3,
    0,
    3,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2335 */
  {
    "*ashlsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_112 },
#else
    { 0, output_112, 0 },
#endif
    { 0 },
    &operand_data[187],
    3,
    3,
    2,
    3,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2352 */
  {
    "ssaddsi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddsi3_mem },
    &operand_data[190],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2372 */
  {
    "ssaddsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ssaddsi3 },
    &operand_data[193],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2392 */
  {
    "*sat",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sat\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[158],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2403 */
  {
    "subsi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "\n\
  sub\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3_mem },
    &operand_data[158],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2416 */
  {
    "subsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_117 },
#else
    { 0, output_117, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3 },
    &operand_data[196],
    3,
    3,
    0,
    4,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2434 */
  {
    "*subsi3_flags_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "\n\
  sub\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[158],
    3,
    3,
    2,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2449 */
  {
    "*subsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_119 },
#else
    { 0, output_119, 0 },
#endif
    { 0 },
    &operand_data[199],
    3,
    3,
    2,
    4,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2478 */
  {
    "sbb_internal_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sbb_internal_mem },
    &operand_data[158],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2493 */
  {
    "sbb_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sbb_internal },
    &operand_data[202],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2508 */
  {
    "*sbb_flags_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[158],
    3,
    3,
    2,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2528 */
  {
    "*sbb_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[205],
    3,
    3,
    2,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2567 */
  {
    "subdi3_internal_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subdi3_internal_mem },
    &operand_data[208],
    6,
    6,
    2,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2588 */
  {
    "subdi3_internal_mem2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subdi3_internal_mem2 },
    &operand_data[214],
    6,
    6,
    2,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2609 */
  {
    "subdi3_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subdi3_internal },
    &operand_data[220],
    6,
    6,
    2,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2630 */
  {
    "xorsi3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xorsi3_mem },
    &operand_data[128],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2643 */
  {
    "xorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xorsi3 },
    &operand_data[226],
    3,
    3,
    0,
    6,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2670 */
  {
    "*xorsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[226],
    3,
    3,
    2,
    6,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "plussi3_zero_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_plussi3_zero_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "andsi3_zero_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi3_zero_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "iorsi3_zero_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorsi3_zero_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "xorsi3_zero_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xorsi3_zero_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "plussi3_sign_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_plussi3_sign_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "andsi3_sign_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi3_sign_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "iorsi3_sign_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorsi3_sign_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "xorsi3_sign_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xorsi3_sign_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "plussi3_zero_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_plussi3_zero_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "andsi3_zero_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi3_zero_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "iorsi3_zero_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorsi3_zero_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "xorsi3_zero_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xorsi3_zero_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "plussi3_sign_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_plussi3_sign_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "andsi3_sign_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi3_sign_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "iorsi3_sign_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorsi3_sign_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
  {
    "xorsi3_sign_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xorsi3_sign_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
  {
    "divsi3_zero_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "div\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsi3_zero_extendhi },
    &operand_data[235],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
  {
    "udivsi3_zero_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "divu\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivsi3_zero_extendhi },
    &operand_data[235],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
  {
    "minussi3_zero_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_minussi3_zero_extendhi },
    &operand_data[235],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
  {
    "divsi3_sign_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "div\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsi3_sign_extendhi },
    &operand_data[235],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
  {
    "udivsi3_sign_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "divu\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivsi3_sign_extendhi },
    &operand_data[235],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
  {
    "minussi3_sign_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_minussi3_sign_extendhi },
    &operand_data[235],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
  {
    "divsi3_zero_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "div\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsi3_zero_extendqi },
    &operand_data[238],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
  {
    "udivsi3_zero_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "divu\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivsi3_zero_extendqi },
    &operand_data[238],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
  {
    "minussi3_zero_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_minussi3_zero_extendqi },
    &operand_data[238],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
  {
    "divsi3_sign_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "div\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsi3_sign_extendqi },
    &operand_data[238],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
  {
    "udivsi3_sign_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "divu\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_udivsi3_sign_extendqi },
    &operand_data[238],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
  {
    "minussi3_sign_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_minussi3_sign_extendqi },
    &operand_data[238],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
  {
    "smaxsi3_zero_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "max\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxsi3_zero_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
  {
    "sminsi3_zero_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "min\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminsi3_zero_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
  {
    "multsi3_zero_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_multsi3_zero_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
  {
    "smaxsi3_sign_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "max\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxsi3_sign_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
  {
    "sminsi3_sign_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "min\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminsi3_sign_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
  {
    "multsi3_sign_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_multsi3_sign_extendhi },
    &operand_data[229],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
  {
    "smaxsi3_zero_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "max\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxsi3_zero_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
  {
    "sminsi3_zero_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "min\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminsi3_zero_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
  {
    "multsi3_zero_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul\t%R2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_multsi3_zero_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
  {
    "smaxsi3_sign_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "max\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_smaxsi3_sign_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
  {
    "sminsi3_sign_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "min\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sminsi3_sign_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
  {
    "multsi3_sign_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_multsi3_sign_extendqi },
    &operand_data[232],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2839 */
  {
    "comparesi3_zero_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%R1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_comparesi3_zero_extendhi },
    &operand_data[241],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2839 */
  {
    "comparesi3_sign_extendhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_comparesi3_sign_extendhi },
    &operand_data[241],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2839 */
  {
    "comparesi3_zero_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%R1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_comparesi3_zero_extendqi },
    &operand_data[243],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2839 */
  {
    "comparesi3_sign_extendqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_comparesi3_sign_extendqi },
    &operand_data[243],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2852 */
  {
    "addsf3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fadd\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsf3_mem },
    &operand_data[245],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2879 */
  {
    "addsf3v1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_175 },
#else
    { 0, output_175, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsf3v1 },
    &operand_data[248],
    3,
    3,
    0,
    2,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2893 */
  {
    "addsf3v2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_176 },
#else
    { 0, output_176, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsf3v2 },
    &operand_data[251],
    3,
    3,
    0,
    3,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2910 */
  {
    "adddf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dadd\t%1, %2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adddf3 },
    &operand_data[254],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2921 */
  {
    "divdf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ddiv\t%2, %1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divdf3 },
    &operand_data[254],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2933 */
  {
    "divsf3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdiv\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsf3_mem },
    &operand_data[257],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2945 */
  {
    "divsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdiv\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_divsf3 },
    &operand_data[260],
    3,
    3,
    0,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2957 */
  {
    "mulsf3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmul\t%2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsf3_mem },
    &operand_data[245],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2984 */
  {
    "mulsf3v1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_182 },
#else
    { 0, output_182, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsf3v1 },
    &operand_data[248],
    3,
    3,
    0,
    2,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2998 */
  {
    "mulsf3v2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_183 },
#else
    { 0, output_183, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsf3v2 },
    &operand_data[251],
    3,
    3,
    0,
    3,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3013 */
  {
    "muldf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dmul\t%1, %2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_muldf3 },
    &operand_data[263],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3025 */
  {
    "subdf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsub\t%2, %1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subdf3 },
    &operand_data[263],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3037 */
  {
    "subsf3_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsub\t%Q2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsf3_mem },
    &operand_data[257],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3064 */
  {
    "subsf3v1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_187 },
#else
    { 0, output_187, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsf3v1 },
    &operand_data[260],
    3,
    3,
    0,
    2,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3078 */
  {
    "subsf3v2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_188 },
#else
    { 0, output_188, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsf3v2 },
    &operand_data[266],
    3,
    3,
    0,
    3,
    2
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3093 */
  {
    "fix_truncsfsi2_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ftoi\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsfsi2_mem },
    &operand_data[269],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3104 */
  {
    "fix_truncsfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ftoi\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsfsi2 },
    &operand_data[271],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3115 */
  {
    "fix_truncdfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dtoi\t%Q1, %2\n\tdmov.L\t%L2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdfsi2 },
    &operand_data[273],
    2,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3127 */
  {
    "fixuns_truncsfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ftou\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fixuns_truncsfsi2 },
    &operand_data[276],
    2,
    2,
    0,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3138 */
  {
    "fixuns_truncdfsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dtou\t%1, %2\n\tdmov.L\t%L2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fixuns_truncdfsi2 },
    &operand_data[278],
    2,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3150 */
  {
    "floatunssisf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "utof\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatunssisf2 },
    &operand_data[281],
    2,
    2,
    0,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3161 */
  {
    "floatunssidf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "utod\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatunssidf2 },
    &operand_data[283],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3173 */
  {
    "truncdfsf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dtof\t%1, %2\n\tdmov.L\t%L2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_truncdfsf2 },
    &operand_data[285],
    2,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3185 */
  {
    "extendsfdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "ftod\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendsfdf2 },
    &operand_data[288],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3196 */
  {
    "floatsisf2_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "itof\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatsisf2_mem },
    &operand_data[290],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3207 */
  {
    "floatsisf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "itof\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatsisf2 },
    &operand_data[292],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3218 */
  {
    "floatsidf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "itod\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatsidf2 },
    &operand_data[283],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3229 */
  {
    "sqrtsf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrt %Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sqrtsf2 },
    &operand_data[294],
    2,
    2,
    0,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3239 */
  {
    "sqrtdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dsqrt %1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sqrtdf2 },
    &operand_data[296],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3260 */
  {
    "bitset",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bset\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bitset },
    &operand_data[298],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3278 */
  {
    "*bitset",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bset\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[298],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3289 */
  {
    "bset",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bset\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bset },
    &operand_data[298],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3301 */
  {
    "bitset_in_memory",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bset\t%1, %0.B",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bitset_in_memory },
    &operand_data[301],
    2,
    2,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3314 */
  {
    "*bitset_in_memory",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bset\t%1, %0.B",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[301],
    2,
    2,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3326 */
  {
    "*bitset_in_memory2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bset\t%1, %0.B",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[303],
    2,
    2,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3338 */
  {
    "*bitset_in_memory_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bset\t%b1, %0.B",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[305],
    2,
    2,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3350 */
  {
    "bitinvert",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bnot\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bitinvert },
    &operand_data[298],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3368 */
  {
    "binvert",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bnot\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_binvert },
    &operand_data[298],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3380 */
  {
    "bnot_memory",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bnot\t%1, %0.B",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bnot_memory },
    &operand_data[301],
    2,
    2,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3392 */
  {
    "bitinvert_in_memory",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bnot\t%1, %0.B",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bitinvert_in_memory },
    &operand_data[301],
    2,
    2,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3403 */
  {
    "*bitclr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bclr\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[298],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3416 */
  {
    "bclr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bclr\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bclr },
    &operand_data[298],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3438 */
  {
    "bclr_memory",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bclr\t%1, %0.B",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bclr_memory },
    &operand_data[301],
    2,
    2,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3452 */
  {
    "bitclr_in_memory",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bclr\t%1, %0.B",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bitclr_in_memory },
    &operand_data[301],
    2,
    2,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3466 */
  {
    "*bitclr_in_memory2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bclr\t%1, %0.B",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[303],
    2,
    2,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3480 */
  {
    "*bittest",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "btst\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[24],
    2,
    2,
    0,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3494 */
  {
    "*bittest_in_memory",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "btst\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[307],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3508 */
  {
    "*bitclr_in_memory_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bclr\t%b1, %0.B",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[309],
    2,
    2,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3520 */
  {
    "*insv_imm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_222 },
#else
    { 0, 0, output_222 },
#endif
    { 0 },
    &operand_data[311],
    3,
    3,
    0,
    1,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3537 */
  {
    "rx_insv_reg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rx_insv_reg },
    &operand_data[314],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3563 */
  {
    "*insv_cond_mem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[314],
    5,
    5,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3589 */
  {
    "*insv_cond",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[319],
    5,
    5,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3615 */
  {
    "*bmcc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bm%B2\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[324],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3629 */
  {
    "*insv_cond_lt",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[327],
    4,
    4,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3687 */
  {
    "sync_lock_test_and_setsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sync_lock_test_and_setsi },
    &operand_data[331],
    3,
    3,
    1,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3722 */
  {
    "xchg_memqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg\t%1.B, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xchg_memqi },
    &operand_data[334],
    3,
    3,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3722 */
  {
    "xchg_memhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg\t%1.W, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_xchg_memhi },
    &operand_data[337],
    3,
    3,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3867 */
  {
    "rx_movstr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smovu",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rx_movstr },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3881 */
  {
    "rx_strend",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\t%1, r1\n\tmov\t#0, r2\n\tsuntil.b\n\tmov\tr1, %0\n\tsub\t#1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rx_strend },
    &operand_data[144],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3939 */
  {
    "rx_cpymem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "smovf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rx_cpymem },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3974 */
  {
    "rx_setmem",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sstr.b",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rx_setmem },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4028 */
  {
    "rx_cmpstrn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "scmpu		; Perform the string comparison\n\
   mov     #-1, %0      ; Set up -1 result (which cannot be created\n\
                        ; by the SC insn)\n\
   bnc	   ?+		; If Carry is not set skip over\n\
   scne.L  %0		; Set result based on Z flag\n\
?:\n\
",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rx_cmpstrn },
    &operand_data[340],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4060 */
  {
    "save",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "save\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_save },
    &operand_data[343],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4069 */
  {
    "rstr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rstr\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rstr },
    &operand_data[343],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4078 */
  {
    "mvfdc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvfdc\t%D1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfdc },
    &operand_data[344],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4090 */
  {
    "bfmov",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfmov\t%2, %3, %4, %1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bfmov },
    &operand_data[346],
    5,
    5,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4106 */
  {
    "bfmovz",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfmovz\t%2, %3, %4, %1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_bfmovz },
    &operand_data[346],
    5,
    5,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4119 */
  {
    "mvtdc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvtdc\t%1, %D0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvtdc },
    &operand_data[351],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4129 */
  {
    "mvfdr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvfdr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfdr },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4141 */
  {
    "emula_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "emula\t%0, %1, A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_emula_A0 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4151 */
  {
    "emula_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "emula\t%0, %1, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_emula_A1 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4161 */
  {
    "emaca_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "emaca\t%0, %1, A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_emaca_A0 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4171 */
  {
    "emaca_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "emaca\t%0, %1, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_emaca_A1 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4181 */
  {
    "emsba_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "emsba\t%0, %1, A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_emsba_A0 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4191 */
  {
    "emsba_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "emsba\t%0, %1, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_emsba_A1 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4202 */
  {
    "maclh_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "maclh\t%0, %1, A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maclh_A0 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4212 */
  {
    "maclh_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "maclh\t%0, %1, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maclh_A1 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4224 */
  {
    "machi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "machi\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_machi },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4234 */
  {
    "machi_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "machi\t%0, %1, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_machi_A1 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4246 */
  {
    "maclo",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "maclo\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maclo },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4256 */
  {
    "maclo_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "maclo\t%0, %1, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_maclo_A1 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4267 */
  {
    "mullh_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mullh\t%0, %1, A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mullh_A0 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4277 */
  {
    "mullh_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mullh\t%0, %1, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mullh_A1 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4289 */
  {
    "mulhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhi\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulhi },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4299 */
  {
    "mulhi_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mulhi\t%0, %1, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulhi_A1 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4311 */
  {
    "mullo",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mullo\t%0, %1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mullo },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4321 */
  {
    "mullo_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mullo\t%0, %1, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mullo_A1 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4332 */
  {
    "msblh_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msblh\t%0, %1, A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_msblh_A0 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4342 */
  {
    "msblh_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msblh\t%0, %1, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_msblh_A1 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4352 */
  {
    "msbhi_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msbhi\t%0, %1, A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_msbhi_A0 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4362 */
  {
    "msbhi_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msbhi\t%0, %1, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_msbhi_A1 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4372 */
  {
    "msblo_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msblo\t%0, %1, A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_msblo_A0 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4382 */
  {
    "msblo_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "msblo\t%0, %1, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_msblo_A1 },
    &operand_data[216],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4395 */
  {
    "mvfachi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvfachi\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfachi },
    &operand_data[68],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4405 */
  {
    "mvfachi_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvfachi\t%1, A0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfachi_A0 },
    &operand_data[344],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4415 */
  {
    "mvfachi_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvfachi\t%1, A1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfachi_A1 },
    &operand_data[344],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4427 */
  {
    "mvfacmi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvfacmi\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfacmi },
    &operand_data[68],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4437 */
  {
    "mvfacmi_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvfacmi\t%1, A0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfacmi_A0 },
    &operand_data[344],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4447 */
  {
    "mvfacmi_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvfacmi\t%1, A1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfacmi_A1 },
    &operand_data[344],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4457 */
  {
    "mvfaclo_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvfaclo\t%1, A0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfaclo_A0 },
    &operand_data[344],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4467 */
  {
    "mvfaclo_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvfaclo\t%1, A1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfaclo_A1 },
    &operand_data[344],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4477 */
  {
    "mvfacgu_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvfacgu\t%1, A0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfacgu_A0 },
    &operand_data[344],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4487 */
  {
    "mvfacgu_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvfacgu\t%1, A1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfacgu_A1 },
    &operand_data[344],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4499 */
  {
    "mvtachi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvtachi\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvtachi },
    &operand_data[1],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4508 */
  {
    "mvtachi_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvtachi\t%0, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvtachi_A1 },
    &operand_data[1],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4519 */
  {
    "mvtaclo",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvtaclo\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvtaclo },
    &operand_data[1],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4528 */
  {
    "mvtaclo_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvtaclo\t%0, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvtaclo_A1 },
    &operand_data[1],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4537 */
  {
    "mvtacgu_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvtacgu\t%0, A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvtacgu_A0 },
    &operand_data[1],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4546 */
  {
    "mvtacgu_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvtacgu\t%0, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvtacgu_A1 },
    &operand_data[1],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4556 */
  {
    "rdacw_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdacw\t%0, A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rdacw_A0 },
    &operand_data[89],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4565 */
  {
    "rdacw_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdacw\t%0, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rdacw_A1 },
    &operand_data[89],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4574 */
  {
    "rdacl_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdacl\t%0, A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rdacl_A0 },
    &operand_data[89],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4583 */
  {
    "rdacl_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdacl\t%0, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rdacl_A1 },
    &operand_data[89],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4593 */
  {
    "racw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "racw\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_racw },
    &operand_data[89],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4602 */
  {
    "racw_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "racw\t%0, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_racw_A1 },
    &operand_data[89],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4611 */
  {
    "racl_A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "racl\t%0, A0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_racl_A0 },
    &operand_data[89],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4620 */
  {
    "racl_A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "racl\t%0, A1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_racl_A1 },
    &operand_data[89],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4631 */
  {
    "rmpa",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmpa",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rmpa },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4645 */
  {
    "rmpa8",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmpa.B",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rmpa8 },
    &operand_data[353],
    5,
    5,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4663 */
  {
    "rmpa16",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmpa.W",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rmpa16 },
    &operand_data[353],
    5,
    5,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4680 */
  {
    "rmpa32",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmpa.L",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rmpa32 },
    &operand_data[353],
    5,
    5,
    1,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4700 */
  {
    "revw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "revw\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_revw },
    &operand_data[144],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4711 */
  {
    "lrintsf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "round\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lrintsf2 },
    &operand_data[358],
    2,
    2,
    0,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4723 */
  {
    "lrintdf2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "dround\t%1, %2\n\tdmov.L\t%L2, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lrintdf2 },
    &operand_data[360],
    2,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4739 */
  {
    "clrpsw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "clrpsw\t%F0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_clrpsw },
    &operand_data[89],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4750 */
  {
    "setpsw",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "setpsw\t%F0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_setpsw },
    &operand_data[89],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4761 */
  {
    "mvfc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvfc\t%C1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfc },
    &operand_data[344],
    2,
    2,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4774 */
  {
    "mvtc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvtc\t%1, %C0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvtc },
    &operand_data[363],
    2,
    2,
    0,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4791 */
  {
    "mvtipl",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvtipl\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvtipl },
    &operand_data[365],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4803 */
  {
    "brk",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "brk",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_brk },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4814 */
  {
    "int",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "int\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_int },
    &operand_data[89],
    1,
    1,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4824 */
  {
    "wait",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "wait",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_wait },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4841 */
  {
    "mvfcp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "; mvfcp\t%1, %0, %2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mvfcp },
    &operand_data[366],
    3,
    3,
    0,
    1,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4855 */
  {
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "nop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_nop },
    &operand_data[0],
    0,
    0,
    0,
    0,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4871 */
  {
    "movdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_308 },
#else
    { 0, 0, output_308 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdi },
    &operand_data[369],
    2,
    2,
    0,
    1,
    3
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4880 */
  {
    "exchangesf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_exchangesf },
    &operand_data[371],
    2,
    2,
    0,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4880 */
  {
    "exchangesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_exchangesi },
    &operand_data[373],
    2,
    2,
    0,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4880 */
  {
    "exchangehi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_exchangehi },
    &operand_data[375],
    2,
    2,
    0,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4880 */
  {
    "exchangeqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg\t%Q1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_exchangeqi },
    &operand_data[377],
    2,
    2,
    0,
    2,
    1
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:225 */
  {
    "cbranchsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsi4 },
    &operand_data[379],
    4,
    4,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:275 */
  {
    "cmpsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmpsi },
    &operand_data[383],
    2,
    2,
    0,
    7,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:405 */
  {
    "cbranchsf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsf4 },
    &operand_data[385],
    4,
    4,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:578 */
  {
    "return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_return },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:656 */
  {
    "call",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call },
    &operand_data[389],
    2,
    2,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:683 */
  {
    "call_value",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value },
    &operand_data[391],
    3,
    3,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:717 */
  {
    "sibcall",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall },
    &operand_data[394],
    2,
    2,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:742 */
  {
    "sibcall_value",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_value },
    &operand_data[396],
    3,
    3,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:771 */
  {
    "prologue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_prologue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:777 */
  {
    "epilogue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_epilogue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:783 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_epilogue },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:806 */
  {
    "movsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsf },
    &operand_data[399],
    2,
    2,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:806 */
  {
    "movsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsi },
    &operand_data[401],
    2,
    2,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:806 */
  {
    "movhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movhi },
    &operand_data[403],
    2,
    2,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:806 */
  {
    "movqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movqi },
    &operand_data[405],
    2,
    2,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1087 */
  {
    "movsicc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsicc },
    &operand_data[407],
    4,
    4,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1422 */
  {
    "addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3 },
    &operand_data[411],
    3,
    3,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1514 */
  {
    "addsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3_flags },
    &operand_data[414],
    3,
    3,
    2,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1631 */
  {
    "adddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adddi3 },
    &operand_data[417],
    3,
    3,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2468 */
  {
    "subsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3_flags },
    &operand_data[411],
    3,
    3,
    2,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2548 */
  {
    "subdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subdi3 },
    &operand_data[420],
    3,
    3,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2864 */
  {
    "addsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsf3 },
    &operand_data[423],
    3,
    3,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2969 */
  {
    "mulsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsf3 },
    &operand_data[423],
    3,
    3,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3049 */
  {
    "subsf3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsf3 },
    &operand_data[423],
    3,
    3,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3647 */
  {
    "insv",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insv },
    &operand_data[426],
    4,
    4,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3699 */
  {
    "atomic_exchangeqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangeqi },
    &operand_data[430],
    4,
    4,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3699 */
  {
    "atomic_exchangehi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangehi },
    &operand_data[434],
    4,
    4,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3710 */
  {
    "atomic_exchangesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangesi },
    &operand_data[438],
    4,
    4,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3734 */
  {
    "atomic_fetch_addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_addsi },
    &operand_data[442],
    4,
    4,
    2,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3734 */
  {
    "atomic_fetch_subsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_subsi },
    &operand_data[442],
    4,
    4,
    2,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3734 */
  {
    "atomic_fetch_orsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_orsi },
    &operand_data[442],
    4,
    4,
    2,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3734 */
  {
    "atomic_fetch_xorsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_xorsi },
    &operand_data[442],
    4,
    4,
    2,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3734 */
  {
    "atomic_fetch_andsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_andsi },
    &operand_data[442],
    4,
    4,
    2,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3755 */
  {
    "atomic_fetch_nandsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_nandsi },
    &operand_data[442],
    4,
    4,
    2,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3781 */
  {
    "atomic_add_fetchsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_add_fetchsi },
    &operand_data[438],
    4,
    4,
    3,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3781 */
  {
    "atomic_or_fetchsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_or_fetchsi },
    &operand_data[438],
    4,
    4,
    3,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3781 */
  {
    "atomic_xor_fetchsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_xor_fetchsi },
    &operand_data[438],
    4,
    4,
    3,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3781 */
  {
    "atomic_and_fetchsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_and_fetchsi },
    &operand_data[438],
    4,
    4,
    3,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3800 */
  {
    "atomic_sub_fetchsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_sub_fetchsi },
    &operand_data[446],
    4,
    4,
    3,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3819 */
  {
    "atomic_nand_fetchsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_nand_fetchsi },
    &operand_data[438],
    4,
    4,
    3,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3842 */
  {
    "movstr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movstr },
    &operand_data[450],
    3,
    3,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3897 */
  {
    "cpymemsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cpymemsi },
    &operand_data[451],
    4,
    4,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3954 */
  {
    "setmemsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_setmemsi },
    &operand_data[455],
    4,
    4,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3985 */
  {
    "cmpstrnsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmpstrnsi },
    &operand_data[459],
    5,
    5,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4007 */
  {
    "cmpstrsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmpstrsi },
    &operand_data[464],
    4,
    4,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4863 */
  {
    "pid_addr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pid_addr },
    &operand_data[468],
    2,
    2,
    0,
    0,
    0
  },
  /* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5011 */
  {
    "pid_addr+1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_359 },
#else
    { 0, 0, output_359 },
#endif
    { 0 },
    &operand_data[470],
    0,
    3,
    0,
    1,
    3
  },
};


const char *
get_insn_name (int code)
{
  if (code == NOOP_MOVE_INSN_CODE)
    return "NOOP_MOVE";
  else
    return insn_data[code].name;
}
