/* Generated automatically by the program `genrecog' from the target
   machine description file.  */

#define IN_TARGET_CODE 1

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "rtl.h"
#include "memmodel.h"
#include "tm_p.h"
#include "emit-rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "tm-constrs.h"



/* `recog' contains a decision tree that recognizes whether the rtx
   X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.  If the rtx is valid, recog
   returns a nonnegative number which is the insn code number for the
   pattern that matched.  This is the same as the order in the machine
   description of the entry that matched.  This number can be used as an
   index into `insn_data' and other tables.

   The third parameter to recog is an optional pointer to an int.  If
   present, recog will accept a pattern if it matches except for missing
   CLOBBER expressions at the end.  In that case, the value pointed to by
   the optional pointer will be set to the number of CLOBBERs that need
   to be added (it should be initialized to zero by the caller).  If it
   is set nonzero, the caller should allocate a PARALLEL of the
   appropriate size, copy the initial entries, and call add_clobbers
   (found in insn-emit.cc) to fill in the CLOBBERs.


   The function split_insns returns 0 if the rtl could not
   be split or the split rtl as an INSN list if it can be.

   The function peephole2_insns returns 0 if the rtl could not
   be matched. If there was a match, the new rtl is returned in an INSN list,
   and LAST_INSN will point to the last recognized insn in the old sequence.
*/


extern rtx_insn *gen_split_1 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_2 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_3 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_4 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_5 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_6 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_7 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_8 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_9 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_10 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_11 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_12 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_13 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_14 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_15 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_16 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_1 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_2 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_17 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_18 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_19 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_20 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_21 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_22 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_23 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_24 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_25 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_3 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_4 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_5 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_6 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_7 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_8 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_9 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_10 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_11 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_12 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_13 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_14 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_15 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_16 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_17 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_18 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_19 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_20 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_21 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_22 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_23 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_24 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_25 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_26 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_27 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_28 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_29 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_30 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_31 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_32 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_33 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_34 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_35 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_36 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_37 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_38 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_39 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_40 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_41 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_42 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_43 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_44 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_45 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_46 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_47 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_48 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_49 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_50 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_51 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_52 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_53 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_54 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_55 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_56 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_57 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_58 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_59 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_60 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_61 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_62 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_63 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_64 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_65 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_66 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_67 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_68 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_69 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_70 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_71 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_72 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_73 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_74 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_75 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_76 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_77 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_78 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_79 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_80 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_26 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_27 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_28 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_29 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_30 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_31 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_32 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_81 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_82 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_83 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_84 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_85 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_86 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_87 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_88 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_89 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_90 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_91 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_92 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_93 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_94 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_95 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_96 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_97 (rtx_insn *, rtx *);




static int
pattern0 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[1]))
    {
    case E_HImode:
      if (!nonimmediate_operand (operands[1], E_HImode))
        return -1;
      return 0;

    case E_QImode:
      if (!nonimmediate_operand (operands[1], E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
pattern1 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  switch (GET_MODE (operands[2]))
    {
    case E_HImode:
      if (!rx_restricted_mem_operand (operands[2], E_HImode))
        return -1;
      return 0;

    case E_QImode:
      if (!rx_restricted_mem_operand (operands[2], E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
pattern2 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x5 = XEXP (x2, 1);
  switch (GET_CODE (x5))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      operands[2] = x5;
      return 0;

    case ZERO_EXTEND:
      res = pattern1 (x5);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case SIGN_EXTEND:
      res = pattern1 (x5);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    default:
      return -1;
    }
}

static int
pattern3 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  return 0;
}

static int
pattern4 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  if (!rx_shift_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

static int
pattern5 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[1]))
    {
    case E_SFmode:
      return 0;

    case E_DFmode:
      return 1;

    default:
      return -1;
    }
}

static int
pattern6 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[0]))
    {
    case E_SFmode:
      if (!register_operand (operands[0], E_SFmode)
          || GET_MODE (x3) != E_SFmode)
        return -1;
      return 0;

    case E_DFmode:
      if (!register_operand (operands[0], E_DFmode)
          || GET_MODE (x3) != E_DFmode
          || !general_operand (operands[1], i1))
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
pattern7 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != PLUS
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != PLUS
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != PLUS
      || GET_MODE (x6) != E_SImode)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != LTU
      || GET_MODE (x7) != E_SImode)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != PLUS
      || GET_MODE (x8) != E_SImode)
    return -1;
  x9 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x9) != CLOBBER)
    return -1;
  x10 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x10) != CLOBBER)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 48
      || GET_MODE (x11) != E_CCmode)
    return -1;
  x12 = XEXP (x2, 0);
  operands[0] = x12;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x13 = XEXP (x3, 0);
  operands[2] = x13;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  x14 = XEXP (x3, 1);
  operands[3] = x14;
  if (!rx_source_operand (operands[3], E_SImode))
    return -1;
  x15 = XEXP (x4, 0);
  operands[1] = x15;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x16 = XEXP (x6, 1);
  operands[4] = x16;
  if (!register_operand (operands[4], E_SImode))
    return -1;
  x17 = XEXP (x5, 1);
  operands[5] = x17;
  if (!rx_source_operand (operands[5], E_SImode))
    return -1;
  x18 = XEXP (x9, 0);
  operands[6] = x18;
  if (!scratch_operand (operands[6], E_SImode))
    return -1;
  x19 = XEXP (x8, 0);
  if (!rtx_equal_p (x19, operands[2]))
    return -1;
  x20 = XEXP (x8, 1);
  if (!rtx_equal_p (x20, operands[3]))
    return -1;
  x21 = XEXP (x7, 1);
  if (!rtx_equal_p (x21, operands[2]))
    return -1;
  return 0;
}

static int
pattern8 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != ASHIFT
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x6 = XEXP (x3, 1);
  operands[1] = x6;
  if (!rx_shift_operand (operands[1], E_SImode))
    return -1;
  x7 = XEXP (x2, 1);
  operands[2] = x7;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

static int
pattern9 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (peep2_current_count < 2)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  switch (GET_MODE (operands[1]))
    {
    case E_HImode:
      return 0;

    case E_QImode:
      return 1;

    default:
      return -1;
    }
}

static int
pattern10 (rtx x1, unsigned int i1, rtx_code i2, machine_mode i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != i2)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != i1
      || GET_MODE (x2) != i3)
    return -1;
  return 0;
}

static int
pattern11 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (REGNO (x3) != 0
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x5 = XEXP (x1, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 0
      || GET_MODE (x5) != E_SImode
      || GET_MODE (x2) != E_SImode)
    return -1;
  return 0;
}

static int
pattern12 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  if (!register_operand (operands[1], E_SImode)
      || !register_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  x3 = XEXP (x1, 1);
  switch (GET_CODE (x3))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      operands[2] = x3;
      return 0;

    case ZERO_EXTEND:
      res = pattern1 (x3);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case SIGN_EXTEND:
      res = pattern1 (x3);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    default:
      return -1;
    }
}

static int
pattern13 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_CODE (x3) != i1
      || GET_MODE (x3) != E_DImode
      || !register_operand (operands[0], E_DImode)
      || GET_MODE (x1) != E_DImode)
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x5 = XEXP (x3, 0);
  operands[2] = x5;
  return 0;
}

static int
pattern14 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XEXP (x2, 1);
  operands[1] = x4;
  x5 = XEXP (x1, 1);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
      operands[2] = x5;
      if (!register_operand (operands[2], E_SImode)
          || !register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || GET_MODE (x2) != E_SImode
          || !rx_shift_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case MEM:
      if (!rtx_equal_p (x5, operands[0])
          || !rx_restricted_mem_operand (operands[0], E_QImode)
          || GET_MODE (x1) != E_QImode
          || GET_MODE (x2) != E_QImode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
pattern15 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 48
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  x6 = XEXP (x4, 1);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  return 0;
}

static int
pattern16 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x5 = XEXP (x2, 1);
  switch (GET_CODE (x5))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      return 0;

    case ZERO_EXTEND:
      return 1;

    case SIGN_EXTEND:
      return 2;

    default:
      return -1;
    }
}

static int
pattern17 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  operands[2] = x2;
  switch (GET_MODE (operands[2]))
    {
    case E_HImode:
      if (!rx_restricted_mem_operand (operands[2], E_HImode))
        return -1;
      return 0;

    case E_QImode:
      if (!rx_restricted_mem_operand (operands[2], E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
pattern18 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 48
      || GET_MODE (x5) != E_CCmode)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x7 = XEXP (x3, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x8 = XEXP (x3, 1);
  switch (GET_CODE (x8))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      operands[2] = x8;
      return 0;

    case ZERO_EXTEND:
      res = pattern17 (x8);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case SIGN_EXTEND:
      res = pattern17 (x8);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    default:
      return -1;
    }
}

static int
pattern19 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 48
      || GET_MODE (x5) != E_CCmode)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x7 = XEXP (x3, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x8 = XEXP (x3, 1);
  operands[2] = x8;
  if (!rx_shift_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

static int
pattern20 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) != MINUS
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != MINUS
      || GET_MODE (x6) != E_SImode)
    return -1;
  x7 = XEXP (x5, 1);
  if (GET_CODE (x7) != GTU
      || GET_MODE (x7) != E_SImode)
    return -1;
  x8 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 48
      || GET_MODE (x9) != E_CCmode)
    return -1;
  x10 = XEXP (x2, 0);
  operands[0] = x10;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x11 = XEXP (x3, 0);
  operands[2] = x11;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  x12 = XEXP (x3, 1);
  operands[3] = x12;
  x13 = XEXP (x4, 0);
  operands[1] = x13;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x14 = XEXP (x6, 0);
  operands[4] = x14;
  if (!register_operand (operands[4], E_SImode))
    return -1;
  x15 = XEXP (x6, 1);
  operands[5] = x15;
  return 0;
}

static int
pattern21 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_BLKmode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 2
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XEXP (x2, 0);
  if (GET_CODE (x5) != MEM
      || GET_MODE (x5) != E_BLKmode)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 1
      || GET_MODE (x6) != E_SImode)
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x7) != USE)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 3
      || GET_MODE (x8) != E_SImode)
    return -1;
  x9 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x9) != UNSPEC_VOLATILE
      || XVECLEN (x9, 0) != 3
      || XINT (x9, 1) != 21
      || GET_MODE (x9) != E_BLKmode)
    return -1;
  x10 = XVECEXP (x9, 0, 0);
  if (GET_CODE (x10) != REG
      || REGNO (x10) != 1
      || GET_MODE (x10) != E_SImode)
    return -1;
  x11 = XVECEXP (x9, 0, 1);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 2
      || GET_MODE (x11) != E_SImode)
    return -1;
  x12 = XVECEXP (x9, 0, 2);
  if (GET_CODE (x12) != REG
      || REGNO (x12) != 3
      || GET_MODE (x12) != E_SImode)
    return -1;
  return 0;
}

static int
pattern22 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG)
    return -1;
  return 0;
}

static int
pattern23 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != i1)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != AND
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != NOT
      || GET_MODE (x3) != i1)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != ASHIFT
      || GET_MODE (x4) != i1)
    return -1;
  x5 = XEXP (x4, 0);
  if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  return 0;
}

static int
pattern24 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != i1
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != ASHIFT
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !register_operand (operands[0], E_SImode))
    return -1;
  x5 = XEXP (x3, 1);
  operands[1] = x5;
  if (!rx_shift_operand (operands[1], E_SImode))
    return -1;
  x6 = XEXP (x2, 1);
  operands[2] = x6;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

static int
pattern25 (rtx x1, machine_mode i1, rtx_code i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_QImode)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != i2
      || GET_MODE (x2) != i1)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != ASHIFT
      || GET_MODE (x3) != E_QImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
      || !rx_restricted_mem_operand (operands[0], E_QImode))
    return -1;
  x5 = XEXP (x3, 1);
  operands[1] = x5;
  if (!nonmemory_operand (operands[1], E_QImode))
    return -1;
  x6 = XEXP (x2, 1);
  if (!rtx_equal_p (x6, operands[0]))
    return -1;
  return 0;
}

static int
pattern26 (rtx x1, rtx_code i1, rtx_code i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_CODE (x3) != i2
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != i1)
    return -1;
  return 0;
}

static int
pattern27 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 1
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 2
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 3
      || GET_MODE (x4) != E_SImode)
    return -1;
  return 0;
}

static int
pattern28 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) != PC)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != PC)
    return -1;
  x5 = XEXP (x2, 0);
  x6 = XEXP (x5, 0);
  operands[0] = x6;
  if (!register_operand (operands[0], i1))
    return -1;
  x7 = XEXP (x5, 1);
  operands[1] = x7;
  x8 = XEXP (x2, 1);
  operands[2] = x8;
  if (!label_ref_operand (operands[2], E_VOIDmode))
    return -1;
  return 0;
}

static int
pattern29 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 1);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x4 = XEXP (x2, 0);
  operands[0] = x4;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x5 = XEXP (x2, 2);
  operands[1] = x5;
  if (!const_int_operand (operands[1], E_SImode))
    return -1;
  x6 = XEXP (x1, 1);
  operands[2] = x6;
  return 0;
}

static int
pattern30 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode
      || !register_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode
      || !register_operand (operands[1], E_SImode))
    return -1;
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  switch (GET_MODE (operands[2]))
    {
    case E_HImode:
      if (!rx_restricted_mem_operand (operands[2], E_HImode))
        return -1;
      return 0;

    case E_QImode:
      if (!rx_restricted_mem_operand (operands[2], E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
pattern31 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !rx_restricted_mem_operand (operands[2], i1))
    return -1;
  return 0;
}

static int
pattern32 (rtx x1, machine_mode i1, unsigned int i2, int i3)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + i3])
    return -1;
  x5 = XEXP (x1, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != i2
      || GET_MODE (x5) != i1)
    return -1;
  return 0;
}

static int
pattern33 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != i1
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XEXP (x2, 2);
  if (GET_CODE (x5) != PC)
    return -1;
  x6 = XEXP (x1, 0);
  if (GET_CODE (x6) != PC)
    return -1;
  return 0;
}

static int
pattern34 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_MODE (x4) != E_CCmode
      || GET_MODE (x2) != E_CCmode
      || !register_operand (operands[0], E_SImode))
    return -1;
  x5 = XEXP (x3, 0);
  operands[1] = x5;
  switch (GET_MODE (operands[1]))
    {
    case E_HImode:
      if (!rx_restricted_mem_operand (operands[1], E_HImode))
        return -1;
      return 0;

    case E_QImode:
      if (!rx_restricted_mem_operand (operands[1], E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
pattern35 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 1);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x4 = XEXP (x1, 2);
  operands[1] = x4;
  if (!const_int_operand (operands[1], E_SImode))
    return -1;
  return 0;
}

static int
pattern36 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  operands[2] = x1;
  switch (GET_MODE (operands[2]))
    {
    case E_HImode:
      if (!rx_restricted_mem_operand (operands[2], E_HImode))
        return -1;
      return 0;

    case E_QImode:
      if (!rx_restricted_mem_operand (operands[2], E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
pattern37 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != CLOBBER)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 48
      || GET_MODE (x6) != E_CCmode
      || !register_operand (operands[0], E_SImode)
      || GET_MODE (x3) != E_SImode)
    return -1;
  x7 = XEXP (x3, 0);
  operands[1] = x7;
  x8 = XEXP (x4, 0);
  return pattern36 (x8); /* [-1, 1] */
}

static int
pattern38 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      x2 = XEXP (x1, 0);
      if (GET_CODE (x2) != REG
          || REGNO (x2) != 48
          || GET_MODE (x2) != E_CCmode)
        return -1;
      return 0;

    case RETURN:
      return 1;

    default:
      return -1;
    }
}

static int
pattern39 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != PARALLEL
      || XVECLEN (x1, 0) != 2)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != i1
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 48
      || GET_MODE (x5) != E_CCmode)
    return -1;
  return 0;
}

static int
pattern40 (rtx x1, int *pnum_clobbers, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL
      || !register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1))
    return -1;
  return 0;
}

static int
pattern41 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_DFmode)
      || GET_MODE (x1) != E_DFmode
      || !register_operand (operands[1], E_DFmode)
      || !register_operand (operands[2], E_DFmode))
    return -1;
  return 0;
}

static int
pattern42 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_DImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[3] = x3;
  if (!register_operand (operands[3], E_DImode))
    return -1;
  x4 = XVECEXP (x2, 0, 0);
  operands[0] = x4;
  if (!register_operand (operands[0], E_SImode)
      || !register_operand (operands[2], E_SImode)
      || !register_operand (operands[4], E_SImode))
    return -1;
  x5 = XVECEXP (x2, 0, 3);
  if (!rtx_equal_p (x5, operands[3]))
    return -1;
  return 0;
}

static int
pattern43 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != i1
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XEXP (x2, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x1, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 48)
    return -1;
  return 0;
}

static int
pattern44 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  x5 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x5))
    {
    case CLOBBER:
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 48
          || GET_MODE (x6) != E_CCmode)
        return -1;
      return 0;

    case SET:
      x7 = XEXP (x5, 1);
      if (GET_CODE (x7) != COMPARE
          || pattern43 (x5, i1) != 0)
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
pattern45 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  return pattern36 (x3); /* [-1, 1] */
}

static int
pattern46 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != CLOBBER)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 48
      || GET_MODE (x6) != E_CCmode)
    return -1;
  return pattern45 (x3); /* [-1, 1] */
}

static int
pattern47 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x5 = XEXP (x2, 1);
  operands[2] = x5;
  if (!rx_speed_source_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

static int
pattern48 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], E_DFmode)
      || GET_MODE (x1) != E_DFmode
      || !register_operand (operands[1], E_DFmode)
      || !rx_speed_source_operand (operands[2], E_DFmode))
    return -1;
  return 0;
}

static int
pattern49 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  x4 = XEXP (x2, 1);
  operands[3] = x4;
  x5 = XEXP (x1, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
      operands[0] = x5;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      operands[1] = x2;
      return 0;

    case ZERO_EXTRACT:
      if (GET_MODE (x5) != E_SImode)
        return -1;
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x7 = XEXP (x5, 0);
      operands[0] = x7;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x8 = XEXP (x5, 2);
      operands[1] = x8;
      if (!const_int_operand (operands[1], E_SImode))
        return -1;
      operands[4] = x2;
      return 1;

    default:
      return -1;
    }
}

static int
pattern50 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != ZERO_EXTRACT
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 1);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x4 = XEXP (x1, 2);
  operands[1] = x4;
  if (!const_int_operand (operands[1], E_SImode))
    return -1;
  return 0;
}

static int
pattern51 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != MEM
      || GET_MODE (x3) != E_BLKmode)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 1
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != UNSPEC_VOLATILE
      || XVECLEN (x5, 0) != 3
      || XINT (x5, 1) != 20
      || GET_MODE (x5) != E_BLKmode)
    return -1;
  x6 = XVECEXP (x5, 0, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 1
      || GET_MODE (x6) != E_SImode)
    return -1;
  x7 = XVECEXP (x5, 0, 1);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 2
      || GET_MODE (x7) != E_SImode)
    return -1;
  x8 = XVECEXP (x5, 0, 2);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 3
      || GET_MODE (x8) != E_SImode)
    return -1;
  return 0;
}

static int
pattern52 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (x1))
    {
    case PARALLEL:
      if (XVECLEN (x1, 0) != 2)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x2) != SET)
        return -1;
      x3 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x3) != CLOBBER)
        return -1;
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) != REG
          || REGNO (x4) != 48
          || GET_MODE (x4) != E_CCmode)
        return -1;
      x5 = XEXP (x2, 0);
      operands[2] = x5;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x6 = XEXP (x2, 1);
      if (GET_MODE (x6) != E_SImode)
        return -1;
      switch (GET_CODE (x6))
        {
        case PLUS:
          return 0;

        case AND:
          return 1;

        case IOR:
          return 2;

        case XOR:
          return 3;

        case DIV:
          x7 = XEXP (x6, 0);
          if (!rtx_equal_p (x7, operands[2]))
            return -1;
          x8 = XEXP (x6, 1);
          if (!rtx_equal_p (x8, operands[0]))
            return -1;
          return 4;

        case UDIV:
          x7 = XEXP (x6, 0);
          if (!rtx_equal_p (x7, operands[2]))
            return -1;
          x8 = XEXP (x6, 1);
          if (!rtx_equal_p (x8, operands[0]))
            return -1;
          return 5;

        case MINUS:
          x7 = XEXP (x6, 0);
          if (!rtx_equal_p (x7, operands[2]))
            return -1;
          x8 = XEXP (x6, 1);
          if (!rtx_equal_p (x8, operands[0]))
            return -1;
          return 6;

        default:
          return -1;
        }

    case SET:
      x9 = XEXP (x1, 1);
      switch (GET_CODE (x9))
        {
        case SMAX:
          if (GET_MODE (x9) != E_SImode)
            return -1;
          x10 = XEXP (x1, 0);
          operands[2] = x10;
          if (!register_operand (operands[2], E_SImode))
            return -1;
          return 7;

        case SMIN:
          if (GET_MODE (x9) != E_SImode)
            return -1;
          x10 = XEXP (x1, 0);
          operands[2] = x10;
          if (!register_operand (operands[2], E_SImode))
            return -1;
          return 8;

        case MULT:
          if (GET_MODE (x9) != E_SImode)
            return -1;
          x10 = XEXP (x1, 0);
          operands[2] = x10;
          if (!register_operand (operands[2], E_SImode))
            return -1;
          return 9;

        case COMPARE:
          if (GET_MODE (x9) != E_CCmode)
            return -1;
          x10 = XEXP (x1, 0);
          if (GET_CODE (x10) != REG
              || REGNO (x10) != 48
              || GET_MODE (x10) != E_CCmode)
            return -1;
          x11 = XEXP (x9, 0);
          operands[2] = x11;
          if (!register_operand (operands[2], E_SImode))
            return -1;
          x12 = XEXP (x9, 1);
          if (!rtx_equal_p (x12, operands[0]))
            return -1;
          return 10;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
pattern53 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) != ZERO_EXTEND
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!register_operand (operands[2], i1))
    return -1;
  x4 = XEXP (x1, 0);
  if (!rtx_equal_p (x4, operands[0]))
    return -1;
  return 0;
}

static int
pattern54 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != CLOBBER)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 48
      || GET_MODE (x6) != E_CCmode)
    return -1;
  x7 = XEXP (x4, 0);
  operands[2] = x7;
  switch (GET_MODE (operands[2]))
    {
    case E_HImode:
      if (!rx_restricted_mem_operand (operands[2], E_HImode))
        return -1;
      return 0;

    case E_QImode:
      if (!rx_restricted_mem_operand (operands[2], E_QImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
pattern55 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SImode:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x1) != E_SImode
          || !register_operand (operands[1], E_SImode))
        return -1;
      return 0;

    case E_DFmode:
      if (!register_operand (operands[0], E_DFmode)
          || GET_MODE (x1) != E_DFmode
          || !register_operand (operands[1], E_DFmode))
        return -1;
      return 1;

    case E_SFmode:
      if (!register_operand (operands[0], E_SFmode)
          || GET_MODE (x1) != E_SFmode
          || !register_operand (operands[1], E_SFmode))
        return -1;
      return 2;

    default:
      return -1;
    }
}

