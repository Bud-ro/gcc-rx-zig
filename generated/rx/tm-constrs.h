/* Generated automatically by the program 'build/genpreds'
   from the machine description file 'config/rx/rx.md'.  */

#ifndef GCC_TM_CONSTRS_H
#define GCC_TM_CONSTRS_H

static inline bool
satisfies_constraint_m (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 54 "common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op))));
}
static inline bool
satisfies_constraint_o (rtx op)
{
  return (GET_CODE (op) == MEM) && (
#line 60 "common.md"
(offsettable_nonstrict_memref_p (op)));
}
static inline bool
satisfies_constraint_V (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 69 "common.md"
(memory_address_addr_space_p (GET_MODE (op), XEXP (op, 0),
						 MEM_ADDR_SPACE (op)))) && (!(
#line 71 "common.md"
(offsettable_nonstrict_memref_p (op)))));
}
static inline bool
satisfies_constraint__l (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 78 "common.md"
(GET_CODE (XEXP (op, 0)) == PRE_DEC)) || (
#line 79 "common.md"
(GET_CODE (XEXP (op, 0)) == POST_DEC)));
}
static inline bool
satisfies_constraint__g (rtx op)
{
  return (GET_CODE (op) == MEM) && ((
#line 85 "common.md"
(GET_CODE (XEXP (op, 0)) == PRE_INC)) || (
#line 86 "common.md"
(GET_CODE (XEXP (op, 0)) == POST_INC)));
}
static inline bool
satisfies_constraint_p (rtx ARG_UNUSED (op))
{
  return 
#line 90 "common.md"
(address_operand (op, VOIDmode));
}
static inline bool
satisfies_constraint_i (rtx op)
{
  return (
#line 94 "common.md"
(CONSTANT_P (op))) && (
#line 95 "common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_s (rtx op)
{
  return (
#line 99 "common.md"
(CONSTANT_P (op))) && ((
#line 100 "common.md"
(!CONST_SCALAR_INT_P (op))) && (
#line 101 "common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op))));
}
static inline bool
satisfies_constraint_n (rtx op)
{
  return (
#line 105 "common.md"
(CONST_SCALAR_INT_P (op))) && (
#line 106 "common.md"
(!flag_pic || LEGITIMATE_PIC_OPERAND_P (op)));
}
static inline bool
satisfies_constraint_E (rtx op)
{
  return (
#line 110 "common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 111 "common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_F (rtx op)
{
  return (
#line 117 "common.md"
(CONST_DOUBLE_AS_FLOAT_P (op))) || (
#line 118 "common.md"
(GET_CODE (op) == CONST_VECTOR
		    && GET_MODE_CLASS (GET_MODE (op)) == MODE_VECTOR_FLOAT));
}
static inline bool
satisfies_constraint_X (rtx ARG_UNUSED (op))
{
  return 
#line 123 "common.md"
(true);
}
static inline bool
satisfies_constraint_Symbol (rtx op)
{
  return 
#line 24 "config/rx/constraints.md"
(GET_CODE (op) == SYMBOL_REF);
}
static inline bool
satisfies_constraint_Int08 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 31 "config/rx/constraints.md"
(IN_RANGE (ival, (HOST_WIDE_INT_M1U << 8), (1 << 8) - 1)));
}
static inline bool
satisfies_constraint_Sint08 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 38 "config/rx/constraints.md"
(IN_RANGE (ival, (HOST_WIDE_INT_M1U << 7), (1 << 7) - 1)));
}
static inline bool
satisfies_constraint_Sint16 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 45 "config/rx/constraints.md"
(IN_RANGE (ival, (HOST_WIDE_INT_M1U << 15), (1 << 15) - 1)));
}
static inline bool
satisfies_constraint_Sint24 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 52 "config/rx/constraints.md"
(IN_RANGE (ival, (HOST_WIDE_INT_M1U << 23), (1 << 23) - 1)));
}
static inline bool
satisfies_constraint_Uint04 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 62 "config/rx/constraints.md"
(IN_RANGE (ival, 0, 15)));
}
static inline bool
satisfies_constraint_NEGint4 (rtx op)
{
  HOST_WIDE_INT ival = 0;
  if (CONST_INT_P (op))
    ival = INTVAL (op);
  return (GET_CODE (op) == CONST_INT) && (
#line 69 "config/rx/constraints.md"
(IN_RANGE (ival, -15, -1)));
}
static inline bool
satisfies_constraint_Q (rtx op)
{
  return (GET_CODE (op) == MEM) && ((GET_CODE (XEXP (op, 0)) == REG) || ((GET_CODE (XEXP (op, 0)) == PLUS) && ((GET_CODE (XEXP (XEXP (op, 0), 0)) == REG || GET_CODE (XEXP (XEXP (op, 0), 0)) == SUBREG) && (GET_CODE (XEXP (XEXP (op, 0), 1)) == CONST_INT))));
}
static inline bool
satisfies_constraint_Rpid (rtx op)
{
  return (GET_CODE (op) == MEM) && ((GET_CODE (XEXP (op, 0)) == PLUS) && ((GET_CODE (XEXP (XEXP (op, 0), 0)) == REG || GET_CODE (XEXP (XEXP (op, 0), 0)) == SUBREG) && (GET_CODE (XEXP (XEXP (op, 0), 1)) == UNSPEC)));
}
static inline bool
satisfies_constraint_Rpda (rtx op)
{
  return (GET_CODE (op) == PLUS) && ((GET_CODE (XEXP (op, 0)) == REG || GET_CODE (XEXP (op, 0)) == SUBREG) && (GET_CODE (XEXP (op, 1)) == UNSPEC));
}
static inline bool
satisfies_constraint_CALL__OP__SYMBOL__REF (rtx op)
{
  return (
#line 112 "config/rx/constraints.md"
(!TARGET_JSR)) && (GET_CODE (op) == SYMBOL_REF);
}
#endif /* tm-constrs.h */
