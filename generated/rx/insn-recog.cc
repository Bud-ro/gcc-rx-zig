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
extern rtx_insn *gen_peephole2_1 (rtx_insn *, rtx *);
extern rtx_insn *gen_peephole2_2 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_8 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_9 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_10 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_11 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_12 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_13 (rtx_insn *, rtx *);
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
extern rtx_insn *gen_split_14 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_15 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_16 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_17 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_18 (rtx_insn *, rtx *);
extern rtx_insn *gen_split_19 (rtx_insn *, rtx *);




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
pattern1 (rtx x1, int *pnum_clobbers)
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
pattern2 (rtx x1)
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
pattern3 (rtx x1, int *pnum_clobbers)
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
      if (!rx_source_operand (operands[2], E_SImode))
        return -1;
      return 0;

    case ZERO_EXTEND:
      res = pattern2 (x3);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case SIGN_EXTEND:
      res = pattern2 (x3);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    default:
      return -1;
    }
}

static int
pattern4 (rtx x1, int *pnum_clobbers)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  switch (GET_CODE (x4))
    {
    case REG:
    case SUBREG:
      return pattern3 (x3, pnum_clobbers); /* [-1, 4] */

    case ASHIFT:
      x5 = XEXP (x4, 0);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x6 = XEXP (x4, 1);
      operands[1] = x6;
      x7 = XEXP (x3, 1);
      switch (GET_CODE (x7))
        {
        case REG:
        case SUBREG:
          operands[2] = x7;
          if (!register_operand (operands[2], E_SImode)
              || !register_operand (operands[0], E_SImode)
              || GET_MODE (x3) != E_SImode
              || GET_MODE (x4) != E_SImode
              || !rx_shift_operand (operands[1], E_SImode))
            return -1;
          return 5;

        case MEM:
          if (!rtx_equal_p (x7, operands[0])
              || !rx_restricted_mem_operand (operands[0], E_QImode)
              || GET_MODE (x3) != E_QImode
              || GET_MODE (x4) != E_QImode
              || !nonmemory_operand (operands[1], E_QImode))
            return -1;
          return 6;

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
pattern5 (rtx x1, int *pnum_clobbers)
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
pattern6 (rtx x1, int *pnum_clobbers, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (pnum_clobbers == NULL)
    return -1;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != i2)
    return -1;
  x3 = XEXP (x1, 0);
  operands[0] = x3;
  if (!register_operand (operands[0], i2))
    return -1;
  x4 = XEXP (x2, 0);
  operands[1] = x4;
  if (!rx_compare_operand (operands[1], i1))
    return -1;
  return 0;
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
      || REGNO (x11) != 16
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
pattern9 (rtx x1, unsigned int i1, rtx_code i2, machine_mode i3)
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
pattern10 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !rx_source_operand (operands[2], i1))
    return -1;
  return 0;
}

static int
pattern11 (rtx x1)
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
pattern12 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
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
      switch (GET_MODE (operands[0]))
        {
        case E_SImode:
          return pattern10 (x1, E_SImode); /* [-1, 0] */

        case E_SFmode:
          if (pattern10 (x1, E_SFmode) != 0)
            return -1;
          return 1;

        default:
          return -1;
        }

    case ZERO_EXTEND:
      res = pattern11 (x1);
      if (res >= 0)
        return res + 2; /* [2, 3] */
      return -1;

    case SIGN_EXTEND:
      res = pattern11 (x1);
      if (res >= 0)
        return res + 4; /* [4, 5] */
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
  rtx x2, x3, x4, x5, x6, x7;
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
      || REGNO (x5) != 16
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
  return 0;
}

static int
pattern15 (rtx x1)
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
pattern16 (rtx x1)
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
      || REGNO (x5) != 16
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
      if (!rx_source_operand (operands[2], E_SImode))
        return -1;
      return 0;

    case ZERO_EXTEND:
      res = pattern15 (x8);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case SIGN_EXTEND:
      res = pattern15 (x8);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    default:
      return -1;
    }
}

static int
pattern17 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 16
      || GET_MODE (x3) != E_CCmode)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  return 0;
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
      || REGNO (x5) != 16
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
pattern19 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 16
      || GET_MODE (x5) != E_CCmode)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  if (!register_operand (operands[0], i1))
    return -1;
  x7 = XEXP (x3, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], i1))
    return -1;
  x8 = XEXP (x3, 1);
  operands[2] = x8;
  if (!rx_source_operand (operands[2], i1))
    return -1;
  return 0;
}

static int
pattern20 (rtx x1, machine_mode i1, machine_mode i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != i2)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 16
      || GET_MODE (x5) != E_CCmode)
    return -1;
  x6 = XEXP (x2, 0);
  operands[0] = x6;
  if (!register_operand (operands[0], i2))
    return -1;
  x7 = XEXP (x3, 0);
  operands[1] = x7;
  if (!rx_compare_operand (operands[1], i1))
    return -1;
  return 0;
}

static int
pattern21 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 0);
  operands[2] = x4;
  if (!register_operand (operands[2], E_SImode))
    return -1;
  x5 = XEXP (x3, 1);
  operands[3] = x5;
  if (!rx_compare_operand (operands[3], E_SImode))
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  x7 = XEXP (x6, 0);
  operands[1] = x7;
  if (!register_operand (operands[1], E_SImode))
    return -1;
  x8 = XEXP (x6, 1);
  x9 = XEXP (x8, 0);
  x10 = XEXP (x9, 0);
  operands[4] = x10;
  if (!register_operand (operands[4], E_SImode))
    return -1;
  x11 = XEXP (x9, 1);
  operands[5] = x11;
  if (!rx_compare_operand (operands[5], E_SImode))
    return -1;
  x12 = XEXP (x8, 1);
  x13 = XEXP (x12, 0);
  if (!rtx_equal_p (x13, operands[3]))
    return -1;
  x14 = XEXP (x12, 1);
  if (!rtx_equal_p (x14, operands[2]))
    return -1;
  return 0;
}

static int
pattern22 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10;
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
      || REGNO (x9) != 16
      || GET_MODE (x9) != E_CCmode)
    return -1;
  x10 = XEXP (x2, 0);
  operands[0] = x10;
  if (!register_operand (operands[0], E_SImode)
      || pattern21 (x1) != 0)
    return -1;
  return 0;
}

static int
pattern23 (rtx x1)
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
pattern24 (rtx x1, rtx_code i1, rtx_code i2)
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
pattern25 (rtx x1)
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
pattern26 (rtx x1, machine_mode i1)
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
  if (!rx_source_operand (operands[1], i1))
    return -1;
  x8 = XEXP (x2, 1);
  operands[2] = x8;
  if (!label_ref_operand (operands[2], E_VOIDmode))
    return -1;
  return 0;
}

static int
pattern27 (rtx x1)
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
pattern28 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[1] = x2;
  if (!register_operand (operands[1], E_SImode))
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
      if (!rx_source_operand (operands[2], E_SImode))
        return -1;
      return 0;

    case ZERO_EXTEND:
      res = pattern2 (x3);
      if (res >= 0)
        return res + 1; /* [1, 2] */
      return -1;

    case SIGN_EXTEND:
      res = pattern2 (x3);
      if (res >= 0)
        return res + 3; /* [3, 4] */
      return -1;

    default:
      return -1;
    }
}

static int
pattern29 (rtx x1, rtx_code i1)
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
pattern30 (rtx x1)
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
pattern31 (rtx x1)
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
pattern32 (rtx x1)
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
pattern33 (rtx x1)
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
      || REGNO (x6) != 16
      || GET_MODE (x6) != E_CCmode
      || !register_operand (operands[0], E_SImode)
      || GET_MODE (x3) != E_SImode)
    return -1;
  x7 = XEXP (x3, 0);
  operands[1] = x7;
  x8 = XEXP (x4, 0);
  return pattern32 (x8); /* [-1, 1] */
}

static int
pattern34 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2;
  int res ATTRIBUTE_UNUSED;
  switch (GET_CODE (x1))
    {
    case CLOBBER:
      x2 = XEXP (x1, 0);
      if (GET_CODE (x2) != REG
          || REGNO (x2) != 16
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
pattern35 (rtx x1)
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
  if (!rx_source_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

static int
pattern36 (rtx x1)
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
  if (!rx_source_operand (operands[3], E_SImode))
    return -1;
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
pattern37 (rtx x1)
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
pattern38 (rtx x1)
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
pattern39 (rtx x1)
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
          || REGNO (x4) != 16
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
              || REGNO (x10) != 16
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
pattern40 (rtx x1, machine_mode i1)
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
pattern41 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4;
  int res ATTRIBUTE_UNUSED;
  if (GET_CODE (x1) != SET)
    return -1;
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
pattern42 (rtx x1)
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
pattern43 (rtx x1, rtx_code i1)
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
pattern44 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x3 = XEXP (x1, 1);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  operands[3] = x5;
  if (!register_operand (operands[3], E_SImode))
    return -1;
  x6 = XEXP (x4, 1);
  operands[4] = x6;
  if (!rx_source_operand (operands[4], E_SImode))
    return -1;
  x7 = XEXP (x3, 1);
  operands[1] = x7;
  if (!nonmemory_operand (operands[1], E_SImode))
    return -1;
  x8 = XEXP (x3, 2);
  operands[2] = x8;
  if (!nonmemory_operand (operands[2], E_SImode))
    return -1;
  return 0;
}

static int
pattern45 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode
      || !register_operand (operands[0], E_SImode)
      || GET_MODE (x1) != E_SImode)
    return -1;
  x3 = XEXP (x2, 0);
  return pattern32 (x3); /* [-1, 1] */
}

static int
pattern46 (rtx x1, machine_mode i1, unsigned int i2)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 1);
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != i2
      || GET_MODE (x3) != i1)
    return -1;
  x4 = XVECEXP (x1, 0, 0);
  x5 = XEXP (x4, 0);
  operands[0] = x5;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x6 = XEXP (x4, 1);
  if (GET_MODE (x6) != E_SImode)
    return -1;
  return 0;
}

static int
pattern47 (rtx x1, rtx_code i1)
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
pattern48 (rtx x1, machine_mode i1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  int res ATTRIBUTE_UNUSED;
  if (!register_operand (operands[0], i1)
      || GET_MODE (x1) != i1
      || !register_operand (operands[1], i1)
      || !rx_source_operand (operands[2], i1))
    return -1;
  return 0;
}

static int
pattern49 (rtx x1)
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
pattern50 (rtx x1)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x2) != CLOBBER)
    return -1;
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG
      || REGNO (x3) != 1
      || GET_MODE (x3) != E_SImode)
    return -1;
  x4 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x4) != CLOBBER)
    return -1;
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 2
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XVECEXP (x1, 0, 5);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 3
      || GET_MODE (x7) != E_SImode)
    return -1;
  return 0;
}

static int
pattern51 (rtx x1, unsigned int i1)
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
pattern52 (rtx x1, machine_mode i1, unsigned int i2, unsigned int i3, unsigned int i4)
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
recog_1 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (!register_operand (x4, E_SImode))
    return -1;
  x5 = XEXP (x3, 1);
  if (!rx_source_operand (x5, E_SImode))
    return -1;
  x6 = XEXP (x2, 2);
  switch (GET_CODE (x6))
    {
    case PC:
      x7 = XEXP (x1, 0);
      if (GET_CODE (x7) != PC)
        return -1;
      operands[3] = x3;
      operands[0] = x4;
      operands[1] = x5;
      x8 = XEXP (x2, 1);
      operands[2] = x8;
      if (!label_ref_operand (operands[2], E_VOIDmode))
        return -1;
      return 1; /* *cbranchsi4 */

    case CONST_INT:
    case CONST_WIDE_INT:
    case CONST_POLY_INT:
    case CONST_FIXED:
    case CONST_DOUBLE:
    case CONST_VECTOR:
    case CONST:
    case REG:
    case SUBREG:
    case LABEL_REF:
    case SYMBOL_REF:
    case HIGH:
      if (pnum_clobbers == NULL)
        return -1;
      operands[2] = x6;
      if (!nonmemory_operand (operands[2], E_SImode))
        return -1;
      x7 = XEXP (x1, 0);
      operands[0] = x7;
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x2) != E_SImode)
        return -1;
      operands[5] = x3;
      operands[3] = x4;
      operands[4] = x5;
      x8 = XEXP (x2, 1);
      operands[1] = x8;
      if (!nonmemory_operand (operands[1], E_SImode)
          || !
#line 763 "config/rx/rx.md"
((CONSTANT_P (operands[1]) || CONSTANT_P (operands[2]))
    || (REG_P (operands[1]) && REG_P (operands[2]))))
        return -1;
      *pnum_clobbers = 1;
      return 37; /* *movsicc */

    default:
      return -1;
    }
}

