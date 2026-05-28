/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "df.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "regs.h"
#include "emit-rtl.h"
#include "tm-constrs.h"
#include "target.h"


struct target_constraints default_target_constraints;
#if SWITCHABLE_TARGET
struct target_constraints *this_target_constraints = &default_target_constraints;
#endif
static inline bool
aligned_register_operand_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 25 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/common.md"
{
  /* Require the offset in a non-paradoxical subreg to be naturally aligned.
     For example, if we have a subreg of something that is double the size of
     this operand, the offset must select the first or second half of it.  */
  if (SUBREG_P (op)
      && multiple_p (SUBREG_BYTE (op), GET_MODE_SIZE (GET_MODE (op))))
    op = SUBREG_REG (op);
  if (!REG_P (op))
    return false;

  if (HARD_REGISTER_P (op))
    {
      if (!in_hard_reg_set_p (operand_reg_set, GET_MODE (op), REGNO (op)))
	return false;

      /* Reject hard registers that would need reloading, so that the reload
	 is visible to IRA and to pre-RA optimizers.  */
      if (REGNO (op) % REG_NREGS (op) != 0)
	return false;
    }
  return true;
}

bool
aligned_register_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case REG:
    case SUBREG:
      break;
    default:
      return false;
    }
  return (
(aligned_register_operand_1 (op, mode))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
rx_call_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == REG) || ((
#line 28 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/predicates.md"
(!TARGET_JSR)) && (GET_CODE (op) == SYMBOL_REF))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
rx_symbolic_call_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == SYMBOL_REF) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
rx_shift_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (((GET_CODE (op) == CONST_INT) && (
#line 44 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/predicates.md"
(IN_RANGE (INTVAL (op), 0, 31)))) && (
(mode == VOIDmode || GET_MODE (op) == mode || GET_MODE (op) == VOIDmode)));
}

bool
rx_constshift_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 49 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/predicates.md"
(IN_RANGE (INTVAL (op), 0, 31)));
}

bool
rx_bitclr_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 54 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/predicates.md"
(exact_log2 (~INTVAL (op)) != -1));
}

bool
rx_bitset_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == CONST_INT) && (
#line 59 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/predicates.md"
(exact_log2 (INTVAL (op)) != -1));
}

bool
rx_restricted_mem_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return ((GET_CODE (op) == MEM) && (
#line 64 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/predicates.md"
(rx_is_restricted_memory_address (XEXP (op, 0), mode)))) && (
(mode == VOIDmode || GET_MODE (op) == mode));
}

bool
rx_source_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((immediate_operand (op, mode)) || (rx_restricted_mem_operand (op, mode)));
}

bool
rx_speed_source_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((immediate_operand (op, mode)) || ((
#line 80 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/predicates.md"
(optimize_size)) && (rx_restricted_mem_operand (op, mode))));
}

bool
rx_compare_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || (rx_restricted_mem_operand (op, mode));
}

bool
rx_minmaxex_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (immediate_operand (op, mode)) || (rx_restricted_mem_operand (op, mode));
}

bool
rx_speed_minmaxex_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (immediate_operand (op, mode)) || ((
#line 106 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/predicates.md"
(optimize_size)) && (rx_restricted_mem_operand (op, mode)));
}

bool
rx_speed_compare_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (register_operand (op, mode)) || ((
#line 112 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/predicates.md"
(optimize_size)) && (rx_restricted_mem_operand (op, mode)));
}

