/* Generated automatically by the program 'build/genpreds'
   from the machine description file 'config/rx/rx.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern bool general_operand (rtx, machine_mode);
extern bool address_operand (rtx, machine_mode);
extern bool register_operand (rtx, machine_mode);
extern bool pmode_register_operand (rtx, machine_mode);
extern bool scratch_operand (rtx, machine_mode);
extern bool immediate_operand (rtx, machine_mode);
extern bool const_int_operand (rtx, machine_mode);
extern bool const_double_operand (rtx, machine_mode);
extern bool nonimmediate_operand (rtx, machine_mode);
extern bool nonmemory_operand (rtx, machine_mode);
extern bool push_operand (rtx, machine_mode);
extern bool pop_operand (rtx, machine_mode);
extern bool memory_operand (rtx, machine_mode);
extern bool indirect_operand (rtx, machine_mode);
extern bool ordered_comparison_operator (rtx, machine_mode);
extern bool comparison_operator (rtx, machine_mode);
extern bool aligned_register_operand (rtx, machine_mode);
extern bool rx_call_operand (rtx, machine_mode);
extern bool rx_symbolic_call_operand (rtx, machine_mode);
extern bool rx_shift_operand (rtx, machine_mode);
extern bool rx_constshift_operand (rtx, machine_mode);
extern bool rx_restricted_mem_operand (rtx, machine_mode);
extern bool rx_source_operand (rtx, machine_mode);
extern bool rx_compare_operand (rtx, machine_mode);
extern bool rx_minmaxex_operand (rtx, machine_mode);
extern bool rx_store_multiple_vector (rtx, machine_mode);
extern bool rx_load_multiple_vector (rtx, machine_mode);
extern bool rx_rtsd_vector (rtx, machine_mode);
extern bool label_ref_operand (rtx, machine_mode);
extern bool rx_z_comparison_operator (rtx, machine_mode);
extern bool rx_zs_comparison_operator (rtx, machine_mode);
extern bool rx_fp_comparison_operator (rtx, machine_mode);
extern bool rshift_operator (rtx, machine_mode);
#endif /* HAVE_MACHINE_MODES */

#ifdef GCC_HARD_REG_SET_H
struct target_constraints {
  HARD_REG_SET register_filters[1];
};

extern struct target_constraints default_target_constraints;
#if SWITCHABLE_TARGET
extern struct target_constraints *this_target_constraints;
#else
#define this_target_constraints (&default_target_constraints)
#endif

#define TEST_REGISTER_FILTER_BIT(ID, REGNO) \
  ((void) (ID), (void) (REGNO), false)

inline bool
test_register_filters (unsigned int, unsigned int)
{
  return true;
}
#endif

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_r,
  CONSTRAINT_Int08,
  CONSTRAINT_NEGint4,
  CONSTRAINT_m,
  CONSTRAINT_o,
  CONSTRAINT_Q,
  CONSTRAINT_p,
  CONSTRAINT_Sint08,
  CONSTRAINT_Sint16,
  CONSTRAINT_Sint24,
  CONSTRAINT_Uint04,
  CONSTRAINT_Rpda,
  CONSTRAINT_CALL__OP__SYMBOL__REF,
  CONSTRAINT_V,
  CONSTRAINT__l,
  CONSTRAINT__g,
  CONSTRAINT_Rpid,
  CONSTRAINT_i,
  CONSTRAINT_s,
  CONSTRAINT_n,
  CONSTRAINT_E,
  CONSTRAINT_F,
  CONSTRAINT_X,
  CONSTRAINT_Symbol,
  CONSTRAINT__LIMIT
};

extern enum constraint_num lookup_constraint_1 (const char *);
extern const unsigned char lookup_constraint_array[];

/* Return the constraint at the beginning of P, or CONSTRAINT__UNKNOWN if it
   isn't recognized.  */

static inline enum constraint_num
lookup_constraint (const char *p)
{
  unsigned int index = lookup_constraint_array[(unsigned char) *p];
  return (index == UCHAR_MAX
          ? lookup_constraint_1 (p)
          : (enum constraint_num) index);
}

extern bool (*constraint_satisfied_p_array[]) (rtx);

/* Return true if X satisfies constraint C.  */

static inline bool
constraint_satisfied_p (rtx x, enum constraint_num c)
{
  int i = (int) c - (int) CONSTRAINT_Int08;
  return i >= 0 && constraint_satisfied_p_array[i] (x);
}

static inline bool
insn_extra_register_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_r && c <= CONSTRAINT_r;
}

static inline bool
insn_extra_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_m && c <= CONSTRAINT_Q;
}

static inline bool
insn_extra_special_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_relaxed_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_address_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_p && c <= CONSTRAINT_p;
}

static inline void
insn_extra_constraint_allows_reg_mem (enum constraint_num c,
				      bool *allows_reg, bool *allows_mem)
{
  if (c >= CONSTRAINT_Sint08 && c <= CONSTRAINT_CALL__OP__SYMBOL__REF)
    return;
  if (c >= CONSTRAINT_V && c <= CONSTRAINT_Rpid)
    {
      *allows_mem = true;
      return;
    }
  (void) c;
  *allows_reg = true;
  *allows_mem = true;
}

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'C': return 18;
    case 'I': return 5;
    case 'N': return 7;
    case 'R': return 4;
    case 'S': return 6;
    case 'U': return 6;
    default: break;
    }
  return 1;
}

#define CONSTRAINT_LEN(c_,s_) insn_constraint_len (c_,s_)

extern enum reg_class reg_class_for_constraint_1 (enum constraint_num);

static inline enum reg_class
reg_class_for_constraint (enum constraint_num c)
{
  if (insn_extra_register_constraint (c))
    return reg_class_for_constraint_1 (c);
  return NO_REGS;
}

extern bool insn_const_int_ok_for_constraint (HOST_WIDE_INT, enum constraint_num);
#define CONST_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    insn_const_int_ok_for_constraint (v_, lookup_constraint (s_))

enum constraint_type
{
  CT_REGISTER,
  CT_CONST_INT,
  CT_MEMORY,
  CT_SPECIAL_MEMORY,
  CT_RELAXED_MEMORY,
  CT_ADDRESS,
  CT_FIXED_FORM
};

static inline enum constraint_type
get_constraint_type (enum constraint_num c)
{
  if (c >= CONSTRAINT_p)
    {
      if (c >= CONSTRAINT_Sint08)
        return CT_FIXED_FORM;
      return CT_ADDRESS;
    }
  if (c >= CONSTRAINT_m)
    return CT_MEMORY;
  if (c >= CONSTRAINT_Int08)
    return CT_CONST_INT;
  return CT_REGISTER;
}

#ifdef GCC_HARD_REG_SET_H
static inline const HARD_REG_SET *
get_register_filter (constraint_num)
{
  return nullptr;
}
#endif

static inline int
get_register_filter_id (constraint_num)
{
  return -1;
}
#endif /* tm-preds.h */