static int
recog_2 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  operands[3] = x3;
  if (rx_zs_comparison_operator (operands[3], E_VOIDmode)
      && pattern29 (x1, AND) == 0)
    {
      x4 = XEXP (x3, 0);
      x5 = XEXP (x4, 0);
      operands[0] = x5;
      if (register_operand (operands[0], E_SImode))
        {
          x6 = XEXP (x4, 1);
          operands[1] = x6;
          if (rx_source_operand (operands[1], E_SImode))
            {
              x7 = XEXP (x2, 1);
              operands[2] = x7;
              if (label_ref_operand (operands[2], E_VOIDmode))
                return 3; /* *cbranchsi4_tst */
            }
        }
    }
  if (!rx_z_comparison_operator (x3, E_VOIDmode))
    return -1;
  operands[2] = x3;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || REGNO (x4) != 16)
    return -1;
  x8 = XEXP (x1, 0);
  operands[0] = x8;
  if (!register_operand (operands[0], E_SImode)
      || GET_MODE (x2) != E_SImode)
    return -1;
  x7 = XEXP (x2, 1);
  operands[1] = x7;
  if (!immediate_operand (operands[1], E_SImode))
    return -1;
  x9 = XEXP (x2, 2);
  if (!rtx_equal_p (x9, operands[0])
      || !
#line 810 "config/rx/rx.md"
(reload_completed
   && ((GET_CODE (operands[2]) == EQ) || (GET_CODE (operands[2]) == NE))))
    return -1;
  return 38; /* *stcc */
}

static int
recog_3 (rtx x1 ATTRIBUTE_UNUSED,
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
  if (!rx_source_operand (operands[3], E_SImode))
    return -1;
  x5 = XEXP (x1, 0);
  switch (GET_CODE (x5))
    {
    case REG:
    case SUBREG:
      operands[0] = x5;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      operands[1] = x2;
      *pnum_clobbers = 1;
      return 34; /* cstoresi4 */

    case ZERO_EXTRACT:
      if (pattern31 (x5) != 0)
        return -1;
      operands[4] = x2;
      *pnum_clobbers = 1;
      return 147; /* *insv_cond */

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
  rtx x2, x3, x4, x5, x6, x7;
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
#line 2446 "config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      *pnum_clobbers = 4;
      return 154; /* rx_strend */

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
#line 2533 "config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      *pnum_clobbers = 2;
      return 156; /* rx_setmem */

    case 1:
      if (XINT (x2, 1) != 39
          || GET_MODE (x2) != E_SImode)
        return -1;
      x4 = XEXP (x1, 0);
      operands[0] = x4;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x5 = XVECEXP (x2, 0, 0);
      operands[1] = x5;
      if (!immediate_operand (operands[1], E_SImode))
        return -1;
      return 172; /* mvfc */

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
          return 9; /* jump */
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
              return 10; /* indirect_jump */

            case ZERO_EXTRACT:
              if (pnum_clobbers != NULL
                  && pattern27 (x1) == 0)
                {
                  *pnum_clobbers = 1;
                  return 146; /* rx_insv_reg */
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
                        return 145; /* *insv_imm */
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
          || !general_operand (operands[1], E_SFmode))
        return -1;
      return 22; /* *movsf_internal */

    case E_SImode:
      if (!nonimmediate_operand (operands[0], E_SImode)
          || !general_operand (operands[1], E_SImode))
        return -1;
      return 23; /* *movsi_internal */

    case E_HImode:
      if (!nonimmediate_operand (operands[0], E_HImode)
          || !general_operand (operands[1], E_HImode))
        return -1;
      return 24; /* *movhi_internal */

    case E_QImode:
      if (!nonimmediate_operand (operands[0], E_QImode)
          || !general_operand (operands[1], E_QImode))
        return -1;
      return 25; /* *movqi_internal */

    case E_DImode:
      if (!nonimmediate_operand (operands[0], E_DImode)
          || !general_operand (operands[1], E_DImode)
          || !
#line 2862 "config/rx/rx.md"
(TARGET_ENABLE_LRA))
        return -1;
      return 180; /* movdi */

    case E_DFmode:
      if (!nonimmediate_operand (operands[0], E_DFmode)
          || !general_operand (operands[1], E_DFmode)
          || !
#line 2871 "config/rx/rx.md"
(TARGET_ENABLE_LRA))
        return -1;
      return 181; /* movdf */

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
  rtx x2, x3, x4, x5, x6, x7;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) != REG
      || REGNO (x2) != 16)
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
                  || !register_operand (operands[0], E_SImode)
                  || !rx_source_operand (operands[1], E_SImode)
                  || !
#line 194 "config/rx/rx.md"
(reload_completed))
                return -1;
              return 2; /* *cmpsi */

            case E_CC_Fmode:
              if (GET_MODE (x3) != E_CC_Fmode
                  || !register_operand (operands[0], E_SFmode)
                  || !rx_source_operand (operands[1], E_SFmode)
                  || !
#line 298 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS && reload_completed))
                return -1;
              return 7; /* *cmpsf */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          switch (pattern30 (x1))
            {
            case 0:
              if (!
#line 1934 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 129; /* comparesi3_zero_extendhi */

            case 1:
              if (!
#line 1934 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 131; /* comparesi3_zero_extendqi */

            default:
              return -1;
            }

        case SIGN_EXTEND:
          switch (pattern30 (x1))
            {
            case 0:
              if (!
#line 1934 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 130; /* comparesi3_sign_extendhi */

            case 1:
              if (!
#line 1934 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 132; /* comparesi3_sign_extendqi */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case AND:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      x5 = XEXP (x3, 1);
      if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
          || GET_MODE (x2) != E_CC_ZSmode
          || GET_MODE (x3) != E_CC_ZSmode)
        return -1;
      x6 = XEXP (x4, 0);
      operands[0] = x6;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x7 = XEXP (x4, 1);
      operands[1] = x7;
      if (!rx_source_operand (operands[1], E_SImode)
          || !
#line 258 "config/rx/rx.md"
(reload_completed))
        return -1;
      return 5; /* *tstsi */

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
          res = recog_1 (x1, insn, pnum_clobbers);
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
                  res = recog_2 (x1, insn, pnum_clobbers);
                  if (res >= 0)
                    return res;
                  break;

                default:
                  break;
                }
              if (rx_z_comparison_operator (x3, E_VOIDmode))
                {
                  operands[4] = x3;
                  if (pattern29 (x1, ZERO_EXTRACT) == 0
                      && pattern42 (x2) == 0)
                    return 4; /* *cbranchsi4_tst_ext */
                }
            }
          operands[3] = x3;
          if (rx_fp_comparison_operator (operands[3], E_VOIDmode)
              && pattern26 (x1, E_SFmode) == 0
              && 
#line 283 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
            return 6; /* *cbranchsf4 */
          break;

        default:
          break;
        }
      if (!comparison_operator (x3, E_VOIDmode))
        return -1;
      x5 = XEXP (x3, 0);
      if (GET_CODE (x5) != REG
          || REGNO (x5) != 16)
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
#line 313 "config/rx/rx.md"
(reload_completed))
                    return 8; /* *conditional_branch */
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
#line 829 "config/rx/rx.md"
(reload_completed))
        return -1;
      return 39; /* *stcc_reg */

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
      switch (pattern3 (x3, pnum_clobbers))
        {
        case 0:
          *pnum_clobbers = 1;
          return 47; /* andsi3 */

        case 1:
          if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 90; /* andsi3_zero_extendhi */

        case 2:
          if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 98; /* andsi3_zero_extendqi */

        case 3:
          if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 94; /* andsi3_sign_extendhi */

        case 4:
          if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 102; /* andsi3_sign_extendqi */

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
          return 143; /* bitclr */

        case MEM:
          if (!rtx_equal_p (x8, operands[0])
              || !rx_restricted_mem_operand (operands[0], E_QImode)
              || GET_MODE (x3) != E_QImode
              || GET_MODE (x4) != E_QImode
              || GET_MODE (x5) != E_QImode
              || !nonmemory_operand (operands[1], E_QImode))
            return -1;
          return 144; /* bitclr_in_memory */

        default:
          return -1;
        }

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
  rtx x2, x3, x4, x5, x6, x7, x8;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  if (pattern24 (x3, UNSPEC, CONST) != 0)
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
  return 13; /* deallocate_and_return */
}

static int
recog_10 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  x3 = XEXP (x2, 1);
  x4 = XEXP (x3, 1);
  if (x4 != const_int_rtx[MAX_SAVED_CONST_INT + 4])
    return -1;
  x5 = XEXP (x2, 0);
  if (GET_CODE (x5) != REG
      || REGNO (x5) != 0
      || GET_MODE (x5) != E_SImode)
    return -1;
  x6 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x6) != SET)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != MEM
      || GET_MODE (x7) != E_SImode)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != MINUS
      || GET_MODE (x8) != E_SImode)
    return -1;
  x9 = XEXP (x8, 0);
  if (GET_CODE (x9) != REG
      || REGNO (x9) != 0
      || GET_MODE (x9) != E_SImode)
    return -1;
  x10 = XEXP (x8, 1);
  if (x10 != const_int_rtx[MAX_SAVED_CONST_INT + 4]
      || GET_MODE (x3) != E_SImode)
    return -1;
  x11 = XEXP (x6, 1);
  operands[0] = x11;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  return 30; /* stack_push */
}