static inline bool
rx_store_multiple_vector_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 125 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/predicates.md"
{
  int count = XVECLEN (op, 0);
  unsigned int src_regno;
  rtx element;
  int i;

  /* Perform a quick check so we don't blow up below.  */
  if (count <= 2)
    return false;

  /* Check that the first element of the vector is the stack adjust.  */
  element = XVECEXP (op, 0, 0);
  if (   ! SET_P (element)
      || ! REG_P (SET_DEST (element))
      ||   REGNO (SET_DEST (element)) != SP_REG
      ||   GET_CODE (SET_SRC (element)) != MINUS
      || ! REG_P (XEXP (SET_SRC (element), 0))
      ||   REGNO (XEXP (SET_SRC (element), 0)) != SP_REG
      || ! CONST_INT_P (XEXP (SET_SRC (element), 1)))
    return false;
	 
  /* Check that the remaining elements use SP-<disp>
     addressing and decreasing register numbers.  */
    for (i = 1; i < count - 1; i++)	
    {
      element = XVECEXP (op, 0, i);

      if (   ! SET_P (element)
	  || ! REG_P (SET_SRC (element))
	  || GET_MODE (SET_SRC (element)) != SImode
	  || ! MEM_P (SET_DEST (element))
	  || GET_MODE (SET_DEST (element)) != SImode
	  || GET_CODE (XEXP (SET_DEST (element), 0)) != MINUS
          || ! REG_P (XEXP (XEXP (SET_DEST (element), 0), 0))
          ||   REGNO (XEXP (XEXP (SET_DEST (element), 0), 0)) != SP_REG
	  || ! CONST_INT_P (XEXP (XEXP (SET_DEST (element), 0), 1))
	  || INTVAL (XEXP (XEXP (SET_DEST (element), 0), 1))
	     != i * GET_MODE_SIZE (SImode))
	return false;
    }
  return true;
}

bool
rx_store_multiple_vector (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(rx_store_multiple_vector_1 (op, mode)));
}

static inline bool
rx_load_multiple_vector_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 177 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/predicates.md"
{
  int count = XVECLEN (op, 0);
  unsigned int dest_regno;
  rtx element;
  int i;

  /* Perform a quick check so we don't blow up below.  */
  if (count <= 2)
    return false;

  /* Check that the first element of the vector is the stack adjust.  */
  element = XVECEXP (op, 0, 0);
  if (   ! SET_P (element)
      || ! REG_P (SET_DEST (element))
      ||   REGNO (SET_DEST (element)) != SP_REG
      ||   GET_CODE (SET_SRC (element)) != PLUS
      || ! REG_P (XEXP (SET_SRC (element), 0))
      ||   REGNO (XEXP (SET_SRC (element), 0)) != SP_REG
      || ! CONST_INT_P (XEXP (SET_SRC (element), 1)))
    return false;
	 
  /* Check that the next element is the first push.  */
  element = XVECEXP (op, 0, 1);
  if (   ! SET_P (element)
      || ! REG_P (SET_DEST (element))
      || ! MEM_P (SET_SRC (element))
      || ! REG_P (XEXP (SET_SRC (element), 0))
      ||   REGNO (XEXP (SET_SRC (element), 0)) != SP_REG)
    return false;

  dest_regno = REGNO (SET_DEST (element));

  /* Check that the remaining elements use SP+<disp>
     addressing and incremental register numbers.  */
  for (i = 2; i < count; i++)
    {
      element = XVECEXP (op, 0, i);

      if (   ! SET_P (element)
	  || ! REG_P (SET_DEST (element))
	  || GET_MODE (SET_DEST (element)) != SImode
	  || REGNO (SET_DEST (element)) != dest_regno + (i - 1)
	  || ! MEM_P (SET_SRC (element))
	  || GET_MODE (SET_SRC (element)) != SImode
	  || GET_CODE (XEXP (SET_SRC (element), 0)) != PLUS
          || ! REG_P (XEXP (XEXP (SET_SRC (element), 0), 0))
          ||   REGNO (XEXP (XEXP (SET_SRC (element), 0), 0)) != SP_REG
	  || ! CONST_INT_P (XEXP (XEXP (SET_SRC (element), 0), 1))
	  || INTVAL (XEXP (XEXP (SET_SRC (element), 0), 1))
	     != (i - 1) * GET_MODE_SIZE (SImode))
	return false;
    }
  return true;
}

bool
rx_load_multiple_vector (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(rx_load_multiple_vector_1 (op, mode)));
}

