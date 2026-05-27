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

/* config/rx/rx.md:1819 */
extern rtx_insn *gen_peephole2_36 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_36 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_36 (rx.md:1819)\n");
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
	gen_rtx_UDIV (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1819 */
extern rtx_insn *gen_peephole2_37 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_37 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_37 (rx.md:1819)\n");
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
	gen_rtx_MINUS (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1819 */
extern rtx_insn *gen_peephole2_38 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_38 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_38 (rx.md:1819)\n");
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
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1819 */
extern rtx_insn *gen_peephole2_39 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_39 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_39 (rx.md:1819)\n");
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
	gen_rtx_UDIV (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1819 */
extern rtx_insn *gen_peephole2_40 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_40 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_40 (rx.md:1819)\n");
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
	gen_rtx_MINUS (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1819 */
extern rtx_insn *gen_peephole2_41 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_41 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_41 (rx.md:1819)\n");
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

/* config/rx/rx.md:1819 */
extern rtx_insn *gen_peephole2_42 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_42 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_42 (rx.md:1819)\n");
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
	gen_rtx_UDIV (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1819 */
extern rtx_insn *gen_peephole2_43 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_43 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_43 (rx.md:1819)\n");
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
	gen_rtx_MINUS (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1819 */
extern rtx_insn *gen_peephole2_44 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_44 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_44 (rx.md:1819)\n");
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
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1819 */
extern rtx_insn *gen_peephole2_45 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_45 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_45 (rx.md:1819)\n");
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
	gen_rtx_UDIV (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1819 */
extern rtx_insn *gen_peephole2_46 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_46 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_46 (rx.md:1819)\n");
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
	gen_rtx_MINUS (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1833 */
extern rtx_insn *gen_peephole2_47 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_47 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_47 (rx.md:1833)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMAX (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1833 */
extern rtx_insn *gen_peephole2_48 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_48 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_48 (rx.md:1833)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMIN (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1833 */
extern rtx_insn *gen_peephole2_49 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_49 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_49 (rx.md:1833)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_MULT (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1833 */
extern rtx_insn *gen_peephole2_50 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_50 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_50 (rx.md:1833)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMAX (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1833 */
extern rtx_insn *gen_peephole2_51 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_51 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_51 (rx.md:1833)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMIN (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1833 */
extern rtx_insn *gen_peephole2_52 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_52 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_52 (rx.md:1833)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_MULT (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1833 */
extern rtx_insn *gen_peephole2_53 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_53 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_53 (rx.md:1833)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMAX (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1833 */
extern rtx_insn *gen_peephole2_54 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_54 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_54 (rx.md:1833)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMIN (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1833 */
extern rtx_insn *gen_peephole2_55 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_55 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_55 (rx.md:1833)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_MULT (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1833 */
extern rtx_insn *gen_peephole2_56 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_56 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_56 (rx.md:1833)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMAX (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1833 */
extern rtx_insn *gen_peephole2_57 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_57 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_57 (rx.md:1833)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMIN (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1833 */
extern rtx_insn *gen_peephole2_58 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_58 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_58 (rx.md:1833)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_MULT (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1845 */
extern rtx_insn *gen_peephole2_59 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_59 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_59 (rx.md:1845)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMAX (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1845 */
extern rtx_insn *gen_peephole2_60 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_60 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_60 (rx.md:1845)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMIN (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1845 */
extern rtx_insn *gen_peephole2_61 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_61 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_61 (rx.md:1845)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_MULT (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1845 */
extern rtx_insn *gen_peephole2_62 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_62 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_62 (rx.md:1845)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMAX (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1845 */
extern rtx_insn *gen_peephole2_63 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_63 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_63 (rx.md:1845)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMIN (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1845 */
extern rtx_insn *gen_peephole2_64 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_64 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_64 (rx.md:1845)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_MULT (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1845 */
extern rtx_insn *gen_peephole2_65 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_65 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_65 (rx.md:1845)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMAX (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1845 */
extern rtx_insn *gen_peephole2_66 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_66 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_66 (rx.md:1845)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMIN (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1845 */
extern rtx_insn *gen_peephole2_67 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_67 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_67 (rx.md:1845)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_MULT (SImode,
	copy_rtx (operand2),
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1845 */
extern rtx_insn *gen_peephole2_68 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_68 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_68 (rx.md:1845)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMAX (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1845 */
extern rtx_insn *gen_peephole2_69 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_69 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_69 (rx.md:1845)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_SMIN (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1845 */
extern rtx_insn *gen_peephole2_70 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_70 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_70 (rx.md:1845)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_MULT (SImode,
	copy_rtx (operand2),
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1889 */
extern rtx_insn *gen_peephole2_71 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_71 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_71 (rx.md:1889)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (gen_rtx_REG (CCmode,
	16),
	gen_rtx_COMPARE (CCmode,
	operand2,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1889 */
extern rtx_insn *gen_peephole2_72 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_72 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_72 (rx.md:1889)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (gen_rtx_REG (CCmode,
	16),
	gen_rtx_COMPARE (CCmode,
	operand2,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1889 */
extern rtx_insn *gen_peephole2_73 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_73 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_73 (rx.md:1889)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (gen_rtx_REG (CCmode,
	16),
	gen_rtx_COMPARE (CCmode,
	operand2,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1889 */
extern rtx_insn *gen_peephole2_74 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_74 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_74 (rx.md:1889)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (gen_rtx_REG (CCmode,
	16),
	gen_rtx_COMPARE (CCmode,
	operand2,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