static int
pattern56 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  switch (GET_MODE (operands[0]))
    {
    case E_SFmode:
      if (!register_operand (operands[0], E_SFmode)
          || GET_MODE (x1) != E_SFmode)
        return -1;
      return 0;

    case E_DFmode:
      if (!register_operand (operands[0], E_DFmode)
          || GET_MODE (x1) != E_DFmode)
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
pattern57 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return -1;
  switch (GET_CODE (x2))
    {
    case ZERO_EXTEND:
      x3 = XEXP (x1, 0);
      operands[2] = x3;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x4 = XEXP (x2, 0);
      operands[3] = x4;
      if (!register_operand (operands[3], i1))
        return -1;
      return 0;

    case SIGN_EXTEND:
      x4 = XEXP (x2, 0);
      operands[2] = x4;
      if (!register_operand (operands[2], i1))
        return -1;
      x3 = XEXP (x1, 0);
      if (!rtx_equal_p (x3, operands[0]))
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
pattern58 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!rx_compare_operand (operands[1], i1))
    return -1;
  x2 = XEXP (x1, 1);
  operands[2] = x2;
  if (!register_operand (operands[2], i1))
    return -1;
  x3 = XEXP (x1, 0);
  if (!rtx_equal_p (x3, operands[1]))
    return -1;
  x4 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x4) != SET)
    return -1;
  x5 = XEXP (x4, 1);
  operands[3] = x5;
  if (!register_operand (operands[3], i1))
    return -1;
  x6 = XEXP (x4, 0);
  if (!rtx_equal_p (x6, operands[2]))
    return -1;
  return 0;
}

static int
pattern59 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  operands[0] = x4;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x5 = XEXP (x3, 1);
  operands[1] = x5;
  if (!rx_constshift_operand (operands[1], E_SImode))
    return -1;
  x6 = XEXP (x3, 2);
  operands[2] = x6;
  if (!rx_constshift_operand (operands[2], E_SImode))
    return -1;
  x7 = XEXP (x1, 1);
  operands[3] = x7;
  if (!label_ref_operand (operands[3], E_VOIDmode))
    return -1;
  return 0;
}

static int
pattern60 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !rx_speed_source_operand (operands[2], i1))
    return -1;
  return 0;
}

static int
pattern61 (rtx x1, rtx_code i1, rtx_code i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != PLUS
      || GET_MODE (x1) != E_SImode)
    return -1;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != i2
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != i1
      || GET_MODE (x3) != E_SImode)
    return -1;
  return 0;
}

static int
pattern62 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 1);
  x6 = XEXP (x5, 0);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x8 = XEXP (x6, 1);
  operands[2] = x8;
  if (!rx_shift_operand (operands[2], E_SImode))
    return -1;
  x9 = XEXP (x3, 0);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  x10 = XEXP (x3, 1);
  if (!rtx_equal_p (x10, operands[2]))
    return -1;
  return 0;
}

static int
pattern63 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !rx_restricted_mem_operand (operands[2], i1))
    return -1;
  return 0;
}

static int
pattern64 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[1] = x5;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x6 = XEXP (x4, 1);
  operands[2] = x6;
  if (!rx_source_operand (operands[2], E_SImode))
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  x8 = XEXP (x7, 1);
  x9 = XEXP (x8, 0);
  if (!rtx_equal_p (x9, operands[1]))
    return -1;
  x10 = XEXP (x8, 1);
  if (!rtx_equal_p (x10, operands[2]))
    return -1;
  return 0;
}

static int
pattern65 (rtx x1, rtx_code i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != MINUS
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XEXP (x1, 1);
  if (GET_CODE (x3) != i1
      || GET_MODE (x3) != E_SImode)
    return -1;
  return 0;
}

static int
pattern66 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  if (!rx_z_comparison_operator (x1, E_VOIDmode))
    return -1;
  x2 = XEXP (x1, 1);
  if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x3 = XEXP (x1, 0);
  if (GET_MODE (x3) != E_SImode)
    return -1;
  switch (GET_CODE (x3))
    {
    case AND:
      operands[5] = x1;
      x4 = XEXP (x3, 0);
      operands[3] = x4;
      if (!register_operand (operands[3], E_SImode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[4] = x5;
      return 0;

    case ZERO_EXTRACT:
      operands[6] = x1;
      x4 = XEXP (x3, 0);
      operands[3] = x4;
      if (!register_operand (operands[3], E_SImode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[4] = x5;
      if (!rx_constshift_operand (operands[4], E_SImode))
        return -1;
      x6 = XEXP (x3, 2);
      operands[5] = x6;
      if (!rx_constshift_operand (operands[5], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
pattern67 (rtx x1, unsigned int i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 1
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != i1
      || GET_MODE (x5) != E_SImode)
    return -1;
  return 0;
}

static int
pattern68 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[4] = x5;
  if (!register_operand (operands[4], E_SImode))
    return -1;
  x6 = XEXP (x4, 1);
  operands[5] = x6;
  if (!rx_restricted_mem_operand (operands[5], E_SImode))
    return -1;
  x7 = XEXP (x3, 1);
  x8 = XEXP (x7, 0);
  if (!rtx_equal_p (x8, operands[3]))
    return -1;
  x9 = XEXP (x7, 1);
  if (!rtx_equal_p (x9, operands[2]))
    return -1;
  return 0;
}

static int
pattern69 (rtx x1, machine_mode i1, unsigned int i2, unsigned int i3, unsigned int i4)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 2);
  x3 = XEXP (x2, 0);
  if (REGNO (x3) != i4)
    return -1;
  x4 = XVECEXP (x1, 0, 3);
  x5 = XEXP (x4, 0);
  if (REGNO (x5) != i3)
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  x7 = XEXP (x6, 0);
  if (REGNO (x7) != i2
      || GET_MODE (x7) != i1)
    return -1;
  return 0;
}

static int
pattern70 (rtx x1, machine_mode i1, unsigned int i2, unsigned int i3, unsigned int i4, unsigned int i5)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 3);
  x3 = XEXP (x2, 0);
  if (REGNO (x3) != i5)
    return -1;
  x4 = XVECEXP (x1, 0, 4);
  x5 = XEXP (x4, 0);
  if (REGNO (x5) != i4)
    return -1;
  x6 = XVECEXP (x1, 0, 5);
  x7 = XEXP (x6, 0);
  if (REGNO (x7) != i3)
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  x9 = XEXP (x8, 0);
  if (REGNO (x9) != i2
      || GET_MODE (x9) != i1)
    return -1;
  return 0;
}

static int
pattern71 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (!rtx_equal_p (x2, operands[3]))
    return -1;
  x3 = XEXP (x1, 1);
  if (!rtx_equal_p (x3, operands[2]))
    return -1;
  switch (GET_CODE (operands[3]))
    {
    case MEM:
      if (!rx_restricted_mem_operand (operands[3], E_SImode))
        return -1;
      return 0;

    case REG:
    case SUBREG:
      if (!register_operand (operands[3], E_SImode))
        return -1;
      return 1;

    default:
      return -1;
    }
}

static int
recog_1 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) != PC)
    return -1;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != PC)
    return -1;
  x5 = XEXP (x2, 0);
  operands[3] = x5;
  x6 = XEXP (x5, 0);
  operands[0] = x6;
  if (register_operand (operands[0], E_SImode))
    {
      x7 = XEXP (x5, 1);
      operands[1] = x7;
      x8 = XEXP (x2, 1);
      operands[2] = x8;
      if (label_ref_operand (operands[2], E_VOIDmode))
        {
          if (rx_restricted_mem_operand (operands[1], E_SImode))
            return 1; /* *cbranchsi4_mem */
          if (rx_speed_source_operand (operands[1], E_SImode))
            return 2; /* *cbranchsi4 */
        }
    }
  operands[0] = x5;
  operands[1] = x6;
  if (!register_operand (operands[1], E_DFmode))
    return -1;
  x7 = XEXP (x5, 1);
  operands[2] = x7;
  if (!register_operand (operands[2], E_DFmode))
    return -1;
  x8 = XEXP (x2, 1);
  x9 = XEXP (x8, 0);
  operands[3] = x9;
  if (!
#line 484 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
    return -1;
  return 14; /* cbranchdf4 */
}

static int
recog_2 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == LABEL_REF)
    {
      res = recog_1 (x1, insn, pnum_clobbers);
      if (res >= 0)
        return res;
    }
  if (pnum_clobbers == NULL)
    return -1;
  x4 = XEXP (x2, 0);
  operands[5] = x4;
  x5 = XEXP (x1, 0);
  operands[0] = x5;
  if (!register_operand (operands[0], E_SImode)
      || GET_MODE (x2) != E_SImode)
    return -1;
  x6 = XEXP (x4, 0);
  operands[3] = x6;
  if (!register_operand (operands[3], E_SImode))
    return -1;
  x7 = XEXP (x4, 1);
  operands[4] = x7;
  operands[1] = x3;
  if (!nonmemory_operand (operands[1], E_SImode))
    return -1;
  x8 = XEXP (x2, 2);
  operands[2] = x8;
  if (!nonmemory_operand (operands[2], E_SImode))
    return -1;
  if (rx_restricted_mem_operand (operands[4], E_SImode)
      && 
#line 1216 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((CONSTANT_P (operands[1]) || CONSTANT_P (operands[2]))
    || (REG_P (operands[1]) && REG_P (operands[2]))))
    {
      *pnum_clobbers = 1;
      return 52; /* *movsicc_mem */
    }
  if (!rx_speed_source_operand (operands[4], E_SImode)
      || !
#line 1265 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((CONSTANT_P (operands[1]) || CONSTANT_P (operands[2])) || (REG_P(operands[1]) && REG_P(operands[2]))))
    return -1;
  *pnum_clobbers = 1;
  return 53; /* *movsicc */
}