static inline bool
rx_rtsd_vector_1 (rtx op ATTRIBUTE_UNUSED, machine_mode mode ATTRIBUTE_UNUSED)
#line 242 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/predicates.md"
{
  int count = XVECLEN (op, 0);
  unsigned int dest_regno;
  rtx element;
  int i;

  /* Perform a quick check so we don't blow up below.  */
  if (count <= 2)
    return false;

  /* Check that the first element of the vector is the stack adjust.  */
  element = XVECEXP (op, 0, 0);
  if (   ! SET_P (element)
      || ! REG_P (SET_DEST (element))
      ||   REGNO (SET_DEST (element)) != SP_REG
      ||   GET_CODE (SET_SRC (element)) != PLUS
      || ! REG_P (XEXP (SET_SRC (element), 0))
      ||   REGNO (XEXP (SET_SRC (element), 0)) != SP_REG
      || ! CONST_INT_P (XEXP (SET_SRC (element), 1)))
    return false;
	 
  /* Check that the next element is the first push.  */
  element = XVECEXP (op, 0, 1);
  if (   ! SET_P (element)
      || ! REG_P (SET_DEST (element))
      || ! MEM_P (SET_SRC (element))
      || ! REG_P (XEXP (SET_SRC (element), 0))
      ||   REGNO (XEXP (SET_SRC (element), 0)) != SP_REG)
    return false;

  dest_regno = REGNO (SET_DEST (element));

  /* Check that the remaining elements, if any, and except
     for the last one, use SP+<disp> addressing and incremental
     register numbers.  */
  for (i = 2; i < count - 1; i++)
    {
      element = XVECEXP (op, 0, i);

      if (   ! SET_P (element)
	  || ! REG_P (SET_DEST (element))
	  || GET_MODE (SET_DEST (element)) != SImode
	  || REGNO (SET_DEST (element)) != dest_regno + (i - 1)
	  || ! MEM_P (SET_SRC (element))
	  || GET_MODE (SET_SRC (element)) != SImode
	  || GET_CODE (XEXP (SET_SRC (element), 0)) != PLUS
          || ! REG_P (XEXP (XEXP (SET_SRC (element), 0), 0))
          ||   REGNO (XEXP (XEXP (SET_SRC (element), 0), 0)) != SP_REG
	  || ! CONST_INT_P (XEXP (XEXP (SET_SRC (element), 0), 1))
	  || INTVAL (XEXP (XEXP (SET_SRC (element), 0), 1))
	     != (i - 1) * GET_MODE_SIZE (SImode))
	return false;
    }

  /* The last element must be a RETURN.  */    
  element = XVECEXP (op, 0, count - 1);
  return GET_CODE (element) == RETURN;
}

bool
rx_rtsd_vector (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return (GET_CODE (op) == PARALLEL) && (
(rx_rtsd_vector_1 (op, mode)));
}

bool
label_ref_operand (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  return GET_CODE (op) == LABEL_REF;
}

bool
rx_z_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
rx_zs_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LT:
    case GE:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
rx_fp_comparison_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case EQ:
    case NE:
    case LT:
    case GE:
    case ORDERED:
    case UNORDERED:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

bool
rshift_operator (rtx op, machine_mode mode ATTRIBUTE_UNUSED)
{
  switch (GET_CODE (op))
    {
    case ASHIFTRT:
    case LSHIFTRT:
      break;
    default:
      return false;
    }
  return 
(mode == VOIDmode || GET_MODE (op) == mode);
}

enum constraint_num
lookup_constraint_1 (const char *str)
{
  switch (str[0])
    {
    case '<':
      return CONSTRAINT__l;
    case '>':
      return CONSTRAINT__g;
    case 'C':
      if (!strncmp (str + 1, "ALL_OP_SYMBOL_REF", 17))
        return CONSTRAINT_CALL__OP__SYMBOL__REF;
      break;
    case 'D':
      if (!strncmp (str + 1, "oubleC", 6))
        return CONSTRAINT_DoubleC;
      if (!strncmp (str + 1, "FPUreg", 6))
        return CONSTRAINT_DFPUreg;
      break;
    case 'E':
      return CONSTRAINT_E;
    case 'F':
      return CONSTRAINT_F;
    case 'I':
      if (!strncmp (str + 1, "bset", 4))
        return CONSTRAINT_Ibset;
      if (!strncmp (str + 1, "nt08", 4))
        return CONSTRAINT_Int08;
      break;
    case 'N':
      if (!strncmp (str + 1, "EGint4", 6))
        return CONSTRAINT_NEGint4;
      break;
    case 'Q':
      return CONSTRAINT_Q;
    case 'R':
      if (!strncmp (str + 1, "pda", 3))
        return CONSTRAINT_Rpda;
      if (!strncmp (str + 1, "reg", 3))
        return CONSTRAINT_Rreg;
      if (!strncmp (str + 1, "d05", 3))
        return CONSTRAINT_Rd05;
      if (!strncmp (str + 1, "d08", 3))
        return CONSTRAINT_Rd08;
      if (!strncmp (str + 1, "XV2", 3))
        return CONSTRAINT_RXV2;
      if (!strncmp (str + 1, "XV3", 3))
        return CONSTRAINT_RXV3;
      if (!strncmp (str + 1, "pid", 3))
        return CONSTRAINT_Rpid;
      break;
    case 'S':
      if (!strncmp (str + 1, "int08", 5))
        return CONSTRAINT_Sint08;
      if (!strncmp (str + 1, "int16", 5))
        return CONSTRAINT_Sint16;
      if (!strncmp (str + 1, "int24", 5))
        return CONSTRAINT_Sint24;
      if (!strncmp (str + 1, "ymbol", 5))
        return CONSTRAINT_Symbol;
      break;
    case 'U':
      if (!strncmp (str + 1, "int05", 5))
        return CONSTRAINT_Uint05;
      if (!strncmp (str + 1, "intz5", 5))
        return CONSTRAINT_Uintz5;
      if (!strncmp (str + 1, "int04", 5))
        return CONSTRAINT_Uint04;
      break;
    case 'V':
      return CONSTRAINT_V;
    case 'X':
      return CONSTRAINT_X;
    case 'i':
      return CONSTRAINT_i;
    case 'm':
      return CONSTRAINT_m;
    case 'n':
      return CONSTRAINT_n;
    case 'o':
      return CONSTRAINT_o;
    case 'p':
      return CONSTRAINT_p;
    case 'r':
      return CONSTRAINT_r;
    case 's':
      return CONSTRAINT_s;
    default: break;
    }
  return CONSTRAINT__UNKNOWN;
}