static int
recog_11 (rtx x1 ATTRIBUTE_UNUSED,
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
      return 11; /* tablejump */

    case ZERO_EXTRACT:
      if (GET_MODE (x4) != E_SImode)
        return -1;
      x8 = XEXP (x4, 1);
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
        return -1;
      x5 = XVECEXP (x1, 0, 1);
      if (pattern9 (x5, 16, CLOBBER, E_CCmode) != 0)
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
      return 146; /* rx_insv_reg */

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
  rtx x2, x3, x4, x5, x6, x7, x8;
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
      if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 4]
          || pattern46 (x1, E_SImode, 0) != 0)
        return -1;
      return 32; /* stack_pop */

    case 2:
      if (pnum_clobbers == NULL
          || pattern38 (x1) != 0
          || GET_MODE (x3) != E_BLKmode
          || !
#line 2431 "config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      *pnum_clobbers = 3;
      return 153; /* rx_movstr */

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
      || REGNO (x5) != 16)
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
#line 859 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 41; /* *abssi2_flags */

    case PLUS:
      if (GET_CODE (x9) != PLUS)
        return -1;
      x12 = XEXP (x7, 1);
      operands[2] = x12;
      if (!rx_source_operand (operands[2], E_SImode))
        return -1;
      x13 = XEXP (x9, 1);
      if (!rtx_equal_p (x13, operands[2]))
        return -1;
      x10 = XEXP (x7, 0);
      switch (GET_CODE (x10))
        {
        case REG:
        case SUBREG:
          operands[1] = x10;
          if (!register_operand (operands[1], E_SImode))
            return -1;
          x11 = XEXP (x9, 0);
          if (!rtx_equal_p (x11, operands[1])
              || !
#line 911 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSCmode)))
            return -1;
          return 43; /* *addsi3_flags */

        case PLUS:
          if (GET_MODE (x10) != E_SImode)
            return -1;
          x14 = XEXP (x10, 0);
          if (GET_CODE (x14) != LTU
              || GET_MODE (x14) != E_SImode)
            return -1;
          x15 = XEXP (x14, 0);
          if (GET_CODE (x15) != REG
              || REGNO (x15) != 16
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
              || REGNO (x18) != 16
              || GET_MODE (x18) != E_CCmode)
            return -1;
          x19 = XEXP (x17, 1);
          if (x19 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x20 = XEXP (x10, 1);
          operands[1] = x20;
          if (!register_operand (operands[1], E_SImode))
            return -1;
          x21 = XEXP (x11, 1);
          if (!rtx_equal_p (x21, operands[1])
              || !
#line 971 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSCmode)))
            return -1;
          return 45; /* *adc_flags */

        default:
          return -1;
        }

    case AND:
      if (GET_CODE (x9) != AND
          || pattern49 (x1) != 0
          || !
#line 1139 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 48; /* *andsi3_flags */

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
#line 1370 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 65; /* *negsi2_flags */

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
#line 1394 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 67; /* *one_cmplsi2_flags */

    case IOR:
      if (GET_CODE (x9) != IOR
          || pattern49 (x1) != 0
          || !
#line 1443 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 69; /* *iorsi3_flags */

    case ROTATE:
      if (pattern47 (x1, ROTATE) != 0
          || !
#line 1475 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 71; /* *rotlsi3_flags */

    case ROTATERT:
      if (pattern47 (x1, ROTATERT) != 0
          || !
#line 1497 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 73; /* *rotrsi3_flags */

    case ASHIFTRT:
      if (pattern47 (x1, ASHIFTRT) != 0
          || !
#line 1522 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 75; /* *ashrsi3_flags */

    case LSHIFTRT:
      if (pattern47 (x1, LSHIFTRT) != 0
          || !
#line 1550 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 77; /* *lshrsi3_flags */

    case ASHIFT:
      if (pattern47 (x1, ASHIFT) != 0
          || !
#line 1578 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 79; /* *ashlsi3_flags */

    case MINUS:
      if (GET_CODE (x9) != MINUS)
        return -1;
      x10 = XEXP (x7, 0);
      switch (GET_CODE (x10))
        {
        case REG:
        case SUBREG:
          if (pattern49 (x1) != 0
              || !
#line 1642 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSCmode)))
            return -1;
          return 83; /* *subsi3_flags */

        case MINUS:
          if (GET_MODE (x10) != E_SImode)
            return -1;
          x12 = XEXP (x7, 1);
          if (GET_CODE (x12) != GEU
              || GET_MODE (x12) != E_SImode)
            return -1;
          x22 = XEXP (x12, 0);
          if (GET_CODE (x22) != REG
              || REGNO (x22) != 16
              || GET_MODE (x22) != E_CCmode)
            return -1;
          x23 = XEXP (x12, 1);
          if (x23 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || pattern43 (x9, GEU) != 0)
            return -1;
          x13 = XEXP (x9, 1);
          x24 = XEXP (x13, 0);
          if (GET_CODE (x24) != REG
              || REGNO (x24) != 16
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
#line 1691 "config/rx/rx.md"
(reload_completed))
            return -1;
          return 85; /* *sbb_flags */

        default:
          return -1;
        }

    case XOR:
      if (GET_CODE (x9) != XOR
          || pattern49 (x1) != 0
          || !
#line 1772 "config/rx/rx.md"
(reload_completed && rx_match_ccmode (insn, CC_ZSmode)))
        return -1;
      return 88; /* *xorsi3_flags */

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
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15, x16, x17;
  rtx x18, x19, x20, x21, x22, x23;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  switch (GET_CODE (x2))
    {
    case SET:
      x3 = XEXP (x2, 1);
      switch (GET_CODE (x3))
        {
        case PLUS:
          x4 = XEXP (x3, 0);
          switch (GET_CODE (x4))
            {
            case REG:
            case SUBREG:
              if (GET_CODE (x4) == REG
                  && REGNO (x4) == 0)
                {
                  res = recog_9 (x1, insn, pnum_clobbers);
                  if (res >= 0)
                    return res;
                }
              operands[1] = x4;
              if (pattern17 (x1) != 0)
                return -1;
              x5 = XEXP (x3, 1);
              switch (GET_CODE (x5))
                {
                case ZERO_EXTEND:
                  switch (pattern45 (x3))
                    {
                    case 0:
                      if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                        return -1;
                      return 89; /* plussi3_zero_extendhi */

                    case 1:
                      if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                        return -1;
                      return 97; /* plussi3_zero_extendqi */

                    default:
                      return -1;
                    }

                case SIGN_EXTEND:
                  switch (pattern45 (x3))
                    {
                    case 0:
                      if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                        return -1;
                      return 93; /* plussi3_sign_extendhi */

                    case 1:
                      if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                        return -1;
                      return 101; /* plussi3_sign_extendqi */

                    default:
                      return -1;
                    }

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
                  if (!rx_source_operand (operands[2], E_SFmode)
                      || !register_operand (operands[0], E_SFmode)
                      || GET_MODE (x3) != E_SFmode
                      || !register_operand (operands[1], E_SFmode)
                      || !
#line 1947 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
                    return -1;
                  return 133; /* addsf3 */

                default:
                  return -1;
                }

            case PLUS:
              if (GET_MODE (x4) != E_SImode)
                return -1;
              x6 = XEXP (x4, 0);
              if (GET_CODE (x6) != LTU
                  || GET_MODE (x6) != E_SImode)
                return -1;
              x7 = XEXP (x6, 0);
              if (GET_CODE (x7) != REG
                  || REGNO (x7) != 16
                  || GET_MODE (x7) != E_CCmode)
                return -1;
              x8 = XEXP (x6, 1);
              if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x9 = XVECEXP (x1, 0, 1);
              if (GET_CODE (x9) != CLOBBER
                  || pattern46 (x1, E_CCmode, 16) != 0)
                return -1;
              x10 = XEXP (x4, 1);
              operands[1] = x10;
              if (!register_operand (operands[1], E_SImode))
                return -1;
              x5 = XEXP (x3, 1);
              operands[2] = x5;
              if (!rx_source_operand (operands[2], E_SImode)
                  || !
#line 950 "config/rx/rx.md"
(reload_completed))
                return -1;
              return 44; /* adc_internal */

            default:
              return -1;
            }

        case CALL:
          x4 = XEXP (x3, 0);
          if (GET_CODE (x4) != MEM
              || GET_MODE (x4) != E_QImode)
            return -1;
          x5 = XEXP (x3, 1);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x11 = XEXP (x2, 0);
          operands[0] = x11;
          if (!register_operand (operands[0], E_VOIDmode))
            return -1;
          x6 = XEXP (x4, 0);
          operands[1] = x6;
          x9 = XVECEXP (x1, 0, 1);
          switch (pattern34 (x9))
            {
            case 0:
              if (!rx_call_operand (operands[1], E_SImode))
                return -1;
              return 19; /* call_value_internal */

            case 1:
              if (!rx_symbolic_call_operand (operands[1], E_SImode))
                return -1;
              return 21; /* sibcall_value_internal */

            default:
              return -1;
            }

        case MINUS:
          x4 = XEXP (x3, 0);
          switch (GET_CODE (x4))
            {
            case REG:
            case SUBREG:
              if (GET_CODE (x4) == REG
                  && REGNO (x4) == 0
                  && GET_MODE (x4) == E_SImode)
                {
                  res = recog_10 (x1, insn, pnum_clobbers);
                  if (res >= 0)
                    return res;
                }
              x11 = XEXP (x2, 0);
              operands[0] = x11;
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
                  x9 = XVECEXP (x1, 0, 1);
                  switch (GET_CODE (x9))
                    {
                    case SET:
                      if (pnum_clobbers == NULL)
                        return -1;
                      x12 = XEXP (x9, 1);
                      if (GET_CODE (x12) != MINUS
                          || GET_MODE (x12) != E_SImode
                          || pattern43 (x12, GTU) != 0
                          || !register_operand (operands[0], E_SImode)
                          || GET_MODE (x3) != E_SImode
                          || pattern21 (x1) != 0)
                        return -1;
                      *pnum_clobbers = 1;
                      return 86; /* subdi3_internal */

                    case CLOBBER:
                      x13 = XEXP (x9, 0);
                      if (GET_CODE (x13) != REG
                          || REGNO (x13) != 16
                          || GET_MODE (x13) != E_CCmode
                          || !register_operand (operands[0], E_SFmode)
                          || GET_MODE (x3) != E_SFmode)
                        return -1;
                      operands[1] = x4;
                      if (!register_operand (operands[1], E_SFmode))
                        return -1;
                      operands[2] = x5;
                      if (!rx_source_operand (operands[2], E_SFmode)
                          || !
#line 1980 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
                        return -1;
                      return 136; /* subsf3 */

                    default:
                      return -1;
                    }

                case ZERO_EXTEND:
                  switch (pattern33 (x1))
                    {
                    case 0:
                      if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                        return -1;
                      return 107; /* minussi3_zero_extendhi */

                    case 1:
                      if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                        return -1;
                      return 113; /* minussi3_zero_extendqi */

                    default:
                      return -1;
                    }

                case SIGN_EXTEND:
                  switch (pattern33 (x1))
                    {
                    case 0:
                      if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                        return -1;
                      return 110; /* minussi3_sign_extendhi */

                    case 1:
                      if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                        return -1;
                      return 116; /* minussi3_sign_extendqi */

                    default:
                      return -1;
                    }

                default:
                  return -1;
                }

            case MINUS:
              if (pattern24 (x3, REG, GEU) != 0)
                return -1;
              x5 = XEXP (x3, 1);
              x14 = XEXP (x5, 0);
              if (REGNO (x14) != 16
                  || GET_MODE (x14) != E_CCmode)
                return -1;
              x15 = XEXP (x5, 1);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              x9 = XVECEXP (x1, 0, 1);
              if (GET_CODE (x9) != CLOBBER
                  || pattern46 (x1, E_CCmode, 16) != 0)
                return -1;
              x6 = XEXP (x4, 0);
              operands[1] = x6;
              if (!register_operand (operands[1], E_SImode))
                return -1;
              x10 = XEXP (x4, 1);
              operands[2] = x10;
              if (!rx_compare_operand (operands[2], E_SImode)
                  || !
#line 1672 "config/rx/rx.md"
(reload_completed))
                return -1;
              return 84; /* sbb_internal */

            default:
              return -1;
            }

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
          x9 = XVECEXP (x1, 0, 1);
          if (pattern9 (x9, 16, CLOBBER, E_CCmode) != 0)
            return -1;
          switch (pattern36 (x2))
            {
            case 0:
              return 34; /* cstoresi4 */

            case 1:
              return 147; /* *insv_cond */

            default:
              return -1;
            }

        case IF_THEN_ELSE:
          if (GET_MODE (x3) != E_SImode)
            return -1;
          x4 = XEXP (x3, 0);
          if (!comparison_operator (x4, E_VOIDmode))
            return -1;
          operands[5] = x4;
          x9 = XVECEXP (x1, 0, 1);
          if (pattern9 (x9, 16, CLOBBER, E_CCmode) != 0
              || pattern44 (x2) != 0
              || !
#line 763 "config/rx/rx.md"
((CONSTANT_P (operands[1]) || CONSTANT_P (operands[2]))
    || (REG_P (operands[1]) && REG_P (operands[2]))))
            return -1;
          return 37; /* *movsicc */

        case ABS:
          if (pattern14 (x1) != 0)
            return -1;
          return 40; /* abssi2 */

        case COMPARE:
          return recog_13 (x1, insn, pnum_clobbers);

        case AND:
          switch (pattern16 (x1))
            {
            case 0:
              return 47; /* andsi3 */

            case 1:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 90; /* andsi3_zero_extendhi */

            case 2:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 98; /* andsi3_zero_extendqi */

            case 3:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 94; /* andsi3_sign_extendhi */

            case 4:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 102; /* andsi3_sign_extendqi */

            default:
              return -1;
            }

        case DIV:
          if (pattern17 (x1) != 0)
            return -1;
          x4 = XEXP (x3, 0);
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
                  if (pattern48 (x3, E_SImode) != 0)
                    return -1;
                  return 51; /* divsi3 */

                case E_SFmode:
                  if (pattern48 (x3, E_SFmode) != 0
                      || !
#line 1958 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
                    return -1;
                  return 134; /* divsf3 */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              switch (pattern45 (x3))
                {
                case 0:
                  if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                    return -1;
                  return 105; /* divsi3_zero_extendhi */

                case 1:
                  if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                    return -1;
                  return 111; /* divsi3_zero_extendqi */

                default:
                  return -1;
                }

            case SIGN_EXTEND:
              switch (pattern45 (x3))
                {
                case 0:
                  if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                    return -1;
                  return 108; /* divsi3_sign_extendhi */

                case 1:
                  if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                    return -1;
                  return 114; /* divsi3_sign_extendqi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case UDIV:
          switch (pattern16 (x1))
            {
            case 0:
              return 52; /* udivsi3 */

            case 1:
              if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 106; /* udivsi3_zero_extendhi */

            case 2:
              if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 112; /* udivsi3_zero_extendqi */

            case 3:
              if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 109; /* udivsi3_sign_extendhi */

            case 4:
              if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 115; /* udivsi3_sign_extendqi */

            default:
              return -1;
            }

        case NEG:
          if (pattern14 (x1) != 0)
            return -1;
          return 64; /* negsi2 */

        case NOT:
          if (pattern14 (x1) != 0)
            return -1;
          return 66; /* one_cmplsi2 */

        case IOR:
          switch (pattern16 (x1))
            {
            case 0:
              return 68; /* iorsi3 */

            case 1:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 91; /* iorsi3_zero_extendhi */

            case 2:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 99; /* iorsi3_zero_extendqi */

            case 3:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 95; /* iorsi3_sign_extendhi */

            case 4:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 103; /* iorsi3_sign_extendqi */

            default:
              return -1;
            }

        case ROTATE:
          if (pattern18 (x1) != 0)
            return -1;
          return 70; /* rotlsi3 */

        case ROTATERT:
          if (pattern18 (x1) != 0)
            return -1;
          return 72; /* rotrsi3 */

        case ASHIFT:
          if (pattern18 (x1) != 0)
            return -1;
          return 78; /* ashlsi3 */

        case SS_PLUS:
          if (pattern19 (x1, E_SImode) != 0)
            return -1;
          return 80; /* ssaddsi3 */

        case XOR:
          switch (pattern16 (x1))
            {
            case 0:
              return 87; /* xorsi3 */

            case 1:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 92; /* xorsi3_zero_extendhi */

            case 2:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 100; /* xorsi3_zero_extendqi */

            case 3:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 96; /* xorsi3_sign_extendhi */

            case 4:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 104; /* xorsi3_sign_extendqi */

            default:
              return -1;
            }

        case MULT:
          if (pattern19 (x1, E_SFmode) != 0
              || !
#line 1969 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
            return -1;
          return 135; /* mulsf3 */

        case FIX:
          if (pattern20 (x1, E_SFmode, E_SImode) != 0
              || !
#line 1990 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
            return -1;
          return 137; /* fix_truncsfsi2 */

        case FLOAT:
          if (pattern20 (x1, E_SImode, E_SFmode) != 0
              || !
#line 2000 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
            return -1;
          return 138; /* floatsisf2 */

        case ASHIFTRT:
        case LSHIFTRT:
          x9 = XVECEXP (x1, 0, 1);
          if (pattern9 (x9, 16, CLOBBER, E_CCmode) != 0)
            return -1;
          x11 = XEXP (x2, 0);
          operands[0] = x11;
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
                          return 74; /* ashrsi3 */

                        case LSHIFTRT:
                          return 76; /* lshrsi3 */

                        default:
                          break;
                        }
                    }
                }
            }
          x5 = XEXP (x3, 1);
          if (x5 != const_int_rtx[MAX_SAVED_CONST_INT + 31]
              || pattern37 (x11) != 0)
            return -1;
          operands[3] = x3;
          if (!rshift_operator (operands[3], E_SImode))
            return -1;
          x4 = XEXP (x3, 0);
          operands[2] = x4;
          if (!register_operand (operands[2], E_SImode))
            return -1;
          return 149; /* *insv_cond_lt */

        case REG:
        case SUBREG:
        case MEM:
          switch (GET_CODE (x3))
            {
            case REG:
            case SUBREG:
              res = recog_11 (x1, insn, pnum_clobbers);
              if (res >= 0)
                return res;
              break;

            case MEM:
              res = recog_12 (x1, insn, pnum_clobbers);
              if (res >= 0)
                return res;
              break;

            default:
              break;
            }
          operands[1] = x3;
          x9 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x9) != SET)
            return -1;
          x11 = XEXP (x2, 0);
          operands[0] = x11;
          x12 = XEXP (x9, 1);
          operands[2] = x12;
          x13 = XEXP (x9, 0);
          if (!rtx_equal_p (x13, operands[1]))
            return -1;
          switch (GET_MODE (operands[0]))
            {
            case E_SImode:
              if (!register_operand (operands[0], E_SImode)
                  || !rx_compare_operand (operands[1], E_SImode)
                  || !register_operand (operands[2], E_SImode))
                return -1;
              return 150; /* sync_lock_test_and_setsi */

            case E_QImode:
              if (!register_operand (operands[0], E_QImode)
                  || !rx_compare_operand (operands[1], E_QImode)
                  || !register_operand (operands[2], E_QImode))
                return -1;
              return 151; /* xchg_memqi */

            case E_HImode:
              if (!register_operand (operands[0], E_HImode)
                  || !rx_compare_operand (operands[1], E_HImode)
                  || !register_operand (operands[2], E_HImode))
                return -1;
              return 152; /* xchg_memhi */

            default:
              return -1;
            }

        case UNSPEC:
          if (XVECLEN (x3, 0) != 1
              || XINT (x3, 1) != 48
              || GET_MODE (x3) != E_SImode)
            return -1;
          x9 = XVECEXP (x1, 0, 1);
          if (pattern9 (x9, 16, CLOBBER, E_CCmode) != 0)
            return -1;
          x11 = XEXP (x2, 0);
          operands[0] = x11;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x16 = XVECEXP (x3, 0, 0);
          operands[1] = x16;
          if (!rx_compare_operand (operands[1], E_SFmode))
            return -1;
          return 169; /* lrintsf2 */

        default:
          return -1;
        }

    case PARALLEL:
      if (XVECLEN (x2, 0) < 1)
        return -1;
      operands[1] = x2;
      if (!rx_rtsd_vector (operands[1], E_VOIDmode))
        return -1;
      x17 = XVECEXP (x2, 0, 0);
      if (GET_CODE (x17) != SET)
        return -1;
      x18 = XEXP (x17, 1);
      if (GET_CODE (x18) != PLUS
          || GET_MODE (x18) != E_SImode)
        return -1;
      x19 = XEXP (x18, 0);
      if (GET_CODE (x19) != REG
          || REGNO (x19) != 0
          || GET_MODE (x19) != E_SImode)
        return -1;
      x20 = XEXP (x17, 0);
      if (GET_CODE (x20) != REG
          || REGNO (x20) != 0
          || GET_MODE (x20) != E_SImode)
        return -1;
      x9 = XVECEXP (x1, 0, 1);
      if (GET_CODE (x9) != RETURN)
        return -1;
      x21 = XEXP (x18, 1);
      operands[0] = x21;
      if (!const_int_operand (operands[0], E_SImode)
          || !
#line 386 "config/rx/rx.md"
(reload_completed))
        return -1;
      return 14; /* pop_and_return */

    case CALL:
      x11 = XEXP (x2, 0);
      if (GET_CODE (x11) != MEM
          || GET_MODE (x11) != E_QImode)
        return -1;
      x3 = XEXP (x2, 1);
      if (x3 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return -1;
      x22 = XEXP (x11, 0);
      operands[0] = x22;
      x9 = XVECEXP (x1, 0, 1);
      switch (pattern34 (x9))
        {
        case 0:
          if (!rx_call_operand (operands[0], E_SImode))
            return -1;
          return 18; /* call_internal */

        case 1:
          if (!rx_symbolic_call_operand (operands[0], E_SImode))
            return -1;
          return 20; /* sibcall_internal */

        default:
          return -1;
        }

    case UNSPEC_VOLATILE:
      x9 = XVECEXP (x1, 0, 1);
      if (pattern9 (x9, 16, CLOBBER, E_CCmode) != 0
          || GET_MODE (x2) != E_SImode)
        return -1;
      switch (XVECLEN (x2, 0))
        {
        case 1:
          x17 = XVECEXP (x2, 0, 0);
          operands[0] = x17;
          if (!immediate_operand (operands[0], E_SImode))
            return -1;
          switch (XINT (x2, 1))
            {
            case 31:
              return 170; /* clrpsw */

            case 50:
              return 171; /* setpsw */

            default:
              return -1;
            }

        case 2:
          if (XINT (x2, 1) != 43)
            return -1;
          x17 = XVECEXP (x2, 0, 0);
          operands[0] = x17;
          if (!immediate_operand (operands[0], E_SImode))
            return -1;
          x23 = XVECEXP (x2, 0, 1);
          operands[1] = x23;
          if (!nonmemory_operand (operands[1], E_SImode))
            return -1;
          return 173; /* mvtc */

        default:
          return -1;
        }

    default:
      return -1;
    }
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
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  switch (GET_CODE (x3))
    {
    case MINUS:
      if (pattern22 (x1) != 0)
        return -1;
      return 86; /* subdi3_internal */

    case MEM:
      if (pnum_clobbers == NULL
          || pattern23 (x1) != 0
          || !
#line 2502 "config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      *pnum_clobbers = 3;
      return 155; /* rx_cpymem */

    case UNSPEC_VOLATILE:
      if (XVECLEN (x3, 0) != 3
          || pattern25 (x3) != 0)
        return -1;
      switch (XINT (x3, 1))
        {
        case 22:
          if (GET_MODE (x3) != E_BLKmode)
            return -1;
          x4 = XEXP (x2, 0);
          if (GET_CODE (x4) != MEM
              || GET_MODE (x4) != E_BLKmode)
            return -1;
          x5 = XEXP (x4, 0);
          if (GET_CODE (x5) != REG
              || REGNO (x5) != 1
              || GET_MODE (x5) != E_SImode
              || pattern51 (x1, 3) != 0
              || !
#line 2533 "config/rx/rx.md"
(rx_allow_string_insns))
            return -1;
          return 156; /* rx_setmem */

        case 24:
          if (pnum_clobbers == NULL
              || GET_MODE (x3) != E_SImode)
            return -1;
          x6 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x6) != USE)
            return -1;
          x7 = XVECEXP (x1, 0, 2);
          if (GET_CODE (x7) != USE)
            return -1;
          x4 = XEXP (x2, 0);
          operands[0] = x4;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x8 = XEXP (x6, 0);
          operands[1] = x8;
          if (!memory_operand (operands[1], E_BLKmode))
            return -1;
          x9 = XEXP (x7, 0);
          operands[2] = x9;
          if (!memory_operand (operands[2], E_BLKmode)
              || !
#line 2592 "config/rx/rx.md"
(rx_allow_string_insns))
            return -1;
          *pnum_clobbers = 4;
          return 157; /* rx_cmpstrn */

        default:
          return -1;
        }

    default:
      return -1;
    }
}

static int
recog_16 (rtx x1 ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED,
	int *pnum_clobbers ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x3) != CLOBBER)
    return -1;
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) != REG
      || GET_MODE (x4) != E_SImode)
    return -1;
  x5 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x5) != CLOBBER)
    return -1;
  x6 = XEXP (x5, 0);
  if (GET_CODE (x6) != REG
      || GET_MODE (x6) != E_SImode)
    return -1;
  x7 = XVECEXP (x1, 0, 4);
  if (GET_CODE (x7) != CLOBBER)
    return -1;
  x8 = XEXP (x7, 0);
  if (GET_CODE (x8) != REG)
    return -1;
  x9 = XEXP (x2, 1);
  switch (GET_CODE (x9))
    {
    case MEM:
      if (GET_MODE (x9) != E_BLKmode)
        return -1;
      x10 = XEXP (x9, 0);
      if (GET_CODE (x10) != REG
          || REGNO (x10) != 2
          || GET_MODE (x10) != E_SImode
          || pattern38 (x1) != 0
          || pattern52 (x1, E_SImode, 3, 2, 1) != 0
          || !
#line 2431 "config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      return 153; /* rx_movstr */

    case UNSPEC_VOLATILE:
      if (XVECLEN (x9, 0) != 2
          || XINT (x9, 1) != 23
          || GET_MODE (x9) != E_SImode)
        return -1;
      x11 = XVECEXP (x9, 0, 1);
      if (GET_CODE (x11) != REG
          || REGNO (x11) != 3
          || GET_MODE (x11) != E_SImode)
        return -1;
      x12 = XVECEXP (x1, 0, 1);
      if (pattern9 (x12, 1, CLOBBER, E_SImode) != 0
          || pattern52 (x1, E_CCmode, 16, 3, 2) != 0)
        return -1;
      x13 = XEXP (x2, 0);
      operands[0] = x13;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x14 = XVECEXP (x9, 0, 0);
      operands[1] = x14;
      if (!register_operand (operands[1], E_SImode)
          || !
#line 2446 "config/rx/rx.md"
(rx_allow_string_insns))
        return -1;
      return 154; /* rx_strend */

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
  rtx x10;
  int res ATTRIBUTE_UNUSED;
  x2 = XVECEXP (x1, 0, 0);
  if (GET_CODE (x2) != SET)
    return -1;
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) != UNSPEC_VOLATILE
      || XVECLEN (x3, 0) != 3
      || XINT (x3, 1) != 24
      || GET_MODE (x3) != E_SImode
      || pattern25 (x3) != 0)
    return -1;
  x4 = XVECEXP (x1, 0, 1);
  if (GET_CODE (x4) != USE)
    return -1;
  x5 = XVECEXP (x1, 0, 2);
  if (GET_CODE (x5) != USE
      || pattern50 (x1) != 0)
    return -1;
  x6 = XVECEXP (x1, 0, 6);
  if (GET_CODE (x6) != CLOBBER)
    return -1;
  x7 = XEXP (x6, 0);
  if (GET_CODE (x7) != REG
      || REGNO (x7) != 16
      || GET_MODE (x7) != E_CCmode)
    return -1;
  x8 = XEXP (x2, 0);
  operands[0] = x8;
  if (!register_operand (operands[0], E_SImode))
    return -1;
  x9 = XEXP (x4, 0);
  operands[1] = x9;
  if (!memory_operand (operands[1], E_BLKmode))
    return -1;
  x10 = XEXP (x5, 0);
  operands[2] = x10;
  if (!memory_operand (operands[2], E_BLKmode)
      || !
#line 2592 "config/rx/rx.md"
(rx_allow_string_insns))
    return -1;
  return 157; /* rx_cmpstrn */
}

static int
recog_18 (rtx x1 ATTRIBUTE_UNUSED,
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
      || pattern51 (x1, 2) != 0)
    return -1;
  x10 = XVECEXP (x1, 0, 3);
  if (GET_CODE (x10) != CLOBBER)
    return -1;
  x11 = XEXP (x10, 0);
  if (GET_CODE (x11) != REG
      || REGNO (x11) != 3
      || GET_MODE (x11) != E_SImode
      || !
#line 2710 "config/rx/rx.md"
(rx_allow_string_insns))
    return -1;
  return 167; /* rmpa */
}

static int
recog_19 (rtx x1 ATTRIBUTE_UNUSED,
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
#line 642 "config/rx/rx.md"
(reload_completed))
        return -1;
      return 31; /* stack_pushm */

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
#line 668 "config/rx/rx.md"
(reload_completed))
        return -1;
      return 33; /* stack_popm */

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
  rtx x10, x11, x12, x13;
  int res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    case IF_THEN_ELSE:
      return recog_7 (x1, insn, pnum_clobbers);

    case COMPARE:
      return recog_6 (x1, insn, pnum_clobbers);

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
      return 19; /* call_value_internal */

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
      return recog_5 (x1, insn, pnum_clobbers);

    case SIGN_EXTEND:
      switch (pattern0 (x1))
        {
        case 0:
          return 26; /* extendhisi2 */

        case 1:
          return 27; /* extendqisi2 */

        default:
          return -1;
        }

    case ZERO_EXTEND:
      switch (pattern0 (x1))
        {
        case 0:
          return 28; /* zero_extendhisi2 */

        case 1:
          return 29; /* zero_extendqisi2 */

        default:
          return -1;
        }

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
          res = recog_3 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      if (comparison_operator (x2, E_SImode))
        {
          x3 = XEXP (x2, 0);
          if (GET_CODE (x3) == REG
              && REGNO (x3) == 16)
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
#line 705 "config/rx/rx.md"
(reload_completed))
                            return 35; /* *sccc */
                        }
                      break;

                    case ZERO_EXTRACT:
                      if (pattern27 (x1) == 0
                          && 
#line 2183 "config/rx/rx.md"
(reload_completed))
                        return 148; /* *bmcc */
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
      if (!rx_source_operand (operands[3], E_SFmode)
          || !
#line 715 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
        return -1;
      return 36; /* cstoresf4 */

    case ABS:
      if (pattern1 (x1, pnum_clobbers) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 40; /* abssi2 */

    case PLUS:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
          switch (pattern12 (x2))
            {
            case 0:
              *pnum_clobbers = 1;
              return 42; /* addsi3_internal */

            case 1:
              if (!
#line 1947 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
                return -1;
              *pnum_clobbers = 1;
              return 133; /* addsf3 */

            case 2:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 89; /* plussi3_zero_extendhi */

            case 3:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 97; /* plussi3_zero_extendqi */

            case 4:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 93; /* plussi3_sign_extendhi */

            case 5:
              if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 101; /* plussi3_sign_extendqi */

            default:
              return -1;
            }

        case PLUS:
          if (GET_MODE (x3) != E_SImode)
            return -1;
          x6 = XEXP (x3, 0);
          if (GET_CODE (x6) != LTU
              || GET_MODE (x6) != E_SImode)
            return -1;
          x7 = XEXP (x6, 0);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 16
              || GET_MODE (x7) != E_CCmode)
            return -1;
          x8 = XEXP (x6, 1);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode)
            return -1;
          x9 = XEXP (x3, 1);
          operands[1] = x9;
          if (!register_operand (operands[1], E_SImode))
            return -1;
          x4 = XEXP (x2, 1);
          operands[2] = x4;
          if (!rx_source_operand (operands[2], E_SImode)
              || !
#line 950 "config/rx/rx.md"
(reload_completed))
            return -1;
          *pnum_clobbers = 1;
          return 44; /* adc_internal */

        default:
          return -1;
        }

    case AND:
      return recog_8 (x1, insn, pnum_clobbers);

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
          return 49; /* bswapsi2 */

        case E_HImode:
          if (!register_operand (operands[0], E_HImode)
              || GET_MODE (x2) != E_HImode
              || !register_operand (operands[1], E_HImode))
            return -1;
          return 50; /* bswaphi2 */

        default:
          return -1;
        }

    case DIV:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      switch (pattern12 (x2))
        {
        case 0:
          *pnum_clobbers = 1;
          return 51; /* divsi3 */

        case 1:
          if (!
#line 1958 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
            return -1;
          *pnum_clobbers = 1;
          return 134; /* divsf3 */

        case 2:
          if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 105; /* divsi3_zero_extendhi */

        case 3:
          if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 111; /* divsi3_zero_extendqi */

        case 4:
          if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 108; /* divsi3_sign_extendhi */

        case 5:
          if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 114; /* divsi3_sign_extendqi */

        default:
          return -1;
        }

    case UDIV:
      if (pnum_clobbers == NULL
          || GET_MODE (x2) != E_SImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      switch (pattern28 (x2))
        {
        case 0:
          *pnum_clobbers = 1;
          return 52; /* udivsi3 */

        case 1:
          if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 106; /* udivsi3_zero_extendhi */

        case 2:
          if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 112; /* udivsi3_zero_extendqi */

        case 3:
          if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 109; /* udivsi3_sign_extendhi */

        case 4:
          if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 115; /* udivsi3_sign_extendqi */

        default:
          return -1;
        }

    case MULT:
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case SIGN_EXTEND:
          if (pattern13 (x2, SIGN_EXTEND) != 0
              || !rx_source_operand (operands[2], E_SImode)
              || !
#line 1208 "config/rx/rx.md"
(! TARGET_BIG_ENDIAN_DATA))
            return -1;
          return 53; /* mulsidi3 */

        case ZERO_EXTEND:
          if (pattern13 (x2, ZERO_EXTEND) != 0
              || !rx_compare_operand (operands[2], E_SImode)
              || !
#line 1222 "config/rx/rx.md"
(! TARGET_BIG_ENDIAN_DATA))
            return -1;
          return 54; /* umulsidi3 */

        case REG:
        case SUBREG:
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
                  if (pattern10 (x2, E_SImode) != 0)
                    return -1;
                  return 63; /* mulsi3 */

                case E_SFmode:
                  if (pnum_clobbers == NULL
                      || pattern10 (x2, E_SFmode) != 0
                      || !
#line 1969 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
                    return -1;
                  *pnum_clobbers = 1;
                  return 135; /* mulsf3 */

                default:
                  return -1;
                }

            case ZERO_EXTEND:
              switch (pattern11 (x2))
                {
                case 0:
                  if (!
#line 1883 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                    return -1;
                  return 119; /* multsi3_zero_extendhi */

                case 1:
                  if (!
#line 1883 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                    return -1;
                  return 125; /* multsi3_zero_extendqi */

                default:
                  return -1;
                }

            case SIGN_EXTEND:
              switch (pattern11 (x2))
                {
                case 0:
                  if (!
#line 1883 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                    return -1;
                  return 122; /* multsi3_sign_extendhi */

                case 1:
                  if (!
#line 1883 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                    return -1;
                  return 128; /* multsi3_sign_extendqi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        default:
          return -1;
        }

    case SMAX:
      if (GET_MODE (x2) != E_SImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
          operands[1] = x3;
          if (!register_operand (operands[1], E_SImode))
            return -1;
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
              if (!rx_source_operand (operands[2], E_SImode))
                return -1;
              return 55; /* smaxsi3 */

            case ZERO_EXTEND:
              if (GET_MODE (x4) != E_SImode)
                return -1;
              x10 = XEXP (x4, 0);
              operands[2] = x10;
              if (rx_minmaxex_operand (operands[2], E_HImode))
                return 57; /* umaxhi3_u */
              if (rx_minmaxex_operand (operands[2], E_QImode))
                return 58; /* umaxqi3_u */
              if (rx_restricted_mem_operand (operands[2], E_HImode)
                  && 
#line 1883 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return 117; /* smaxsi3_zero_extendhi */
              if (!rx_restricted_mem_operand (operands[2], E_QImode)
                  || !
#line 1883 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 123; /* smaxsi3_zero_extendqi */

            case SIGN_EXTEND:
              switch (pattern2 (x4))
                {
                case 0:
                  if (!
#line 1883 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                    return -1;
                  return 120; /* smaxsi3_sign_extendhi */

                case 1:
                  if (!
#line 1883 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                    return -1;
                  return 126; /* smaxsi3_sign_extendqi */

                default:
                  return -1;
                }

            default:
              return -1;
            }

        case ZERO_EXTEND:
          if (GET_MODE (x3) != E_SImode)
            return -1;
          x6 = XEXP (x3, 0);
          operands[2] = x6;
          x4 = XEXP (x2, 1);
          operands[1] = x4;
          if (!register_operand (operands[1], E_SImode))
            return -1;
          if (rx_minmaxex_operand (operands[2], E_HImode))
            return 61; /* umaxhi3_ur */
          if (!rx_minmaxex_operand (operands[2], E_QImode))
            return -1;
          return 62; /* umaxqi3_ur */

        default:
          return -1;
        }

    case SMIN:
      if (GET_MODE (x2) != E_SImode)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_SImode))
        return -1;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
          switch (pattern28 (x2))
            {
            case 0:
              return 56; /* sminsi3 */

            case 1:
              if (!
#line 1883 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 118; /* sminsi3_zero_extendhi */

            case 2:
              if (!
#line 1883 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 124; /* sminsi3_zero_extendqi */

            case 3:
              if (!
#line 1883 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 121; /* sminsi3_sign_extendhi */

            case 4:
              if (!
#line 1883 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              return 127; /* sminsi3_sign_extendqi */

            default:
              return -1;
            }

        case ZERO_EXTEND:
          if (GET_MODE (x3) != E_SImode)
            return -1;
          x6 = XEXP (x3, 0);
          operands[2] = x6;
          x4 = XEXP (x2, 1);
          operands[1] = x4;
          if (!register_operand (operands[1], E_SImode))
            return -1;
          if (rx_minmaxex_operand (operands[2], E_HImode))
            return 59; /* uminhi3_ur */
          if (!rx_minmaxex_operand (operands[2], E_QImode))
            return -1;
          return 60; /* uminqi3_ur */

        default:
          return -1;
        }

    case NEG:
      if (pattern1 (x1, pnum_clobbers) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 64; /* negsi2 */

    case NOT:
      if (pattern1 (x1, pnum_clobbers) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 66; /* one_cmplsi2 */

    case IOR:
      switch (pattern4 (x1, pnum_clobbers))
        {
        case 0:
          *pnum_clobbers = 1;
          return 68; /* iorsi3 */

        case 1:
          if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 91; /* iorsi3_zero_extendhi */

        case 2:
          if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 99; /* iorsi3_zero_extendqi */

        case 3:
          if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 95; /* iorsi3_sign_extendhi */

        case 4:
          if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 103; /* iorsi3_sign_extendqi */

        case 5:
          return 139; /* bitset */

        case 6:
          return 140; /* bitset_in_memory */

        default:
          return -1;
        }

    case ROTATE:
      if (pattern5 (x1, pnum_clobbers) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 70; /* rotlsi3 */

    case ROTATERT:
      if (pattern5 (x1, pnum_clobbers) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 72; /* rotrsi3 */

    case ASHIFT:
      if (pattern5 (x1, pnum_clobbers) != 0)
        return -1;
      *pnum_clobbers = 1;
      return 78; /* ashlsi3 */

    case SS_PLUS:
      if (pattern1 (x1, pnum_clobbers) != 0)
        return -1;
      x4 = XEXP (x2, 1);
      operands[2] = x4;
      if (!rx_source_operand (operands[2], E_SImode))
        return -1;
      *pnum_clobbers = 1;
      return 80; /* ssaddsi3 */

    case UNSPEC:
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      if (!register_operand (operands[0], E_SImode)
          || GET_MODE (x2) != E_SImode)
        return -1;
      switch (XVECLEN (x2, 0))
        {
        case 2:
          x11 = XVECEXP (x2, 0, 0);
          operands[1] = x11;
          switch (XINT (x2, 1))
            {
            case 49:
              x12 = XVECEXP (x2, 0, 1);
              if (GET_CODE (x12) != REG
                  || REGNO (x12) != 16
                  || GET_MODE (x12) != E_CCmode
                  || !register_operand (operands[1], E_SImode)
                  || !
#line 1612 "config/rx/rx.md"
(reload_completed))
                return -1;
              return 81; /* *sat */

            case 40:
              if (!immediate_operand (operands[1], E_SImode))
                return -1;
              x12 = XVECEXP (x2, 0, 1);
              operands[2] = x12;
              if (!immediate_operand (operands[2], E_SImode))
                return -1;
              return 178; /* mvfcp */

            default:
              return -1;
            }

        case 1:
          switch (XINT (x2, 1))
            {
            case 37:
              x11 = XVECEXP (x2, 0, 0);
              if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              return 162; /* mvfachi */

            case 38:
              x11 = XVECEXP (x2, 0, 0);
              if (x11 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              return 163; /* mvfacmi */

            case 46:
              x11 = XVECEXP (x2, 0, 0);
              operands[1] = x11;
              if (!register_operand (operands[1], E_SImode))
                return -1;
              return 168; /* revw */

            case 48:
              if (pnum_clobbers == NULL)
                return -1;
              x11 = XVECEXP (x2, 0, 0);
              operands[1] = x11;
              if (!rx_compare_operand (operands[1], E_SFmode))
                return -1;
              *pnum_clobbers = 1;
              return 169; /* lrintsf2 */

            default:
              return -1;
            }

        default:
          return -1;
        }

    case MINUS:
      if (pnum_clobbers == NULL)
        return -1;
      x5 = XEXP (x1, 0);
      operands[0] = x5;
      x3 = XEXP (x2, 0);
      switch (GET_CODE (x3))
        {
        case REG:
        case SUBREG:
          switch (pattern12 (x2))
            {
            case 0:
              *pnum_clobbers = 1;
              return 82; /* subsi3 */

            case 1:
              if (!
#line 1980 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
                return -1;
              *pnum_clobbers = 1;
              return 136; /* subsf3 */

            case 2:
              if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 107; /* minussi3_zero_extendhi */

            case 3:
              if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 113; /* minussi3_zero_extendqi */

            case 4:
              if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 110; /* minussi3_sign_extendhi */

            case 5:
              if (!
#line 1873 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
                return -1;
              *pnum_clobbers = 1;
              return 116; /* minussi3_sign_extendqi */

            default:
              return -1;
            }

        case MINUS:
          if (GET_MODE (x3) != E_SImode)
            return -1;
          x4 = XEXP (x2, 1);
          if (GET_CODE (x4) != GEU
              || GET_MODE (x4) != E_SImode)
            return -1;
          x10 = XEXP (x4, 0);
          if (GET_CODE (x10) != REG
              || REGNO (x10) != 16
              || GET_MODE (x10) != E_CCmode)
            return -1;
          x13 = XEXP (x4, 1);
          if (x13 != const_int_rtx[MAX_SAVED_CONST_INT + 0]
              || !register_operand (operands[0], E_SImode)
              || GET_MODE (x2) != E_SImode)
            return -1;
          x6 = XEXP (x3, 0);
          operands[1] = x6;
          if (!register_operand (operands[1], E_SImode))
            return -1;
          x9 = XEXP (x3, 1);
          operands[2] = x9;
          if (!rx_compare_operand (operands[2], E_SImode)
              || !
#line 1672 "config/rx/rx.md"
(reload_completed))
            return -1;
          *pnum_clobbers = 1;
          return 84; /* sbb_internal */

        default:
          return -1;
        }

    case XOR:
      switch (pattern4 (x1, pnum_clobbers))
        {
        case 0:
          *pnum_clobbers = 1;
          return 87; /* xorsi3 */

        case 1:
          if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 92; /* xorsi3_zero_extendhi */

        case 2:
          if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 100; /* xorsi3_zero_extendqi */

        case 3:
          if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 96; /* xorsi3_sign_extendhi */

        case 4:
          if (!
#line 1862 "config/rx/rx.md"
((optimize < 3 || optimize_size)))
            return -1;
          *pnum_clobbers = 1;
          return 104; /* xorsi3_sign_extendqi */

        case 5:
          return 141; /* bitinvert */

        case 6:
          return 142; /* bitinvert_in_memory */

        default:
          return -1;
        }

    case FIX:
      if (pattern6 (x1, pnum_clobbers, E_SFmode, E_SImode) != 0
          || !
#line 1990 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
        return -1;
      *pnum_clobbers = 1;
      return 137; /* fix_truncsfsi2 */

    case FLOAT:
      if (pattern6 (x1, pnum_clobbers, E_SImode, E_SFmode) != 0
          || !
#line 2000 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS))
        return -1;
      *pnum_clobbers = 1;
      return 138; /* floatsisf2 */

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
                      return 74; /* ashrsi3 */

                    case LSHIFTRT:
                      *pnum_clobbers = 1;
                      return 76; /* lshrsi3 */

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
          || pattern31 (x5) != 0)
        return -1;
      x3 = XEXP (x2, 0);
      operands[2] = x3;
      if (!register_operand (operands[2], E_SImode))
        return -1;
      *pnum_clobbers = 1;
      return 149; /* *insv_cond_lt */

    case UNSPEC_VOLATILE:
      return recog_4 (x1, insn, pnum_clobbers);

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
      return recog_20 (x1, insn, pnum_clobbers);

    case PARALLEL:
      switch (XVECLEN (x1, 0))
        {
        case 2:
          res = recog_14 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 3:
          res = recog_15 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 5:
          res = recog_16 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 6:
          x2 = XVECEXP (x1, 0, 0);
          if (GET_CODE (x2) == SET)
            {
              x3 = XEXP (x2, 1);
              if (GET_CODE (x3) == MEM
                  && pattern23 (x1) == 0
                  && pattern50 (x1) == 0
                  && 
#line 2502 "config/rx/rx.md"
(rx_allow_string_insns))
                return 155; /* rx_cpymem */
            }
          break;

        case 7:
          res = recog_17 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        case 4:
          res = recog_18 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
          break;

        default:
          break;
        }
      if (XVECLEN (x1, 0) >= 1)
        {
          operands[1] = x1;
          res = recog_19 (x1, insn, pnum_clobbers);
          if (res >= 0)
            return res;
        }
      switch (XVECLEN (x1, 0))
        {
        case 2:
          x2 = XVECEXP (x1, 0, 0);
          if (GET_CODE (x2) != SET)
            return -1;
          x4 = XEXP (x2, 0);
          operands[0] = x4;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x3 = XEXP (x2, 1);
          if (GET_MODE (x3) != E_SImode)
            return -1;
          switch (GET_CODE (x3))
            {
            case PLUS:
              x5 = XEXP (x3, 0);
              if (!register_operand (x5, E_SImode))
                return -1;
              x6 = XEXP (x3, 1);
              if (!rx_source_operand (x6, E_SImode))
                return -1;
              x7 = XVECEXP (x1, 0, 1);
              switch (GET_CODE (x7))
                {
                case CLOBBER:
                  x8 = XEXP (x7, 0);
                  if (GET_CODE (x8) != REG
                      || REGNO (x8) != 16
                      || GET_MODE (x8) != E_CCmode)
                    return -1;
                  operands[1] = x5;
                  operands[2] = x6;
                  return 42; /* addsi3_internal */

                case SET:
                  if (pnum_clobbers == NULL)
                    return -1;
                  x9 = XEXP (x7, 1);
                  if (GET_CODE (x9) != PLUS
                      || GET_MODE (x9) != E_SImode)
                    return -1;
                  x10 = XEXP (x9, 0);
                  if (GET_CODE (x10) != PLUS
                      || GET_MODE (x10) != E_SImode)
                    return -1;
                  x11 = XEXP (x10, 0);
                  if (GET_CODE (x11) != LTU
                      || GET_MODE (x11) != E_SImode)
                    return -1;
                  x12 = XEXP (x11, 0);
                  if (GET_CODE (x12) != PLUS
                      || GET_MODE (x12) != E_SImode)
                    return -1;
                  operands[2] = x5;
                  operands[3] = x6;
                  x8 = XEXP (x7, 0);
                  operands[1] = x8;
                  if (!register_operand (operands[1], E_SImode))
                    return -1;
                  x13 = XEXP (x10, 1);
                  operands[4] = x13;
                  if (!register_operand (operands[4], E_SImode))
                    return -1;
                  x14 = XEXP (x9, 1);
                  operands[5] = x14;
                  if (!rx_source_operand (operands[5], E_SImode))
                    return -1;
                  x15 = XEXP (x12, 0);
                  if (!rtx_equal_p (x15, operands[2]))
                    return -1;
                  x16 = XEXP (x12, 1);
                  if (!rtx_equal_p (x16, operands[3]))
                    return -1;
                  x17 = XEXP (x11, 1);
                  if (!rtx_equal_p (x17, operands[2]))
                    return -1;
                  *pnum_clobbers = 2;
                  return 46; /* adddi3_internal */

                default:
                  return -1;
                }

            case MINUS:
              x7 = XVECEXP (x1, 0, 1);
              if (pattern9 (x7, 16, CLOBBER, E_CCmode) != 0)
                return -1;
              x5 = XEXP (x3, 0);
              operands[1] = x5;
              if (!register_operand (operands[1], E_SImode))
                return -1;
              x6 = XEXP (x3, 1);
              operands[2] = x6;
              if (!rx_source_operand (operands[2], E_SImode))
                return -1;
              return 82; /* subsi3 */

            default:
              return -1;
            }

        case 4:
          if (pattern7 (x1) != 0)
            return -1;
          return 46; /* adddi3_internal */

        default:
          return -1;
        }

    case SIMPLE_RETURN:
      return 12; /* simple_return */

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
              return 15; /* fast_interrupt_return */

            case 10:
              x2 = XVECEXP (x1, 0, 0);
              if (GET_CODE (x2) != RETURN)
                return -1;
              return 16; /* exception_return */

            case 12:
              x2 = XVECEXP (x1, 0, 0);
              if (GET_CODE (x2) != RETURN)
                return -1;
              return 17; /* naked_return */

            case 41:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!register_operand (operands[0], E_SImode))
                return -1;
              return 164; /* mvtachi */

            case 42:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!register_operand (operands[0], E_SImode))
                return -1;
              return 165; /* mvtaclo */

            case 45:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              return 166; /* racw */

            case 31:
              if (pnum_clobbers == NULL
                  || GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              *pnum_clobbers = 1;
              return 170; /* clrpsw */

            case 50:
              if (pnum_clobbers == NULL
                  || GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              *pnum_clobbers = 1;
              return 171; /* setpsw */

            case 44:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              return 174; /* mvtipl */

            case 30:
              x2 = XVECEXP (x1, 0, 0);
              if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              return 175; /* brk */

            case 32:
              if (GET_MODE (x1) != E_SImode)
                return -1;
              x2 = XVECEXP (x1, 0, 0);
              operands[0] = x2;
              if (!immediate_operand (operands[0], E_SImode))
                return -1;
              return 176; /* int */

            case 51:
              x2 = XVECEXP (x1, 0, 0);
              if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
                return -1;
              return 177; /* wait */

            default:
              return -1;
            }

        case 2:
          if (pnum_clobbers == NULL
              || XINT (x1, 1) != 43
              || GET_MODE (x1) != E_SImode)
            return -1;
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!immediate_operand (operands[0], E_SImode))
            return -1;
          x7 = XVECEXP (x1, 0, 1);
          operands[1] = x7;
          if (!nonmemory_operand (operands[1], E_SImode))
            return -1;
          *pnum_clobbers = 1;
          return 173; /* mvtc */

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
      return 18; /* call_internal */

    case UNSPEC:
      if (GET_MODE (x1) != E_SImode)
        return -1;
      switch (XVECLEN (x1, 0))
        {
        case 2:
          x2 = XVECEXP (x1, 0, 0);
          operands[0] = x2;
          if (!register_operand (operands[0], E_SImode))
            return -1;
          x7 = XVECEXP (x1, 0, 1);
          operands[1] = x7;
          if (!register_operand (operands[1], E_SImode))
            return -1;
          switch (XINT (x1, 1))
            {
            case 33:
              return 158; /* machi */

            case 34:
              return 159; /* maclo */

            case 35:
              return 160; /* mulhi */

            case 36:
              return 161; /* mullo */

            default:
              return -1;
            }

        case 7:
          if (pnum_clobbers == NULL
              || XINT (x1, 1) != 47)
            return -1;
          x2 = XVECEXP (x1, 0, 0);
          if (x2 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
            return -1;
          x7 = XVECEXP (x1, 0, 1);
          if (GET_CODE (x7) != REG
              || REGNO (x7) != 1
              || GET_MODE (x7) != E_SImode)
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
#line 2710 "config/rx/rx.md"
(rx_allow_string_insns))
            return -1;
          *pnum_clobbers = 3;
          return 167; /* rmpa */

        default:
          return -1;
        }

    case CONST_INT:
      if (XWINT (x1, 0) != 0L)
        return -1;
      return 179; /* nop */

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
          if (rx_source_operand (operands[1], E_SImode))
            {
              x9 = XEXP (x2, 1);
              operands[2] = x9;
              if (label_ref_operand (operands[2], E_VOIDmode)
                  && 
#line 212 "config/rx/rx.md"
(reload_completed))
                return gen_split_2 (insn, operands);
            }
        }
    }
  if (GET_CODE (x6) != ZERO_EXTRACT
      || !rx_z_comparison_operator (x5, E_VOIDmode))
    return NULL;
  operands[4] = x5;
  if (pattern42 (x2) != 0
      || !
#line 235 "config/rx/rx.md"
(reload_completed))
    return NULL;
  return gen_split_3 (insn, operands);
}

rtx_insn *
split_insns (rtx x1 ATTRIBUTE_UNUSED, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  rtx * const operands ATTRIBUTE_UNUSED = &recog_data.operand[0];
  rtx x2, x3, x4, x5, x6, x7, x8, x9;
  rtx x10, x11, x12, x13, x14, x15;
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
                  && pattern26 (x1, E_SImode) == 0
                  && 
#line 182 "config/rx/rx.md"
(reload_completed))
                return gen_split_1 (insn, operands);
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
                      || pattern26 (x1, E_SFmode) != 0
                      || !(
#line 283 "config/rx/rx.md"
(ALLOW_RX_FPU_INSNS) && 
#line 285 "config/rx/rx.md"
( reload_completed)))
                    return NULL;
                  return gen_split_4 (insn, operands);

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
          if (!rx_source_operand (operands[3], E_SFmode)
              || !
#line 717 "config/rx/rx.md"
(reload_completed))
            return NULL;
          return gen_split_6 (insn, operands);

        case IOR:
          if (pattern8 (x1) != 0
              || !
#line 2024 "config/rx/rx.md"
( can_create_pseudo_p ()))
            return NULL;
          return gen_split_14 (insn, operands);

        case XOR:
          if (pattern8 (x1) != 0
              || !
#line 2053 "config/rx/rx.md"
( can_create_pseudo_p ()))
            return NULL;
          return gen_split_15 (insn, operands);

        case AND:
          if (GET_MODE (x2) != E_SImode)
            return NULL;
          x3 = XEXP (x2, 0);
          if (GET_CODE (x3) != NOT
              || GET_MODE (x3) != E_SImode)
            return NULL;
          x7 = XEXP (x3, 0);
          if (GET_CODE (x7) != ASHIFT
              || GET_MODE (x7) != E_SImode)
            return NULL;
          x8 = XEXP (x7, 0);
          if (x8 != const_int_rtx[MAX_SAVED_CONST_INT + 1])
            return NULL;
          x5 = XEXP (x1, 0);
          operands[0] = x5;
          if (!register_operand (operands[0], E_SImode))
            return NULL;
          x9 = XEXP (x7, 1);
          operands[1] = x9;
          if (!rx_shift_operand (operands[1], E_SImode))
            return NULL;
          x6 = XEXP (x2, 1);
          operands[2] = x6;
          if (!register_operand (operands[2], E_SImode)
              || !
#line 2084 "config/rx/rx.md"
( can_create_pseudo_p ()))
            return NULL;
          return gen_split_16 (insn, operands);

        default:
          return NULL;
        }

    case PARALLEL:
      switch (XVECLEN (x1, 0))
        {
        case 2:
          x10 = XVECEXP (x1, 0, 0);
          if (GET_CODE (x10) != SET)
            return NULL;
          x11 = XVECEXP (x1, 0, 1);
          if (pattern9 (x11, 16, CLOBBER, E_CCmode) != 0)
            return NULL;
          x12 = XEXP (x10, 1);
          switch (GET_CODE (x12))
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
              if (!comparison_operator (x12, E_SImode))
                return NULL;
              switch (pattern36 (x10))
                {
                case 0:
                  if (!
#line 685 "config/rx/rx.md"
(reload_completed))
                    return NULL;
                  return gen_split_5 (insn, operands);

                case 1:
                  if (!
#line 2161 "config/rx/rx.md"
(reload_completed))
                    return NULL;
                  return gen_split_18 (insn, operands);

                default:
                  return NULL;
                }

            case IF_THEN_ELSE:
              if (GET_MODE (x12) != E_SImode)
                return NULL;
              x13 = XEXP (x12, 0);
              if (!comparison_operator (x13, E_VOIDmode))
                return NULL;
              operands[5] = x13;
              if (pattern44 (x10) != 0
                  || !(
#line 763 "config/rx/rx.md"
((CONSTANT_P (operands[1]) || CONSTANT_P (operands[2]))
    || (REG_P (operands[1]) && REG_P (operands[2]))) && 
#line 766 "config/rx/rx.md"
( reload_completed)))
                return NULL;
              return gen_split_7 (insn, operands);

            case AND:
              if (pattern35 (x10) != 0
                  || !
#line 1113 "config/rx/rx.md"
( RX_REG_P (operands[1]) && CONST_INT_P (operands[2])
   && pow2p_hwi (~UINTVAL (operands[2]))))
                return NULL;
              return gen_split_9 (insn, operands);

            case IOR:
              if (pattern35 (x10) != 0
                  || !
#line 1417 "config/rx/rx.md"
( RX_REG_P (operands[1]) && CONST_INT_P (operands[2])
   && pow2p_hwi (UINTVAL (operands[2]))))
                return NULL;
              return gen_split_10 (insn, operands);

            case SS_PLUS:
              if (pattern35 (x10) != 0
                  || !
#line 1594 "config/rx/rx.md"
(reload_completed))
                return NULL;
              return gen_split_11 (insn, operands);

            case XOR:
              if (pattern35 (x10) != 0
                  || !
#line 1745 "config/rx/rx.md"
( RX_REG_P (operands[1]) && CONST_INT_P (operands[2])
   && pow2p_hwi (UINTVAL (operands[2]))))
                return NULL;
              return gen_split_13 (insn, operands);

            case REG:
            case SUBREG:
              operands[2] = x12;
              if (!register_operand (operands[2], E_SImode))
                return NULL;
              x14 = XEXP (x10, 0);
              if (pattern37 (x14) != 0
                  || !
#line 2133 "config/rx/rx.md"
(reload_completed))
                return NULL;
              return gen_split_17 (insn, operands);

            case ASHIFTRT:
            case LSHIFTRT:
              operands[3] = x12;
              if (!rshift_operator (operands[3], E_SImode))
                return NULL;
              x15 = XEXP (x12, 1);
              if (x15 != const_int_rtx[MAX_SAVED_CONST_INT + 31])
                return NULL;
              x14 = XEXP (x10, 0);
              if (pattern37 (x14) != 0)
                return NULL;
              x13 = XEXP (x12, 0);
              operands[2] = x13;
              if (!register_operand (operands[2], E_SImode))
                return NULL;
              return gen_split_19 (insn, operands);

            default:
              return NULL;
            }

        case 4:
          if (pattern7 (x1) != 0
              || !
#line 1043 "config/rx/rx.md"
(reload_completed))
            return NULL;
          return gen_split_8 (insn, operands);

        case 3:
          x10 = XVECEXP (x1, 0, 0);
          if (GET_CODE (x10) != SET)
            return NULL;
          x12 = XEXP (x10, 1);
          if (GET_CODE (x12) != MINUS
              || pattern22 (x1) != 0
              || !
#line 1729 "config/rx/rx.md"
(reload_completed))
            return NULL;
          return gen_split_12 (insn, operands);

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
  rtx x10, x11;
  rtx_insn *res ATTRIBUTE_UNUSED;
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != E_SImode)
    return NULL;
  x3 = XEXP (x2, 0);
  operands[1] = x3;
  switch (GET_MODE (operands[1]))
    {
    case E_HImode:
      if (rx_restricted_mem_operand (operands[1], E_HImode))
        {
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern39 (x4))
            {
            case 0:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 0);
              if (rtx_equal_p (x7, operands[0]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[2])
                      && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_7 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x7, operands[2]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[0])
                      && 
#line 1812 "config/rx/rx.md"
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
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 0);
              if (rtx_equal_p (x7, operands[0]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[2])
                      && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_8 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x7, operands[2]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[0])
                      && 
#line 1812 "config/rx/rx.md"
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
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 0);
              if (rtx_equal_p (x7, operands[0]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[2])
                      && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_9 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x7, operands[2]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[0])
                      && 
#line 1812 "config/rx/rx.md"
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
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 0);
              if (rtx_equal_p (x7, operands[0]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[2])
                      && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_10 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x7, operands[2]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[0])
                      && 
#line 1812 "config/rx/rx.md"
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
#line 1826 "config/rx/rx.md"
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
#line 1826 "config/rx/rx.md"
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
#line 1826 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_40 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 7:
              x9 = XEXP (x4, 1);
              x10 = XEXP (x9, 0);
              if (rtx_equal_p (x10, operands[0]))
                {
                  x11 = XEXP (x9, 1);
                  if (rtx_equal_p (x11, operands[2])
                      && 
#line 1839 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_50 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x10, operands[2]))
                {
                  x11 = XEXP (x9, 1);
                  if (rtx_equal_p (x11, operands[0])
                      && 
#line 1851 "config/rx/rx.md"
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
              x9 = XEXP (x4, 1);
              x10 = XEXP (x9, 0);
              if (rtx_equal_p (x10, operands[0]))
                {
                  x11 = XEXP (x9, 1);
                  if (rtx_equal_p (x11, operands[2])
                      && 
#line 1839 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_51 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x10, operands[2]))
                {
                  x11 = XEXP (x9, 1);
                  if (rtx_equal_p (x11, operands[0])
                      && 
#line 1851 "config/rx/rx.md"
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
              x9 = XEXP (x4, 1);
              x10 = XEXP (x9, 0);
              if (rtx_equal_p (x10, operands[0]))
                {
                  x11 = XEXP (x9, 1);
                  if (rtx_equal_p (x11, operands[2])
                      && 
#line 1839 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_52 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x10, operands[2]))
                {
                  x11 = XEXP (x9, 1);
                  if (rtx_equal_p (x11, operands[0])
                      && 
#line 1851 "config/rx/rx.md"
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
#line 1895 "config/rx/rx.md"
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
      if (!memory_operand (operands[1], E_HImode))
        return NULL;
      x4 = PATTERN (peep2_next_insn (1));
      switch (pattern41 (x4, E_HImode))
        {
        case 0:
          if (!
#line 1911 "config/rx/rx.md"
(REGNO (operands[0]) == REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[2])
       || peep2_regno_dead_p (2, REGNO (operands[0])))))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_75 (insn, operands);

        case 1:
          if (!
#line 1926 "config/rx/rx.md"
(REGNO (operands[0]) == REGNO (operands[2])))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_78 (insn, operands);

        default:
          return NULL;
        }

    case E_QImode:
      if (rx_restricted_mem_operand (operands[1], E_QImode))
        {
          x4 = PATTERN (peep2_next_insn (1));
          switch (pattern39 (x4))
            {
            case 0:
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 0);
              if (rtx_equal_p (x7, operands[0]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[2])
                      && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_15 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x7, operands[2]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[0])
                      && 
#line 1812 "config/rx/rx.md"
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
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 0);
              if (rtx_equal_p (x7, operands[0]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[2])
                      && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_16 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x7, operands[2]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[0])
                      && 
#line 1812 "config/rx/rx.md"
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
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 0);
              if (rtx_equal_p (x7, operands[0]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[2])
                      && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_17 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x7, operands[2]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[0])
                      && 
#line 1812 "config/rx/rx.md"
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
              x5 = XVECEXP (x4, 0, 0);
              x6 = XEXP (x5, 1);
              x7 = XEXP (x6, 0);
              if (rtx_equal_p (x7, operands[0]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[2])
                      && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_18 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x7, operands[2]))
                {
                  x8 = XEXP (x6, 1);
                  if (rtx_equal_p (x8, operands[0])
                      && 
#line 1812 "config/rx/rx.md"
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
#line 1826 "config/rx/rx.md"
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
#line 1826 "config/rx/rx.md"
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
#line 1826 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                {
                  *pmatch_len_ = 1;
                  res = gen_peephole2_46 (insn, operands);
                  if (res != NULL_RTX)
                    return res;
                }
              break;

            case 7:
              x9 = XEXP (x4, 1);
              x10 = XEXP (x9, 0);
              if (rtx_equal_p (x10, operands[0]))
                {
                  x11 = XEXP (x9, 1);
                  if (rtx_equal_p (x11, operands[2])
                      && 
#line 1839 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_56 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x10, operands[2]))
                {
                  x11 = XEXP (x9, 1);
                  if (rtx_equal_p (x11, operands[0])
                      && 
#line 1851 "config/rx/rx.md"
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
              x9 = XEXP (x4, 1);
              x10 = XEXP (x9, 0);
              if (rtx_equal_p (x10, operands[0]))
                {
                  x11 = XEXP (x9, 1);
                  if (rtx_equal_p (x11, operands[2])
                      && 
#line 1839 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_57 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x10, operands[2]))
                {
                  x11 = XEXP (x9, 1);
                  if (rtx_equal_p (x11, operands[0])
                      && 
#line 1851 "config/rx/rx.md"
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
              x9 = XEXP (x4, 1);
              x10 = XEXP (x9, 0);
              if (rtx_equal_p (x10, operands[0]))
                {
                  x11 = XEXP (x9, 1);
                  if (rtx_equal_p (x11, operands[2])
                      && 
#line 1839 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_58 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                }
              if (rtx_equal_p (x10, operands[2]))
                {
                  x11 = XEXP (x9, 1);
                  if (rtx_equal_p (x11, operands[0])
                      && 
#line 1851 "config/rx/rx.md"
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
#line 1895 "config/rx/rx.md"
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
      if (!memory_operand (operands[1], E_QImode))
        return NULL;
      x4 = PATTERN (peep2_next_insn (1));
      switch (pattern41 (x4, E_QImode))
        {
        case 0:
          if (!
#line 1911 "config/rx/rx.md"
(REGNO (operands[0]) == REGNO (operands[3])
   && (REGNO (operands[0]) == REGNO (operands[2])
       || peep2_regno_dead_p (2, REGNO (operands[0])))))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_76 (insn, operands);

        case 1:
          if (!
#line 1926 "config/rx/rx.md"
(REGNO (operands[0]) == REGNO (operands[2])))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_80 (insn, operands);

        default:
          return NULL;
        }

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
  rtx x10, x11, x12, x13;
  rtx_insn *res ATTRIBUTE_UNUSED;
  recog_data.insn = NULL;
  if (peep2_current_count < 2
      || GET_CODE (x1) != SET)
    return NULL;
  x2 = XEXP (x1, 0);
  operands[0] = x2;
  if (!register_operand (operands[0], E_SImode))
    return NULL;
  x3 = XEXP (x1, 1);
  switch (GET_CODE (x3))
    {
    case REG:
    case SUBREG:
      operands[1] = x3;
      if (!register_operand (operands[1], E_SImode))
        return NULL;
      x4 = PATTERN (peep2_next_insn (1));
      if (GET_CODE (x4) != SET)
        return NULL;
      x5 = XEXP (x4, 1);
      if (GET_CODE (x5) != COMPARE
          || GET_MODE (x5) != E_CCmode)
        return NULL;
      x6 = XEXP (x5, 1);
      if (x6 != const_int_rtx[MAX_SAVED_CONST_INT + 0])
        return NULL;
      x7 = XEXP (x4, 0);
      if (GET_CODE (x7) != REG
          || REGNO (x7) != 16
          || GET_MODE (x7) != E_CCmode)
        return NULL;
      x8 = XEXP (x5, 0);
      if (rtx_equal_p (x8, operands[0]))
        {
          *pmatch_len_ = 1;
          res = gen_peephole2_1 (insn, operands);
          if (res != NULL_RTX)
            return res;
        }
      if (!rtx_equal_p (x8, operands[1]))
        return NULL;
      *pmatch_len_ = 1;
      return gen_peephole2_2 (insn, operands);

    case ZERO_EXTEND:
      if (GET_MODE (x3) != E_SImode)
        return NULL;
      x9 = XEXP (x3, 0);
      operands[1] = x9;
      switch (GET_MODE (operands[1]))
        {
        case E_HImode:
          if (rx_restricted_mem_operand (operands[1], E_HImode))
            {
              x4 = PATTERN (peep2_next_insn (1));
              switch (pattern39 (x4))
                {
                case 0:
                  x10 = XVECEXP (x4, 0, 0);
                  x11 = XEXP (x10, 1);
                  x12 = XEXP (x11, 0);
                  if (rtx_equal_p (x12, operands[0]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[2])
                          && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                        {
                          *pmatch_len_ = 1;
                          res = gen_peephole2_3 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                  if (rtx_equal_p (x12, operands[2]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[0])
                          && 
#line 1812 "config/rx/rx.md"
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
                  x10 = XVECEXP (x4, 0, 0);
                  x11 = XEXP (x10, 1);
                  x12 = XEXP (x11, 0);
                  if (rtx_equal_p (x12, operands[0]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[2])
                          && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                        {
                          *pmatch_len_ = 1;
                          res = gen_peephole2_4 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                  if (rtx_equal_p (x12, operands[2]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[0])
                          && 
#line 1812 "config/rx/rx.md"
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
                  x10 = XVECEXP (x4, 0, 0);
                  x11 = XEXP (x10, 1);
                  x12 = XEXP (x11, 0);
                  if (rtx_equal_p (x12, operands[0]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[2])
                          && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                        {
                          *pmatch_len_ = 1;
                          res = gen_peephole2_5 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                  if (rtx_equal_p (x12, operands[2]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[0])
                          && 
#line 1812 "config/rx/rx.md"
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
                  x10 = XVECEXP (x4, 0, 0);
                  x11 = XEXP (x10, 1);
                  x12 = XEXP (x11, 0);
                  if (rtx_equal_p (x12, operands[0]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[2])
                          && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                        {
                          *pmatch_len_ = 1;
                          res = gen_peephole2_6 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                  if (rtx_equal_p (x12, operands[2]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[0])
                          && 
#line 1812 "config/rx/rx.md"
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
#line 1826 "config/rx/rx.md"
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
#line 1826 "config/rx/rx.md"
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
#line 1826 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_37 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 7:
                  x5 = XEXP (x4, 1);
                  x8 = XEXP (x5, 0);
                  if (rtx_equal_p (x8, operands[0]))
                    {
                      x6 = XEXP (x5, 1);
                      if (rtx_equal_p (x6, operands[2])
                          && 
#line 1839 "config/rx/rx.md"
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
                      x6 = XEXP (x5, 1);
                      if (rtx_equal_p (x6, operands[0])
                          && 
#line 1851 "config/rx/rx.md"
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
                  x5 = XEXP (x4, 1);
                  x8 = XEXP (x5, 0);
                  if (rtx_equal_p (x8, operands[0]))
                    {
                      x6 = XEXP (x5, 1);
                      if (rtx_equal_p (x6, operands[2])
                          && 
#line 1839 "config/rx/rx.md"
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
                      x6 = XEXP (x5, 1);
                      if (rtx_equal_p (x6, operands[0])
                          && 
#line 1851 "config/rx/rx.md"
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
                  x5 = XEXP (x4, 1);
                  x8 = XEXP (x5, 0);
                  if (rtx_equal_p (x8, operands[0]))
                    {
                      x6 = XEXP (x5, 1);
                      if (rtx_equal_p (x6, operands[2])
                          && 
#line 1839 "config/rx/rx.md"
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
                      x6 = XEXP (x5, 1);
                      if (rtx_equal_p (x6, operands[0])
                          && 
#line 1851 "config/rx/rx.md"
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
#line 1895 "config/rx/rx.md"
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
          x4 = PATTERN (peep2_next_insn (1));
          if (pattern40 (x4, E_HImode) != 0
              || !
#line 1926 "config/rx/rx.md"
(REGNO (operands[0]) == REGNO (operands[2])))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_77 (insn, operands);

        case E_QImode:
          if (rx_restricted_mem_operand (operands[1], E_QImode))
            {
              x4 = PATTERN (peep2_next_insn (1));
              switch (pattern39 (x4))
                {
                case 0:
                  x10 = XVECEXP (x4, 0, 0);
                  x11 = XEXP (x10, 1);
                  x12 = XEXP (x11, 0);
                  if (rtx_equal_p (x12, operands[0]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[2])
                          && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                        {
                          *pmatch_len_ = 1;
                          res = gen_peephole2_11 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                  if (rtx_equal_p (x12, operands[2]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[0])
                          && 
#line 1812 "config/rx/rx.md"
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
                  x10 = XVECEXP (x4, 0, 0);
                  x11 = XEXP (x10, 1);
                  x12 = XEXP (x11, 0);
                  if (rtx_equal_p (x12, operands[0]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[2])
                          && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                        {
                          *pmatch_len_ = 1;
                          res = gen_peephole2_12 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                  if (rtx_equal_p (x12, operands[2]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[0])
                          && 
#line 1812 "config/rx/rx.md"
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
                  x10 = XVECEXP (x4, 0, 0);
                  x11 = XEXP (x10, 1);
                  x12 = XEXP (x11, 0);
                  if (rtx_equal_p (x12, operands[0]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[2])
                          && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                        {
                          *pmatch_len_ = 1;
                          res = gen_peephole2_13 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                  if (rtx_equal_p (x12, operands[2]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[0])
                          && 
#line 1812 "config/rx/rx.md"
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
                  x10 = XVECEXP (x4, 0, 0);
                  x11 = XEXP (x10, 1);
                  x12 = XEXP (x11, 0);
                  if (rtx_equal_p (x12, operands[0]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[2])
                          && 
#line 1798 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                        {
                          *pmatch_len_ = 1;
                          res = gen_peephole2_14 (insn, operands);
                          if (res != NULL_RTX)
                            return res;
                        }
                    }
                  if (rtx_equal_p (x12, operands[2]))
                    {
                      x13 = XEXP (x11, 1);
                      if (rtx_equal_p (x13, operands[0])
                          && 
#line 1812 "config/rx/rx.md"
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
#line 1826 "config/rx/rx.md"
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
#line 1826 "config/rx/rx.md"
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
#line 1826 "config/rx/rx.md"
(peep2_regno_dead_p (2, REGNO (operands[0])) && (optimize < 3 || optimize_size)))
                    {
                      *pmatch_len_ = 1;
                      res = gen_peephole2_43 (insn, operands);
                      if (res != NULL_RTX)
                        return res;
                    }
                  break;

                case 7:
                  x5 = XEXP (x4, 1);
                  x8 = XEXP (x5, 0);
                  if (rtx_equal_p (x8, operands[0]))
                    {
                      x6 = XEXP (x5, 1);
                      if (rtx_equal_p (x6, operands[2])
                          && 
#line 1839 "config/rx/rx.md"
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
                      x6 = XEXP (x5, 1);
                      if (rtx_equal_p (x6, operands[0])
                          && 
#line 1851 "config/rx/rx.md"
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
                  x5 = XEXP (x4, 1);
                  x8 = XEXP (x5, 0);
                  if (rtx_equal_p (x8, operands[0]))
                    {
                      x6 = XEXP (x5, 1);
                      if (rtx_equal_p (x6, operands[2])
                          && 
#line 1839 "config/rx/rx.md"
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
                      x6 = XEXP (x5, 1);
                      if (rtx_equal_p (x6, operands[0])
                          && 
#line 1851 "config/rx/rx.md"
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
                  x5 = XEXP (x4, 1);
                  x8 = XEXP (x5, 0);
                  if (rtx_equal_p (x8, operands[0]))
                    {
                      x6 = XEXP (x5, 1);
                      if (rtx_equal_p (x6, operands[2])
                          && 
#line 1839 "config/rx/rx.md"
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
                      x6 = XEXP (x5, 1);
                      if (rtx_equal_p (x6, operands[0])
                          && 
#line 1851 "config/rx/rx.md"
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
#line 1895 "config/rx/rx.md"
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
          x4 = PATTERN (peep2_next_insn (1));
          if (pattern40 (x4, E_QImode) != 0
              || !
#line 1926 "config/rx/rx.md"
(REGNO (operands[0]) == REGNO (operands[2])))
            return NULL;
          *pmatch_len_ = 1;
          return gen_peephole2_79 (insn, operands);

        default:
          return NULL;
        }

    case SIGN_EXTEND:
      return peephole2_1 (x1, insn, pmatch_len_);

    default:
      return NULL;
    }
}