static int
recog_3 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  if (rx_zs_comparison_operator (operands[3], E_VOIDmode)
      && pattern33 (x1, AND) == 0)
    {
      x4 = XEXP (x3, 0);
      x5 = XEXP (x4, 0);
      operands[0] = x5;
      if (register_operand (operands[0], E_SImode))
        {
          x6 = XEXP (x4, 1);
          operands[1] = x6;
          x7 = XEXP (x2, 1);
          operands[2] = x7;
          if (label_ref_operand (operands[2], E_VOIDmode))
            {
              if (rx_restricted_mem_operand (operands[1], E_SImode))
                return 5; /* *cbranchsi4_tst_mem */
              if (rx_speed_source_operand (operands[1], E_SImode))
                return 6; /* *cbranchsi4_tst */
            }
        }
    }
  if (!rx_z_comparison_operator (x3, E_VOIDmode))
    return -1;
  x8 = XEXP (x1, 0);
  operands[0] = x8;
  if (!register_operand (operands[0], E_SImode)
      || GET_MODE (x2) != E_SImode)
    return -1;
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case AND:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_SImode)
        return -1;
      operands[5] = x3;
      x5 = XEXP (x4, 0);
      operands[3] = x5;
      if (!register_operand (operands[3], E_SImode))
        return -1;
      x6 = XEXP (x4, 1);
      operands[4] = x6;
      x7 = XEXP (x2, 1);
      operands[1] = x7;
      if (!nonmemory_operand (operands[1], E_SImode))
        return -1;
      x9 = XEXP (x2, 2);
      operands[2] = x9;
      if (!immediate_operand (operands[2], E_SImode))
        return -1;
      if (rx_restricted_mem_operand (operands[4], E_SImode)
          && 
#line 1118 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(CONSTANT_P (operands[1]) || CONSTANT_P (operands[2])))
        {
          *pnum_clobbers = 1;
          return 49; /* *movsicc_tst_mem */
        }
      if (!rx_speed_source_operand (operands[4], E_SImode)
          || !
#line 1148 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(CONSTANT_P (operands[1]) || CONSTANT_P (operands[2])))
        return -1;
      *pnum_clobbers = 1;
      return 50; /* *movsicc_tst */

    case ZERO_EXTRACT:
      if (pnum_clobbers == NULL
          || GET_MODE (x4) != E_SImode)
        return -1;
      operands[6] = x3;
      x5 = XEXP (x4, 0);
      operands[3] = x5;
      if (!register_operand (operands[3], E_SImode))
        return -1;
      x6 = XEXP (x4, 1);
      operands[4] = x6;
      if (!rx_constshift_operand (operands[4], E_SImode))
        return -1;
      x10 = XEXP (x4, 2);
      operands[5] = x10;
      if (!rx_constshift_operand (operands[5], E_SImode))
        return -1;
      x7 = XEXP (x2, 1);
      operands[1] = x7;
      if (!nonmemory_operand (operands[1], E_SImode))
        return -1;
      x9 = XEXP (x2, 2);
      operands[2] = x9;
      if (!immediate_operand (operands[2], E_SImode)
          || !
#line 1179 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(CONSTANT_P (operands[1]) || CONSTANT_P (operands[2])))
        return -1;
      *pnum_clobbers = 1;
      return 51; /* *movsicc_tstz */

    case REG:
      if (REGNO (x4) != 48)
        return -1;
      operands[2] = x3;
      x7 = XEXP (x2, 1);
      switch (GET_CODE (x7))
        {
        case CONST_INT:
        case CONST_WIDE_INT:
        case CONST_POLY_INT:
        case CONST_FIXED:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case CONST:
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          operands[1] = x7;
          if (!immediate_operand (operands[1], E_SImode))
            return -1;
          x9 = XEXP (x2, 2);
          if (!rtx_equal_p (x9, operands[0])
              || !
#line 1334 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed
   && ((GET_CODE (operands[2]) == EQ) || (GET_CODE (operands[2]) == NE))))
            return -1;
          return 54; /* *stcc */

        case REG:
        case SUBREG:
          if (!rtx_equal_p (x7, operands[0]))
            return -1;
          x9 = XEXP (x2, 2);
          operands[1] = x9;
          if (!immediate_operand (operands[1], E_SImode)
              || !
#line 1370 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
            return -1;
          return 56; /* *stcc_rev */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_4 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (!comparison_operator (x2, E_SImode))
    return -1;
  x3 = XEXP (x2, 0);
  operands[2] = x3;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  x4 = XEXP (x2, 1);
  operands[3] = x4;
  x5 = XEXP (x1, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
      operands[0] = x5;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      operands[1] = x2;
      if (rx_restricted_mem_operand (operands[3], E_SImode))
        {
          *pnum_clobbers = 1;
          return 44; /* cstoresi4_mem */
        }
      if (!rx_speed_source_operand (operands[3], E_SImode))
        return -1;
      *pnum_clobbers = 1;
      return 45; /* cstoresi4 */

    case ZERO_EXTRACT:
      if (pattern35 (x5) != 0)
        return -1;
      operands[4] = x2;
      if (rx_restricted_mem_operand (operands[3], E_SImode))
        {
          *pnum_clobbers = 1;
          return 224; /* *insv_cond_mem */
        }
      if (!rx_speed_source_operand (operands[3], E_SImode))
        return -1;
      *pnum_clobbers = 1;
      return 225; /* *insv_cond */

    default:
      return -1;
    }
}

static int
recog_5 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (XVECLEN (x2, 0))
    {
    case 2:
      if (pnum_clobbers == NULL
          || XINT (x2, 1) != 23
          || GET_MODE (x2) != E_SImode)
        return -1;
      x3 = XVECEXP (x2, 0, 1);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 3
          || GET_MODE (x3) != E_SImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x2, 0, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_SImode)
          || !
#line 3890 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      *pnum_clobbers = 4;
      return 232; /* rx_strend */

    case 3:
      if (pnum_clobbers == NULL
          || XINT (x2, 1) != 22
          || GET_MODE (x2) != E_BLKmode)
        return -1;
      x5 = XVECEXP (x2, 0, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 1
          || GET_MODE (x5) != E_SImode)
        return -1;
      x3 = XVECEXP (x2, 0, 1);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 2
          || GET_MODE (x3) != E_SImode)
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 3
          || GET_MODE (x6) != E_SImode)
        return -1;
      x4 = XEXP (x1, 0);
      if (GET_CODE (x4) != MEM
          || GET_MODE (x4) != E_BLKmode)
        return -1;
      x7 = XEXP (x4, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 1
          || GET_MODE (x7) != E_SImode
          || !
#line 3979 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      *pnum_clobbers = 2;
      return 234; /* rx_setmem */

    case 1:
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x2) != E_SImode)
        return -1;
      switch (XINT (x2, 1))
        {
        case 97:
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!immediate_operand (operands[1], E_SImode)
              || !
#line 4083 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(TARGET_RXV3))
            return -1;
          return 238; /* mvfdc */

        case 37:
          x5 = XVECEXP (x2, 0, 0);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 267; /* mvfachi */

        case 82:
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!immediate_operand (operands[1], E_SImode))
            return -1;
          return 268; /* mvfachi_A0 */

        case 83:
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!immediate_operand (operands[1], E_SImode))
            return -1;
          return 269; /* mvfachi_A1 */

        case 38:
          x5 = XVECEXP (x2, 0, 0);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          return 270; /* mvfacmi */

        case 84:
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!immediate_operand (operands[1], E_SImode))
            return -1;
          return 271; /* mvfacmi_A0 */

        case 85:
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!immediate_operand (operands[1], E_SImode))
            return -1;
          return 272; /* mvfacmi_A1 */

        case 86:
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!immediate_operand (operands[1], E_SImode))
            return -1;
          return 273; /* mvfaclo_A0 */

        case 87:
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!immediate_operand (operands[1], E_SImode))
            return -1;
          return 274; /* mvfaclo_A1 */

        case 88:
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!immediate_operand (operands[1], E_SImode))
            return -1;
          return 275; /* mvfacgu_A0 */

        case 89:
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!immediate_operand (operands[1], E_SImode))
            return -1;
          return 276; /* mvfacgu_A1 */

        case 39:
          x5 = XVECEXP (x2, 0, 0);
          operands[1] = x5;
          if (!immediate_operand (operands[1], E_SImode))
            return -1;
          return 300; /* mvfc */

        default:
          return -1;
        }

    case 5:
      x3 = XVECEXP (x2, 0, 1);
      operands[1] = x3;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[2] = x6;
      x8 = XVECEXP (x2, 0, 4);
      operands[4] = x8;
      switch (XINT (x2, 1))
        {
        case 100:
          if (GET_MODE (x2) != E_SImode)
            return -1;
          x4 = XEXP (x1, 0);
          operands[0] = x4;
          if (!register_operand (operands[0], E_SImode)
              || !immediate_operand (operands[2], E_SImode))
            return -1;
          x9 = XVECEXP (x2, 0, 3);
          operands[3] = x9;
          if (!immediate_operand (operands[3], E_SImode)
              || !immediate_operand (operands[4], E_SImode))
            return -1;
          x5 = XVECEXP (x2, 0, 0);
          if (!rtx_equal_p (x5, operands[0])
              || !
#line 4099 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(TARGET_RXV3))
            return -1;
          return 239; /* bfmov */

        case 102:
          if (pattern42 (x1, pnum_clobbers) != 0
              || !
#line 4655 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
            return -1;
          *pnum_clobbers = 6;
          return 292; /* rmpa8 */

        case 103:
          if (pattern42 (x1, pnum_clobbers) != 0
              || !
#line 4673 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
            return -1;
          *pnum_clobbers = 6;
          return 293; /* rmpa16 */

        case 104:
          if (pattern42 (x1, pnum_clobbers) != 0
              || !
#line 4690 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
            return -1;
          *pnum_clobbers = 6;
          return 294; /* rmpa32 */

        default:
          return -1;
        }

    case 4:
      if (XINT (x2, 1) != 101
          || GET_MODE (x2) != E_SImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x2, 0, 0);
      operands[1] = x5;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x3 = XVECEXP (x2, 0, 1);
      operands[2] = x3;
      if (!immediate_operand (operands[2], E_SImode))
        return -1;
      x6 = XVECEXP (x2, 0, 2);
      operands[3] = x6;
      if (!immediate_operand (operands[3], E_SImode))
        return -1;
      x9 = XVECEXP (x2, 0, 3);
      operands[4] = x9;
      if (!immediate_operand (operands[4], E_SImode)
          || !
#line 4113 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(TARGET_RXV3))
        return -1;
      return 240; /* bfmovz */

    default:
      return -1;
    }
}

static int
recog_6 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      if (GET_CODE (x3) == REG
          && pattern11 (x1) == 0)
        return 40; /* stack_dpushm */
      if (pnum_clobbers == NULL)
        return -1;
      operands[1] = x3;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x2, 1);
      switch (GET_CODE (x5))
        {
        case CONST_INT:
        case CONST_WIDE_INT:
        case CONST_POLY_INT:
        case CONST_FIXED:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case CONST:
        case REG:
        case SUBREG:
        case MEM:
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || GET_MODE (x2) != E_SImode
                  || !register_operand (operands[1], E_SImode))
                return -1;
              if (rx_restricted_mem_operand (operands[2], E_SImode)
                  && 
#line 2408 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize_size || reload_completed)))
                {
                  *pnum_clobbers = 1;
                  return 116; /* subsi3_mem */
                }
              if (!rx_speed_source_operand (operands[2], E_SImode))
                return -1;
              *pnum_clobbers = 1;
              return 117; /* subsi3 */

            case E_DFmode:
              if (pattern48 (x2) != 0
                  || !
#line 3030 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
                return -1;
              *pnum_clobbers = 1;
              return 185; /* subdf3 */

            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || GET_MODE (x2) != E_SFmode
                  || !register_operand (operands[1], E_SFmode))
                return -1;
              if (rx_restricted_mem_operand (operands[2], E_SFmode)
                  && 
#line 3042 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (optimize_size || reload_completed)))
                {
                  *pnum_clobbers = 1;
                  return 186; /* subsf3_mem */
                }
              if (!rx_speed_source_operand (operands[2], E_SFmode))
                return -1;
              if (
#line 3069 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (!TARGET_RXV2)))
                {
                  *pnum_clobbers = 1;
                  return 187; /* subsf3v1 */
                }
              if (!
#line 3083 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && TARGET_RXV2))
                return -1;
              *pnum_clobbers = 1;
              return 188; /* subsf3v2 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern30 (x2))
            {
            case 0:
              if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 148; /* minussi3_zero_extendhi */

            case 1:
              if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 154; /* minussi3_zero_extendqi */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern30 (x2))
            {
            case 0:
              if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 151; /* minussi3_sign_extendhi */

            case 1:
              if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 157; /* minussi3_sign_extendqi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_SImode)
        return -1;
      x5 = XEXP (x2, 1);
      if (GET_CODE (x5) != GEU
          || GET_MODE (x5) != E_SImode)
        return -1;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 48
          || GET_MODE (x6) != E_CCmode)
        return -1;
      x7 = XEXP (x5, 1);
      if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x2) != E_SImode)
        return -1;
      x8 = XEXP (x3, 0);
      operands[1] = x8;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x9 = XEXP (x3, 1);
      operands[2] = x9;
      if (rx_restricted_mem_operand (operands[2], E_SImode)
          && 
#line 2486 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
        {
          *pnum_clobbers = 1;
          return 120; /* sbb_internal_mem */
        }
      if (!rx_speed_compare_operand (operands[2], E_SImode)
          || !
#line 2501 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
        return -1;
      *pnum_clobbers = 1;
      return 121; /* sbb_internal */

    default:
      return -1;
    }
}

static int
recog_7 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 48)
    return -1;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      operands[0] = x4;
      x5 = XEXP (x3, 1);
      switch (GET_CODE (x5))
        {
        case CONST_INT:
        case CONST_WIDE_INT:
        case CONST_POLY_INT:
        case CONST_FIXED:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case CONST:
        case REG:
        case SUBREG:
        case MEM:
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          operands[1] = x5;
          switch (GET_MODE (x2))
            {
            case E_CCmode:
              if (GET_MODE (x3) != E_CCmode
                  || !register_operand (operands[0], E_SImode))
                return -1;
              if (rx_restricted_mem_operand (operands[1], E_SImode)
                  && 
#line 289 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                return 3; /* *cmpsi_mem */
              if (!rx_speed_source_operand (operands[1], E_SImode)
                  || !
#line 300 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                return -1;
              return 4; /* cmpsi_internal */

            case E_CC_Fmode:
              if (GET_MODE (x3) != E_CC_Fmode
                  || !register_operand (operands[0], E_SFmode))
                return -1;
              if (rx_restricted_mem_operand (operands[1], E_SFmode)
                  && 
#line 457 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && reload_completed))
                return 12; /* *cmpsf_mem */
              if (!rx_speed_source_operand (operands[1], E_SFmode)
                  || !
#line 469 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && reload_completed))
                return -1;
              return 13; /* *cmpsf */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern34 (x1))
            {
            case 0:
              if (!
#line 2843 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 170; /* comparesi3_zero_extendhi */

            case 1:
              if (!
#line 2843 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 172; /* comparesi3_zero_extendqi */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern34 (x1))
            {
            case 0:
              if (!
#line 2843 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 171; /* comparesi3_sign_extendhi */

            case 1:
              if (!
#line 2843 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 173; /* comparesi3_sign_extendqi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case AND:
      x5 = XEXP (x3, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || GET_MODE (x2) != E_CC_ZSmode
          || GET_MODE (x3) != E_CC_ZSmode)
        return -1;
      x6 = XEXP (x4, 0);
      operands[0] = x6;
      switch (GET_CODE (operands[0]))
        {
        case REG:
        case SUBREG:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x4) != E_SImode)
            return -1;
          x7 = XEXP (x4, 1);
          switch (GET_CODE (x7))
            {
            case CONST_INT:
            case CONST_WIDE_INT:
            case CONST_POLY_INT:
            case CONST_FIXED:
            case CONST_DOUBLE:
            case CONST_VECTOR:
            case CONST:
            case REG:
            case SUBREG:
            case MEM:
            case LABEL_REF:
            case SYMBOL_REF:
            case HIGH:
              operands[1] = x7;
              if (rx_restricted_mem_operand (operands[1], E_SImode)
                  && 
#line 385 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                return 8; /* *tstsi_mem */
              if (!rx_speed_source_operand (operands[1], E_SImode)
                  || !
#line 398 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                return -1;
              return 9; /* *tstsi */

            case ASHIFT:
              if (GET_MODE (x7) != E_SImode)
                return -1;
              x8 = XEXP (x7, 0);
              if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
                return -1;
              x9 = XEXP (x7, 1);
              operands[1] = x9;
              if (!rx_speed_source_operand (operands[1], E_SImode))
                return -1;
              return 219; /* *bittest */

            default:
              return -1;
            }

        case MEM:
          if (!rx_restricted_mem_operand (operands[0], E_QImode))
            return -1;
          x7 = XEXP (x4, 1);
          if (GET_CODE (x7) != ASHIFT
              || GET_MODE (x7) != E_QImode)
            return -1;
          x8 = XEXP (x7, 0);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1]
              || GET_MODE (x4) != E_QImode)
            return -1;
          x9 = XEXP (x7, 1);
          operands[1] = x9;
          if (!nonmemory_operand (operands[1], E_SImode))
            return -1;
          return 220; /* *bittest_in_memory */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_8 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      if (GET_CODE (x3) == REG
          && pattern11 (x1) == 0)
        return 43; /* stack_dpopm */
      operands[1] = x3;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      x5 = XEXP (x2, 1);
      switch (GET_CODE (x5))
        {
        case CONST_INT:
        case CONST_WIDE_INT:
        case CONST_POLY_INT:
        case CONST_FIXED:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case CONST:
        case REG:
        case SUBREG:
        case MEM:
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (pattern40 (x2, pnum_clobbers, E_SImode) != 0)
                return -1;
              if (rx_restricted_mem_operand (operands[2], E_SImode))
                {
                  *pnum_clobbers = 1;
                  return 60; /* addsi3_mem */
                }
              if (!rx_speed_source_operand (operands[2], E_SImode))
                return -1;
              *pnum_clobbers = 1;
              return 61; /* addsi3_internal */

            case E_SFmode:
              if (pattern40 (x2, pnum_clobbers, E_SFmode) != 0)
                return -1;
              if (rx_restricted_mem_operand (operands[2], E_SFmode)
                  && 
#line 2857 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (optimize_size || reload_completed)))
                {
                  *pnum_clobbers = 1;
                  return 174; /* addsf3_mem */
                }
              if (!rx_speed_source_operand (operands[2], E_SFmode))
                return -1;
              if (
#line 2884 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (!TARGET_RXV2)))
                {
                  *pnum_clobbers = 1;
                  return 175; /* addsf3v1 */
                }
              if (!
#line 2898 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && TARGET_RXV2))
                return -1;
              *pnum_clobbers = 1;
              return 176; /* addsf3v2 */

            case E_DFmode:
              if (pattern41 (x2) != 0
                  || !
#line 2914 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
                return -1;
              return 177; /* adddf3 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          if (pnum_clobbers == NULL)
            return -1;
          switch (pattern30 (x2))
            {
            case 0:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 130; /* plussi3_zero_extendhi */

            case 1:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 138; /* plussi3_zero_extendqi */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          if (pnum_clobbers == NULL)
            return -1;
          switch (pattern30 (x2))
            {
            case 0:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 134; /* plussi3_sign_extendhi */

            case 1:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 142; /* plussi3_sign_extendqi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      if (pnum_clobbers == NULL
          || GET_MODE (x3) != E_SImode)
        return -1;
      x6 = XEXP (x3, 0);
      if (GET_CODE (x6) != LTU
          || GET_MODE (x6) != E_SImode)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 48
          || GET_MODE (x7) != E_CCmode)
        return -1;
      x8 = XEXP (x6, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x2) != E_SImode)
        return -1;
      x9 = XEXP (x3, 1);
      operands[1] = x9;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x5 = XEXP (x2, 1);
      operands[2] = x5;
      if (rx_restricted_mem_operand (operands[2], E_SImode)
          && 
#line 1532 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
        {
          *pnum_clobbers = 1;
          return 64; /* adc_internal_mem */
        }
      if (!rx_speed_source_operand (operands[2], E_SImode)
          || !
#line 1547 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
        return -1;
      *pnum_clobbers = 1;
      return 65; /* adc_internal */

    default:
      return -1;
    }
}

static int
recog_9 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  switch (XVECLEN (x3, 0))
    {
    case 2:
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      x4 = XVECEXP (x3, 0, 0);
      operands[1] = x4;
      switch (XINT (x3, 1))
        {
        case 49:
          x5 = XVECEXP (x3, 0, 1);
          if (GET_CODE (x5) != REG
              || REGNO (x5) != 48
              || GET_MODE (x5) != E_CCmode
              || !register_operand (operands[1], E_SImode)
              || !
#line 2397 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
            return -1;
          return 115; /* *sat */

        case 40:
          if (!immediate_operand (operands[1], E_SImode))
            return -1;
          x5 = XVECEXP (x3, 0, 1);
          operands[2] = x5;
          if (!immediate_operand (operands[2], E_SImode))
            return -1;
          return 306; /* mvfcp */

        default:
          return -1;
        }

    case 1:
      switch (XINT (x3, 1))
        {
        case 52:
          if (pattern24 (x3, IOR) != 0)
            return -1;
          return 205; /* bset */

        case 95:
          if (pattern25 (x3, E_QImode, IOR) != 0)
            return -1;
          return 206; /* bitset_in_memory */

        case 54:
          if (pattern24 (x3, XOR) != 0)
            return -1;
          return 211; /* binvert */

        case 97:
          if (pattern25 (x3, E_SImode, XOR) != 0)
            return -1;
          return 212; /* bnot_memory */

        case 53:
          if (pattern23 (x3, E_SImode) != 0
              || !register_operand (operands[0], E_SImode))
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          x6 = XEXP (x4, 0);
          x7 = XEXP (x6, 0);
          x8 = XEXP (x7, 1);
          operands[1] = x8;
          if (!rx_shift_operand (operands[1], E_SImode))
            return -1;
          x9 = XEXP (x4, 1);
          operands[2] = x9;
          if (!register_operand (operands[2], E_SImode))
            return -1;
          return 215; /* bclr */

        case 96:
          if (pattern23 (x3, E_QImode) != 0
              || !rx_restricted_mem_operand (operands[0], E_QImode))
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          x6 = XEXP (x4, 0);
          x7 = XEXP (x6, 0);
          x8 = XEXP (x7, 1);
          operands[1] = x8;
          if (!nonmemory_operand (operands[1], E_QImode))
            return -1;
          x9 = XEXP (x4, 1);
          if (!rtx_equal_p (x9, operands[0]))
            return -1;
          return 216; /* bclr_memory */

        case 46:
          if (GET_MODE (x3) != E_SImode
              || !register_operand (operands[0], E_SImode))
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          operands[1] = x4;
          if (!register_operand (operands[1], E_SImode))
            return -1;
          return 295; /* revw */

        case 48:
          if (pnum_clobbers == NULL
              || GET_MODE (x3) != E_SImode
              || !register_operand (operands[0], E_SImode))
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          operands[1] = x4;
          if (!rx_compare_operand (operands[1], E_SFmode))
            return -1;
          *pnum_clobbers = 1;
          return 296; /* lrintsf2 */

        case 148:
          if (pnum_clobbers == NULL
              || GET_MODE (x3) != E_SImode
              || !register_operand (operands[0], E_SImode))
            return -1;
          x4 = XVECEXP (x3, 0, 0);
          operands[1] = x4;
          if (!register_operand (operands[1], E_DFmode)
              || !
#line 4730 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          *pnum_clobbers = 1;
          return 297; /* lrintdf2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_10 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case SIGN_EXTEND:
      if (pattern13 (x3, SIGN_EXTEND) != 0)
        return -1;
      if (rx_restricted_mem_operand (operands[2], E_SImode)
          && 
#line 1883 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize_size || reload_completed) && ! TARGET_BIG_ENDIAN_DATA))
        return 79; /* mulsidi3_mem */
      if (!rx_speed_source_operand (operands[2], E_SImode)
          || !
#line 1897 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(! TARGET_BIG_ENDIAN_DATA))
        return -1;
      return 80; /* mulsidi3 */

    case ZERO_EXTEND:
      if (pattern13 (x3, ZERO_EXTEND) != 0)
        return -1;
      if (rx_restricted_mem_operand (operands[2], E_SImode)
          && 
#line 1912 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize_size || reload_completed) && ! TARGET_BIG_ENDIAN_DATA))
        return 81; /* umulsidi3_mem */
      if (!rx_speed_compare_operand (operands[2], E_SImode)
          || !
#line 1923 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(! TARGET_BIG_ENDIAN_DATA))
        return -1;
      return 82; /* umulsidi3 */

    case REG:
    case SUBREG:
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      switch (GET_CODE (x5))
        {
        case CONST_INT:
        case CONST_WIDE_INT:
        case CONST_POLY_INT:
        case CONST_FIXED:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case CONST:
        case REG:
        case SUBREG:
        case MEM:
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          operands[2] = x5;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode
                  || !register_operand (operands[1], E_SImode))
                return -1;
              if (rx_restricted_mem_operand (operands[2], E_SImode)
                  && 
#line 2027 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize_size || reload_completed)))
                return 91; /* mulsi3_mem */
              if (!rx_speed_source_operand (operands[2], E_SImode))
                return -1;
              return 92; /* mulsi3 */

            case E_SFmode:
              if (pattern40 (x3, pnum_clobbers, E_SFmode) != 0)
                return -1;
              if (rx_restricted_mem_operand (operands[2], E_SFmode)
                  && 
#line 2962 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (optimize_size || reload_completed)))
                {
                  *pnum_clobbers = 1;
                  return 181; /* mulsf3_mem */
                }
              if (!rx_speed_source_operand (operands[2], E_SFmode))
                return -1;
              if (
#line 2989 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (!TARGET_RXV2)))
                {
                  *pnum_clobbers = 1;
                  return 182; /* mulsf3v1 */
                }
              if (!
#line 3003 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && TARGET_RXV2))
                return -1;
              *pnum_clobbers = 1;
              return 183; /* mulsf3v2 */

            case E_DFmode:
              if (pnum_clobbers == NULL
                  || pattern48 (x3) != 0
                  || !
#line 3018 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
                return -1;
              *pnum_clobbers = 1;
              return 184; /* muldf3 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern30 (x3))
            {
            case 0:
              if (!
#line 2791 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 160; /* multsi3_zero_extendhi */

            case 1:
              if (!
#line 2791 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 166; /* multsi3_zero_extendqi */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern30 (x3))
            {
            case 0:
              if (!
#line 2791 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 163; /* multsi3_sign_extendhi */

            case 1:
              if (!
#line 2791 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 169; /* multsi3_sign_extendqi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_11 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      switch (pattern12 (x3, pnum_clobbers))
        {
        case 0:
          if (rx_restricted_mem_operand (operands[2], E_SImode))
            {
              *pnum_clobbers = 1;
              return 69; /* andsi3_mem */
            }
          if (!rx_speed_source_operand (operands[2], E_SImode))
            return -1;
          *pnum_clobbers = 1;
          return 70; /* andsi3 */

        case 1:
          if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 131; /* andsi3_zero_extendhi */

        case 2:
          if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 139; /* andsi3_zero_extendqi */

        case 3:
          if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 135; /* andsi3_sign_extendhi */

        case 4:
          if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 143; /* andsi3_sign_extendqi */

        default:
          return -1;
        }

    case NOT:
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != ASHIFT)
        return -1;
      x6 = XEXP (x5, 0);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x7 = XEXP (x5, 1);
      operands[1] = x7;
      x8 = XEXP (x3, 1);
      switch (GET_CODE (x8))
        {
        case REG:
        case SUBREG:
          operands[2] = x8;
          if (!register_operand (operands[2], E_SImode)
              || !register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || GET_MODE (x4) != E_SImode
              || GET_MODE (x5) != E_SImode
              || !rx_shift_operand (operands[1], E_SImode))
            return -1;
          return 214; /* *bitclr */

        case MEM:
          if (!rtx_equal_p (x8, operands[0])
              || !rx_restricted_mem_operand (operands[0], E_QImode)
              || GET_MODE (x3) != E_QImode
              || GET_MODE (x4) != E_QImode
              || GET_MODE (x5) != E_QImode)
            return -1;
          if (nonmemory_operand (operands[1], E_QImode))
            return 217; /* bitclr_in_memory */
          if (!nonmemory_operand (operands[1], E_SImode))
            return -1;
          return 218; /* *bitclr_in_memory2 */

        default:
          return -1;
        }

    case MEM:
      if (!rtx_equal_p (x4, operands[0])
          || !rx_restricted_mem_operand (operands[0], E_QImode)
          || GET_MODE (x3) != E_QImode)
        return -1;
      x8 = XEXP (x3, 1);
      operands[1] = x8;
      if (!rx_bitclr_operand (operands[1], E_VOIDmode))
        return -1;
      return 221; /* *bitclr_in_memory_2 */

    default:
      return -1;
    }
}

static int
recog_12 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case LABEL_REF:
      x3 = XEXP (x1, 0);
      if (GET_CODE (x3) == PC)
        {
          x4 = XEXP (x2, 0);
          operands[0] = x4;
          return 16; /* jump */
        }
      break;

    case REG:
    case SUBREG:
      if (register_operand (x2, E_SImode))
        {
          x3 = XEXP (x1, 0);
          switch (GET_CODE (x3))
            {
            case PC:
              operands[0] = x2;
              return 17; /* indirect_jump */

            case ZERO_EXTRACT:
              if (pnum_clobbers != NULL
                  && pattern29 (x1) == 0)
                {
                  *pnum_clobbers = 1;
                  return 223; /* rx_insv_reg */
                }
              break;

            default:
              break;
            }
        }
      break;

    case CONST_INT:
      operands[2] = x2;
      if (const_int_operand (operands[2], E_SImode))
        {
          x3 = XEXP (x1, 0);
          if (GET_CODE (x3) == ZERO_EXTRACT
              && GET_MODE (x3) == E_SImode)
            {
              x5 = XEXP (x3, 1);
              if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + 1])
                {
                  x6 = XEXP (x3, 0);
                  operands[0] = x6;
                  if (register_operand (operands[0], E_SImode))
                    {
                      x7 = XEXP (x3, 2);
                      operands[1] = x7;
                      if (rx_shift_operand (operands[1], E_SImode))
                        return 222; /* *insv_imm */
                    }
                }
            }
        }
      break;

    default:
      break;
    }
  operands[1] = x2;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  switch (GET_MODE (operands[0]))
    {
    case E_SFmode:
      if (!nonimmediate_operand (operands[0], E_SFmode)
          || !general_operand (operands[1], E_SFmode)
          || !
#line 33 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
        return -1;
      return 29; /* *movsf_internal */

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || !general_operand (operands[1], E_SImode))
        return -1;
      return 30; /* *movsi_internal */

    case E_HImode:
      if (!nonimmediate_operand (operands[0], E_HImode)
          || !general_operand (operands[1], E_HImode))
        return -1;
      return 31; /* *movhi_internal */

    case E_QImode:
      if (!nonimmediate_operand (operands[0], E_QImode)
          || !general_operand (operands[1], E_QImode))
        return -1;
      return 32; /* *movqi_internal */

    case E_DFmode:
      if (!nonimmediate_operand (operands[0], E_DFmode)
          || !general_operand (operands[1], E_DFmode)
          || !
#line 848 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
        return -1;
      return 33; /* movdf */

    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || !general_operand (operands[1], E_DImode)
          || !
#line 4874 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(TARGET_ENABLE_LRA))
        return -1;
      return 308; /* movdi */

    default:
      return -1;
    }
}

static int
recog_13 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  switch (GET_CODE (x3))
    {
    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case LTGT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
      if (comparison_operator (x3, E_VOIDmode))
        {
          res = recog_2 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      switch (GET_CODE (x3))
        {
        case NE:
        case EQ:
        case GE:
        case LT:
        case UNORDERED:
        case ORDERED:
          x4 = XEXP (x3, 1);
          if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
            {
              switch (GET_CODE (x3))
                {
                case NE:
                case EQ:
                case GE:
                case LT:
                  res = recog_3 (x1, insn, pnum_clobbers);
                  if (res >= 0)
                    return res;
                  break;

                default:
                  break;
                }
              if (rx_z_comparison_operator (x3, E_VOIDmode))
                {
                  operands[4] = x3;
                  if (pattern33 (x1, ZERO_EXTRACT) == 0
                      && pattern59 (x2) == 0)
                    return 7; /* *cbranchsi4_tst_ext */
                }
            }
          operands[3] = x3;
          if (rx_fp_comparison_operator (operands[3], E_VOIDmode)
              && pattern28 (x1, E_SFmode) == 0)
            {
              if (rx_restricted_mem_operand (operands[1], E_SFmode)
                  && 
#line 424 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
                return 10; /* *cbranchsf4_mem */
              if (rx_speed_source_operand (operands[1], E_SFmode)
                  && 
#line 442 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
                return 11; /* *cbranchsf4 */
            }
          break;

        default:
          break;
        }
      if (!comparison_operator (x3, E_VOIDmode))
        return -1;
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 48)
        return -1;
      x4 = XEXP (x3, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XEXP (x2, 1);
      if (GET_CODE (x6) == LABEL_REF)
        {
          x7 = XEXP (x2, 2);
          if (GET_CODE (x7) == PC)
            {
              x8 = XEXP (x1, 0);
              if (GET_CODE (x8) == PC)
                {
                  operands[1] = x3;
                  x9 = XEXP (x6, 0);
                  operands[0] = x9;
                  if (
#line 534 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                    return 15; /* *conditional_branch */
                }
            }
        }
      x8 = XEXP (x1, 0);
      operands[0] = x8;
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x2) != E_SImode)
        return -1;
      operands[2] = x3;
      operands[1] = x6;
      if (!nonmemory_operand (operands[1], E_SImode))
        return -1;
      x7 = XEXP (x2, 2);
      if (!rtx_equal_p (x7, operands[0])
          || !
#line 1354 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
        return -1;
      return 55; /* *stcc_reg */

    default:
      return -1;
    }
}

static int
recog_14 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (pattern26 (x3, UNSPEC, CONST) != 0)
    return -1;
  x4 = XEXP (x3, 1);
  x5 = XEXP (x4, 0);
  if (XVECLEN (x5, 0) != 1
      || XINT (x5, 1) != 13
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XEXP (x2, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 0
      || GET_MODE (x6) != E_SImode)
    return -1;
  x7 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x7) != RETURN
      || GET_MODE (x3) != E_SImode)
    return -1;
  x8 = XVECEXP (x5, 0, 0);
  operands[0] = x8;
  if (!const_int_operand (operands[0], E_VOIDmode))
    return -1;
  return 20; /* deallocate_and_return */
}

static int
recog_15 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (pattern32 (x2, E_SImode, 0, 4) != 0)
    return -1;
  x3 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x3) != SET)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != MEM
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != MINUS
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 0
      || GET_MODE (x6) != E_SImode)
    return -1;
  x7 = XEXP (x5, 1);
  if (x7 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x8 = XEXP (x2, 1);
  if (GET_MODE (x8) != E_SImode)
    return -1;
  x9 = XEXP (x3, 1);
  operands[0] = x9;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  return 38; /* stack_push */
}

static int
recog_16 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  switch (GET_CODE (x2))
    {
    case CLOBBER:
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != REG
          || REGNO (x3) != 48
          || GET_MODE (x3) != E_CCmode)
        return -1;
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      x6 = XEXP (x5, 0);
      operands[1] = x6;
      x7 = XEXP (x5, 1);
      operands[2] = x7;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (pattern63 (x5, E_SImode) != 0
              || !
#line 2408 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize_size || reload_completed)))
            return -1;
          return 116; /* subsi3_mem */

        case E_SFmode:
          if (pattern63 (x5, E_SFmode) != 0
              || !
#line 3042 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (optimize_size || reload_completed)))
            return -1;
          return 186; /* subsf3_mem */

        default:
          return -1;
        }

    case SET:
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x4 = XVECEXP (x1, 0, 0);
      x5 = XEXP (x4, 1);
      if (GET_MODE (x5) != E_SImode)
        return -1;
      x6 = XEXP (x5, 0);
      if (!register_operand (x6, E_SImode))
        return -1;
      x7 = XEXP (x5, 1);
      if (!rx_restricted_mem_operand (x7, E_SImode))
        return -1;
      x8 = XEXP (x2, 1);
      switch (GET_CODE (x8))
        {
        case COMPARE:
          if (pattern43 (x2, MINUS) != 0)
            return -1;
          operands[1] = x6;
          operands[2] = x7;
          x9 = XEXP (x8, 0);
          x10 = XEXP (x9, 0);
          if (!rtx_equal_p (x10, operands[1]))
            return -1;
          x11 = XEXP (x9, 1);
          if (!rtx_equal_p (x11, operands[2])
              || !
#line 2441 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSCmode)))
            return -1;
          return 118; /* *subsi3_flags_mem */

        case MINUS:
          if (pnum_clobbers == NULL
              || GET_MODE (x8) != E_SImode
              || pattern65 (x8, GTU) != 0)
            return -1;
          operands[2] = x6;
          operands[3] = x7;
          if (pattern68 (x2) != 0)
            return -1;
          *pnum_clobbers = 1;
          return 124; /* subdi3_internal_mem */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_17 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  operands[3] = x4;
  if (!register_operand (operands[3], E_SImode))
    return -1;
  x5 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x5) != SET)
    return -1;
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) != MINUS
      || GET_MODE (x6) != E_SImode)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != MINUS
      || GET_MODE (x7) != E_SImode)
    return -1;
  x8 = XEXP (x6, 1);
  if (GET_CODE (x8) != GTU
      || GET_MODE (x8) != E_SImode
      || !register_operand (operands[0], E_SImode)
      || GET_MODE (x3) != E_SImode)
    return -1;
  x9 = XEXP (x3, 0);
  operands[2] = x9;
  if (!register_operand (operands[2], E_SImode)
      || pattern68 (x5) != 0)
    return -1;
  *pnum_clobbers = 1;
  return 125; /* subdi3_internal_mem2 */
}

static int
recog_18 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (!register_operand (x3, E_SImode))
    return -1;
  x4 = XEXP (x2, 0);
  switch (GET_CODE (x4))
    {
    case PC:
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != USE)
        return -1;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != LABEL_REF)
        return -1;
      operands[0] = x3;
      x7 = XEXP (x6, 0);
      operands[1] = x7;
      return 18; /* tablejump */

    case ZERO_EXTRACT:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      x8 = XEXP (x4, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (pattern10 (x5, 48, CLOBBER, E_CCmode) != 0)
        return -1;
      x9 = XEXP (x4, 0);
      operands[0] = x9;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x10 = XEXP (x4, 2);
      operands[1] = x10;
      if (!const_int_operand (operands[1], E_SImode))
        return -1;
      operands[2] = x3;
      return 223; /* rx_insv_reg */

    default:
      return -1;
    }
}

static int
recog_19 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || GET_MODE (x4) != E_SImode)
    return -1;
  switch (REGNO (x4))
    {
    case 0:
      x5 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x5) != SET)
        return -1;
      x6 = XEXP (x5, 1);
      if (GET_CODE (x6) != PLUS
          || GET_MODE (x6) != E_SImode)
        return -1;
      x7 = XEXP (x6, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 0
          || GET_MODE (x7) != E_SImode)
        return -1;
      x8 = XEXP (x6, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
        return -1;
      x9 = XEXP (x5, 0);
      if (GET_CODE (x9) != REG
          || REGNO (x9) != 0
          || GET_MODE (x9) != E_SImode)
        return -1;
      x10 = XEXP (x2, 0);
      operands[0] = x10;
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      return 41; /* stack_pop */

    case 2:
      if (pnum_clobbers == NULL
          || pattern51 (x1) != 0
          || GET_MODE (x3) != E_BLKmode
          || !
#line 3874 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      *pnum_clobbers = 3;
      return 231; /* rx_movstr */

    default:
      return -1;
    }
}

static int
recog_20 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x5 = XEXP (x2, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 48)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != SET)
    return -1;
  x7 = XEXP (x3, 0);
  if (GET_MODE (x7) != E_SImode)
    return -1;
  x8 = XEXP (x6, 0);
  operands[0] = x8;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x9 = XEXP (x6, 1);
  if (GET_MODE (x9) != E_SImode)
    return -1;
  switch (GET_CODE (x7))
    {
    case ABS:
      if (GET_CODE (x9) != ABS)
        return -1;
      x10 = XEXP (x7, 0);
      operands[1] = x10;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x11 = XEXP (x9, 0);
      if (!rtx_equal_p (x11, operands[1])
          || !
#line 1414 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 59; /* *abssi2_flags */

    case PLUS:
      if (GET_CODE (x9) != PLUS)
        return -1;
      x12 = XEXP (x7, 1);
      operands[2] = x12;
      x13 = XEXP (x9, 1);
      if (!rtx_equal_p (x13, operands[2]))
        return -1;
      x10 = XEXP (x7, 0);
      switch (GET_CODE (x10))
        {
        case REG:
        case SUBREG:
          operands[1] = x10;
          if (!register_operand (operands[1], E_SImode)
              || !rx_speed_source_operand (operands[2], E_SImode))
            return -1;
          x11 = XEXP (x9, 0);
          if (!rtx_equal_p (x11, operands[1])
              || !
#line 1493 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSCmode)))
            return -1;
          return 63; /* *addsi3_flags */

        case PLUS:
          if (GET_MODE (x10) != E_SImode)
            return -1;
          x14 = XEXP (x10, 0);
          if (GET_CODE (x14) != LTU
              || GET_MODE (x14) != E_SImode)
            return -1;
          x15 = XEXP (x14, 0);
          if (GET_CODE (x15) != REG
              || REGNO (x15) != 48
              || GET_MODE (x15) != E_CCmode)
            return -1;
          x16 = XEXP (x14, 1);
          if (x16 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XEXP (x9, 0);
          if (GET_CODE (x11) != PLUS
              || GET_MODE (x11) != E_SImode)
            return -1;
          x17 = XEXP (x11, 0);
          if (GET_CODE (x17) != LTU
              || GET_MODE (x17) != E_SImode)
            return -1;
          x18 = XEXP (x17, 0);
          if (GET_CODE (x18) != REG
              || REGNO (x18) != 48
              || GET_MODE (x18) != E_CCmode)
            return -1;
          x19 = XEXP (x17, 1);
          if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x20 = XEXP (x10, 1);
          operands[1] = x20;
          if (!register_operand (operands[1], E_SImode)
              || !rx_source_operand (operands[2], E_SImode))
            return -1;
          x21 = XEXP (x11, 1);
          if (!rtx_equal_p (x21, operands[1])
              || !
#line 1591 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSCmode)))
            return -1;
          return 67; /* *adc_flags */

        default:
          return -1;
        }

    case AND:
      if (GET_CODE (x9) != AND
          || pattern64 (x1) != 0
          || !
#line 1786 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 72; /* *andsi3_flags */

    case NEG:
      if (GET_CODE (x9) != NEG)
        return -1;
      x10 = XEXP (x7, 0);
      operands[1] = x10;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x11 = XEXP (x9, 0);
      if (!rtx_equal_p (x11, operands[1])
          || !
#line 2094 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 96; /* *negsi2_flags */

    case NOT:
      if (GET_CODE (x9) != NOT)
        return -1;
      x10 = XEXP (x7, 0);
      operands[1] = x10;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x11 = XEXP (x9, 0);
      if (!rtx_equal_p (x11, operands[1])
          || !
#line 2120 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 98; /* *one_cmplsi2_flags */

    case ROTATE:
      if (pattern62 (x1, ROTATE) != 0
          || !
#line 2231 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 104; /* *rotlsi3_flags */

    case ROTATERT:
      if (pattern62 (x1, ROTATERT) != 0
          || !
#line 2255 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 106; /* *rotrsi3_flags */

    case ASHIFTRT:
      if (pattern62 (x1, ASHIFTRT) != 0
          || !
#line 2282 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 108; /* *ashrsi3_flags */

    case LSHIFTRT:
      if (pattern62 (x1, LSHIFTRT) != 0
          || !
#line 2312 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 110; /* *lshrsi3_flags */

    case ASHIFT:
      if (pattern62 (x1, ASHIFT) != 0
          || !
#line 2342 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 112; /* *ashlsi3_flags */

    case MINUS:
      if (GET_CODE (x9) != MINUS)
        return -1;
      x10 = XEXP (x7, 0);
      switch (GET_CODE (x10))
        {
        case REG:
        case SUBREG:
          if (pattern64 (x1) != 0
              || !
#line 2456 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSCmode)))
            return -1;
          return 119; /* *subsi3_flags */

        case MINUS:
          if (GET_MODE (x10) != E_SImode)
            return -1;
          x12 = XEXP (x7, 1);
          if (GET_CODE (x12) != GEU
              || GET_MODE (x12) != E_SImode)
            return -1;
          x22 = XEXP (x12, 0);
          if (GET_CODE (x22) != REG
              || REGNO (x22) != 48
              || GET_MODE (x22) != E_CCmode)
            return -1;
          x23 = XEXP (x12, 1);
          if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || pattern65 (x9, GEU) != 0)
            return -1;
          x13 = XEXP (x9, 1);
          x24 = XEXP (x13, 0);
          if (GET_CODE (x24) != REG
              || REGNO (x24) != 48
              || GET_MODE (x24) != E_CCmode)
            return -1;
          x25 = XEXP (x13, 1);
          if (x25 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x14 = XEXP (x10, 0);
          operands[1] = x14;
          if (!register_operand (operands[1], E_SImode))
            return -1;
          x20 = XEXP (x10, 1);
          operands[2] = x20;
          if (!rx_compare_operand (operands[2], E_SImode))
            return -1;
          x11 = XEXP (x9, 0);
          x17 = XEXP (x11, 0);
          if (!rtx_equal_p (x17, operands[1]))
            return -1;
          x21 = XEXP (x11, 1);
          if (!rtx_equal_p (x21, operands[2])
              || !
#line 2541 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
            return -1;
          return 123; /* *sbb_flags */

        default:
          return -1;
        }

    case XOR:
      if (GET_CODE (x9) != XOR
          || pattern64 (x1) != 0
          || !
#line 2678 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 129; /* *xorsi3_flags */

    default:
      return -1;
    }
}

static int
recog_21 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      if (GET_CODE (x4) == REG
          && REGNO (x4) == 0)
        {
          res = recog_15 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      x6 = XEXP (x3, 1);
      switch (GET_CODE (x6))
        {
        case CONST_INT:
        case CONST_WIDE_INT:
        case CONST_POLY_INT:
        case CONST_FIXED:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case CONST:
        case REG:
        case SUBREG:
        case MEM:
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          switch (GET_CODE (x6))
            {
            case MEM:
              res = recog_16 (x1, insn, pnum_clobbers);
              if (res >= 0)
                return res;
              break;

            case REG:
            case SUBREG:
              res = recog_17 (x1, insn, pnum_clobbers);
              if (res >= 0)
                return res;
              break;

            default:
              break;
            }
          x7 = XVECEXP (x1, 0, 1);
          switch (GET_CODE (x7))
            {
            case SET:
              if (pnum_clobbers == NULL)
                return -1;
              x8 = XEXP (x7, 1);
              if (GET_CODE (x8) != MINUS
                  || GET_MODE (x8) != E_SImode)
                return -1;
              x9 = XEXP (x8, 0);
              if (GET_CODE (x9) != MINUS
                  || GET_MODE (x9) != E_SImode)
                return -1;
              x10 = XEXP (x8, 1);
              if (GET_CODE (x10) != GTU
                  || GET_MODE (x10) != E_SImode
                  || !register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode)
                return -1;
              operands[2] = x4;
              if (!register_operand (operands[2], E_SImode))
                return -1;
              operands[3] = x6;
              if (!rx_speed_compare_operand (operands[3], E_SImode))
                return -1;
              x11 = XEXP (x7, 0);
              operands[1] = x11;
              if (!register_operand (operands[1], E_SImode))
                return -1;
              x12 = XEXP (x9, 0);
              operands[4] = x12;
              if (!register_operand (operands[4], E_SImode))
                return -1;
              x13 = XEXP (x9, 1);
              operands[5] = x13;
              if (!rx_speed_compare_operand (operands[5], E_SImode))
                return -1;
              x14 = XEXP (x10, 0);
              if (!rtx_equal_p (x14, operands[3]))
                return -1;
              x15 = XEXP (x10, 1);
              if (!rtx_equal_p (x15, operands[2]))
                return -1;
              *pnum_clobbers = 1;
              return 126; /* subdi3_internal */

            case CLOBBER:
              x11 = XEXP (x7, 0);
              if (GET_CODE (x11) != REG
                  || REGNO (x11) != 48
                  || GET_MODE (x11) != E_CCmode)
                return -1;
              operands[1] = x4;
              operands[2] = x6;
              switch (GET_MODE (operands[0]))
                {
                case E_DFmode:
                  if (pattern60 (x3, E_DFmode) != 0
                      || !
#line 3030 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
                    return -1;
                  return 185; /* subdf3 */

                case E_SFmode:
                  if (pattern60 (x3, E_SFmode) != 0)
                    return -1;
                  if (
#line 3069 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (!TARGET_RXV2)))
                    return 187; /* subsf3v1 */
                  if (!
#line 3083 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && TARGET_RXV2))
                    return -1;
                  return 188; /* subsf3v2 */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern37 (x1))
            {
            case 0:
              if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 148; /* minussi3_zero_extendhi */

            case 1:
              if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 154; /* minussi3_zero_extendqi */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern37 (x1))
            {
            case 0:
              if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 151; /* minussi3_sign_extendhi */

            case 1:
              if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 157; /* minussi3_sign_extendqi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      if (pattern26 (x3, REG, GEU) != 0)
        return -1;
      x6 = XEXP (x3, 1);
      x16 = XEXP (x6, 0);
      if (REGNO (x16) != 48
          || GET_MODE (x16) != E_CCmode)
        return -1;
      x17 = XEXP (x6, 1);
      if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      x18 = XEXP (x4, 0);
      operands[1] = x18;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x19 = XEXP (x4, 1);
      operands[2] = x19;
      x7 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x7))
        {
        case CLOBBER:
          x11 = XEXP (x7, 0);
          if (GET_CODE (x11) != REG
              || REGNO (x11) != 48
              || GET_MODE (x11) != E_CCmode)
            return -1;
          if (rx_restricted_mem_operand (operands[2], E_SImode)
              && 
#line 2486 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
            return 120; /* sbb_internal_mem */
          if (!rx_speed_compare_operand (operands[2], E_SImode)
              || !
#line 2501 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
            return -1;
          return 121; /* sbb_internal */

        case SET:
          x8 = XEXP (x7, 1);
          if (GET_CODE (x8) != COMPARE)
            return -1;
          x9 = XEXP (x8, 0);
          if (GET_CODE (x9) != MINUS
              || GET_MODE (x9) != E_SImode)
            return -1;
          x12 = XEXP (x9, 0);
          if (GET_CODE (x12) != MINUS
              || GET_MODE (x12) != E_SImode)
            return -1;
          x13 = XEXP (x9, 1);
          if (GET_CODE (x13) != GEU
              || GET_MODE (x13) != E_SImode)
            return -1;
          x20 = XEXP (x13, 0);
          if (GET_CODE (x20) != REG
              || REGNO (x20) != 48
              || GET_MODE (x20) != E_CCmode)
            return -1;
          x21 = XEXP (x13, 1);
          if (x21 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x10 = XEXP (x8, 1);
          if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XEXP (x7, 0);
          if (GET_CODE (x11) != REG
              || REGNO (x11) != 48
              || !rx_restricted_mem_operand (operands[2], E_SImode))
            return -1;
          x22 = XEXP (x12, 0);
          if (!rtx_equal_p (x22, operands[1]))
            return -1;
          x23 = XEXP (x12, 1);
          if (!rtx_equal_p (x23, operands[2])
              || !
#line 2521 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
            return -1;
          return 122; /* *sbb_flags_mem */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_22 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      if (GET_CODE (x4) == REG
          && REGNO (x4) == 0)
        {
          res = recog_14 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      operands[1] = x4;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      x6 = XEXP (x3, 1);
      switch (GET_CODE (x6))
        {
        case CONST_INT:
        case CONST_WIDE_INT:
        case CONST_POLY_INT:
        case CONST_FIXED:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case CONST:
        case REG:
        case SUBREG:
        case MEM:
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          switch (pattern44 (x1, PLUS))
            {
            case 0:
              switch (GET_MODE (operands[0]))
                {
                case E_SImode:
                  if (pattern63 (x3, E_SImode) != 0)
                    return -1;
                  return 60; /* addsi3_mem */

                case E_SFmode:
                  if (!register_operand (operands[0], E_SFmode)
                      || GET_MODE (x3) != E_SFmode
                      || !register_operand (operands[1], E_SFmode))
                    return -1;
                  if (rx_restricted_mem_operand (operands[2], E_SFmode)
                      && 
#line 2857 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (optimize_size || reload_completed)))
                    return 174; /* addsf3_mem */
                  if (!rx_speed_source_operand (operands[2], E_SFmode))
                    return -1;
                  if (
#line 2884 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (!TARGET_RXV2)))
                    return 175; /* addsf3v1 */
                  if (!
#line 2898 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && TARGET_RXV2))
                    return -1;
                  return 176; /* addsf3v2 */

                default:
                  return -1;
                }

            case 1:
              if (!register_operand (operands[0], E_SImode)
                  || GET_MODE (x3) != E_SImode
                  || !register_operand (operands[1], E_SImode)
                  || !rx_restricted_mem_operand (operands[2], E_SImode))
                return -1;
              x7 = XVECEXP (x1, 0, 1);
              x8 = XEXP (x7, 1);
              x9 = XEXP (x8, 0);
              x10 = XEXP (x9, 0);
              if (!rtx_equal_p (x10, operands[1]))
                return -1;
              x11 = XEXP (x9, 1);
              if (!rtx_equal_p (x11, operands[2])
                  || !
#line 1479 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSCmode)))
                return -1;
              return 62; /* *addsi3_flags_mem */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern46 (x1))
            {
            case 0:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 130; /* plussi3_zero_extendhi */

            case 1:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 138; /* plussi3_zero_extendqi */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern46 (x1))
            {
            case 0:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 134; /* plussi3_sign_extendhi */

            case 1:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 142; /* plussi3_sign_extendqi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case PLUS:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      x12 = XEXP (x4, 0);
      if (GET_CODE (x12) != LTU
          || GET_MODE (x12) != E_SImode)
        return -1;
      x13 = XEXP (x12, 0);
      if (GET_CODE (x13) != REG
          || REGNO (x13) != 48
          || GET_MODE (x13) != E_CCmode)
        return -1;
      x14 = XEXP (x12, 1);
      if (x14 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x2, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      x15 = XEXP (x4, 1);
      operands[1] = x15;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x6 = XEXP (x3, 1);
      operands[2] = x6;
      x7 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x7))
        {
        case CLOBBER:
          x16 = XEXP (x7, 0);
          if (GET_CODE (x16) != REG
              || REGNO (x16) != 48
              || GET_MODE (x16) != E_CCmode)
            return -1;
          if (rx_restricted_mem_operand (operands[2], E_SImode)
              && 
#line 1532 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
            return 64; /* adc_internal_mem */
          if (!rx_speed_source_operand (operands[2], E_SImode)
              || !
#line 1547 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
            return -1;
          return 65; /* adc_internal */

        case SET:
          x8 = XEXP (x7, 1);
          if (GET_CODE (x8) != COMPARE)
            return -1;
          x9 = XEXP (x8, 0);
          if (pattern61 (x9, LTU, PLUS) != 0)
            return -1;
          x10 = XEXP (x9, 0);
          x17 = XEXP (x10, 0);
          x18 = XEXP (x17, 0);
          if (GET_CODE (x18) != REG
              || REGNO (x18) != 48
              || GET_MODE (x18) != E_CCmode)
            return -1;
          x19 = XEXP (x17, 1);
          if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x20 = XEXP (x8, 1);
          if (x20 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x16 = XEXP (x7, 0);
          if (GET_CODE (x16) != REG
              || REGNO (x16) != 48
              || !rx_restricted_mem_operand (operands[2], E_SImode))
            return -1;
          x21 = XEXP (x10, 1);
          if (!rtx_equal_p (x21, operands[1]))
            return -1;
          x11 = XEXP (x9, 1);
          if (!rtx_equal_p (x11, operands[2])
              || !
#line 1569 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSCmode)))
            return -1;
          return 66; /* *adc_flags_mem */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_23 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (pattern16 (x2))
    {
    case 0:
      x3 = XEXP (x2, 1);
      x4 = XEXP (x3, 1);
      operands[2] = x4;
      x5 = XVECEXP (x1, 0, 1);
      switch (GET_CODE (x5))
        {
        case CLOBBER:
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != REG
              || REGNO (x6) != 48
              || GET_MODE (x6) != E_CCmode)
            return -1;
          if (rx_restricted_mem_operand (operands[2], E_SImode))
            return 69; /* andsi3_mem */
          if (!rx_speed_source_operand (operands[2], E_SImode))
            return -1;
          return 70; /* andsi3 */

        case SET:
          x7 = XEXP (x5, 1);
          if (GET_CODE (x7) != COMPARE)
            return -1;
          x8 = XEXP (x7, 0);
          if (GET_CODE (x8) != AND
              || GET_MODE (x8) != E_SImode)
            return -1;
          x9 = XEXP (x7, 1);
          if (x9 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x6 = XEXP (x5, 0);
          if (GET_CODE (x6) != REG
              || REGNO (x6) != 48
              || !rx_restricted_mem_operand (operands[2], E_SImode))
            return -1;
          x10 = XEXP (x8, 0);
          if (!rtx_equal_p (x10, operands[1]))
            return -1;
          x11 = XEXP (x8, 1);
          if (!rtx_equal_p (x11, operands[2])
              || !
#line 1772 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
            return -1;
          return 71; /* *andsi3_flags_mem */

        default:
          return -1;
        }

    case 1:
      switch (pattern54 (x1))
        {
        case 0:
          if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 131; /* andsi3_zero_extendhi */

        case 1:
          if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 139; /* andsi3_zero_extendqi */

        default:
          return -1;
        }

    case 2:
      switch (pattern54 (x1))
        {
        case 0:
          if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 135; /* andsi3_sign_extendhi */

        case 1:
          if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 143; /* andsi3_sign_extendqi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_24 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pattern15 (x1) != 0)
    return -1;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  switch (GET_CODE (x4))
    {
    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      operands[2] = x4;
      switch (pattern55 (x3))
        {
        case 0:
          if (rx_restricted_mem_operand (operands[2], E_SImode)
              && 
#line 1826 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize_size || reload_completed)))
            return 75; /* divsi3_mem */
          if (!rx_speed_source_operand (operands[2], E_SImode))
            return -1;
          return 76; /* divsi3 */

        case 1:
          if (!register_operand (operands[2], E_DFmode)
              || !
#line 2926 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          return 178; /* divdf3 */

        case 2:
          if (rx_restricted_mem_operand (operands[2], E_SFmode)
              && 
#line 2938 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (optimize_size || reload_completed)))
            return 179; /* divsf3_mem */
          if (!rx_speed_source_operand (operands[2], E_SFmode)
              || !
#line 2950 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
            return -1;
          return 180; /* divsf3 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      switch (pattern45 (x3))
        {
        case 0:
          if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 146; /* divsi3_zero_extendhi */

        case 1:
          if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 152; /* divsi3_zero_extendqi */

        default:
          return -1;
        }

    case SIGN_EXTEND:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      switch (pattern45 (x3))
        {
        case 0:
          if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 149; /* divsi3_sign_extendhi */

        case 1:
          if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 155; /* divsi3_sign_extendqi */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_25 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case PLUS:
      return recog_22 (x1, insn, pnum_clobbers);

    case CALL:
      x4 = XEXP (x3, 0);
      if (GET_CODE (x4) != MEM
          || GET_MODE (x4) != E_QImode)
        return -1;
      x5 = XEXP (x3, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_VOIDmode))
        return -1;
      x7 = XEXP (x4, 0);
      operands[1] = x7;
      x8 = XVECEXP (x1, 0, 1);
      switch (pattern38 (x8))
        {
        case 0:
          if (!rx_call_operand (operands[1], E_SImode))
            return -1;
          return 26; /* call_value_internal */

        case 1:
          if (!rx_symbolic_call_operand (operands[1], E_SImode))
            return -1;
          return 28; /* sibcall_value_internal */

        default:
          return -1;
        }

    case MINUS:
      return recog_21 (x1, insn, pnum_clobbers);

    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case LTGT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
      if (!comparison_operator (x3, E_SImode))
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (pattern10 (x8, 48, CLOBBER, E_CCmode) != 0)
        return -1;
      switch (pattern49 (x2))
        {
        case 0:
          if (rx_restricted_mem_operand (operands[3], E_SImode))
            return 44; /* cstoresi4_mem */
          if (!rx_speed_source_operand (operands[3], E_SImode))
            return -1;
          return 45; /* cstoresi4 */

        case 1:
          if (rx_restricted_mem_operand (operands[3], E_SImode))
            return 224; /* *insv_cond_mem */
          if (!rx_speed_source_operand (operands[3], E_SImode))
            return -1;
          return 225; /* *insv_cond */

        default:
          return -1;
        }

    case IF_THEN_ELSE:
      if (GET_MODE (x3) != E_SImode)
        return -1;
      x4 = XEXP (x3, 0);
      switch (GET_CODE (x4))
        {
        case NE:
        case EQ:
        case GE:
        case GT:
        case LE:
        case LT:
        case LTGT:
        case GEU:
        case GTU:
        case LEU:
        case LTU:
        case UNORDERED:
        case ORDERED:
        case UNEQ:
        case UNGE:
        case UNGT:
        case UNLE:
        case UNLT:
          x8 = XVECEXP (x1, 0, 1);
          if (pattern10 (x8, 48, CLOBBER, E_CCmode) != 0)
            return -1;
          x6 = XEXP (x2, 0);
          operands[0] = x6;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x5 = XEXP (x3, 1);
          operands[1] = x5;
          if (!nonmemory_operand (operands[1], E_SImode))
            return -1;
          x9 = XEXP (x3, 2);
          operands[2] = x9;
          if (immediate_operand (operands[2], E_SImode))
            {
              switch (pattern66 (x4))
                {
                case 0:
                  if (rx_restricted_mem_operand (operands[4], E_SImode)
                      && 
#line 1118 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(CONSTANT_P (operands[1]) || CONSTANT_P (operands[2])))
                    return 49; /* *movsicc_tst_mem */
                  if (rx_speed_source_operand (operands[4], E_SImode)
                      && 
#line 1148 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(CONSTANT_P (operands[1]) || CONSTANT_P (operands[2])))
                    return 50; /* *movsicc_tst */
                  break;

                case 1:
                  if (
#line 1179 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(CONSTANT_P (operands[1]) || CONSTANT_P (operands[2])))
                    return 51; /* *movsicc_tstz */
                  break;

                default:
                  break;
                }
            }
          if (!nonmemory_operand (operands[2], E_SImode))
            return -1;
          operands[5] = x4;
          if (!comparison_operator (operands[5], E_VOIDmode))
            return -1;
          x7 = XEXP (x4, 0);
          operands[3] = x7;
          if (!register_operand (operands[3], E_SImode))
            return -1;
          x10 = XEXP (x4, 1);
          operands[4] = x10;
          if (rx_restricted_mem_operand (operands[4], E_SImode)
              && 
#line 1216 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((CONSTANT_P (operands[1]) || CONSTANT_P (operands[2]))
    || (REG_P (operands[1]) && REG_P (operands[2]))))
            return 52; /* *movsicc_mem */
          if (!rx_speed_source_operand (operands[4], E_SImode)
              || !
#line 1265 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((CONSTANT_P (operands[1]) || CONSTANT_P (operands[2])) || (REG_P(operands[1]) && REG_P(operands[2]))))
            return -1;
          return 53; /* *movsicc */

        default:
          return -1;
        }

    case ABS:
      if (pattern15 (x1) != 0)
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || !register_operand (operands[1], E_SImode))
            return -1;
          return 57; /* abssi2 */

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || GET_MODE (x3) != E_DFmode
              || !register_operand (operands[1], E_DFmode)
              || !
#line 1399 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          return 58; /* absdf2 */

        default:
          return -1;
        }

    case COMPARE:
      return recog_20 (x1, insn, pnum_clobbers);

    case AND:
      return recog_23 (x1, insn, pnum_clobbers);

    case DIV:
      return recog_24 (x1, insn, pnum_clobbers);

    case UDIV:
      switch (pattern18 (x1))
        {
        case 0:
          if (rx_restricted_mem_operand (operands[2], E_SImode)
              && 
#line 1851 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize_size || reload_completed)))
            return 77; /* udivsi3_mem */
          if (!rx_speed_source_operand (operands[2], E_SImode))
            return -1;
          return 78; /* udivsi3 */

        case 1:
          if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 147; /* udivsi3_zero_extendhi */

        case 2:
          if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 153; /* udivsi3_zero_extendqi */

        case 3:
          if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 150; /* udivsi3_sign_extendhi */

        case 4:
          if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 156; /* udivsi3_sign_extendqi */

        default:
          return -1;
        }

    case NEG:
      if (pattern15 (x1) != 0)
        return -1;
      switch (pattern55 (x3))
        {
        case 0:
          return 93; /* negsi2 */

        case 1:
          if (!
#line 2070 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          return 94; /* negdf2 */

        case 2:
          if (!
#line 2080 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          return 95; /* negsf2 */

        default:
          return -1;
        }

    case NOT:
      if (GET_MODE (x3) != E_SImode)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (pattern10 (x8, 48, CLOBBER, E_CCmode) != 0)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      return 97; /* one_cmplsi2 */

    case IOR:
      switch (pattern16 (x2))
        {
        case 0:
          switch (pattern44 (x1, IOR))
            {
            case 0:
              if (rx_restricted_mem_operand (operands[2], E_SImode))
                return 99; /* iorsi3_mem */
              if (!rx_speed_source_operand (operands[2], E_SImode))
                return -1;
              return 100; /* iorsi3 */

            case 1:
              x8 = XVECEXP (x1, 0, 1);
              x11 = XEXP (x8, 1);
              x12 = XEXP (x11, 0);
              x13 = XEXP (x12, 0);
              if (!rtx_equal_p (x13, operands[1]))
                return -1;
              x14 = XEXP (x12, 1);
              if (!rtx_equal_p (x14, operands[2]))
                return -1;
              if (rx_restricted_mem_operand (operands[2], E_SImode)
                  && 
#line 2183 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
                return 101; /* *iorsi3_flags_mem */
              if (!rx_speed_source_operand (operands[2], E_SImode)
                  || !
#line 2198 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
                return -1;
              return 102; /* *iorsi3_flags */

            default:
              return -1;
            }

        case 1:
          switch (pattern54 (x1))
            {
            case 0:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 132; /* iorsi3_zero_extendhi */

            case 1:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 140; /* iorsi3_zero_extendqi */

            default:
              return -1;
            }

        case 2:
          switch (pattern54 (x1))
            {
            case 0:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 136; /* iorsi3_sign_extendhi */

            case 1:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 144; /* iorsi3_sign_extendqi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case ROTATE:
      if (pattern19 (x1) != 0)
        return -1;
      return 103; /* rotlsi3 */

    case ROTATERT:
      if (pattern19 (x1) != 0)
        return -1;
      return 105; /* rotrsi3 */

    case ASHIFT:
      if (pattern19 (x1) != 0)
        return -1;
      return 111; /* ashlsi3 */

    case SS_PLUS:
      if (GET_MODE (x3) != E_SImode)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (pattern10 (x8, 48, CLOBBER, E_CCmode) != 0)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      if (rx_restricted_mem_operand (operands[2], E_SImode))
        return 113; /* ssaddsi3_mem */
      if (!rx_speed_source_operand (operands[2], E_SImode))
        return -1;
      return 114; /* ssaddsi3 */

    case XOR:
      switch (pattern18 (x1))
        {
        case 0:
          if (rx_restricted_mem_operand (operands[2], E_SImode)
              && 
#line 2635 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize_size || reload_completed)))
            return 127; /* xorsi3_mem */
          if (!rx_source_operand (operands[2], E_SImode))
            return -1;
          return 128; /* xorsi3 */

        case 1:
          if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 133; /* xorsi3_zero_extendhi */

        case 2:
          if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 141; /* xorsi3_zero_extendqi */

        case 3:
          if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 137; /* xorsi3_sign_extendhi */

        case 4:
          if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 145; /* xorsi3_sign_extendqi */

        default:
          return -1;
        }

    case MULT:
      x8 = XVECEXP (x1, 0, 1);
      if (pattern10 (x8, 48, CLOBBER, E_CCmode) != 0)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      x5 = XEXP (x3, 1);
      operands[2] = x5;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (!register_operand (operands[0], E_SFmode)
              || GET_MODE (x3) != E_SFmode
              || !register_operand (operands[1], E_SFmode))
            return -1;
          if (rx_restricted_mem_operand (operands[2], E_SFmode)
              && 
#line 2962 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (optimize_size || reload_completed)))
            return 181; /* mulsf3_mem */
          if (!rx_speed_source_operand (operands[2], E_SFmode))
            return -1;
          if (
#line 2989 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (!TARGET_RXV2)))
            return 182; /* mulsf3v1 */
          if (!
#line 3003 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && TARGET_RXV2))
            return -1;
          return 183; /* mulsf3v2 */

        case E_DFmode:
          if (pattern60 (x3, E_DFmode) != 0
              || !
#line 3018 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          return 184; /* muldf3 */

        default:
          return -1;
        }

    case FIX:
      if (GET_MODE (x3) != E_SImode)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      x15 = XEXP (x8, 0);
      if (GET_CODE (x15) == REG
          && REGNO (x15) == 48
          && GET_MODE (x15) == E_CCmode)
        {
          if (rx_restricted_mem_operand (operands[1], E_SFmode)
              && 
#line 3097 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (optimize_size || reload_completed)))
            return 189; /* fix_truncsfsi2_mem */
          if (rx_speed_compare_operand (operands[1], E_SFmode)
              && 
#line 3108 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
            return 190; /* fix_truncsfsi2 */
        }
      if (!rx_speed_compare_operand (operands[1], E_DFmode))
        return -1;
      operands[2] = x15;
      if (!scratch_operand (operands[2], E_DFmode)
          || !
#line 3120 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
        return -1;
      return 191; /* fix_truncdfsi2 */

    case UNSIGNED_FIX:
      if (GET_MODE (x3) != E_SImode)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (general_operand (operands[1], E_SFmode))
        {
          x15 = XEXP (x8, 0);
          if (GET_CODE (x15) == REG
              && REGNO (x15) == 48
              && GET_MODE (x15) == E_CCmode
              && 
#line 3131 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && TARGET_RXV2))
            return 192; /* fixuns_truncsfsi2 */
        }
      if (!general_operand (operands[1], E_DFmode))
        return -1;
      x15 = XEXP (x8, 0);
      operands[2] = x15;
      if (!scratch_operand (operands[2], E_DFmode)
          || !
#line 3143 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
        return -1;
      return 193; /* fixuns_truncdfsi2 */

    case UNSIGNED_FLOAT:
      if (pattern15 (x1) != 0
          || !general_operand (operands[1], E_SImode))
        return -1;
      switch (pattern56 (x3))
        {
        case 0:
          if (!
#line 3154 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && TARGET_RXV2))
            return -1;
          return 194; /* floatunssisf2 */

        case 1:
          if (!
#line 3165 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          return 195; /* floatunssidf2 */

        default:
          return -1;
        }

    case FLOAT_TRUNCATE:
      if (GET_MODE (x3) != E_SFmode)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_SFmode))
        return -1;
      x4 = XEXP (x3, 0);
      operands[1] = x4;
      if (!register_operand (operands[1], E_DFmode))
        return -1;
      x15 = XEXP (x8, 0);
      operands[2] = x15;
      if (!scratch_operand (operands[2], E_DFmode)
          || !
#line 3178 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
        return -1;
      return 196; /* truncdfsf2 */

    case FLOAT:
      if (pattern15 (x1) != 0)
        return -1;
      switch (pattern56 (x3))
        {
        case 0:
          if (rx_restricted_mem_operand (operands[1], E_SImode)
              && 
#line 3200 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (optimize_size || reload_completed)))
            return 198; /* floatsisf2_mem */
          if (!rx_speed_compare_operand (operands[1], E_SImode)
              || !
#line 3211 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
            return -1;
          return 199; /* floatsisf2 */

        case 1:
          if (!general_operand (operands[1], E_SImode)
              || !
#line 3222 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          return 200; /* floatsidf2 */

        default:
          return -1;
        }

    case ASHIFTRT:
    case LSHIFTRT:
      x8 = XVECEXP (x1, 0, 1);
      if (pattern10 (x8, 48, CLOBBER, E_CCmode) != 0)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (register_operand (operands[0], E_SImode)
          && GET_MODE (x3) == E_SImode)
        {
          x4 = XEXP (x3, 0);
          operands[1] = x4;
          if (register_operand (operands[1], E_SImode))
            {
              x5 = XEXP (x3, 1);
              operands[2] = x5;
              if (rx_shift_operand (operands[2], E_SImode))
                {
                  switch (GET_CODE (x3))
                    {
                    case ASHIFTRT:
                      return 107; /* ashrsi3 */

                    case LSHIFTRT:
                      return 109; /* lshrsi3 */

                    default:
                      break;
                    }
                }
            }
        }
      x5 = XEXP (x3, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
          || pattern50 (x6) != 0)
        return -1;
      operands[3] = x3;
      if (!rshift_operator (operands[3], E_SImode))
        return -1;
      x4 = XEXP (x3, 0);
      operands[2] = x4;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      return 227; /* *insv_cond_lt */

    case REG:
    case SUBREG:
    case MEM:
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
          res = recog_18 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case MEM:
          res = recog_19 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        default:
          break;
        }
      operands[1] = x3;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != SET)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      x11 = XEXP (x8, 1);
      operands[2] = x11;
      x15 = XEXP (x8, 0);
      if (!rtx_equal_p (x15, operands[1]))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || !rx_compare_operand (operands[1], E_SImode)
              || !register_operand (operands[2], E_SImode))
            return -1;
          return 228; /* sync_lock_test_and_setsi */

        case E_QImode:
          if (!register_operand (operands[0], E_QImode)
              || !rx_compare_operand (operands[1], E_QImode)
              || !register_operand (operands[2], E_QImode))
            return -1;
          return 229; /* xchg_memqi */

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || !rx_compare_operand (operands[1], E_HImode)
              || !register_operand (operands[2], E_HImode))
            return -1;
          return 230; /* xchg_memhi */

        default:
          return -1;
        }

    case UNSPEC:
      if (XVECLEN (x3, 0) != 1)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x8) != CLOBBER)
        return -1;
      x6 = XEXP (x2, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x3) != E_SImode)
        return -1;
      x16 = XVECEXP (x3, 0, 0);
      operands[1] = x16;
      switch (XINT (x3, 1))
        {
        case 48:
          x15 = XEXP (x8, 0);
          if (GET_CODE (x15) != REG
              || REGNO (x15) != 48
              || GET_MODE (x15) != E_CCmode
              || !rx_compare_operand (operands[1], E_SFmode))
            return -1;
          return 296; /* lrintsf2 */

        case 148:
          if (!register_operand (operands[1], E_DFmode))
            return -1;
          x15 = XEXP (x8, 0);
          operands[2] = x15;
          if (!scratch_operand (operands[2], E_DFmode)
              || !
#line 4730 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          return 297; /* lrintdf2 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_26 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case SET:
      return recog_25 (x1, insn, pnum_clobbers);

    case PARALLEL:
      if (XVECLEN (x2, 0) < 1)
        return -1;
      operands[1] = x2;
      if (!rx_rtsd_vector (operands[1], E_VOIDmode))
        return -1;
      x3 = XVECEXP (x2, 0, 0);
      if (GET_CODE (x3) != SET)
        return -1;
      x4 = XEXP (x3, 1);
      if (GET_CODE (x4) != PLUS
          || GET_MODE (x4) != E_SImode)
        return -1;
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 0
          || GET_MODE (x5) != E_SImode)
        return -1;
      x6 = XEXP (x3, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 0
          || GET_MODE (x6) != E_SImode)
        return -1;
      x7 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x7) != RETURN)
        return -1;
      x8 = XEXP (x4, 1);
      operands[0] = x8;
      if (!const_int_operand (operands[0], E_SImode)
          || !
#line 613 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
        return -1;
      return 21; /* pop_and_return */

    case CALL:
      x9 = XEXP (x2, 0);
      if (GET_CODE (x9) != MEM
          || GET_MODE (x9) != E_QImode)
        return -1;
      x10 = XEXP (x2, 1);
      if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x11 = XEXP (x9, 0);
      operands[0] = x11;
      x7 = XVECEXP (x1, 0, 1);
      switch (pattern38 (x7))
        {
        case 0:
          if (!rx_call_operand (operands[0], E_SImode))
            return -1;
          return 25; /* call_internal */

        case 1:
          if (!rx_symbolic_call_operand (operands[0], E_SImode))
            return -1;
          return 27; /* sibcall_internal */

        default:
          return -1;
        }

    case UNSPEC_VOLATILE:
      x7 = XVECEXP (x1, 0, 1);
      if (pattern10 (x7, 48, CLOBBER, E_CCmode) != 0
          || GET_MODE (x2) != E_SImode)
        return -1;
      switch (XVECLEN (x2, 0))
        {
        case 1:
          x3 = XVECEXP (x2, 0, 0);
          operands[0] = x3;
          if (!immediate_operand (operands[0], E_SImode))
            return -1;
          switch (XINT (x2, 1))
            {
            case 31:
              return 298; /* clrpsw */

            case 50:
              return 299; /* setpsw */

            default:
              return -1;
            }

        case 2:
          if (XINT (x2, 1) != 43)
            return -1;
          x3 = XVECEXP (x2, 0, 0);
          operands[0] = x3;
          if (!immediate_operand (operands[0], E_SImode))
            return -1;
          x12 = XVECEXP (x2, 0, 1);
          operands[1] = x12;
          if (!nonmemory_operand (operands[1], E_SImode))
            return -1;
          return 301; /* mvtc */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_27 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case MINUS:
      if (pattern20 (x1) != 0)
        return -1;
      if (rx_restricted_mem_operand (operands[5], E_SImode))
        {
          x4 = XVECEXP (x1, 0, 1);
          x5 = XEXP (x4, 1);
          x6 = XEXP (x5, 1);
          switch (pattern71 (x6))
            {
            case 0:
              return 124; /* subdi3_internal_mem */

            case 1:
              return 125; /* subdi3_internal_mem2 */

            default:
              break;
            }
        }
      if (!rx_speed_compare_operand (operands[5], E_SImode)
          || !rx_speed_compare_operand (operands[3], E_SImode))
        return -1;
      x4 = XVECEXP (x1, 0, 1);
      x5 = XEXP (x4, 1);
      x6 = XEXP (x5, 1);
      x7 = XEXP (x6, 0);
      if (!rtx_equal_p (x7, operands[3]))
        return -1;
      x8 = XEXP (x6, 1);
      if (!rtx_equal_p (x8, operands[2]))
        return -1;
      return 126; /* subdi3_internal */

    case MEM:
      if (pnum_clobbers == NULL
          || pattern21 (x1) != 0
          || !
#line 3947 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      *pnum_clobbers = 3;
      return 233; /* rx_cpymem */

    case UNSPEC_VOLATILE:
      if (XVECLEN (x3, 0) != 3
          || pattern27 (x3) != 0)
        return -1;
      switch (XINT (x3, 1))
        {
        case 22:
          if (GET_MODE (x3) != E_BLKmode)
            return -1;
          x9 = XEXP (x2, 0);
          if (GET_CODE (x9) != MEM
              || GET_MODE (x9) != E_BLKmode)
            return -1;
          x10 = XEXP (x9, 0);
          if (GET_CODE (x10) != REG
              || REGNO (x10) != 1
              || GET_MODE (x10) != E_SImode
              || pattern67 (x1, 3) != 0
              || !
#line 3979 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
            return -1;
          return 234; /* rx_setmem */

        case 24:
          if (pnum_clobbers == NULL
              || GET_MODE (x3) != E_SImode)
            return -1;
          x4 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x4) != USE)
            return -1;
          x11 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x11) != USE)
            return -1;
          x9 = XEXP (x2, 0);
          operands[0] = x9;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x12 = XEXP (x4, 0);
          operands[1] = x12;
          if (!memory_operand (operands[1], E_BLKmode))
            return -1;
          x13 = XEXP (x11, 0);
          operands[2] = x13;
          if (!memory_operand (operands[2], E_BLKmode)
              || !
#line 4038 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
            return -1;
          *pnum_clobbers = 4;
          return 235; /* rx_cmpstrn */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_28 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x3) != CLOBBER)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || GET_MODE (x4) != E_SImode
      || pattern22 (x1) != 0)
    return -1;
  x5 = XEXP (x2, 1);
  switch (GET_CODE (x5))
    {
    case MEM:
      if (GET_MODE (x5) != E_BLKmode)
        return -1;
      x6 = XEXP (x5, 0);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 2
          || GET_MODE (x6) != E_SImode
          || pattern51 (x1) != 0
          || pattern69 (x1, E_SImode, 3, 2, 1) != 0
          || !
#line 3874 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      return 231; /* rx_movstr */

    case UNSPEC_VOLATILE:
      if (XVECLEN (x5, 0) != 2
          || XINT (x5, 1) != 23
          || GET_MODE (x5) != E_SImode)
        return -1;
      x7 = XVECEXP (x5, 0, 1);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 3
          || GET_MODE (x7) != E_SImode)
        return -1;
      x8 = XVECEXP (x1, 0, 1);
      if (pattern10 (x8, 1, CLOBBER, E_SImode) != 0
          || pattern69 (x1, E_CCmode, 48, 3, 2) != 0)
        return -1;
      x9 = XEXP (x2, 0);
      operands[0] = x9;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x10 = XVECEXP (x5, 0, 0);
      operands[1] = x10;
      if (!register_operand (operands[1], E_SImode)
          || !
#line 3890 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      return 232; /* rx_strend */

    default:
      return -1;
    }
}

static int
recog_29 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != MEM
      || pattern21 (x1) != 0)
    return -1;
  x4 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 1
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 2
      || GET_MODE (x7) != E_SImode)
    return -1;
  x8 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 3
      || GET_MODE (x9) != E_SImode
      || !
#line 3947 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
    return -1;
  return 233; /* rx_cpymem */
}

static int
recog_30 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UNSPEC_VOLATILE
      || pattern22 (x1) != 0)
    return -1;
  x4 = XVECEXP (x1, 0, 4);
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || GET_MODE (x7) != E_SImode)
    return -1;
  x8 = XVECEXP (x1, 0, 6);
  if (GET_CODE (x8) != CLOBBER)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG)
    return -1;
  switch (XVECLEN (x3, 0))
    {
    case 3:
      if (XINT (x3, 1) != 24
          || GET_MODE (x3) != E_SImode
          || pattern27 (x3) != 0)
        return -1;
      x10 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x10) != USE)
        return -1;
      x11 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x11) != USE
          || pattern70 (x1, E_CCmode, 48, 3, 2, 1) != 0)
        return -1;
      x12 = XEXP (x2, 0);
      operands[0] = x12;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x13 = XEXP (x10, 0);
      operands[1] = x13;
      if (!memory_operand (operands[1], E_BLKmode))
        return -1;
      x14 = XEXP (x11, 0);
      operands[2] = x14;
      if (!memory_operand (operands[2], E_BLKmode)
          || !
#line 4038 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      return 235; /* rx_cmpstrn */

    case 5:
      if (pattern67 (x1, 2) != 0
          || pattern70 (x1, E_SImode, 6, 5, 4, 3) != 0)
        return -1;
      x12 = XEXP (x2, 0);
      operands[3] = x12;
      if (!register_operand (operands[3], E_DImode)
          || GET_MODE (x3) != E_DImode)
        return -1;
      x15 = XVECEXP (x3, 0, 0);
      operands[0] = x15;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x16 = XVECEXP (x3, 0, 1);
      operands[1] = x16;
      if (!register_operand (operands[1], E_SImode))
        return -1;
      x17 = XVECEXP (x3, 0, 2);
      operands[2] = x17;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      x18 = XVECEXP (x3, 0, 4);
      operands[4] = x18;
      if (!register_operand (operands[4], E_SImode))
        return -1;
      x19 = XVECEXP (x3, 0, 3);
      if (!rtx_equal_p (x19, operands[3]))
        return -1;
      switch (XINT (x3, 1))
        {
        case 102:
          if (!
#line 4655 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
            return -1;
          return 292; /* rmpa8 */

        case 103:
          if (!
#line 4673 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
            return -1;
          return 293; /* rmpa16 */

        case 104:
          if (!
#line 4690 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
            return -1;
          return 294; /* rmpa32 */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_31 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != UNSPEC
      || XVECLEN (x2, 0) != 7
      || XINT (x2, 1) != 47
      || GET_MODE (x2) != E_SImode)
    return -1;
  x3 = XVECEXP (x2, 0, 0);
  if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
    return -1;
  x4 = XVECEXP (x2, 0, 1);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 1
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x2, 0, 2);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 2
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XVECEXP (x2, 0, 3);
  if (GET_CODE (x6) != REG
      || REGNO (x6) != 3
      || GET_MODE (x6) != E_SImode)
    return -1;
  x7 = XVECEXP (x2, 0, 4);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 4
      || GET_MODE (x7) != E_SImode)
    return -1;
  x8 = XVECEXP (x2, 0, 5);
  if (GET_CODE (x8) != REG
      || REGNO (x8) != 5
      || GET_MODE (x8) != E_SImode)
    return -1;
  x9 = XVECEXP (x2, 0, 6);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 6
      || GET_MODE (x9) != E_SImode
      || pattern67 (x1, 2) != 0)
    return -1;
  x10 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x10) != CLOBBER)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 3
      || GET_MODE (x11) != E_SImode
      || !
#line 4638 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
    return -1;
  return 291; /* rmpa */
}

static int
recog_32 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 0
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XEXP (x2, 1);
  if (GET_MODE (x4) != E_SImode)
    return -1;
  switch (GET_CODE (x4))
    {
    case MINUS:
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 0
          || GET_MODE (x5) != E_SImode
          || !rx_store_multiple_vector (operands[1], E_VOIDmode))
        return -1;
      x6 = XEXP (x4, 1);
      operands[0] = x6;
      if (!const_int_operand (operands[0], E_SImode)
          || !
#line 924 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
        return -1;
      return 39; /* stack_pushm */

    case PLUS:
      x5 = XEXP (x4, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 0
          || GET_MODE (x5) != E_SImode
          || !rx_load_multiple_vector (operands[1], E_VOIDmode))
        return -1;
      x6 = XEXP (x4, 1);
      operands[0] = x6;
      if (!const_int_operand (operands[0], E_SImode)
          || !
#line 963 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
        return -1;
      return 42; /* stack_popm */

    default:
      return -1;
    }
}

static int
recog_33 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case IF_THEN_ELSE:
      return recog_13 (x1, insn, pnum_clobbers);

    case COMPARE:
      return recog_7 (x1, insn, pnum_clobbers);

    case CALL:
      if (pnum_clobbers == NULL)
        return -1;
      x3 = XEXP (x2, 0);
      if (GET_CODE (x3) != MEM
          || GET_MODE (x3) != E_QImode)
        return -1;
      x4 = XEXP (x2, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_VOIDmode))
        return -1;
      x6 = XEXP (x3, 0);
      operands[1] = x6;
      if (!rx_call_operand (operands[1], E_SImode))
        return -1;
      *pnum_clobbers = 1;
      return 26; /* call_value_internal */

    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case REG:
    case SUBREG:
    case MEM:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      return recog_12 (x1, insn, pnum_clobbers);

    case SIGN_EXTEND:
      switch (pattern0 (x1))
        {
        case 0:
          return 34; /* extendhisi2 */

        case 1:
          return 35; /* extendqisi2 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern0 (x1))
        {
        case 0:
          return 36; /* zero_extendhisi2 */

        case 1:
          return 37; /* zero_extendqisi2 */

        default:
          return -1;
        }

    case MINUS:
      return recog_6 (x1, insn, pnum_clobbers);

    case PLUS:
      return recog_8 (x1, insn, pnum_clobbers);

    case NE:
    case EQ:
    case GE:
    case GT:
    case LE:
    case LT:
    case LTGT:
    case GEU:
    case GTU:
    case LEU:
    case LTU:
    case UNORDERED:
    case ORDERED:
    case UNEQ:
    case UNGE:
    case UNGT:
    case UNLE:
    case UNLT:
      if (pnum_clobbers != NULL)
        {
          res = recog_4 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      if (comparison_operator (x2, E_SImode))
        {
          x3 = XEXP (x2, 0);
          if (GET_CODE (x3) == REG
              && REGNO (x3) == 48)
            {
              x4 = XEXP (x2, 1);
              if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
                {
                  x5 = XEXP (x1, 0);
                  switch (GET_CODE (x5))
                    {
                    case REG:
                    case SUBREG:
                      operands[0] = x5;
                      if (register_operand (operands[0], E_SImode))
                        {
                          operands[1] = x2;
                          if (
#line 1035 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                            return 46; /* *sccc */
                        }
                      break;

                    case ZERO_EXTRACT:
                      if (pattern29 (x1) == 0
                          && 
#line 3622 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                        return 226; /* *bmcc */
                      break;

                    default:
                      break;
                    }
                }
            }
        }
      if (!rx_fp_comparison_operator (x2, E_SImode))
        return -1;
      operands[1] = x2;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x3 = XEXP (x2, 0);
      operands[2] = x3;
      if (!register_operand (operands[2], E_SFmode))
        return -1;
      x4 = XEXP (x2, 1);
      operands[3] = x4;
      if (rx_restricted_mem_operand (operands[3], E_SFmode)
          && 
#line 1046 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
        return 47; /* cstoresf4_mem */
      if (!rx_speed_source_operand (operands[3], E_SFmode)
          || !
#line 1069 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
        return -1;
      return 48; /* cstoresf4 */

    case ABS:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode
              || !register_operand (operands[1], E_SImode))
            return -1;
          *pnum_clobbers = 1;
          return 57; /* abssi2 */

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || GET_MODE (x2) != E_DFmode
              || !register_operand (operands[1], E_DFmode)
              || !
#line 1399 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          *pnum_clobbers = 1;
          return 58; /* absdf2 */

        default:
          return -1;
        }

    case AND:
      return recog_11 (x1, insn, pnum_clobbers);

    case BSWAP:
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode
              || !register_operand (operands[1], E_SImode))
            return -1;
          return 73; /* bswapsi2 */

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode
              || !register_operand (operands[1], E_HImode))
            return -1;
          return 74; /* bswaphi2 */

        default:
          return -1;
        }

    case DIV:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      x4 = XEXP (x2, 1);
      switch (GET_CODE (x4))
        {
        case CONST_INT:
        case CONST_WIDE_INT:
        case CONST_POLY_INT:
        case CONST_FIXED:
        case CONST_DOUBLE:
        case CONST_VECTOR:
        case CONST:
        case REG:
        case SUBREG:
        case MEM:
        case LABEL_REF:
        case SYMBOL_REF:
        case HIGH:
          operands[2] = x4;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || GET_MODE (x2) != E_SImode
                  || !register_operand (operands[1], E_SImode))
                return -1;
              if (rx_restricted_mem_operand (operands[2], E_SImode)
                  && 
#line 1826 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize_size || reload_completed)))
                {
                  *pnum_clobbers = 1;
                  return 75; /* divsi3_mem */
                }
              if (!rx_speed_source_operand (operands[2], E_SImode))
                return -1;
              *pnum_clobbers = 1;
              return 76; /* divsi3 */

            case E_DFmode:
              if (pattern41 (x2) != 0
                  || !
#line 2926 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
                return -1;
              *pnum_clobbers = 1;
              return 178; /* divdf3 */

            case E_SFmode:
              if (!register_operand (operands[0], E_SFmode)
                  || GET_MODE (x2) != E_SFmode
                  || !register_operand (operands[1], E_SFmode))
                return -1;
              if (rx_restricted_mem_operand (operands[2], E_SFmode)
                  && 
#line 2938 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (optimize_size || reload_completed)))
                {
                  *pnum_clobbers = 1;
                  return 179; /* divsf3_mem */
                }
              if (!rx_speed_source_operand (operands[2], E_SFmode)
                  || !
#line 2950 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
                return -1;
              *pnum_clobbers = 1;
              return 180; /* divsf3 */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern30 (x2))
            {
            case 0:
              if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 146; /* divsi3_zero_extendhi */

            case 1:
              if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 152; /* divsi3_zero_extendqi */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern30 (x2))
            {
            case 0:
              if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 149; /* divsi3_sign_extendhi */

            case 1:
              if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 155; /* divsi3_sign_extendqi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case UDIV:
      if (pnum_clobbers == NULL)
        return -1;
      switch (pattern2 (x1))
        {
        case 0:
          if (rx_restricted_mem_operand (operands[2], E_SImode)
              && 
#line 1851 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize_size || reload_completed)))
            {
              *pnum_clobbers = 1;
              return 77; /* udivsi3_mem */
            }
          if (!rx_speed_source_operand (operands[2], E_SImode))
            return -1;
          *pnum_clobbers = 1;
          return 78; /* udivsi3 */

        case 1:
          if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 147; /* udivsi3_zero_extendhi */

        case 2:
          if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 153; /* udivsi3_zero_extendqi */

        case 3:
          if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 150; /* udivsi3_sign_extendhi */

        case 4:
          if (!
#line 2780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 156; /* udivsi3_sign_extendqi */

        default:
          return -1;
        }

    case MULT:
      return recog_10 (x1, insn, pnum_clobbers);

    case SMAX:
      switch (pattern2 (x1))
        {
        case 0:
          if (rx_restricted_mem_operand (operands[2], E_SImode)
              && 
#line 1934 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize_size || reload_completed)))
            return 83; /* smaxsi3_mem */
          if (!rx_speed_source_operand (operands[2], E_SImode))
            return -1;
          return 84; /* smaxsi3 */

        case 1:
          if (!
#line 2791 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 158; /* smaxsi3_zero_extendhi */

        case 2:
          if (!
#line 2791 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 164; /* smaxsi3_zero_extendqi */

        case 3:
          if (!
#line 2791 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 161; /* smaxsi3_sign_extendhi */

        case 4:
          if (!
#line 2791 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 167; /* smaxsi3_sign_extendqi */

        default:
          return -1;
        }

    case SMIN:
      switch (pattern2 (x1))
        {
        case 0:
          if (rx_restricted_mem_operand (operands[2], E_SImode)
              && 
#line 1957 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize_size || reload_completed)))
            return 85; /* sminsi3_mem */
          if (!rx_speed_source_operand (operands[2], E_SImode))
            return -1;
          return 86; /* sminsi3 */

        case 1:
          if (!
#line 2791 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 159; /* sminsi3_zero_extendhi */

        case 2:
          if (!
#line 2791 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 165; /* sminsi3_zero_extendqi */

        case 3:
          if (!
#line 2791 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 162; /* sminsi3_sign_extendhi */

        case 4:
          if (!
#line 2791 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          return 168; /* sminsi3_sign_extendqi */

        default:
          return -1;
        }

    case UMAX:
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_QImode:
          if (pattern31 (x2, E_QImode) != 0)
            return -1;
          return 87; /* unsign_maxqi3_mem */

        case E_HImode:
          if (pattern31 (x2, E_HImode) != 0)
            return -1;
          return 88; /* unsign_maxhi3_mem */

        default:
          return -1;
        }

    case UMIN:
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      switch (GET_MODE (operands[0]))
        {
        case E_HImode:
          if (pattern31 (x2, E_HImode) != 0)
            return -1;
          return 89; /* unsign_minhi3_mem */

        case E_QImode:
          if (pattern31 (x2, E_QImode) != 0)
            return -1;
          return 90; /* unsign_minqi3_mem */

        default:
          return -1;
        }

    case NEG:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          if (!register_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode
              || !register_operand (operands[1], E_SImode))
            return -1;
          *pnum_clobbers = 1;
          return 93; /* negsi2 */

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || GET_MODE (x2) != E_DFmode
              || !register_operand (operands[1], E_DFmode)
              || !
#line 2070 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          *pnum_clobbers = 1;
          return 94; /* negdf2 */

        case E_SFmode:
          if (!register_operand (operands[0], E_SFmode)
              || GET_MODE (x2) != E_SFmode
              || !register_operand (operands[1], E_SFmode)
              || !
#line 2080 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          *pnum_clobbers = 1;
          return 95; /* negsf2 */

        default:
          return -1;
        }

    case NOT:
      if (pattern3 (x1, pnum_clobbers) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 97; /* one_cmplsi2 */

    case IOR:
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
          switch (pattern12 (x2, pnum_clobbers))
            {
            case 0:
              if (rx_restricted_mem_operand (operands[2], E_SImode))
                {
                  *pnum_clobbers = 1;
                  return 99; /* iorsi3_mem */
                }
              if (!rx_speed_source_operand (operands[2], E_SImode))
                return -1;
              *pnum_clobbers = 1;
              return 100; /* iorsi3 */

            case 1:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 132; /* iorsi3_zero_extendhi */

            case 2:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 140; /* iorsi3_zero_extendqi */

            case 3:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 136; /* iorsi3_sign_extendhi */

            case 4:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 144; /* iorsi3_sign_extendqi */

            default:
              return -1;
            }

        case ASHIFT:
          switch (pattern14 (x2))
            {
            case 0:
              return 203; /* bitset */

            case 1:
              if (nonmemory_operand (operands[1], E_QImode))
                return 207; /* *bitset_in_memory */
              if (!nonmemory_operand (operands[1], E_SImode))
                return -1;
              return 208; /* *bitset_in_memory2 */

            default:
              return -1;
            }

        case MEM:
          if (!rtx_equal_p (x3, operands[0])
              || !rx_restricted_mem_operand (operands[0], E_QImode)
              || GET_MODE (x2) != E_QImode)
            return -1;
          x4 = XEXP (x2, 1);
          operands[1] = x4;
          if (!rx_bitset_operand (operands[1], E_VOIDmode))
            return -1;
          return 209; /* *bitset_in_memory_2 */

        default:
          return -1;
        }

    case ROTATE:
      if (pattern4 (x1, pnum_clobbers) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 103; /* rotlsi3 */

    case ROTATERT:
      if (pattern4 (x1, pnum_clobbers) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 105; /* rotrsi3 */

    case ASHIFT:
      if (pattern4 (x1, pnum_clobbers) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 111; /* ashlsi3 */

    case SS_PLUS:
      if (pattern3 (x1, pnum_clobbers) != 0)
        return -1;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      if (rx_restricted_mem_operand (operands[2], E_SImode))
        {
          *pnum_clobbers = 1;
          return 113; /* ssaddsi3_mem */
        }
      if (!rx_speed_source_operand (operands[2], E_SImode))
        return -1;
      *pnum_clobbers = 1;
      return 114; /* ssaddsi3 */

    case UNSPEC:
      return recog_9 (x1, insn, pnum_clobbers);

    case XOR:
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
          switch (pattern12 (x2, pnum_clobbers))
            {
            case 0:
              if (rx_restricted_mem_operand (operands[2], E_SImode)
                  && 
#line 2635 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize_size || reload_completed)))
                {
                  *pnum_clobbers = 1;
                  return 127; /* xorsi3_mem */
                }
              if (!rx_source_operand (operands[2], E_SImode))
                return -1;
              *pnum_clobbers = 1;
              return 128; /* xorsi3 */

            case 1:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 133; /* xorsi3_zero_extendhi */

            case 2:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 141; /* xorsi3_zero_extendqi */

            case 3:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 137; /* xorsi3_sign_extendhi */

            case 4:
              if (!
#line 2768 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 145; /* xorsi3_sign_extendqi */

            default:
              return -1;
            }

        case ASHIFT:
          switch (pattern14 (x2))
            {
            case 0:
              return 210; /* bitinvert */

            case 1:
              if (!nonmemory_operand (operands[1], E_QImode))
                return -1;
              return 213; /* bitinvert_in_memory */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case FIX:
      switch (pattern5 (x1, pnum_clobbers))
        {
        case 0:
          if (rx_restricted_mem_operand (operands[1], E_SFmode)
              && 
#line 3097 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (optimize_size || reload_completed)))
            {
              *pnum_clobbers = 1;
              return 189; /* fix_truncsfsi2_mem */
            }
          if (!rx_speed_compare_operand (operands[1], E_SFmode)
              || !
#line 3108 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
            return -1;
          *pnum_clobbers = 1;
          return 190; /* fix_truncsfsi2 */

        case 1:
          if (!rx_speed_compare_operand (operands[1], E_DFmode)
              || !
#line 3120 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          *pnum_clobbers = 1;
          return 191; /* fix_truncdfsi2 */

        default:
          return -1;
        }

    case UNSIGNED_FIX:
      switch (pattern5 (x1, pnum_clobbers))
        {
        case 0:
          if (!general_operand (operands[1], E_SFmode)
              || !
#line 3131 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && TARGET_RXV2))
            return -1;
          *pnum_clobbers = 1;
          return 192; /* fixuns_truncsfsi2 */

        case 1:
          if (!general_operand (operands[1], E_DFmode)
              || !
#line 3143 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          *pnum_clobbers = 1;
          return 193; /* fixuns_truncdfsi2 */

        default:
          return -1;
        }

    case UNSIGNED_FLOAT:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      if (!general_operand (operands[1], E_SImode))
        return -1;
      switch (GET_MODE (operands[0]))
        {
        case E_SFmode:
          if (!register_operand (operands[0], E_SFmode)
              || GET_MODE (x2) != E_SFmode
              || !
#line 3154 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && TARGET_RXV2))
            return -1;
          *pnum_clobbers = 1;
          return 194; /* floatunssisf2 */

        case E_DFmode:
          if (!register_operand (operands[0], E_DFmode)
              || GET_MODE (x2) != E_DFmode
              || !
#line 3165 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          *pnum_clobbers = 1;
          return 195; /* floatunssidf2 */

        default:
          return -1;
        }

    case FLOAT_TRUNCATE:
      if (pnum_clobbers == NULL
          || GET_MODE (x2) != E_SFmode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_SFmode))
        return -1;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_DFmode)
          || !
#line 3178 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
        return -1;
      *pnum_clobbers = 1;
      return 196; /* truncdfsf2 */

    case FLOAT_EXTEND:
      if (GET_MODE (x2) != E_DFmode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_DFmode))
        return -1;
      x3 = XEXP (x2, 0);
      operands[1] = x3;
      if (!register_operand (operands[1], E_SFmode)
          || !
#line 3189 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
        return -1;
      return 197; /* extendsfdf2 */

    case FLOAT:
      if (pnum_clobbers == NULL)
        return -1;
      switch (pattern6 (x1, E_SImode))
        {
        case 0:
          if (rx_restricted_mem_operand (operands[1], E_SImode)
              && 
#line 3200 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && (optimize_size || reload_completed)))
            {
              *pnum_clobbers = 1;
              return 198; /* floatsisf2_mem */
            }
          if (!rx_speed_compare_operand (operands[1], E_SImode)
              || !
#line 3211 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
            return -1;
          *pnum_clobbers = 1;
          return 199; /* floatsisf2 */

        case 1:
          if (!
#line 3222 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          *pnum_clobbers = 1;
          return 200; /* floatsidf2 */

        default:
          return -1;
        }

    case SQRT:
      switch (pattern6 (x1, E_DFmode))
        {
        case 0:
          if (!general_operand (operands[1], E_SFmode)
              || !
#line 3232 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && ALLOW_HW_SQRT))
            return -1;
          return 201; /* sqrtsf2 */

        case 1:
          if (!
#line 3242 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(flag_dfpu))
            return -1;
          return 202; /* sqrtdf2 */

        default:
          return -1;
        }

    case ASHIFTRT:
    case LSHIFTRT:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      if (register_operand (operands[0], E_SImode)
          && GET_MODE (x2) == E_SImode)
        {
          x3 = XEXP (x2, 0);
          operands[1] = x3;
          if (register_operand (operands[1], E_SImode))
            {
              x4 = XEXP (x2, 1);
              operands[2] = x4;
              if (rx_shift_operand (operands[2], E_SImode))
                {
                  switch (GET_CODE (x2))
                    {
                    case ASHIFTRT:
                      *pnum_clobbers = 1;
                      return 107; /* ashrsi3 */

                    case LSHIFTRT:
                      *pnum_clobbers = 1;
                      return 109; /* lshrsi3 */

                    default:
                      break;
                    }
                }
            }
        }
      operands[3] = x2;
      if (!rshift_operator (operands[3], E_SImode))
        return -1;
      x4 = XEXP (x2, 1);
      if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
          || GET_CODE (x5) != ZERO_EXTRACT
          || pattern35 (x5) != 0)
        return -1;
      x3 = XEXP (x2, 0);
      operands[2] = x3;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      *pnum_clobbers = 1;
      return 227; /* *insv_cond_lt */

    case UNSPEC_VOLATILE:
      return recog_5 (x1, insn, pnum_clobbers);

    default:
      return -1;
    }
}

int
recog (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  int res ATTRIBUTE_UNUSED;
  recog_data.insn = NULL;
  switch (GET_CODE (x1))
    {
    case SET:
      return recog_33 (x1, insn, pnum_clobbers);

    case PARALLEL:
      switch (XVECLEN (x1, 0))
        {
        case 2:
          res = recog_26 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 3:
          res = recog_27 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 5:
          res = recog_28 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 6:
          res = recog_29 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 7:
          res = recog_30 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 4:
          res = recog_31 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        default:
          break;
        }
      if (XVECLEN (x1, 0) >= 1)
        {
          operands[1] = x1;
          res = recog_32 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      switch (XVECLEN (x1, 0))
        {
        case 2:
          x2 = XVECEXP (x1, 0, 0);
          if (GET_CODE (x2) != SET)
            return -1;
          x3 = XEXP (x2, 0);
          operands[0] = x3;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x4 = XEXP (x2, 1);
          if (GET_MODE (x4) != E_SImode)
            return -1;
          switch (GET_CODE (x4))
            {
            case PLUS:
              x5 = XEXP (x4, 0);
              if (!register_operand (x5, E_SImode))
                return -1;
              x6 = XVECEXP (x1, 0, 1);
              switch (GET_CODE (x6))
                {
                case CLOBBER:
                  x7 = XEXP (x6, 0);
                  if (GET_CODE (x7) != REG
                      || REGNO (x7) != 48
                      || GET_MODE (x7) != E_CCmode)
                    return -1;
                  operands[1] = x5;
                  x8 = XEXP (x4, 1);
                  operands[2] = x8;
                  if (!rx_speed_source_operand (operands[2], E_SImode))
                    return -1;
                  return 61; /* addsi3_internal */

                case SET:
                  if (pnum_clobbers == NULL)
                    return -1;
                  x9 = XEXP (x6, 1);
                  if (GET_CODE (x9) != PLUS
                      || GET_MODE (x9) != E_SImode)
                    return -1;
                  x10 = XEXP (x9, 0);
                  if (pattern61 (x10, PLUS, LTU) != 0)
                    return -1;
                  operands[2] = x5;
                  x8 = XEXP (x4, 1);
                  operands[3] = x8;
                  if (!rx_source_operand (operands[3], E_SImode))
                    return -1;
                  x7 = XEXP (x6, 0);
                  operands[1] = x7;
                  if (!register_operand (operands[1], E_SImode))
                    return -1;
                  x11 = XEXP (x10, 1);
                  operands[4] = x11;
                  if (!register_operand (operands[4], E_SImode))
                    return -1;
                  x12 = XEXP (x9, 1);
                  operands[5] = x12;
                  if (!rx_source_operand (operands[5], E_SImode))
                    return -1;
                  x13 = XEXP (x10, 0);
                  x14 = XEXP (x13, 0);
                  x15 = XEXP (x14, 0);
                  if (!rtx_equal_p (x15, operands[2]))
                    return -1;
                  x16 = XEXP (x14, 1);
                  if (!rtx_equal_p (x16, operands[3]))
                    return -1;
                  x17 = XEXP (x13, 1);
                  if (!rtx_equal_p (x17, operands[2]))
                    return -1;
                  *pnum_clobbers = 2;
                  return 68; /* adddi3_internal */

                default:
                  return -1;
                }

            case MINUS:
              x6 = XVECEXP (x1, 0, 1);
              if (pattern10 (x6, 48, CLOBBER, E_CCmode) != 0)
                return -1;
              x5 = XEXP (x4, 0);
              operands[1] = x5;
              if (!register_operand (operands[1], E_SImode))
                return -1;
              x8 = XEXP (x4, 1);
              operands[2] = x8;
              if (!rx_speed_source_operand (operands[2], E_SImode))
                return -1;
              return 117; /* subsi3 */

            default:
              return -1;
            }

        case 4:
          if (pattern7 (x1) != 0)
            return -1;
          return 68; /* adddi3_internal */

        default:
          return -1;
        }

    case SIMPLE_RETURN:
      return 19; /* simple_return */

    case UNSPEC_VOLATILE:
      switch (XVECLEN (x1, 0))
        {
        case 1:
          switch (XINT (x1, 1))
            {
            case 11:
              x2 = XVECEXP (x1, 0, 0);
              if (GET_CODE (x2) != RETURN)
                return -1;
              return 22; /* fast_interrupt_return */

            case 10:
              x2 = XVECEXP (x1, 0, 0);
              if (GET_CODE (x2) != RETURN)
                return -1;
              return 23; /* exception_return */

            case 12:
              x2 = XVECEXP (x1, 0, 0);
              if (GET_CODE (x2) != RETURN)
                return -1;
              return 24; /* naked_return */

            case 95:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!general_operand (operands[0], E_SImode)
                  || !
#line 4063 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(TARGET_RXV3))
                return -1;
              return 236; /* save */

            case 96:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!general_operand (operands[0], E_SImode)
                  || !
#line 4072 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(TARGET_RXV3))
                return -1;
              return 237; /* rstr */

            case 99:
              x2 = XVECEXP (x1, 0, 0);
              if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              return 242; /* mvfdr */

            case 41:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!register_operand (operands[0], E_SImode))
                return -1;
              return 277; /* mvtachi */

            case 90:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!register_operand (operands[0], E_SImode))
                return -1;
              return 278; /* mvtachi_A1 */

            case 42:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!register_operand (operands[0], E_SImode))
                return -1;
              return 279; /* mvtaclo */

            case 91:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!register_operand (operands[0], E_SImode))
                return -1;
              return 280; /* mvtaclo_A1 */

            case 92:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!register_operand (operands[0], E_SImode))
                return -1;
              return 281; /* mvtacgu_A0 */

            case 93:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!register_operand (operands[0], E_SImode))
                return -1;
              return 282; /* mvtacgu_A1 */

            case 75:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              return 283; /* rdacw_A0 */

            case 76:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              return 284; /* rdacw_A1 */

            case 77:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              return 285; /* rdacl_A0 */

            case 78:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              return 286; /* rdacl_A1 */

            case 45:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              return 287; /* racw */

            case 79:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              return 288; /* racw_A1 */

            case 80:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              return 289; /* racl_A0 */

            case 81:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              return 290; /* racl_A1 */

            case 31:
              if (pnum_clobbers == NULL
                  || GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              *pnum_clobbers = 1;
              return 298; /* clrpsw */

            case 50:
              if (pnum_clobbers == NULL
                  || GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              *pnum_clobbers = 1;
              return 299; /* setpsw */

            case 44:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              return 302; /* mvtipl */

            case 30:
              x2 = XVECEXP (x1, 0, 0);
              if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              return 303; /* brk */

            case 32:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              return 304; /* int */

            case 51:
              x2 = XVECEXP (x1, 0, 0);
              if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              return 305; /* wait */

            default:
              return -1;
            }

        case 2:
          if (GET_MODE (x1) != E_SImode)
            return -1;
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          x6 = XVECEXP (x1, 0, 1);
          operands[1] = x6;
          switch (XINT (x1, 1))
            {
            case 98:
              if (!immediate_operand (operands[0], E_SImode)
                  || !nonmemory_operand (operands[1], E_SImode))
                return -1;
              return 241; /* mvtdc */

            case 55:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 243; /* emula_A0 */

            case 56:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 244; /* emula_A1 */

            case 57:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 245; /* emaca_A0 */

            case 58:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 246; /* emaca_A1 */

            case 59:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 247; /* emsba_A0 */

            case 60:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 248; /* emsba_A1 */

            case 65:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 249; /* maclh_A0 */

            case 66:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 250; /* maclh_A1 */

            case 33:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 251; /* machi */

            case 67:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 252; /* machi_A1 */

            case 34:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 253; /* maclo */

            case 68:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 254; /* maclo_A1 */

            case 61:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 255; /* mullh_A0 */

            case 62:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 256; /* mullh_A1 */

            case 35:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 257; /* mulhi */

            case 63:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 258; /* mulhi_A1 */

            case 36:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 259; /* mullo */

            case 64:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 260; /* mullo_A1 */

            case 69:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 261; /* msblh_A0 */

            case 70:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 262; /* msblh_A1 */

            case 71:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 263; /* msbhi_A0 */

            case 72:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 264; /* msbhi_A1 */

            case 73:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 265; /* msblo_A0 */

            case 74:
              if (!register_operand (operands[0], E_SImode)
                  || !register_operand (operands[1], E_SImode))
                return -1;
              return 266; /* msblo_A1 */

            case 43:
              if (pnum_clobbers == NULL
                  || !immediate_operand (operands[0], E_SImode)
                  || !nonmemory_operand (operands[1], E_SImode))
                return -1;
              *pnum_clobbers = 1;
              return 301; /* mvtc */

            case 94:
              switch (GET_MODE (operands[0]))
                {
                case E_SFmode:
                  if (!register_operand (operands[0], E_SFmode)
                      || !general_operand (operands[1], E_SFmode)
                      || !
#line 33 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
                    return -1;
                  return 309; /* exchangesf */

                case E_SImode:
                  if (!register_operand (operands[0], E_SImode)
                      || !general_operand (operands[1], E_SImode))
                    return -1;
                  return 310; /* exchangesi */

                case E_HImode:
                  if (!register_operand (operands[0], E_HImode)
                      || !general_operand (operands[1], E_HImode))
                    return -1;
                  return 311; /* exchangehi */

                case E_QImode:
                  if (!register_operand (operands[0], E_QImode)
                      || !general_operand (operands[1], E_QImode))
                    return -1;
                  return 312; /* exchangeqi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case CALL:
      if (pnum_clobbers == NULL)
        return -1;
      x18 = XEXP (x1, 0);
      if (GET_CODE (x18) != MEM
          || GET_MODE (x18) != E_QImode)
        return -1;
      x19 = XEXP (x1, 1);
      if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x20 = XEXP (x18, 0);
      operands[0] = x20;
      if (!rx_call_operand (operands[0], E_SImode))
        return -1;
      *pnum_clobbers = 1;
      return 25; /* call_internal */

    case UNSPEC:
      if (pnum_clobbers == NULL
          || XVECLEN (x1, 0) != 7
          || XINT (x1, 1) != 47
          || GET_MODE (x1) != E_SImode)
        return -1;
      x2 = XVECEXP (x1, 0, 0);
      if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x6 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x6) != REG
          || REGNO (x6) != 1
          || GET_MODE (x6) != E_SImode)
        return -1;
      x21 = XVECEXP (x1, 0, 2);
      if (GET_CODE (x21) != REG
          || REGNO (x21) != 2
          || GET_MODE (x21) != E_SImode)
        return -1;
      x22 = XVECEXP (x1, 0, 3);
      if (GET_CODE (x22) != REG
          || REGNO (x22) != 3
          || GET_MODE (x22) != E_SImode)
        return -1;
      x23 = XVECEXP (x1, 0, 4);
      if (GET_CODE (x23) != REG
          || REGNO (x23) != 4
          || GET_MODE (x23) != E_SImode)
        return -1;
      x24 = XVECEXP (x1, 0, 5);
      if (GET_CODE (x24) != REG
          || REGNO (x24) != 5
          || GET_MODE (x24) != E_SImode)
        return -1;
      x25 = XVECEXP (x1, 0, 6);
      if (GET_CODE (x25) != REG
          || REGNO (x25) != 6
          || GET_MODE (x25) != E_SImode
          || !
#line 4638 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      *pnum_clobbers = 3;
      return 291; /* rmpa */

    case CONST_INT:
      if (XWINT (x1, 0) != 0L)
        return -1;
      return 307; /* nop */

    default:
      return -1;
    }
}

static rtx_insn *
split_1 (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) != PC)
    return NULL;
  x4 = XEXP (x1, 0);
  if (GET_CODE (x4) != PC)
    return NULL;
  x5 = XEXP (x2, 0);
  x6 = XEXP (x5, 0);
  if (GET_MODE (x6) != E_SImode)
    return NULL;
  if (GET_CODE (x6) == AND
      && rx_zs_comparison_operator (x5, E_VOIDmode))
    {
      operands[3] = x5;
      x7 = XEXP (x6, 0);
      operands[0] = x7;
      if (register_operand (operands[0], E_SImode))
        {
          x8 = XEXP (x6, 1);
          operands[1] = x8;
          x9 = XEXP (x2, 1);
          operands[2] = x9;
          if (label_ref_operand (operands[2], E_VOIDmode))
            {
              if (rx_restricted_mem_operand (operands[1], E_SImode)
                  && 
#line 319 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                return gen_split_3 (insn, operands);
              if (rx_speed_source_operand (operands[1], E_SImode)
                  && 
#line 339 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                return gen_split_4 (insn, operands);
            }
        }
    }
  if (GET_CODE (x6) != ZERO_EXTRACT
      || !rx_z_comparison_operator (x5, E_VOIDmode))
    return NULL;
  operands[4] = x5;
  if (pattern59 (x2) != 0
      || !
#line 362 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
    return NULL;
  return gen_split_5 (insn, operands);
}

rtx_insn *
split_insns (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24;
  rtx_insn *res ATTRIBUTE_UNUSED;
  recog_data.insn = NULL;
  switch (GET_CODE (x1))
    {
    case SET:
      x2 = XEXP (x1, 1);
      switch (GET_CODE (x2))
        {
        case IF_THEN_ELSE:
          x3 = XEXP (x2, 0);
          switch (GET_CODE (x3))
            {
            case NE:
            case EQ:
            case GE:
            case GT:
            case LE:
            case LT:
            case LTGT:
            case GEU:
            case GTU:
            case LEU:
            case LTU:
            case UNORDERED:
            case ORDERED:
            case UNEQ:
            case UNGE:
            case UNGT:
            case UNLE:
            case UNLT:
              operands[3] = x3;
              if (comparison_operator (operands[3], E_VOIDmode)
                  && pattern28 (x1, E_SImode) == 0)
                {
                  if (rx_restricted_mem_operand (operands[1], E_SImode)
                      && 
#line 249 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                    return gen_split_1 (insn, operands);
                  if (rx_speed_source_operand (operands[1], E_SImode)
                      && 
#line 267 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                    return gen_split_2 (insn, operands);
                }
              switch (GET_CODE (x3))
                {
                case NE:
                case EQ:
                case GE:
                case LT:
                case UNORDERED:
                case ORDERED:
                  x4 = XEXP (x3, 1);
                  if (x4 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
                    {
                      res = split_1 (x1, insn);
                      if (res != NULL_RTX)
                        return res;
                    }
                  operands[3] = x3;
                  if (!rx_fp_comparison_operator (operands[3], E_VOIDmode)
                      || pattern28 (x1, E_SFmode) != 0)
                    return NULL;
                  if (rx_restricted_mem_operand (operands[1], E_SFmode)
                      && (
#line 424 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS) && 
#line 426 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
( reload_completed)))
                    return gen_split_6 (insn, operands);
                  if (!rx_speed_source_operand (operands[1], E_SFmode)
                      || !(
#line 442 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(ALLOW_RX_FPU_INSNS) && 
#line 444 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
( reload_completed)))
                    return NULL;
                  return gen_split_7 (insn, operands);

                default:
                  return NULL;
                }

            default:
              return NULL;
            }

        case NE:
        case EQ:
        case GE:
        case LT:
        case UNORDERED:
        case ORDERED:
          operands[1] = x2;
          if (!rx_fp_comparison_operator (operands[1], E_SImode))
            return NULL;
          x5 = XEXP (x1, 0);
          operands[0] = x5;
          if (!register_operand (operands[0], E_SImode))
            return NULL;
          x3 = XEXP (x2, 0);
          operands[2] = x3;
          if (!register_operand (operands[2], E_SFmode))
            return NULL;
          x6 = XEXP (x2, 1);
          operands[3] = x6;
          if (rx_restricted_mem_operand (operands[3], E_SFmode)
              && 
#line 1048 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
            return gen_split_10 (insn, operands);
          if (!rx_speed_source_operand (operands[3], E_SFmode)
              || !
#line 1071 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
            return NULL;
          return gen_split_11 (insn, operands);

        case IOR:
          if (pattern8 (x1) != 0
              || !
#line 3267 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
( can_create_pseudo_p ()))
            return NULL;
          return gen_split_26 (insn, operands);

        case XOR:
          if (pattern8 (x1) != 0
              || !
#line 3357 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
( can_create_pseudo_p ()))
            return NULL;
          return gen_split_27 (insn, operands);

        case UNSPEC:
          if (XVECLEN (x2, 0) != 1
              || XINT (x2, 1) != 53
              || pattern23 (x2, E_SImode) != 0)
            return NULL;
          x5 = XEXP (x1, 0);
          operands[0] = x5;
          if (!register_operand (operands[0], E_SImode))
            return NULL;
          x7 = XVECEXP (x2, 0, 0);
          x8 = XEXP (x7, 0);
          x9 = XEXP (x8, 0);
          x10 = XEXP (x9, 1);
          operands[1] = x10;
          if (!rx_shift_operand (operands[1], E_SImode))
            return NULL;
          x11 = XEXP (x7, 1);
          operands[2] = x11;
          if (!register_operand (operands[2], E_SImode)
              || !
#line 3426 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
( can_create_pseudo_p ()))
            return NULL;
          return gen_split_28 (insn, operands);

        default:
          return NULL;
        }

    case PARALLEL:
      switch (XVECLEN (x1, 0))
        {
        case 2:
          x12 = XVECEXP (x1, 0, 0);
          if (GET_CODE (x12) != SET)
            return NULL;
          x13 = XVECEXP (x1, 0, 1);
          if (pattern10 (x13, 48, CLOBBER, E_CCmode) != 0)
            return NULL;
          x14 = XEXP (x12, 1);
          switch (GET_CODE (x14))
            {
            case NE:
            case EQ:
            case GE:
            case GT:
            case LE:
            case LT:
            case LTGT:
            case GEU:
            case GTU:
            case LEU:
            case LTU:
            case UNORDERED:
            case ORDERED:
            case UNEQ:
            case UNGE:
            case UNGT:
            case UNLE:
            case UNLT:
              if (!comparison_operator (x14, E_SImode))
                return NULL;
              switch (pattern49 (x12))
                {
                case 0:
                  if (rx_restricted_mem_operand (operands[3], E_SImode)
                      && 
#line 991 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                    return gen_split_8 (insn, operands);
                  if (!rx_speed_source_operand (operands[3], E_SImode)
                      || !
#line 1015 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                    return NULL;
                  return gen_split_9 (insn, operands);

                case 1:
                  if (rx_restricted_mem_operand (operands[3], E_SImode)
                      && 
#line 3574 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                    return gen_split_30 (insn, operands);
                  if (!rx_speed_source_operand (operands[3], E_SImode)
                      || !
#line 3600 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                    return NULL;
                  return gen_split_31 (insn, operands);

                default:
                  return NULL;
                }

            case IF_THEN_ELSE:
              if (GET_MODE (x14) != E_SImode)
                return NULL;
              x15 = XEXP (x14, 0);
              switch (GET_CODE (x15))
                {
                case NE:
                case EQ:
                case GE:
                case GT:
                case LE:
                case LT:
                case LTGT:
                case GEU:
                case GTU:
                case LEU:
                case LTU:
                case UNORDERED:
                case ORDERED:
                case UNEQ:
                case UNGE:
                case UNGT:
                case UNLE:
                case UNLT:
                  x16 = XEXP (x12, 0);
                  operands[0] = x16;
                  if (!register_operand (operands[0], E_SImode))
                    return NULL;
                  x17 = XEXP (x14, 1);
                  operands[1] = x17;
                  if (!nonmemory_operand (operands[1], E_SImode))
                    return NULL;
                  x18 = XEXP (x14, 2);
                  operands[2] = x18;
                  if (immediate_operand (operands[2], E_SImode))
                    {
                      switch (pattern66 (x15))
                        {
                        case 0:
                          if (rx_restricted_mem_operand (operands[4], E_SImode)
                              && (
#line 1118 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(CONSTANT_P (operands[1]) || CONSTANT_P (operands[2])) && 
#line 1120 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
( reload_completed)))
                            return gen_split_12 (insn, operands);
                          if (rx_speed_source_operand (operands[4], E_SImode)
                              && (
#line 1148 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(CONSTANT_P (operands[1]) || CONSTANT_P (operands[2])) && 
#line 1150 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
( reload_completed)))
                            return gen_split_13 (insn, operands);
                          break;

                        case 1:
                          if ((
#line 1179 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(CONSTANT_P (operands[1]) || CONSTANT_P (operands[2])) && 
#line 1181 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
( reload_completed)))
                            return gen_split_14 (insn, operands);
                          break;

                        default:
                          break;
                        }
                    }
                  if (!nonmemory_operand (operands[2], E_SImode))
                    return NULL;
                  operands[5] = x15;
                  if (!comparison_operator (operands[5], E_VOIDmode))
                    return NULL;
                  x19 = XEXP (x15, 0);
                  operands[3] = x19;
                  if (!register_operand (operands[3], E_SImode))
                    return NULL;
                  x20 = XEXP (x15, 1);
                  operands[4] = x20;
                  if (rx_restricted_mem_operand (operands[4], E_SImode)
                      && (
#line 1216 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((CONSTANT_P (operands[1]) || CONSTANT_P (operands[2]))
    || (REG_P (operands[1]) && REG_P (operands[2]))) && 
#line 1219 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
( reload_completed)))
                    return gen_split_15 (insn, operands);
                  if (!rx_speed_source_operand (operands[4], E_SImode)
                      || !(
#line 1265 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
((CONSTANT_P (operands[1]) || CONSTANT_P (operands[2])) || (REG_P(operands[1]) && REG_P(operands[2]))) && 
#line 1267 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
( reload_completed)))
                    return NULL;
                  return gen_split_16 (insn, operands);

                default:
                  return NULL;
                }

            case AND:
              if (pattern47 (x12) != 0
                  || !
#line 1745 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
( RX_REG_P (operands[1]) && CONST_INT_P (operands[2])
   && pow2p_hwi (~UINTVAL (operands[2]))))
                return NULL;
              return gen_split_18 (insn, operands);

            case IOR:
              if (pattern47 (x12) != 0
                  || !
#line 2156 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
( RX_REG_P (operands[1]) && CONST_INT_P (operands[2])
   && pow2p_hwi (UINTVAL (operands[2]))))
                return NULL;
              return gen_split_19 (insn, operands);

            case SS_PLUS:
              if (GET_MODE (x14) != E_SImode)
                return NULL;
              x16 = XEXP (x12, 0);
              operands[0] = x16;
              if (!register_operand (operands[0], E_SImode))
                return NULL;
              x15 = XEXP (x14, 0);
              operands[1] = x15;
              if (!register_operand (operands[1], E_SImode))
                return NULL;
              x17 = XEXP (x14, 1);
              operands[2] = x17;
              if (rx_restricted_mem_operand (operands[2], E_SImode)
                  && 
#line 2359 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                return gen_split_20 (insn, operands);
              if (!rx_speed_source_operand (operands[2], E_SImode)
                  || !
#line 2379 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                return NULL;
              return gen_split_21 (insn, operands);

            case XOR:
              if (GET_MODE (x14) != E_SImode)
                return NULL;
              x16 = XEXP (x12, 0);
              operands[0] = x16;
              if (!register_operand (operands[0], E_SImode))
                return NULL;
              x15 = XEXP (x14, 0);
              operands[1] = x15;
              if (!register_operand (operands[1], E_SImode))
                return NULL;
              x17 = XEXP (x14, 1);
              operands[2] = x17;
              if (!rx_source_operand (operands[2], E_SImode)
                  || !
#line 2651 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
( RX_REG_P (operands[1]) && CONST_INT_P (operands[2])
   && pow2p_hwi (UINTVAL (operands[2]))))
                return NULL;
              return gen_split_25 (insn, operands);

            case REG:
            case SUBREG:
              operands[2] = x14;
              if (!register_operand (operands[2], E_SImode))
                return NULL;
              x16 = XEXP (x12, 0);
              if (pattern50 (x16) != 0
                  || !
#line 3546 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                return NULL;
              return gen_split_29 (insn, operands);

            case ASHIFTRT:
            case LSHIFTRT:
              operands[3] = x14;
              if (!rshift_operator (operands[3], E_SImode))
                return NULL;
              x17 = XEXP (x14, 1);
              if (x17 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
                return NULL;
              x16 = XEXP (x12, 0);
              if (pattern50 (x16) != 0)
                return NULL;
              x15 = XEXP (x14, 0);
              operands[2] = x15;
              if (!register_operand (operands[2], E_SImode))
                return NULL;
              return gen_split_32 (insn, operands);

            default:
              return NULL;
            }

        case 4:
          if (pattern7 (x1) != 0
              || !
#line 1664 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
            return NULL;
          return gen_split_17 (insn, operands);

        case 3:
          x12 = XVECEXP (x1, 0, 0);
          if (GET_CODE (x12) != SET)
            return NULL;
          x14 = XEXP (x12, 1);
          if (GET_CODE (x14) != MINUS
              || pattern20 (x1) != 0)
            return NULL;
          if (rx_restricted_mem_operand (operands[5], E_SImode))
            {
              x13 = XVECEXP (x1, 0, 1);
              x21 = XEXP (x13, 1);
              x22 = XEXP (x21, 1);
              switch (pattern71 (x22))
                {
                case 0:
                  if (
#line 2580 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                    return gen_split_22 (insn, operands);
                  break;

                case 1:
                  if (
#line 2601 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
                    return gen_split_23 (insn, operands);
                  break;

                default:
                  break;
                }
            }
          if (!rx_speed_compare_operand (operands[5], E_SImode)
              || !rx_speed_compare_operand (operands[3], E_SImode))
            return NULL;
          x13 = XVECEXP (x1, 0, 1);
          x21 = XEXP (x13, 1);
          x22 = XEXP (x21, 1);
          x23 = XEXP (x22, 0);
          if (!rtx_equal_p (x23, operands[3]))
            return NULL;
          x24 = XEXP (x22, 1);
          if (!rtx_equal_p (x24, operands[2])
              || !
#line 2622 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed))
            return NULL;
          return gen_split_24 (insn, operands);

        default:
          return NULL;
        }

    default:
      return NULL;
    }
}

static rtx_insn *
peephole2_1 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  if (!register_operand (operands[0], E_SImode))
    return NULL;
  x3 = PATTERN (peep2_next_insn (1));
  if (GET_CODE (x3) != SET)
    return NULL;
  if (register_operand (operands[1], E_SImode))
    {
      x4 = XEXP (x3, 1);
      if (GET_CODE (x4) == COMPARE
          && GET_MODE (x4) == E_CCmode)
        {
          x5 = XEXP (x4, 1);
          if (x5 == const_int_rtx[MAX_SAVED_CONST_INT + 0])
            {
              x6 = XEXP (x3, 0);
              if (GET_CODE (x6) == REG
                  && REGNO (x6) == 48
                  && GET_MODE (x6) == E_CCmode)
                {
                  x7 = XEXP (x4, 0);
                  if (rtx_equal_p (x7, operands[0]))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_1 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  if (rtx_equal_p (x7, operands[1]))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_2 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
            }
        }
    }
  if (peep2_current_count < 3
      || !rx_compare_operand (operands[1], E_SImode))
    return NULL;
  x4 = XEXP (x3, 1);
  operands[2] = x4;
  if (!register_operand (operands[2], E_SImode))
    return NULL;
  x6 = XEXP (x3, 0);
  if (!rtx_equal_p (x6, operands[1]))
    return NULL;
  x8 = PATTERN (peep2_next_insn (2));
  if (GET_CODE (x8) != SET)
    return NULL;
  x9 = XEXP (x8, 1);
  if (!rtx_equal_p (x9, operands[0]))
    return NULL;
  x10 = XEXP (x8, 0);
  if (!rtx_equal_p (x10, operands[2])
      || !
#line 5298 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && (REG_P(operands[1]) || MEM_P(operands[1])) && REG_P(operands[2]) && peep2_regno_dead_p (3, REGNO (operands[0]))))
    return NULL;
  *pmatch_len_ = 2;
  return gen_peephole2_94 (insn, operands);
}

static rtx_insn *
peephole2_2 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (pattern9 (x1))
    {
    case 0:
      if (rx_restricted_mem_operand (operands[1], E_HImode))
        {
          x2 = PATTERN (peep2_next_insn (1));
          switch (pattern52 (x2))
            {
            case 0:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_7 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_23 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 1:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_8 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_24 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 2:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_9 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_25 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 3:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_10 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_26 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 4:
              if (
#line 2732 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_38 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 5:
              if (
#line 2732 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_39 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 6:
              if (
#line 2732 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_40 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 7:
              x7 = XEXP (x2, 1);
              x8 = XEXP (x7, 0);
              if (rtx_equal_p (x8, operands[0]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[2])
                      && 
#line 2745 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_50 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x8, operands[2]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[0])
                      && 
#line 2757 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_62 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 8:
              x7 = XEXP (x2, 1);
              x8 = XEXP (x7, 0);
              if (rtx_equal_p (x8, operands[0]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[2])
                      && 
#line 2745 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_51 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x8, operands[2]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[0])
                      && 
#line 2757 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_63 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 9:
              x7 = XEXP (x2, 1);
              x8 = XEXP (x7, 0);
              if (rtx_equal_p (x8, operands[0]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[2])
                      && 
#line 2745 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_52 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x8, operands[2]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[0])
                      && 
#line 2757 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_64 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 10:
              if (
#line 2804 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_72 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            default:
              break;
            }
        }
      x2 = PATTERN (peep2_next_insn (1));
      if (GET_CODE (x2) != SET)
        return NULL;
      if (memory_operand (operands[1], E_HImode))
        {
          switch (pattern57 (x2, E_HImode))
            {
            case 0:
              if (
#line 2820 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REGNO (operands[0]) == REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[2])
       || peep2_regno_dead_p (2, REGNO (operands[0])))))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_75 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 1:
              if (
#line 2835 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REGNO (operands[0]) == REGNO (operands[2])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_78 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            default:
              break;
            }
        }
      if (peep2_current_count < 3
          || pattern58 (x2, E_HImode) != 0
          || !
#line 5310 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && (REG_P(operands[1]) || MEM_P(operands[1])) && REG_P(operands[2]) && (REGNO (operands[0]) == REGNO (operands[3])) && peep2_regno_dead_p (3, REGNO (operands[0]))))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_95 (insn, operands);

    case 1:
      if (rx_restricted_mem_operand (operands[1], E_QImode))
        {
          x2 = PATTERN (peep2_next_insn (1));
          switch (pattern52 (x2))
            {
            case 0:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_15 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_31 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 1:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_16 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_32 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 2:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_17 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_33 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 3:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_18 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_34 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 4:
              if (
#line 2732 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_44 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 5:
              if (
#line 2732 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_45 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 6:
              if (
#line 2732 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_46 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 7:
              x7 = XEXP (x2, 1);
              x8 = XEXP (x7, 0);
              if (rtx_equal_p (x8, operands[0]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[2])
                      && 
#line 2745 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_56 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x8, operands[2]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[0])
                      && 
#line 2757 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_68 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 8:
              x7 = XEXP (x2, 1);
              x8 = XEXP (x7, 0);
              if (rtx_equal_p (x8, operands[0]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[2])
                      && 
#line 2745 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_57 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x8, operands[2]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[0])
                      && 
#line 2757 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_69 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 9:
              x7 = XEXP (x2, 1);
              x8 = XEXP (x7, 0);
              if (rtx_equal_p (x8, operands[0]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[2])
                      && 
#line 2745 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_58 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x8, operands[2]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[0])
                      && 
#line 2757 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_70 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 10:
              if (
#line 2804 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_74 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            default:
              break;
            }
        }
      x2 = PATTERN (peep2_next_insn (1));
      if (GET_CODE (x2) != SET)
        return NULL;
      if (memory_operand (operands[1], E_QImode))
        {
          switch (pattern57 (x2, E_QImode))
            {
            case 0:
              if (
#line 2820 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REGNO (operands[0]) == REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[2])
       || peep2_regno_dead_p (2, REGNO (operands[0])))))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_76 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 1:
              if (
#line 2835 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REGNO (operands[0]) == REGNO (operands[2])))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_80 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            default:
              break;
            }
        }
      if (peep2_current_count < 3
          || pattern58 (x2, E_QImode) != 0
          || !
#line 5322 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && (REG_P(operands[1]) || MEM_P(operands[1])) && REG_P(operands[2]) && (REGNO (operands[0]) == REGNO (operands[3])) && peep2_regno_dead_p (3, REGNO (operands[0]))))
        return NULL;
      *pmatch_len_ = 2;
      return gen_peephole2_96 (insn, operands);

    default:
      return NULL;
    }
}

static rtx_insn *
peephole2_3 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx_insn *res ATTRIBUTE_UNUSED;
  switch (pattern9 (x1))
    {
    case 0:
      if (rx_restricted_mem_operand (operands[1], E_HImode))
        {
          x2 = PATTERN (peep2_next_insn (1));
          switch (pattern52 (x2))
            {
            case 0:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_3 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_19 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 1:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_4 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_20 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 2:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_5 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_21 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 3:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_6 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_22 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 4:
              if (
#line 2732 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_35 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 5:
              if (
#line 2732 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_36 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 6:
              if (
#line 2732 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_37 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 7:
              x7 = XEXP (x2, 1);
              x8 = XEXP (x7, 0);
              if (rtx_equal_p (x8, operands[0]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[2])
                      && 
#line 2745 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_47 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x8, operands[2]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[0])
                      && 
#line 2757 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_59 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 8:
              x7 = XEXP (x2, 1);
              x8 = XEXP (x7, 0);
              if (rtx_equal_p (x8, operands[0]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[2])
                      && 
#line 2745 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_48 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x8, operands[2]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[0])
                      && 
#line 2757 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_60 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 9:
              x7 = XEXP (x2, 1);
              x8 = XEXP (x7, 0);
              if (rtx_equal_p (x8, operands[0]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[2])
                      && 
#line 2745 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_49 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x8, operands[2]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[0])
                      && 
#line 2757 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_61 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 10:
              if (
#line 2804 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_71 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            default:
              break;
            }
        }
      if (!memory_operand (operands[1], E_HImode))
        return NULL;
      x2 = PATTERN (peep2_next_insn (1));
      if (pattern53 (x2, E_HImode) != 0
          || !
#line 2835 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REGNO (operands[0]) == REGNO (operands[2])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_77 (insn, operands);

    case 1:
      if (rx_restricted_mem_operand (operands[1], E_QImode))
        {
          x2 = PATTERN (peep2_next_insn (1));
          switch (pattern52 (x2))
            {
            case 0:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_11 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_27 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 1:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_12 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_28 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 2:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_13 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_29 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 3:
              x3 = XVECEXP (x2, 0, 0);
              x4 = XEXP (x3, 1);
              x5 = XEXP (x4, 0);
              if (rtx_equal_p (x5, operands[0]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[2])
                      && 
#line 2704 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_14 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x5, operands[2]))
                {
                  x6 = XEXP (x4, 1);
                  if (rtx_equal_p (x6, operands[0])
                      && 
#line 2718 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_30 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 4:
              if (
#line 2732 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_41 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 5:
              if (
#line 2732 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_42 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 6:
              if (
#line 2732 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_43 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 7:
              x7 = XEXP (x2, 1);
              x8 = XEXP (x7, 0);
              if (rtx_equal_p (x8, operands[0]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[2])
                      && 
#line 2745 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_53 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x8, operands[2]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[0])
                      && 
#line 2757 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_65 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 8:
              x7 = XEXP (x2, 1);
              x8 = XEXP (x7, 0);
              if (rtx_equal_p (x8, operands[0]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[2])
                      && 
#line 2745 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_54 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x8, operands[2]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[0])
                      && 
#line 2757 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_66 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 9:
              x7 = XEXP (x2, 1);
              x8 = XEXP (x7, 0);
              if (rtx_equal_p (x8, operands[0]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[2])
                      && 
#line 2745 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_55 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x8, operands[2]))
                {
                  x9 = XEXP (x7, 1);
                  if (rtx_equal_p (x9, operands[0])
                      && 
#line 2757 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_67 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              break;

            case 10:
              if (
#line 2804 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_73 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            default:
              break;
            }
        }
      if (!memory_operand (operands[1], E_QImode))
        return NULL;
      x2 = PATTERN (peep2_next_insn (1));
      if (pattern53 (x2, E_QImode) != 0
          || !
#line 2835 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REGNO (operands[0]) == REGNO (operands[2])))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_79 (insn, operands);

    default:
      return NULL;
    }
}

rtx_insn *
peephole2_insns (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pmatch_len_ ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23, x24, x25;
  rtx x26, x27, x28, x29, x30, x31, x32, x33;
  rtx x34, x35, x36, x37, x38, x39, x40, x41;
  rtx x42, x43, x44, x45, x46, x47, x48, x49;
  rtx x50, x51, x52, x53;
  rtx_insn *res ATTRIBUTE_UNUSED;
  recog_data.insn = NULL;
  switch (GET_CODE (x1))
    {
    case SET:
      x2 = XEXP (x1, 1);
      switch (GET_CODE (x2))
        {
        case REG:
        case SUBREG:
        case MEM:
          if (peep2_current_count < 2)
            return NULL;
          operands[1] = x2;
          res = peephole2_1 (x1, insn, pmatch_len_);
          if (res != NULL_RTX)
            return res;
          if (peep2_current_count < 3
              || GET_CODE (x2) != MEM
              || GET_MODE (x2) != E_SImode)
            return NULL;
          x3 = XEXP (x1, 0);
          operands[0] = x3;
          if (!register_operand (operands[0], E_SImode))
            return NULL;
          x4 = XEXP (x2, 0);
          operands[1] = x4;
          if (!register_operand (operands[1], E_SImode))
            return NULL;
          x5 = PATTERN (peep2_next_insn (1));
          if (pattern39 (x5, PLUS) != 0)
            return NULL;
          x6 = XVECEXP (x5, 0, 0);
          x7 = XEXP (x6, 1);
          x8 = XEXP (x7, 1);
          operands[2] = x8;
          if (!register_operand (operands[2], E_SImode))
            return NULL;
          x9 = XEXP (x7, 0);
          if (!rtx_equal_p (x9, operands[0]))
            return NULL;
          x10 = XEXP (x6, 0);
          if (!rtx_equal_p (x10, operands[0]))
            return NULL;
          x11 = PATTERN (peep2_next_insn (2));
          if (GET_CODE (x11) != SET)
            return NULL;
          x12 = XEXP (x11, 0);
          if (GET_CODE (x12) != MEM
              || GET_MODE (x12) != E_SImode)
            return NULL;
          x13 = XEXP (x11, 1);
          if (!rtx_equal_p (x13, operands[0]))
            return NULL;
          x14 = XEXP (x12, 0);
          if (!rtx_equal_p (x14, operands[1])
              || !
#line 5341 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && REG_P(operands[1]) && REG_P(operands[2]) && (REGNO(operands[0]) != REGNO(operands[2])) &&
   peep2_regno_dead_p(3, REGNO(operands[0])) && peep2_regno_dead_p(3, REGNO(operands[2]))))
            return NULL;
          *pmatch_len_ = 2;
          return gen_peephole2_97 (insn, operands);

        case ZERO_EXTEND:
          return peephole2_3 (x1, insn, pmatch_len_);

        case SIGN_EXTEND:
          return peephole2_2 (x1, insn, pmatch_len_);

        case CONST_INT:
          if (peep2_current_count < 2
              || peep2_current_count < 3
              || XWINT (x2, 0) != -2L)
            return NULL;
          x3 = XEXP (x1, 0);
          operands[0] = x3;
          if (!register_operand (operands[0], E_SImode))
            return NULL;
          x5 = PATTERN (peep2_next_insn (1));
          if (pattern39 (x5, ROTATE) != 0)
            return NULL;
          x6 = XVECEXP (x5, 0, 0);
          x7 = XEXP (x6, 1);
          x8 = XEXP (x7, 1);
          operands[1] = x8;
          if (!register_operand (operands[1], E_SImode))
            return NULL;
          x9 = XEXP (x7, 0);
          if (!rtx_equal_p (x9, operands[0]))
            return NULL;
          x10 = XEXP (x6, 0);
          if (!rtx_equal_p (x10, operands[0]))
            return NULL;
          x11 = PATTERN (peep2_next_insn (2));
          switch (GET_CODE (x11))
            {
            case SET:
              if (peep2_current_count < 4)
                return NULL;
              x12 = XEXP (x11, 0);
              operands[2] = x12;
              if (!register_operand (operands[2], E_SImode))
                return NULL;
              x15 = PATTERN (peep2_next_insn (3));
              if (GET_CODE (x15) != PARALLEL
                  || XVECLEN (x15, 0) != 2)
                return NULL;
              x16 = XVECEXP (x15, 0, 0);
              if (GET_CODE (x16) != SET)
                return NULL;
              x17 = XEXP (x16, 1);
              if (GET_CODE (x17) != AND
                  || GET_MODE (x17) != E_SImode)
                return NULL;
              x18 = XVECEXP (x15, 0, 1);
              if (GET_CODE (x18) != CLOBBER)
                return NULL;
              x19 = XEXP (x18, 0);
              if (GET_CODE (x19) != REG
                  || REGNO (x19) != 48
                  || GET_MODE (x19) != E_CCmode)
                return NULL;
              x20 = XEXP (x16, 0);
              if (!rtx_equal_p (x20, operands[0]))
                return NULL;
              x13 = XEXP (x11, 1);
              switch (GET_CODE (x13))
                {
                case SIGN_EXTEND:
                  if (GET_MODE (x13) != E_SImode)
                    return NULL;
                  x21 = XEXP (x13, 0);
                  operands[3] = x21;
                  switch (GET_MODE (operands[3]))
                    {
                    case E_QImode:
                      if (peep2_current_count < 5
                          || !rx_restricted_mem_operand (operands[3], E_QImode))
                        return NULL;
                      x22 = PATTERN (peep2_next_insn (4));
                      if (GET_CODE (x22) != SET)
                        return NULL;
                      x23 = XEXP (x22, 1);
                      operands[4] = x23;
                      if (!register_operand (operands[4], E_QImode))
                        return NULL;
                      x24 = XEXP (x22, 0);
                      if (!rtx_equal_p (x24, operands[3]))
                        return NULL;
                      x25 = XEXP (x17, 0);
                      if (rtx_equal_p (x25, operands[0]))
                        {
                          x26 = XEXP (x17, 1);
                          if (rtx_equal_p (x26, operands[2])
                              && 
#line 4913 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && REG_P(operands[1]) && REG_P(operands[2]) && MEM_P(operands[3]) && REG_P(operands[4]) && (REGNO (operands[0]) == REGNO (operands[4])) && peep2_regno_dead_p (5, REGNO (operands[0])) && peep2_regno_dead_p (5, REGNO (operands[2]))))
                            {
                              *pmatch_len_ = 4;
                              res = gen_peephole2_81 (insn, operands);
                              if (res != NULL_RTX)
                                return res;
                            }
                        }
                      if (!rtx_equal_p (x25, operands[2]))
                        return NULL;
                      x26 = XEXP (x17, 1);
                      if (!rtx_equal_p (x26, operands[0])
                          || !
#line 4935 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && REG_P(operands[1]) && REG_P(operands[2]) && MEM_P(operands[3]) && REG_P(operands[4]) && (REGNO (operands[0]) == REGNO (operands[4])) && peep2_regno_dead_p (5, REGNO (operands[0])) && peep2_regno_dead_p (5, REGNO (operands[2]))))
                        return NULL;
                      *pmatch_len_ = 4;
                      return gen_peephole2_82 (insn, operands);

                    case E_HImode:
                      if (!memory_operand (operands[3], E_HImode))
                        return NULL;
                      x25 = XEXP (x17, 0);
                      if (rtx_equal_p (x25, operands[0]))
                        {
                          x26 = XEXP (x17, 1);
                          if (rtx_equal_p (x26, operands[2])
                              && 
#line 5065 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && REG_P(operands[1]) && REG_P(operands[2]) && MEM_P(operands[3]) && peep2_regno_dead_p (4, REGNO (operands[2]))))
                            {
                              *pmatch_len_ = 3;
                              res = gen_peephole2_85 (insn, operands);
                              if (res != NULL_RTX)
                                return res;
                            }
                        }
                      if (!rtx_equal_p (x25, operands[2]))
                        return NULL;
                      x26 = XEXP (x17, 1);
                      if (!rtx_equal_p (x26, operands[0])
                          || !
#line 5090 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && REG_P(operands[1]) && REG_P(operands[2]) && MEM_P(operands[3]) && peep2_regno_dead_p (4, REGNO (operands[2]))))
                        return NULL;
                      *pmatch_len_ = 3;
                      return gen_peephole2_86 (insn, operands);

                    default:
                      return NULL;
                    }

                case SUBREG:
                case MEM:
                  operands[3] = x13;
                  if (!memory_operand (operands[3], E_SImode))
                    return NULL;
                  x25 = XEXP (x17, 0);
                  if (rtx_equal_p (x25, operands[2]))
                    {
                      x26 = XEXP (x17, 1);
                      if (rtx_equal_p (x26, operands[0])
                          && 
#line 5149 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && REG_P(operands[1]) && REG_P(operands[2]) && MEM_P(operands[3]) && peep2_regno_dead_p (4, REGNO (operands[2]))))
                        {
                          *pmatch_len_ = 3;
                          res = gen_peephole2_88 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                  if (!rtx_equal_p (x25, operands[0]))
                    return NULL;
                  x26 = XEXP (x17, 1);
                  if (!rtx_equal_p (x26, operands[2])
                      || !
#line 5174 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && REG_P(operands[1]) && REG_P(operands[2]) && MEM_P(operands[3]) && peep2_regno_dead_p (4, REGNO (operands[2]))))
                    return NULL;
                  *pmatch_len_ = 3;
                  return gen_peephole2_89 (insn, operands);

                default:
                  return NULL;
                }

            case PARALLEL:
              if (XVECLEN (x11, 0) != 2)
                return NULL;
              x27 = XVECEXP (x11, 0, 0);
              if (GET_CODE (x27) != SET)
                return NULL;
              x28 = XEXP (x27, 1);
              if (GET_CODE (x28) != AND
                  || GET_MODE (x28) != E_SImode)
                return NULL;
              x29 = XVECEXP (x11, 0, 1);
              if (GET_CODE (x29) != CLOBBER)
                return NULL;
              x30 = XEXP (x29, 0);
              if (GET_CODE (x30) != REG
                  || REGNO (x30) != 48
                  || GET_MODE (x30) != E_CCmode)
                return NULL;
              x31 = XEXP (x27, 0);
              operands[2] = x31;
              if (register_operand (operands[2], E_SImode))
                {
                  x32 = XEXP (x28, 0);
                  if (rtx_equal_p (x32, operands[0]))
                    {
                      x33 = XEXP (x28, 1);
                      if (rtx_equal_p (x33, operands[2])
                          && 
#line 4958 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && REG_P(operands[1]) && REG_P(operands[2]) && peep2_regno_dead_p (3, REGNO (operands[0]))))
                        {
                          *pmatch_len_ = 2;
                          res = gen_peephole2_83 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                  if (rtx_equal_p (x32, operands[2]))
                    {
                      x33 = XEXP (x28, 1);
                      if (rtx_equal_p (x33, operands[0])
                          && 
#line 4977 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && REG_P(operands[1]) && REG_P(operands[2]) && peep2_regno_dead_p (3, REGNO (operands[0]))))
                        {
                          *pmatch_len_ = 2;
                          res = gen_peephole2_84 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                }
              x33 = XEXP (x28, 1);
              operands[2] = x33;
              if (!memory_operand (operands[2], E_SImode))
                return NULL;
              x32 = XEXP (x28, 0);
              if (!rtx_equal_p (x32, operands[0])
                  || !rtx_equal_p (x31, operands[0])
                  || !
#line 5118 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && REG_P(operands[1]) && MEM_P(operands[2])))
                return NULL;
              *pmatch_len_ = 2;
              return gen_peephole2_87 (insn, operands);

            default:
              return NULL;
            }

        case COMPARE:
          if (GET_MODE (x2) != E_CC_ZSmode)
            return NULL;
          x4 = XEXP (x2, 0);
          if (GET_CODE (x4) != AND
              || GET_MODE (x4) != E_SImode)
            return NULL;
          x34 = XEXP (x2, 1);
          if (x34 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return NULL;
          x3 = XEXP (x1, 0);
          if (GET_CODE (x3) != REG
              || REGNO (x3) != 48
              || GET_MODE (x3) != E_CC_ZSmode)
            return NULL;
          x35 = XEXP (x4, 0);
          operands[0] = x35;
          if (!register_operand (operands[0], E_SImode))
            return NULL;
          x36 = XEXP (x4, 1);
          operands[1] = x36;
          if (!immediate_operand (operands[1], E_SImode)
              || !
#line 5212 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(REG_P(operands[0]) && (!REG_P(operands[1]) && !MEM_P(operands[1])) && (exact_log2 (INTVAL (operands[1])) >= 0) &&
 (operands[1] = gen_rtx_CONST_INT(QImode, exact_log2 (INTVAL (operands[1]))), 1)))
            return NULL;
          *pmatch_len_ = 0;
          return gen_peephole2_91 (insn, operands);

        default:
          return NULL;
        }

    case PARALLEL:
      if (XVECLEN (x1, 0) != 2)
        return NULL;
      x37 = XVECEXP (x1, 0, 0);
      if (GET_CODE (x37) != SET)
        return NULL;
      x38 = XEXP (x37, 1);
      if (GET_CODE (x38) != COMPARE
          || GET_MODE (x38) != E_CC_ZSmode)
        return NULL;
      x39 = XEXP (x38, 0);
      if (GET_CODE (x39) != AND
          || pattern32 (x37, E_CC_ZSmode, 48, 0) != 0)
        return NULL;
      x40 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x40) != SET)
        return NULL;
      x41 = XEXP (x40, 1);
      if (GET_CODE (x41) != AND
          || GET_MODE (x41) != E_SImode)
        return NULL;
      x42 = XEXP (x39, 0);
      operands[0] = x42;
      if (!register_operand (operands[0], E_SImode))
        return NULL;
      x43 = XEXP (x39, 1);
      operands[1] = x43;
      x44 = XEXP (x41, 0);
      if (!rtx_equal_p (x44, operands[0]))
        return NULL;
      x45 = XEXP (x41, 1);
      if (!rtx_equal_p (x45, operands[1]))
        return NULL;
      if (rx_speed_source_operand (operands[1], E_SImode))
        {
          x46 = XEXP (x40, 0);
          if (rtx_equal_p (x46, operands[0])
              && 
#line 5195 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(reload_completed && peep2_reg_dead_p (1, operands[0])))
            {
              *pmatch_len_ = 0;
              res = gen_peephole2_90 (insn, operands);
              if (res != NULL_RTX)
                return res;
            }
        }
      if (peep2_current_count < 2
          || !const_int_operand (operands[1], E_SImode))
        return NULL;
      x46 = XEXP (x40, 0);
      operands[2] = x46;
      if (!register_operand (operands[2], E_SImode))
        return NULL;
      x5 = PATTERN (peep2_next_insn (1));
      if (GET_CODE (x5) != SET)
        return NULL;
      x47 = XEXP (x5, 1);
      if (GET_CODE (x47) != IF_THEN_ELSE
          || GET_MODE (x47) != E_SImode)
        return NULL;
      x48 = XEXP (x47, 0);
      if (!rx_z_comparison_operator (x48, E_VOIDmode))
        return NULL;
      operands[6] = x48;
      x49 = XEXP (x48, 0);
      if (GET_CODE (x49) != REG
          || REGNO (x49) != 48
          || GET_MODE (x49) != E_CC_ZSmode)
        return NULL;
      x50 = XEXP (x48, 1);
      if (x50 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x51 = XEXP (x5, 0);
      operands[3] = x51;
      if (!register_operand (operands[3], E_SImode))
        return NULL;
      x52 = XEXP (x47, 1);
      operands[4] = x52;
      if (!immediate_operand (operands[4], E_SImode))
        return NULL;
      x53 = XEXP (x47, 2);
      operands[5] = x53;
      if (!register_operand (operands[5], E_SImode))
        return NULL;
      if (
#line 5235 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(exact_log2 (INTVAL (operands[1])) >= 0 &&
    rtx_equal_p (operands[3], operands[5]) && INTVAL (operands[4]) == 0 &&
    ((GET_CODE (operands[6]) == EQ) || (GET_CODE (operands[6]) == NE))))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_92 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      if (!
#line 5271 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
(rtx_equal_p (operands[3], operands[5]) && INTVAL (operands[4]) == 0 &&
   ((GET_CODE (operands[6]) == EQ) || (GET_CODE (operands[6]) == NE))))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_93 (insn, operands);

    default:
      return NULL;
    }
}
