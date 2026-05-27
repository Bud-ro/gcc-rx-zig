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
output_11 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 345 "config/rx/rx.md"
{ return TARGET_PID ? (TARGET_AS100_SYNTAX ? "\n?:\tbra\t%0"
					     : "\n1:\tbra\t%0")
	                                     : "\n1:jmp\t%0";
  }
}

static const char *
output_14 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 387 "config/rx/rx.md"
{
    rx_emit_stack_popm (operands, false);
    return "";
  }
}

static const char * const output_18[] = {
  "jsr\t%0",
  "bsr\t%A0",
};

static const char * const output_19[] = {
  "jsr\t%1",
  "bsr\t%A1",
};

static const char *
output_22 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 601 "config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_23 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 601 "config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_24 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 601 "config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_25 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 601 "config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_26 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 611 "config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_27 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 611 "config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_28 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 621 "config/rx/rx.md"
{ return rx_gen_move_template (operands, true); }
}

static const char *
output_29 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 621 "config/rx/rx.md"
{ return rx_gen_move_template (operands, true); }
}

static const char *
output_31 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 643 "config/rx/rx.md"
{
    rx_emit_stack_pushm (operands);
    return "";
  }
}

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 669 "config/rx/rx.md"
{
    rx_emit_stack_popm (operands, true);
    return "";
  }
}

static const char *
output_38 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 812 "config/rx/rx.md"
{
    if (GET_CODE (operands[2]) == EQ)
      return "stz\t%1, %0";
    else
     return "stnz\t%1, %0";
  }
}

static const char *
output_39 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 830 "config/rx/rx.md"
{
    PUT_CODE (operands[2], reverse_condition (GET_CODE (operands[2])));
    return "b%B2 1f\n\tmov %1, %0\n1:";
  }
}

static const char * const output_40[] = {
  "abs\t%0",
  "abs\t%1, %0",
};

static const char * const output_41[] = {
  "abs\t%0",
  "abs\t%1, %0",
};

static const char * const output_42[] = {
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
  "add\t%Q2, %0",
};

static const char * const output_43[] = {
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
  "add\t%Q2, %0",
};

static const char * const output_47[] = {
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%1, %0",
  "and\t%2, %1, %0",
  "and\t%Q2, %0",
};

static const char * const output_48[] = {
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%2, %0",
  "and\t%1, %0",
  "and\t%2, %1, %0",
  "and\t%Q2, %0",
};

static const char * const output_63[] = {
  "mul\t%2, %0",
  "mul\t%2, %0",
  "mul\t%2, %0",
  "mul\t%2, %0",
  "mul\t%2, %0",
  "mul\t%Q2, %0",
  "mul\t%Q2, %0",
  "mul\t%1, %0",
  "mul\t%2, %1, %0",
};

static const char * const output_64[] = {
  "neg\t%0",
  "neg\t%1, %0",
};

static const char * const output_65[] = {
  "neg\t%0",
  "neg\t%1, %0",
};

static const char * const output_66[] = {
  "not\t%0",
  "not\t%1, %0",
};

static const char * const output_67[] = {
  "not\t%0",
  "not\t%1, %0",
};

static const char * const output_68[] = {
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%Q2, %0",
  "or\t%1, %0",
  "or\t%2, %1, %0",
  "or\t%Q2, %0",
};

static const char * const output_69[] = {
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%2, %0",
  "or\t%Q2, %0",
  "or\t%1, %0",
  "or\t%2, %1, %0",
  "or\t%Q2, %0",
};

static const char * const output_74[] = {
  "shar\t%2, %0",
  "shar\t%2, %0",
  "shar\t%2, %1, %0",
};

static const char * const output_75[] = {
  "shar\t%2, %0",
  "shar\t%2, %0",
  "shar\t%2, %1, %0",
};

static const char * const output_76[] = {
  "shlr\t%2, %0",
  "shlr\t%2, %0",
  "shlr\t%2, %1, %0",
};

static const char * const output_77[] = {
  "shlr\t%2, %0",
  "shlr\t%2, %0",
  "shlr\t%2, %1, %0",
};

static const char * const output_78[] = {
  "shll\t%2, %0",
  "shll\t%2, %0",
  "shll\t%2, %1, %0",
};

static const char * const output_79[] = {
  "shll\t%2, %0",
  "shll\t%2, %0",
  "shll\t%2, %1, %0",
};

static const char * const output_82[] = {
  "sub\t%2, %0",
  "sub\t%2, %0",
  "add\t%N2, %0",
  "sub\t%2, %1, %0",
  "sub\t%Q2, %0",
};

