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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4565 */
rtx
gen_rdacw_A1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	76);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4574 */
rtx
gen_rdacl_A0 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	77);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4583 */
rtx
gen_rdacl_A1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	78);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4593 */
rtx
gen_racw (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	45);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4602 */
rtx
gen_racw_A1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	79);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4611 */
rtx
gen_racl_A0 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	80);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4620 */
rtx
gen_racl_A1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	81);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4631 */
rtx
gen_rmpa (void)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_UNSPEC (SImode,
	gen_rtvec (7,
		const0_rtx,
		gen_rtx_REG (SImode,
	1),
		gen_rtx_REG (SImode,
	2),
		gen_rtx_REG (SImode,
	3),
		gen_rtx_REG (SImode,
	4),
		gen_rtx_REG (SImode,
	5),
		gen_rtx_REG (SImode,
	6)),
	47),
		gen_hard_reg_clobber (SImode, 1),
		gen_hard_reg_clobber (SImode, 2),
		gen_hard_reg_clobber (SImode, 3)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4645 */
rtx
gen_rmpa8 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (operand3,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (5,
		operand0,
		operand1,
		operand2,
		copy_rtx (operand3),
		operand4),
	102)),
		gen_hard_reg_clobber (SImode, 1),
		gen_hard_reg_clobber (SImode, 2),
		gen_hard_reg_clobber (SImode, 3),
		gen_hard_reg_clobber (SImode, 4),
		gen_hard_reg_clobber (SImode, 5),
		gen_hard_reg_clobber (SImode, 6)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4663 */
rtx
gen_rmpa16 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (operand3,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (5,
		operand0,
		operand1,
		operand2,
		copy_rtx (operand3),
		operand4),
	103)),
		gen_hard_reg_clobber (SImode, 1),
		gen_hard_reg_clobber (SImode, 2),
		gen_hard_reg_clobber (SImode, 3),
		gen_hard_reg_clobber (SImode, 4),
		gen_hard_reg_clobber (SImode, 5),
		gen_hard_reg_clobber (SImode, 6)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4680 */
rtx
gen_rmpa32 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (operand3,
	gen_rtx_UNSPEC_VOLATILE (DImode,
	gen_rtvec (5,
		operand0,
		operand1,
		operand2,
		copy_rtx (operand3),
		operand4),
	104)),
		gen_hard_reg_clobber (SImode, 1),
		gen_hard_reg_clobber (SImode, 2),
		gen_hard_reg_clobber (SImode, 3),
		gen_hard_reg_clobber (SImode, 4),
		gen_hard_reg_clobber (SImode, 5),
		gen_hard_reg_clobber (SImode, 6)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4700 */
rtx
gen_revw (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	46));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4711 */
rtx
gen_lrintsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	48)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4723 */
rtx
gen_lrintdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	148)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4739 */
rtx
gen_clrpsw (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	31),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4750 */
rtx
gen_setpsw (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	50),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4761 */
rtx
gen_mvfc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	39));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4774 */
rtx
gen_mvtc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	43),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4791 */
rtx
gen_mvtipl (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	44);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4803 */
rtx
gen_brk (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	30);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4814 */
rtx
gen_int (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	32);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4824 */
rtx
gen_wait (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	51);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4841 */
rtx
gen_mvfcp (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	40));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4855 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4871 */
rtx
gen_movdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4880 */
rtx
gen_exchangesf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	94);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4880 */
rtx
gen_exchangesi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	94);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4880 */
rtx
gen_exchangehi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	94);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4880 */
rtx
gen_exchangeqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	94);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:225 */
rtx
gen_cbranchsi4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 234 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"

      operands[2] = rx_maybe_pidify_operand (operands[2], 1);
  
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
    operand3 = operands[3];
    (void) operand3;
  }
  emit_jump_insn (gen_rtx_SET (pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:239 */
extern rtx_insn *gen_split_1 (rtx_insn *, rtx *);
rtx_insn *
gen_split_1 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_1 (rx.md:239)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 251 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  rx_split_cbranch (CCmode, GET_CODE (operands[3]),
		    operands[0], operands[1], operands[2]);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:257 */
extern rtx_insn *gen_split_2 (rtx_insn *, rtx *);
rtx_insn *
gen_split_2 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_2 (rx.md:257)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 269 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  rx_split_cbranch (CCmode, GET_CODE (operands[3]),
		    operands[0], operands[1], operands[2]);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:275 */
rtx
gen_cmpsi (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 280 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"

      operands[1] = rx_maybe_pidify_operand (operands[1], 1);
  
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (gen_rtx_REG (CCmode,
	48),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:308 */
extern rtx_insn *gen_split_3 (rtx_insn *, rtx *);
rtx_insn *
gen_split_3 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_3 (rx.md:308)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 321 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  rx_split_cbranch (CC_ZSmode, GET_CODE (operands[3]),
		    XEXP (operands[3], 0), XEXP (operands[3], 1),
		    operands[2]);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:328 */
extern rtx_insn *gen_split_4 (rtx_insn *, rtx *);
rtx_insn *
gen_split_4 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_4 (rx.md:328)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 341 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  rx_split_cbranch (CC_ZSmode, GET_CODE (operands[3]),
		    XEXP (operands[3], 0), XEXP (operands[3], 1),
		    operands[2]);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:349 */
extern rtx_insn *gen_split_5 (rtx_insn *, rtx *);
rtx_insn *
gen_split_5 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_5 (rx.md:349)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 364 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  HOST_WIDE_INT mask;
  rtx x;

  mask = 1;
  mask <<= INTVAL (operands[1]);
  mask -= 1;
  mask <<= INTVAL (operands[2]);
  x = gen_rtx_AND (SImode, operands[0], gen_int_mode (mask, SImode));

  rx_split_cbranch (CC_ZSmode, GET_CODE (operands[4]),
		    x, const0_rtx, operands[3]);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:405 */
rtx
gen_cbranchsf4 (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3)
{
  return gen_rtx_SET (pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_fmt_ee (GET_CODE (operand0), VOIDmode,
		operand1,
		operand2),
	gen_rtx_LABEL_REF (VOIDmode,
	operand3),
	pc_rtx));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:416 */
extern rtx_insn *gen_split_6 (rtx_insn *, rtx *);
rtx_insn *
gen_split_6 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_6 (rx.md:416)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 428 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  rx_split_cbranch (CC_Fmode, GET_CODE (operands[3]),
		    operands[0], operands[1], operands[2]);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:434 */
extern rtx_insn *gen_split_7 (rtx_insn *, rtx *);
rtx_insn *
gen_split_7 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_7 (rx.md:434)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 446 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  rx_split_cbranch (CC_Fmode, GET_CODE (operands[3]),
		    operands[0], operands[1], operands[2]);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:578 */
rtx
gen_return (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 581 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
rx_expand_epilogue (false); DONE;
#undef DONE
#undef FAIL
  }
  emit_jump_insn (ret_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:656 */
rtx
gen_call (rtx operand0,
	rtx operand1)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 660 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    rtx dest = XEXP (operands[0], 0);

    if (! rx_call_operand (dest, Pmode))
      dest = force_reg (Pmode, dest);
    emit_call_insn (gen_call_internal (dest));
    DONE;
  }
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_call_insn (gen_rtx_CALL (VOIDmode,
	operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