const unsigned char lookup_constraint_array[] = {
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__l, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT__g, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_E, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_F, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_Q, (int) UCHAR_MAX),
  UCHAR_MAX,
  UCHAR_MAX,
  CONSTRAINT__UNKNOWN,
  UCHAR_MAX,
  MIN ((int) CONSTRAINT_V, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_X, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_i, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_m, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_n, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_o, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_p, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  MIN ((int) CONSTRAINT_r, (int) UCHAR_MAX),
  MIN ((int) CONSTRAINT_s, (int) UCHAR_MAX),
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN,
  CONSTRAINT__UNKNOWN
};

enum reg_class
reg_class_for_constraint_1 (enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_r: return GENERAL_REGS;
    case CONSTRAINT_DFPUreg: return DOUBLE_REGS;
    default: break;
    }
  return NO_REGS;
}

bool (*constraint_satisfied_p_array[]) (rtx) = {
  satisfies_constraint_Int08,
  satisfies_constraint_Ibset,
  satisfies_constraint_NEGint4,
  satisfies_constraint_m,
  satisfies_constraint_o,
  satisfies_constraint_Q,
  satisfies_constraint_Rreg,
  satisfies_constraint_Rd05,
  satisfies_constraint_Rd08,
  satisfies_constraint_p,
  satisfies_constraint_Sint08,
  satisfies_constraint_Sint16,
  satisfies_constraint_Sint24,
  satisfies_constraint_Uint04,
  satisfies_constraint_Uint05,
  satisfies_constraint_Uintz5,
  satisfies_constraint_DoubleC,
  satisfies_constraint_Rpda,
  satisfies_constraint_CALL__OP__SYMBOL__REF,
  satisfies_constraint_RXV2,
  satisfies_constraint_RXV3,
  satisfies_constraint_V,
  satisfies_constraint__l,
  satisfies_constraint__g,
  satisfies_constraint_Rpid,
  satisfies_constraint_i,
  satisfies_constraint_s,
  satisfies_constraint_n,
  satisfies_constraint_E,
  satisfies_constraint_F,
  satisfies_constraint_X,
  satisfies_constraint_Symbol
};

bool
insn_const_int_ok_for_constraint (HOST_WIDE_INT ival, enum constraint_num c)
{
  switch (c)
    {
    case CONSTRAINT_Int08:
      return 
#line 31 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/constraints.md"
(IN_RANGE (ival, (HOST_WIDE_INT_M1U << 8), (1 << 8) - 1));

    case CONSTRAINT_Ibset:
      return 
#line 38 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/constraints.md"
(exact_log2 (ival) != -1);

    case CONSTRAINT_NEGint4:
      return 
#line 90 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/constraints.md"
(IN_RANGE (ival, -15, -1));

    default: break;
    }
  return false;
}


void
init_reg_class_start_regs ()
{
}