static const char * const output_83[] = {
  "sub\t%2, %0",
  "sub\t%2, %0",
  "add\t%N2, %0",
  "sub\t%2, %1, %0",
  "sub\t%Q2, %0",
};

static const char *
output_145 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2115 "config/rx/rx.md"
{
  if (INTVAL (operands[2]) & 1)
    return "bset\t%1, %0";
  else
    return "bclr\t%1, %0";
}
}

static const char *
output_180 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2863 "config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
}

static const char *
output_181 (rtx *operands ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
#line 2872 "config/rx/rx.md"
{ return rx_gen_move_template (operands, false); }
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
    rx_source_operand,
    "riQ",
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
    "r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,i,Q",
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
    rx_source_operand,
    "rFQ",
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
    "r,r,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,F,Q",
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
    "=r,r,r,r,r,r,m,Q,Q,Q,Q,r",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Int08,Sint16,Sint24,i,r,m,r,Int08,Sint16,Sint24,i,RpdaRpid",
    E_SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,r,r,m,Q,Q,Q,Q,r",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Int08,Sint16,Sint24,i,r,m,r,Int08,Sint16,Sint24,i,RpdaRpid",
    E_SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,r,r,m,Q,Q,Q,Q,r",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Int08,Sint16,Sint24,i,r,m,r,Int08,Sint16,Sint24,i,RpdaRpid",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,r,r,r,m,Q,Q,Q,Q,r",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Int08,Sint16,Sint24,i,r,m,r,Int08,Sint16,Sint24,i,RpdaRpid",
    E_QImode,
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
    rx_source_operand,
    "rFQ",
    E_SFmode,
    0,
    0,
    1,
    1
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
    rx_source_operand,
    "riQ,riQ,riQ",
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
    "=r,r,r,r,r,r,r,r,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0,0,0,r,r,r,r,r,r,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,Uint04,NEGint4,Sint08,Sint16,Sint24,i,0,r,Sint08,Sint16,Sint24,i,Q",
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
    "=r,r,r,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0,0,r,r,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,Uint04,Sint08,Sint16,Sint24,i,0,r,Q",
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
    "=r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,0,0,0",
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
    "=r,r,r,r,r,r",
    E_DImode,
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
    "=r,r",
    E_DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_compare_operand,
    "r,Q",
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
    rx_minmaxex_operand,
    "r,Sint08,Sint16,Sint24,i,Q",
    E_HImode,
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
    rx_minmaxex_operand,
    "r,Sint08,Sint16,Sint24,i,Q",
    E_QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0,0,0,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,Uint04,Sint08,Sint16,Sint24,i,Q,0,r",
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
    "=r,r,r,r,r",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,0,r,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,Uint04,n,r,Q",
    E_SImode,
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
    register_operand,
    "0,0",
    E_SImode,
    0,
    0,
    1,
    0
  },
  {
    rx_compare_operand,
    "r,Q",
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
    rx_compare_operand,
    "rQ,r",
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
    rx_compare_operand,
    "rQ,rQ",
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
    "=r,r,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,F,Q",
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
    "0,0,0",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,F,Q",
    E_SFmode,
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
    "=r,r",
    E_SFmode,
    0,
    0,
    1,
    0
  },
  {
    rx_compare_operand,
    "r,Q",
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
    rx_source_operand,
    "riQ",
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
    nonimmediate_operand,
    "=rm",
    E_DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rmi",
    E_DFmode,
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
    rx_source_operand,
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
    rx_source_operand,
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
    rx_source_operand,
    "",
    E_DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r,r",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0,0",
    E_HImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,Sint08,Sint16,Sint24,i,Q",
    E_HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r,r,r,r",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,0,0,0,0,0",
    E_QImode,
    0,
    0,
    1,
    0
  },
  {
    rx_source_operand,
    "r,Sint08,Sint16,Sint24,i,Q",
    E_QImode,
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
  /* config/rx/rx.md:172 */
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
    &operand_data[1],
    4,
    4,
    0,
    1,
    1
  },
  /* config/rx/rx.md:190 */
  {
    "*cmpsi",
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
    &operand_data[5],
    2,
    2,
    0,
    7,
    1
  },
  /* config/rx/rx.md:201 */
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
    &operand_data[7],
    4,
    4,
    0,
    1,
    1
  },
  /* config/rx/rx.md:222 */
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
    &operand_data[11],
    5,
    5,
    0,
    1,
    1
  },
  /* config/rx/rx.md:252 */
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
    &operand_data[16],
    2,
    2,
    0,
    3,
    1
  },
  /* config/rx/rx.md:275 */
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
    &operand_data[18],
    4,
    4,
    0,
    1,
    1
  },
  /* config/rx/rx.md:293 */
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
    &operand_data[22],
    2,
    2,
    0,
    3,
    1
  },
  /* config/rx/rx.md:306 */
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
    &operand_data[24],
    2,
    2,
    0,
    0,
    1
  },
  /* config/rx/rx.md:322 */
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
    &operand_data[24],
    1,
    1,
    0,
    0,
    1
  },
  /* config/rx/rx.md:331 */
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
  /* config/rx/rx.md:340 */
  {
    "tablejump",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_11 },
