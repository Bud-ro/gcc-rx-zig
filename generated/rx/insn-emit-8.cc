/* Generated automatically by the program `genemit'
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
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"
#include "dfp.h"
#include "output.h"
#include "recog.h"
#include "df.h"
#include "resource.h"
#include "reload.h"
#include "diagnostic-core.h"
#include "regs.h"
#include "tm-constrs.h"
#include "ggc.h"
#include "target.h"

/* config/rx/rx.md:1401 */
extern rtx_insn *gen_split_10 (rtx_insn *, rtx *);
rtx_insn *
gen_split_10 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_10 (rx.md:1401)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1420 "config/rx/rx.md"
{
  /* For single bit constants use the bset insn for smaller code.  */

  if (!rx_reg_dead_or_unused_after_insn (curr_insn, CC_REG))
    FAIL;

  rx_copy_reg_dead_or_unused_notes (operands[1], curr_insn,
    emit_insn (gen_bitset (operands[0],
			   GEN_INT (exact_log2 (UINTVAL (operands[2]))),
			   operands[1])));
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1587 */
extern rtx_insn *gen_split_11 (rtx_insn *, rtx *);
rtx_insn *
gen_split_11 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_11 (rx.md:1587)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1604 "config/rx/rx.md"

#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CC_ZSCmode,
	16),
	gen_rtx_COMPARE (CC_ZSCmode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2),
	const0_rtx)),
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))), true);
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		gen_rtx_REG (CCmode,
	16)),
	49)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1654 */
rtx
gen_subsi3_flags (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CC_ZSCmode,
	16),
	gen_rtx_COMPARE (CC_ZSCmode,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2),
	const0_rtx)),
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2))));
}

/* config/rx/rx.md:1697 */
rtx
gen_subdi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1702 "config/rx/rx.md"
{
  rtx op0l, op0h, op1l, op1h, op2l, op2h;

  op0l = gen_lowpart (SImode, operands[0]);
  op1l = gen_lowpart (SImode, operands[1]);
  op2l = gen_lowpart (SImode, operands[2]);
  op0h = gen_highpart (SImode, operands[0]);
  op1h = gen_highpart (SImode, operands[1]);
  op2h = gen_highpart_mode (SImode, DImode, operands[2]);

  emit_insn (gen_subdi3_internal (op0l, op0h, op1l, op2l, op1h, op2h));
  DONE;
}
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1716 */
extern rtx_insn *gen_split_12 (rtx_insn *, rtx *);
rtx_insn *
gen_split_12 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_12 (rx.md:1716)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1731 "config/rx/rx.md"
{
  emit_insn (gen_subsi3_flags (operands[0], operands[2], operands[3]));
  emit_insn (gen_sbb_internal (operands[1], operands[4], operands[5]));
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1737 */
extern rtx_insn *gen_split_13 (rtx_insn *, rtx *);
rtx_insn *
gen_split_13 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_13 (rx.md:1737)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1748 "config/rx/rx.md"
{
  /* For single bit constants use the bnot insn for smaller code.  */

  if (!rx_reg_dead_or_unused_after_insn (curr_insn, CC_REG))
    FAIL;

  rx_copy_reg_dead_or_unused_notes (operands[1], curr_insn,
    emit_insn (gen_bitinvert (operands[0],
			      GEN_INT (exact_log2 (UINTVAL (operands[2]))),
			      operands[1])));
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_3 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_3 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_3 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_4 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_4 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_4 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_5 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_5 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_5 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_IOR (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_6 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_6 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_6 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_XOR (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_7 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_7 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_7 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_8 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_8 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_8 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_9 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_9 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_9 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_IOR (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_10 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_10 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_10 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_XOR (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_11 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_11 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_11 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_12 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_12 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_12 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_13 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_13 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_13 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_IOR (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_14 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_14 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_14 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_XOR (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_15 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_15 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_15 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_16 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_16 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_16 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_17 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_17 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_17 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_IOR (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1791 */
extern rtx_insn *gen_peephole2_18 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_18 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_18 (rx.md:1791)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_XOR (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_19 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_19 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_19 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_20 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_20 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_20 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_21 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_21 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_21 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_IOR (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_22 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_22 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_22 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_XOR (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_23 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_23 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_23 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_24 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_24 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_24 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_25 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_25 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_25 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_IOR (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_26 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_26 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_26 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_XOR (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_27 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_27 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_27 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_28 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_28 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_28 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_29 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_29 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_29 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_IOR (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_30 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_30 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_30 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_XOR (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_31 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_31 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_31 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_32 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_32 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_32 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_AND (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_33 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_33 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_33 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_IOR (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1805 */
extern rtx_insn *gen_peephole2_34 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_34 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_34 (rx.md:1805)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_XOR (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1819 */
extern rtx_insn *gen_peephole2_35 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_35 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_35 (rx.md:1819)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand2,
	gen_rtx_DIV (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