#else
    { 0, 0, output_11 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_tablejump },
    &operand_data[26],
    2,
    2,
    0,
    1,
    3
  },
  /* config/rx/rx.md:359 */
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
  /* config/rx/rx.md:369 */
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
    &operand_data[28],
    1,
    1,
    0,
    1,
    1
  },
  /* config/rx/rx.md:380 */
  {
    "pop_and_return",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_14 },
#else
    { 0, 0, output_14 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pop_and_return },
    &operand_data[29],
    2,
    2,
    0,
    1,
    3
  },
  /* config/rx/rx.md:395 */
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
  /* config/rx/rx.md:403 */
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
  /* config/rx/rx.md:411 */
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
  /* config/rx/rx.md:440 */
  {
    "call_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_18 },
#else
    { 0, output_18, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_internal },
    &operand_data[31],
    1,
    1,
    0,
    2,
    2
  },
  /* config/rx/rx.md:467 */
  {
    "call_value_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_19 },
#else
    { 0, output_19, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value_internal },
    &operand_data[32],
    2,
    2,
    0,
    2,
    2
  },
  /* config/rx/rx.md:499 */
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
    &operand_data[34],
    1,
    1,
    0,
    1,
    1
  },
  /* config/rx/rx.md:524 */
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
    &operand_data[35],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:595 */
  {
    "*movsf_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_22 },
#else
    { 0, 0, output_22 },
#endif
    { 0 },
    &operand_data[37],
    2,
    2,
    0,
    12,
    3
  },
  /* config/rx/rx.md:595 */
  {
    "*movsi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_23 },
#else
    { 0, 0, output_23 },
#endif
    { 0 },
    &operand_data[39],
    2,
    2,
    0,
    12,
    3
  },
  /* config/rx/rx.md:595 */
  {
    "*movhi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_24 },
#else
    { 0, 0, output_24 },
#endif
    { 0 },
    &operand_data[41],
    2,
    2,
    0,
    12,
    3
  },
  /* config/rx/rx.md:595 */
  {
    "*movqi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_25 },
#else
    { 0, 0, output_25 },
#endif
    { 0 },
    &operand_data[43],
    2,
    2,
    0,
    12,
    3
  },
  /* config/rx/rx.md:606 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_26 },
#else
    { 0, 0, output_26 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhisi2 },
    &operand_data[45],
    2,
    2,
    0,
    2,
    3
  },
  /* config/rx/rx.md:606 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_27 },
#else
    { 0, 0, output_27 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqisi2 },
    &operand_data[47],
    2,
    2,
    0,
    2,
    3
  },
  /* config/rx/rx.md:616 */
  {
    "zero_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_28 },
#else
    { 0, 0, output_28 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendhisi2 },
    &operand_data[45],
    2,
    2,
    0,
    2,
    3
  },
  /* config/rx/rx.md:616 */
  {
    "zero_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_29 },
#else
    { 0, 0, output_29 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqisi2 },
    &operand_data[47],
    2,
    2,
    0,
    2,
    3
  },
  /* config/rx/rx.md:626 */
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
  /* config/rx/rx.md:637 */
  {
    "stack_pushm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_31 },
#else
    { 0, 0, output_31 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_pushm },
    &operand_data[49],
    2,
    2,
    0,
    1,
    3
  },
  /* config/rx/rx.md:651 */
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
    &operand_data[51],
    1,
    1,
    0,
    1,
    1
  },
  /* config/rx/rx.md:663 */
  {
    "stack_popm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_stack_popm },
    &operand_data[52],
    2,
    2,
    0,
    1,
    3
  },
  /* config/rx/rx.md:677 */
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
    &operand_data[54],
    4,
    4,
    0,
    1,
    1
  },
  /* config/rx/rx.md:701 */
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
    &operand_data[54],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:710 */
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
    &operand_data[58],
    4,
    4,
    0,
    1,
    1
  },
  /* config/rx/rx.md:754 */
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
    &operand_data[62],
    6,
    6,
    0,
    3,
    1
  },
  /* config/rx/rx.md:803 */
  {
    "*stcc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_38 },
#else
    { 0, 0, output_38 },
#endif
    { 0 },
    &operand_data[68],
    3,
    3,
    1,
    4,
    3
  },
  /* config/rx/rx.md:821 */
  {
    "*stcc_reg",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_39 },
#else
    { 0, 0, output_39 },
#endif
    { 0 },
    &operand_data[71],
    3,
    3,
    1,
    6,
    3
  },
  /* config/rx/rx.md:839 */
  {
    "abssi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_40 },
#else
    { 0, output_40, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_abssi2 },
    &operand_data[74],
    2,
    2,
    0,
    2,
    2
  },
  /* config/rx/rx.md:850 */
  {
    "*abssi2_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_41 },
#else
    { 0, output_41, 0 },
#endif
    { 0 },
    &operand_data[74],
    2,
    2,
    1,
    2,
    2
  },
  /* config/rx/rx.md:879 */
  {
    "addsi3_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_42 },
#else
    { 0, output_42, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3_internal },
    &operand_data[76],
    3,
    3,
    0,
    14,
    2
  },
  /* config/rx/rx.md:904 */
  {
    "*addsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_43 },
#else
    { 0, output_43, 0 },
#endif
    { 0 },
    &operand_data[76],
    3,
    3,
    2,
    14,
    2
  },
  /* config/rx/rx.md:942 */
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
    &operand_data[79],
    3,
    3,
    0,
    6,
    1
  },
  /* config/rx/rx.md:956 */
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
    &operand_data[79],
    3,
    3,
    2,
    6,
    1
  },
  /* config/rx/rx.md:1029 */
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
    &operand_data[82],
    6,
    7,
    3,
    1,
    1
  },
  /* config/rx/rx.md:1097 */
  {
    "andsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_47 },
#else
    { 0, output_47, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_andsi3 },
    &operand_data[89],
    3,
    3,
    0,
    9,
    2
  },
  /* config/rx/rx.md:1132 */
  {
    "*andsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_48 },
#else
    { 0, output_48, 0 },
#endif
    { 0 },
    &operand_data[89],
    3,
    3,
    2,
    9,
    2
  },
  /* config/rx/rx.md:1155 */
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
    &operand_data[83],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1164 */
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
    &operand_data[92],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1172 */
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
    &operand_data[94],
    3,
    3,
    0,
    6,
    1
  },
  /* config/rx/rx.md:1184 */
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
    &operand_data[94],
    3,
    3,
    0,
    6,
    1
  },
  /* config/rx/rx.md:1201 */
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
    &operand_data[97],
    3,
    3,
    0,
    6,
    1
  },
  /* config/rx/rx.md:1218 */
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
    &operand_data[100],
    3,
    3,
    0,
    2,
    1
  },
  /* config/rx/rx.md:1228 */
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
    &operand_data[79],
    3,
    3,
    0,
    6,
    1
  },
  /* config/rx/rx.md:1239 */
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
    &operand_data[79],
    3,
    3,
    0,
    6,
    1
  },
  /* config/rx/rx.md:1250 */
  {
    "umaxhi3_u",
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
    { (insn_gen_fn::stored_funcptr) gen_umaxhi3_u },
    &operand_data[103],
    3,
    3,
    0,
    6,
    1
  },
  /* config/rx/rx.md:1250 */
  {
    "umaxqi3_u",
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
    { (insn_gen_fn::stored_funcptr) gen_umaxqi3_u },
    &operand_data[106],
    3,
    3,
    0,
    6,
    1
  },
  /* config/rx/rx.md:1261 */
  {
    "uminhi3_ur",
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
    { (insn_gen_fn::stored_funcptr) gen_uminhi3_ur },
    &operand_data[103],
    3,
    3,
    0,
    6,
    1
  },
  /* config/rx/rx.md:1261 */
  {
    "uminqi3_ur",
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
    { (insn_gen_fn::stored_funcptr) gen_uminqi3_ur },
    &operand_data[106],
    3,
    3,
    0,
    6,
    1
  },
  /* config/rx/rx.md:1272 */
  {
    "umaxhi3_ur",
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
    { (insn_gen_fn::stored_funcptr) gen_umaxhi3_ur },
    &operand_data[103],
    3,
    3,
    0,
    6,
    1
  },
  /* config/rx/rx.md:1272 */
  {
    "umaxqi3_ur",
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
    { (insn_gen_fn::stored_funcptr) gen_umaxqi3_ur },
    &operand_data[106],
    3,
    3,
    0,
    6,
    1
  },
  /* config/rx/rx.md:1331 */
  {
    "mulsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_63 },
#else
    { 0, output_63, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_mulsi3 },
    &operand_data[109],
    3,
    3,
    0,
    9,
    2
  },
  /* config/rx/rx.md:1351 */
  {
    "negsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_64 },
#else
    { 0, output_64, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_negsi2 },
    &operand_data[74],
    2,
    2,
    0,
    2,
    2
  },
  /* config/rx/rx.md:1364 */
  {
    "*negsi2_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_65 },
#else
    { 0, output_65, 0 },
#endif
    { 0 },
    &operand_data[74],
    2,
    2,
    1,
    2,
    2
  },
  /* config/rx/rx.md:1377 */
  {
    "one_cmplsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_66 },
#else
    { 0, output_66, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_one_cmplsi2 },
    &operand_data[74],
    2,
    2,
    0,
    2,
    2
  },
  /* config/rx/rx.md:1388 */
  {
    "*one_cmplsi2_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_67 },
#else
    { 0, output_67, 0 },
#endif
    { 0 },
    &operand_data[74],
    2,
    2,
    1,
    2,
    2
  },
  /* config/rx/rx.md:1401 */
  {
    "iorsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_68 },
#else
    { 0, output_68, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_iorsi3 },
    &operand_data[89],
    3,
    3,
    0,
    9,
    2
  },
  /* config/rx/rx.md:1436 */
  {
    "*iorsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_69 },
#else
    { 0, output_69, 0 },
#endif
    { 0 },
    &operand_data[89],
    3,
    3,
    2,
    9,
    2
  },
  /* config/rx/rx.md:1458 */
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
    &operand_data[112],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1468 */
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
    &operand_data[112],
    3,
    3,
    2,
    1,
    1
  },
  /* config/rx/rx.md:1480 */
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
    &operand_data[112],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1490 */
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
    &operand_data[112],
    3,
    3,
    2,
    1,
    1
  },
  /* config/rx/rx.md:1502 */
  {
    "ashrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_74 },
#else
    { 0, output_74, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashrsi3 },
    &operand_data[115],
    3,
    3,
    0,
    3,
    2
  },
  /* config/rx/rx.md:1515 */
  {
    "*ashrsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_75 },
#else
    { 0, output_75, 0 },
#endif
    { 0 },
    &operand_data[115],
    3,
    3,
    2,
    3,
    2
  },
  /* config/rx/rx.md:1530 */
  {
    "lshrsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_76 },
#else
    { 0, output_76, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_lshrsi3 },
    &operand_data[115],
    3,
    3,
    0,
    3,
    2
  },
  /* config/rx/rx.md:1543 */
  {
    "*lshrsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_77 },
#else
    { 0, output_77, 0 },
#endif
    { 0 },
    &operand_data[115],
    3,
    3,
    2,
    3,
    2
  },
  /* config/rx/rx.md:1558 */
  {
    "ashlsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_78 },
#else
    { 0, output_78, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_ashlsi3 },
    &operand_data[115],
    3,
    3,
    0,
    3,
    2
  },
  /* config/rx/rx.md:1571 */
  {
    "*ashlsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_79 },
#else
    { 0, output_79, 0 },
#endif
    { 0 },
    &operand_data[115],
    3,
    3,
    2,
    3,
    2
  },
  /* config/rx/rx.md:1587 */
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
    &operand_data[83],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1607 */
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
    &operand_data[112],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1617 */
  {
    "subsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_82 },
#else
    { 0, output_82, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3 },
    &operand_data[118],
    3,
    3,
    0,
    5,
    2
  },
  /* config/rx/rx.md:1635 */
  {
    "*subsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_83 },
#else
    { 0, output_83, 0 },
#endif
    { 0 },
    &operand_data[118],
    3,
    3,
    2,
    5,
    2
  },
  /* config/rx/rx.md:1664 */
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
    &operand_data[121],
    3,
    3,
    0,
    2,
    1
  },
  /* config/rx/rx.md:1678 */
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
    &operand_data[121],
    3,
    3,
    2,
    2,
    1
  },
  /* config/rx/rx.md:1716 */
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
    &operand_data[124],
    6,
    6,
    2,
    2,
    1
  },
  /* config/rx/rx.md:1737 */
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
    &operand_data[79],
    3,
    3,
    0,
    6,
    1
  },
  /* config/rx/rx.md:1764 */
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
    &operand_data[79],
    3,
    3,
    2,
    6,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1857 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1868 */
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
    &operand_data[136],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1868 */
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
    &operand_data[136],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1868 */
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
    &operand_data[136],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1868 */
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
    &operand_data[136],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1868 */
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
    &operand_data[136],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1868 */
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
    &operand_data[136],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1868 */
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
    &operand_data[139],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1868 */
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
    &operand_data[139],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1868 */
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
    &operand_data[139],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1868 */
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
    &operand_data[139],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1868 */
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
    &operand_data[139],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1868 */
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
    &operand_data[139],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1879 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1879 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1879 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1879 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1879 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1879 */
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
    &operand_data[130],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1879 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1879 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1879 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1879 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1879 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1879 */
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
    &operand_data[133],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1930 */
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
    &operand_data[142],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1930 */
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
    &operand_data[142],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1930 */
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
    &operand_data[144],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1930 */
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
    &operand_data[144],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:1942 */
  {
    "addsf3",
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
    { (insn_gen_fn::stored_funcptr) gen_addsf3 },
    &operand_data[146],
    3,
    3,
    0,
    3,
    1
  },
  /* config/rx/rx.md:1953 */
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
    &operand_data[149],
    3,
    3,
    0,
    3,
    1
  },
  /* config/rx/rx.md:1964 */
  {
    "mulsf3",
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
    { (insn_gen_fn::stored_funcptr) gen_mulsf3 },
    &operand_data[146],
    3,
    3,
    0,
    3,
    1
  },
  /* config/rx/rx.md:1975 */
  {
    "subsf3",
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
    { (insn_gen_fn::stored_funcptr) gen_subsf3 },
    &operand_data[149],
    3,
    3,
    0,
    3,
    1
  },
  /* config/rx/rx.md:1986 */
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
    &operand_data[152],
    2,
    2,
    0,
    2,
    1
  },
  /* config/rx/rx.md:1996 */
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
    &operand_data[154],
    2,
    2,
    0,
    2,
    1
  },
  /* config/rx/rx.md:2017 */
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
    &operand_data[156],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2035 */
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
    &operand_data[159],
    2,
    2,
    1,
    1,
    1
  },
  /* config/rx/rx.md:2046 */
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
    &operand_data[156],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2064 */
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
    &operand_data[159],
    2,
    2,
    1,
    1,
    1
  },
  /* config/rx/rx.md:2075 */
  {
    "bitclr",
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
    { (insn_gen_fn::stored_funcptr) gen_bitclr },
    &operand_data[156],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2095 */
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
    &operand_data[159],
    2,
    2,
    1,
    1,
    1
  },
  /* config/rx/rx.md:2108 */
  {
    "*insv_imm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_145 },
#else
    { 0, 0, output_145 },
#endif
    { 0 },
    &operand_data[161],
    3,
    3,
    0,
    1,
    3
  },
  /* config/rx/rx.md:2124 */
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
    &operand_data[164],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2150 */
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
    &operand_data[164],
    5,
    5,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2176 */
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
    &operand_data[169],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2189 */
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
    &operand_data[172],
    4,
    4,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2245 */
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
    &operand_data[176],
    3,
    3,
    1,
    2,
    1
  },
  /* config/rx/rx.md:2279 */
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
    &operand_data[179],
    3,
    3,
    1,
    1,
    1
  },
  /* config/rx/rx.md:2279 */
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
    &operand_data[182],
    3,
    3,
    1,
    1,
    1
  },
  /* config/rx/rx.md:2424 */
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
  /* config/rx/rx.md:2437 */
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
    &operand_data[83],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2494 */
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
  /* config/rx/rx.md:2528 */
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
  /* config/rx/rx.md:2582 */
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
?:              	\n\
",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_rx_cmpstrn },
    &operand_data[185],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2616 */
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
    &operand_data[188],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2626 */
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
    &operand_data[188],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2636 */
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
    &operand_data[188],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2646 */
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
    &operand_data[188],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2656 */
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
    &operand_data[51],
    1,
    1,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2666 */
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
    &operand_data[51],
    1,
    1,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2676 */
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
  /* config/rx/rx.md:2685 */
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
  /* config/rx/rx.md:2694 */
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
    &operand_data[190],
    1,
    1,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2703 */
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
  /* config/rx/rx.md:2719 */
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
    &operand_data[83],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2729 */
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
    &operand_data[152],
    2,
    2,
    0,
    2,
    1
  },
  /* config/rx/rx.md:2743 */
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
    &operand_data[190],
    1,
    1,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2753 */
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
    &operand_data[190],
    1,
    1,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2763 */
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
    &operand_data[191],
    2,
    2,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2775 */
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
    &operand_data[193],
    2,
    2,
    0,
    2,
    1
  },
  /* config/rx/rx.md:2786 */
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
    &operand_data[195],
    1,
    1,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2797 */
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
  /* config/rx/rx.md:2807 */
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
    &operand_data[190],
    1,
    1,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2816 */
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
  /* config/rx/rx.md:2832 */
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
    &operand_data[196],
    3,
    3,
    0,
    1,
    1
  },
  /* config/rx/rx.md:2845 */
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
  /* config/rx/rx.md:2859 */
  {
    "movdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_180 },
#else
    { 0, 0, output_180 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdi },
    &operand_data[199],
    2,
    2,
    0,
    1,
    3
  },
  /* config/rx/rx.md:2868 */
  {
    "movdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_181 },
#else
    { 0, 0, output_181 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movdf },
    &operand_data[201],
    2,
    2,
    0,
    1,
    3
  },
  /* config/rx/rx.md:161 */
  {
    "cbranchsi4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsi4 },
    &operand_data[203],
    4,
    4,
    0,
    0,
    0
  },
  /* config/rx/rx.md:264 */
  {
    "cbranchsf4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cbranchsf4 },
    &operand_data[207],
    4,
    4,
    0,
    0,
    0
  },
  /* config/rx/rx.md:353 */
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
  /* config/rx/rx.md:426 */
  {
    "call",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call },
    &operand_data[211],
    2,
    2,
    0,
    0,
    0
  },
  /* config/rx/rx.md:452 */
  {
    "call_value",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_call_value },
    &operand_data[213],
    3,
    3,
    0,
    0,
    0
  },
  /* config/rx/rx.md:485 */
  {
    "sibcall",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall },
    &operand_data[216],
    2,
    2,
    0,
    0,
    0
  },
  /* config/rx/rx.md:509 */
  {
    "sibcall_value",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_sibcall_value },
    &operand_data[218],
    3,
    3,
    0,
    0,
    0
  },
  /* config/rx/rx.md:537 */
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
  /* config/rx/rx.md:543 */
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
  /* config/rx/rx.md:549 */
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
  /* config/rx/rx.md:572 */
  {
    "movsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsf },
    &operand_data[221],
    2,
    2,
    0,
    0,
    0
  },
  /* config/rx/rx.md:572 */
  {
    "movsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsi },
    &operand_data[223],
    2,
    2,
    0,
    0,
    0
  },
  /* config/rx/rx.md:572 */
  {
    "movhi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movhi },
    &operand_data[225],
    2,
    2,
    0,
    0,
    0
  },
  /* config/rx/rx.md:572 */
  {
    "movqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movqi },
    &operand_data[227],
    2,
    2,
    0,
    0,
    0
  },
  /* config/rx/rx.md:733 */
  {
    "movsicc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movsicc },
    &operand_data[229],
    4,
    4,
    0,
    0,
    0
  },
  /* config/rx/rx.md:866 */
  {
    "addsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3 },
    &operand_data[233],
    3,
    3,
    0,
    0,
    0
  },
  /* config/rx/rx.md:932 */
  {
    "addsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi3_flags },
    &operand_data[233],
    3,
    3,
    2,
    0,
    0
  },
  /* config/rx/rx.md:1010 */
  {
    "adddi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adddi3 },
    &operand_data[236],
    3,
    3,
    0,
    0,
    0
  },
  /* config/rx/rx.md:1283 */
  {
    "umaxhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaxhi3 },
    &operand_data[239],
    3,
    3,
    4,
    6,
    0
  },
  /* config/rx/rx.md:1283 */
  {
    "umaxqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_umaxqi3 },
    &operand_data[242],
    3,
    3,
    4,
    6,
    0
  },
  /* config/rx/rx.md:1307 */
  {
    "uminhi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uminhi3 },
    &operand_data[239],
    3,
    3,
    4,
    6,
    0
  },
  /* config/rx/rx.md:1307 */
  {
    "uminqi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_uminqi3 },
    &operand_data[242],
    3,
    3,
    4,
    6,
    0
  },
  /* config/rx/rx.md:1654 */
  {
    "subsi3_flags",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subsi3_flags },
    &operand_data[233],
    3,
    3,
    2,
    0,
    0
  },
  /* config/rx/rx.md:1697 */
  {
    "subdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_subdi3 },
    &operand_data[245],
    3,
    3,
    0,
    0,
    0
  },
  /* config/rx/rx.md:2207 */
  {
    "insv",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_insv },
    &operand_data[248],
    4,
    4,
    0,
    0,
    0
  },
  /* config/rx/rx.md:2256 */
  {
    "atomic_exchangeqi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangeqi },
    &operand_data[252],
    4,
    4,
    0,
    0,
    0
  },
  /* config/rx/rx.md:2256 */
  {
    "atomic_exchangehi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangehi },
    &operand_data[256],
    4,
    4,
    0,
    0,
    0
  },
  /* config/rx/rx.md:2267 */
  {
    "atomic_exchangesi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_exchangesi },
    &operand_data[260],
    4,
    4,
    0,
    0,
    0
  },
  /* config/rx/rx.md:2291 */
  {
    "atomic_fetch_addsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_addsi },
    &operand_data[264],
    4,
    4,
    2,
    0,
    0
  },
  /* config/rx/rx.md:2291 */
  {
    "atomic_fetch_subsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_subsi },
    &operand_data[264],
    4,
    4,
    2,
    0,
    0
  },
  /* config/rx/rx.md:2291 */
  {
    "atomic_fetch_orsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_orsi },
    &operand_data[264],
    4,
    4,
    2,
    0,
    0
  },
  /* config/rx/rx.md:2291 */
  {
    "atomic_fetch_xorsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_xorsi },
    &operand_data[264],
    4,
    4,
    2,
    0,
    0
  },
  /* config/rx/rx.md:2291 */
  {
    "atomic_fetch_andsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_andsi },
    &operand_data[264],
    4,
    4,
    2,
    0,
    0
  },
  /* config/rx/rx.md:2312 */
  {
    "atomic_fetch_nandsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_fetch_nandsi },
    &operand_data[264],
    4,
    4,
    2,
    0,
    0
  },
  /* config/rx/rx.md:2338 */
  {
    "atomic_add_fetchsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_add_fetchsi },
    &operand_data[260],
    4,
    4,
    3,
    0,
    0
  },
  /* config/rx/rx.md:2338 */
  {
    "atomic_or_fetchsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_or_fetchsi },
    &operand_data[260],
    4,
    4,
    3,
    0,
    0
  },
  /* config/rx/rx.md:2338 */
  {
    "atomic_xor_fetchsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_xor_fetchsi },
    &operand_data[260],
    4,
    4,
    3,
    0,
    0
  },
  /* config/rx/rx.md:2338 */
  {
    "atomic_and_fetchsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_and_fetchsi },
    &operand_data[260],
    4,
    4,
    3,
    0,
    0
  },
  /* config/rx/rx.md:2357 */
  {
    "atomic_sub_fetchsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_sub_fetchsi },
    &operand_data[268],
    4,
    4,
    3,
    0,
    0
  },
  /* config/rx/rx.md:2376 */
  {
    "atomic_nand_fetchsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_atomic_nand_fetchsi },
    &operand_data[260],
    4,
    4,
    3,
    0,
    0
  },
  /* config/rx/rx.md:2399 */
  {
    "movstr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_movstr },
    &operand_data[272],
    3,
    3,
    0,
    0,
    0
  },
  /* config/rx/rx.md:2452 */
  {
    "cpymemsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cpymemsi },
    &operand_data[273],
    4,
    4,
    0,
    0,
    0
  },
  /* config/rx/rx.md:2508 */
  {
    "setmemsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_setmemsi },
    &operand_data[277],
    4,
    4,
    0,
    0,
    0
  },
  /* config/rx/rx.md:2539 */
  {
    "cmpstrnsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmpstrnsi },
    &operand_data[281],
    5,
    5,
    0,
    0,
    0
  },
  /* config/rx/rx.md:2561 */
  {
    "cmpstrsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_cmpstrsi },
    &operand_data[286],
    4,
    4,
    0,
    0,
    0
  },
  /* config/rx/rx.md:2852 */
  {
    "pid_addr",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_pid_addr },
    &operand_data[290],
    2,
    2,
    0,
    0,
    0
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
