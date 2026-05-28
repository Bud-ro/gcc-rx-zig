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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2864 */
rtx
gen_addsf3 (rtx operand0,
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
#line 2870 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
	if(TARGET_RXV2)
		emit_insn(gen_addsf3v2(operands[0], operands[1], operands[2]));
	else
		emit_insn(gen_addsf3v1(operands[0], operands[1], operands[2]));
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
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 48));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2969 */
rtx
gen_mulsf3 (rtx operand0,
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
#line 2975 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
	if(TARGET_RXV2)
		emit_insn(gen_mulsf3v2(operands[0], operands[1], operands[2]));
	else
		emit_insn(gen_mulsf3v1(operands[0], operands[1], operands[2]));
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
	gen_rtx_MULT (SFmode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 48));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3049 */
rtx
gen_subsf3 (rtx operand0,
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
#line 3055 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
	if(TARGET_RXV2)
		emit_insn(gen_subsf3v2(operands[0], operands[1], operands[2]));
	else
		emit_insn(gen_subsf3v1(operands[0], operands[1], operands[2]));
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
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2)));
  emit_insn (gen_hard_reg_clobber (CCmode, 48));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3260 */
extern rtx_insn *gen_split_26 (rtx_insn *, rtx *);
rtx_insn *
gen_split_26 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_26 (rx.md:3260)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3269 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  if (rx_fuse_in_memory_bitop (operands, curr_insn, &gen_bitset_in_memory))
    DONE;
  else
    FAIL;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3350 */
extern rtx_insn *gen_split_27 (rtx_insn *, rtx *);
rtx_insn *
gen_split_27 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_27 (rx.md:3350)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3359 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  if (rx_fuse_in_memory_bitop (operands, curr_insn, &gen_bitinvert_in_memory))
    DONE;
  else
    FAIL;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3416 */
extern rtx_insn *gen_split_28 (rtx_insn *, rtx *);
rtx_insn *
gen_split_28 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_28 (rx.md:3416)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3428 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  if (rx_fuse_in_memory_bitop (operands, curr_insn, &gen_bitclr_in_memory))
    DONE;
  else
    FAIL;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3537 */
extern rtx_insn *gen_split_29 (rtx_insn *, rtx *);
rtx_insn *
gen_split_29 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_29 (rx.md:3537)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3549 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  rtx flags, x;

  /* Emit tst #1, op2.  */
  flags = gen_rtx_REG (CC_ZSmode, CC_REG);
  x = gen_rtx_AND (SImode, operands[2], const1_rtx);
  x = gen_rtx_COMPARE (CC_ZSmode, x, const0_rtx);
  x = gen_rtx_SET (flags, x);
  emit_insn (x);

  /* Emit bmne.  */
  operands[3] = gen_rtx_NE (SImode, flags, const0_rtx);
}
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
  emit_insn (gen_rtx_SET (gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const1_rtx,
	operand1),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3563 */
extern rtx_insn *gen_split_30 (rtx_insn *, rtx *);
rtx_insn *
gen_split_30 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_30 (rx.md:3563)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3577 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  rtx flags, x;

  flags = gen_rtx_REG (CCmode, CC_REG);
  x = gen_rtx_COMPARE (CCmode, operands[2], operands[3]);
  x = gen_rtx_SET (flags, x);
  emit_insn (x);

  operands[4] = gen_rtx_fmt_ee (GET_CODE (operands[4]), SImode,
			        flags, const0_rtx);
}
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
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const1_rtx,
	operand1),
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3589 */
extern rtx_insn *gen_split_31 (rtx_insn *, rtx *);
rtx_insn *
gen_split_31 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_31 (rx.md:3589)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3603 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  rtx flags, x;

  flags = gen_rtx_REG (CCmode, CC_REG);
  x = gen_rtx_COMPARE (CCmode, operands[2], operands[3]);
  x = gen_rtx_SET (flags, x);
  emit_insn (x);

  operands[4] = gen_rtx_fmt_ee (GET_CODE (operands[4]), SImode,
			        flags, const0_rtx);
}
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
  operand4 = operands[4];
  (void) operand4;
  emit_insn (gen_rtx_SET (gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const1_rtx,
	operand1),
	operand4));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3629 */
extern rtx_insn *gen_split_32 (rtx_insn *, rtx *);
rtx_insn *
gen_split_32 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_32 (rx.md:3629)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3644 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"

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
		gen_rtx_SET (gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const1_rtx,
	operand1),
	gen_rtx_LT (SImode,
	operand2,
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3647 */
rtx
gen_insv (rtx operand0,
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
#line 3654 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  /* We only handle single-bit inserts.  */
  if (!CONST_INT_P (operands[1]) || INTVAL (operands[1]) != 1)
    FAIL;

  /* Either the bit to insert or the position must be constant.  */
  if (CONST_INT_P (operands[3]))
    operands[3] = GEN_INT (INTVAL (operands[3]) & 1);
  else if (CONST_INT_P (operands[2]))
    {
      emit_insn (gen_rx_insv_reg (operands[0], operands[2], operands[3]));
      DONE;
    }
  else
    FAIL;
}
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
  emit_insn (gen_rtx_SET (gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3699 */
rtx
gen_atomic_exchangeqi (rtx operand0,
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
#line 3705 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  emit_insn (gen_xchg_memqi (operands[0], operands[1], operands[2]));
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3699 */
rtx
gen_atomic_exchangehi (rtx operand0,
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
#line 3705 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  emit_insn (gen_xchg_memhi (operands[0], operands[1], operands[2]));
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3710 */
rtx
gen_atomic_exchangesi (rtx operand0,
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
#line 3716 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  emit_insn (gen_sync_lock_test_and_setsi (operands[0], operands[1],
					   operands[2]));
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit (operand0, true);
  emit (operand1, true);
  emit (operand2, true);
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3734 */
rtx
gen_atomic_fetch_addsi (rtx operand0,
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
#line 3741 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  {
    rx_atomic_sequence seq (current_function_decl);

    emit_move_insn (operands[0], operands[1]);

    rtx tmp = gen_reg_rtx (SImode);
    emit_insn (gen_addsi3 (tmp, operands[0], operands[2]));

    emit_move_insn (operands[1], tmp);
  }
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  emit_insn (gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	operand2)));
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3734 */
rtx
gen_atomic_fetch_subsi (rtx operand0,
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
#line 3741 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  {
    rx_atomic_sequence seq (current_function_decl);

    emit_move_insn (operands[0], operands[1]);

    rtx tmp = gen_reg_rtx (SImode);
    emit_insn (gen_subsi3 (tmp, operands[0], operands[2]));

    emit_move_insn (operands[1], tmp);
  }
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  emit_insn (gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	operand2)));
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3734 */
rtx
gen_atomic_fetch_orsi (rtx operand0,
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
#line 3741 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  {
    rx_atomic_sequence seq (current_function_decl);

    emit_move_insn (operands[0], operands[1]);

    rtx tmp = gen_reg_rtx (SImode);
    emit_insn (gen_iorsi3 (tmp, operands[0], operands[2]));

    emit_move_insn (operands[1], tmp);
  }
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  emit_insn (gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_IOR (SImode,
	copy_rtx (operand1),
	operand2)));
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3734 */
rtx
gen_atomic_fetch_xorsi (rtx operand0,
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
#line 3741 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  {
    rx_atomic_sequence seq (current_function_decl);

    emit_move_insn (operands[0], operands[1]);

    rtx tmp = gen_reg_rtx (SImode);
    emit_insn (gen_xorsi3 (tmp, operands[0], operands[2]));

    emit_move_insn (operands[1], tmp);
  }
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  emit_insn (gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_XOR (SImode,
	copy_rtx (operand1),
	operand2)));
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3734 */
rtx
gen_atomic_fetch_andsi (rtx operand0,
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
#line 3741 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  {
    rx_atomic_sequence seq (current_function_decl);

    emit_move_insn (operands[0], operands[1]);

    rtx tmp = gen_reg_rtx (SImode);
    emit_insn (gen_andsi3 (tmp, operands[0], operands[2]));

    emit_move_insn (operands[1], tmp);
  }
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  emit_insn (gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_AND (SImode,
	copy_rtx (operand1),
	operand2)));
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3755 */
rtx
gen_atomic_fetch_nandsi (rtx operand0,
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
#line 3763 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  {
    rx_atomic_sequence seq (current_function_decl);

    emit_move_insn (operands[0], operands[1]);

    rtx tmp = gen_reg_rtx (SImode);
    emit_insn (gen_andsi3 (tmp, operands[0], operands[2]));
    emit_insn (gen_one_cmplsi2 (tmp, tmp));

    emit_move_insn (operands[1], tmp);
  }
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  emit_insn (gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_NOT (SImode,
	gen_rtx_AND (SImode,
	copy_rtx (operand1),
	operand2))));
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3781 */
rtx
gen_atomic_add_fetchsi (rtx operand0,
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
#line 3789 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  {
    rx_atomic_sequence seq (current_function_decl);

    emit_move_insn (operands[0], operands[2]);
    emit_insn (gen_addsi3 (operands[0], operands[0], operands[1]));
    emit_move_insn (operands[1], operands[0]);
  }
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))));
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3781 */
rtx
gen_atomic_or_fetchsi (rtx operand0,
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
#line 3789 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  {
    rx_atomic_sequence seq (current_function_decl);

    emit_move_insn (operands[0], operands[2]);
    emit_insn (gen_iorsi3 (operands[0], operands[0], operands[1]));
    emit_move_insn (operands[1], operands[0]);
  }
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_IOR (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))));
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3781 */
rtx
gen_atomic_xor_fetchsi (rtx operand0,
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
#line 3789 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  {
    rx_atomic_sequence seq (current_function_decl);

    emit_move_insn (operands[0], operands[2]);
    emit_insn (gen_xorsi3 (operands[0], operands[0], operands[1]));
    emit_move_insn (operands[1], operands[0]);
  }
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_XOR (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))));
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3781 */
rtx
gen_atomic_and_fetchsi (rtx operand0,
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
#line 3789 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  {
    rx_atomic_sequence seq (current_function_decl);

    emit_move_insn (operands[0], operands[2]);
    emit_insn (gen_andsi3 (operands[0], operands[0], operands[1]));
    emit_move_insn (operands[1], operands[0]);
  }
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_AND (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))));
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3800 */
rtx
gen_atomic_sub_fetchsi (rtx operand0,
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
#line 3808 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  {
    rx_atomic_sequence seq (current_function_decl);

    emit_move_insn (operands[0], operands[1]);
    emit_insn (gen_subsi3 (operands[0], operands[0], operands[2]));
    emit_move_insn (operands[1], operands[0]);
  }
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))));
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3819 */
rtx
gen_atomic_nand_fetchsi (rtx operand0,
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
#line 3827 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  {
    rx_atomic_sequence seq (current_function_decl);

    emit_move_insn (operands[0], operands[2]);
    emit_insn (gen_andsi3 (operands[0], operands[0], operands[1]));
    emit_insn (gen_one_cmplsi2 (operands[0], operands[0]));
    emit_move_insn (operands[1], operands[0]);
  }
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_NOT (SImode,
	gen_rtx_AND (SImode,
	operand1,
	operand2))));
  emit_insn (gen_rtx_SET (copy_rtx (operand1),
	gen_rtx_NOT (SImode,
	gen_rtx_AND (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2)))));
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3842 */
rtx
gen_movstr (rtx operand0,
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
#line 3848 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    rtx addr1 = gen_rtx_REG (SImode, 1);
    rtx addr2 = gen_rtx_REG (SImode, 2);
    rtx len   = gen_rtx_REG (SImode, 3);
    rtx dest_copy = gen_reg_rtx (SImode);

    emit_move_insn (len, GEN_INT (-1));
    emit_move_insn (addr1, force_operand (XEXP (operands[1], 0), NULL_RTX));
    emit_move_insn (addr2, force_operand (XEXP (operands[2], 0), NULL_RTX));
    operands[1] = replace_equiv_address_nv (operands[1], addr1);
    operands[2] = replace_equiv_address_nv (operands[2], addr2);
    emit_move_insn (dest_copy, addr1);
    emit_insn (gen_rx_movstr ());
    emit_move_insn (len, GEN_INT (-1));
    emit_insn (gen_rx_strend (operands[0], dest_copy));
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
  emit_insn (gen_rtx_SET (operand1,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3897 */
rtx
gen_cpymemsi (rtx operand0,
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
#line 3906 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    rtx addr1 = gen_rtx_REG (SImode, 1);
    rtx addr2 = gen_rtx_REG (SImode, 2);
    rtx len   = gen_rtx_REG (SImode, 3);

    /* Do not use when the source or destination are volatile - the SMOVF
       instruction will read and write in word sized blocks, which may be
       outside of the valid address range.  */
    if (MEM_P (operands[0]) && MEM_VOLATILE_P (operands[0]))
      FAIL;
    if (MEM_P (operands[1]) && MEM_VOLATILE_P (operands[1]))
      FAIL;

    if (REG_P (operands[0]) && (REGNO (operands[0]) == 2
				      || REGNO (operands[0]) == 3))
      FAIL;
    if (REG_P (operands[1]) && (REGNO (operands[1]) == 1
				      || REGNO (operands[1]) == 3))
      FAIL;
    if (REG_P (operands[2]) && (REGNO (operands[2]) == 1
				      || REGNO (operands[2]) == 2))
      FAIL;

    emit_move_insn (addr1, force_operand (XEXP (operands[0], 0), NULL_RTX));
    emit_move_insn (addr2, force_operand (XEXP (operands[1], 0), NULL_RTX));
    emit_move_insn (len, force_operand (operands[2], NULL_RTX));
    operands[0] = replace_equiv_address_nv (operands[0], addr1);
    operands[1] = replace_equiv_address_nv (operands[1], addr2);
    emit_insn (gen_rx_cpymem ());
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		operand3,
		gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (3,
		gen_rtx_REG (SImode,
	1),
		gen_rtx_REG (SImode,
	2),
		gen_rtx_REG (SImode,
	3)),
	21))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3954 */
rtx
gen_setmemsi (rtx operand0,
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
#line 3961 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    rtx addr = gen_rtx_REG (SImode, 1);
    rtx val  = gen_rtx_REG (QImode, 2);
    rtx len  = gen_rtx_REG (SImode, 3);

    emit_move_insn (addr, force_operand (XEXP (operands[0], 0), NULL_RTX));
    emit_move_insn (len, force_operand (operands[1], NULL_RTX));
    emit_move_insn (val, operands[2]);
    emit_insn (gen_rx_setmem ());
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit (operand3, true);
  emit_insn (gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (3,
		gen_rtx_REG (SImode,
	1),
		gen_rtx_REG (SImode,
	2),
		gen_rtx_REG (SImode,
	3)),
	22));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3985 */
rtx
gen_cmpstrnsi (rtx operand0,
	rtx operand1,
	rtx operand2,
	rtx operand3,
	rtx operand4)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 3993 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    rtx str1 = gen_rtx_REG (SImode, 1);
    rtx str2 = gen_rtx_REG (SImode, 2);
    rtx len  = gen_rtx_REG (SImode, 3);

    emit_move_insn (str1, force_operand (XEXP (operands[1], 0), NULL_RTX));
    emit_move_insn (str2, force_operand (XEXP (operands[2], 0), NULL_RTX));
    emit_move_insn (len, force_operand (operands[3], NULL_RTX));

    emit_insn (gen_rx_cmpstrn (operands[0], operands[1], operands[2]));
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
    operand3 = operands[3];
    (void) operand3;
    operand4 = operands[4];
    (void) operand4;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	24)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  emit (operand4, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4007 */
rtx
gen_cmpstrsi (rtx operand0,
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
#line 4014 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    rtx str1 = gen_rtx_REG (SImode, 1);
    rtx str2 = gen_rtx_REG (SImode, 2);
    rtx len  = gen_rtx_REG (SImode, 3);

    emit_move_insn (str1, force_reg (SImode, XEXP (operands[1], 0)));
    emit_move_insn (str2, force_reg (SImode, XEXP (operands[2], 0)));
    emit_move_insn (len, GEN_INT (-1));

    emit_insn (gen_rx_cmpstrn (operands[0], operands[1], operands[2]));
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
    operand3 = operands[3];
    (void) operand3;
  }
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		operand2),
	24)));
  emit (operand3, false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4863 */
rtx
gen_pid_addr (rtx operand0,
	rtx operand1)
{
  return gen_rtx_PLUS (SImode,
	operand0,
	gen_rtx_CONST (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	52)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4899 */
extern rtx_insn *gen_peephole2_81 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_81 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_81 (rx.md:4899)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (operand3,
	gen_rtx_AND (QImode,
	gen_rtx_NOT (QImode,
	gen_rtx_ASHIFT (QImode,
	const1_rtx,
	operand1)),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4921 */
extern rtx_insn *gen_peephole2_82 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_82 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_82 (rx.md:4921)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (operand3,
	gen_rtx_AND (QImode,
	gen_rtx_NOT (QImode,
	gen_rtx_ASHIFT (QImode,
	const1_rtx,
	operand1)),
	copy_rtx (operand3))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4947 */
extern rtx_insn *gen_peephole2_83 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_83 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_83 (rx.md:4947)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	gen_rtx_ASHIFT (SImode,
	const1_rtx,
	operand1)),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4966 */
extern rtx_insn *gen_peephole2_84 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_84 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_84 (rx.md:4966)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	gen_rtx_ASHIFT (SImode,
	const1_rtx,
	operand1)),
	copy_rtx (operand2))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5051 */
extern rtx_insn *gen_peephole2_85 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_85 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_85 (rx.md:5051)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand3)));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	gen_rtx_ASHIFT (SImode,
	const1_rtx,
	operand1)),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5076 */
extern rtx_insn *gen_peephole2_86 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_86 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_86 (rx.md:5076)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand3)));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	gen_rtx_ASHIFT (SImode,
	const1_rtx,
	operand1)),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5106 */
extern rtx_insn *gen_peephole2_87 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_87 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_87 (rx.md:5106)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand0,
	operand2));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	gen_rtx_ASHIFT (SImode,
	const1_rtx,
	operand1)),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5135 */
extern rtx_insn *gen_peephole2_88 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_88 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_88 (rx.md:5135)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (operand0,
	operand3));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	gen_rtx_ASHIFT (SImode,
	const1_rtx,
	operand1)),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5160 */
extern rtx_insn *gen_peephole2_89 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_89 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_89 (rx.md:5160)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  operand3 = operands[3];
  (void) operand3;
  emit_insn (gen_rtx_SET (operand0,
	operand3));
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	gen_rtx_ASHIFT (SImode,
	const1_rtx,
	operand1)),
	copy_rtx (operand0))));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5185 */
extern rtx_insn *gen_peephole2_90 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_90 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_90 (rx.md:5185)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5200 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"

#undef DONE
#undef FAIL
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (gen_rtx_REG (CC_ZSmode,
	48),
	gen_rtx_COMPARE (CC_ZSmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5206 */
extern rtx_insn *gen_peephole2_91 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_91 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_91 (rx.md:5206)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (gen_rtx_REG (CC_ZSmode,
	48),
	gen_rtx_COMPARE (CC_ZSmode,
	gen_rtx_AND (SImode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	const1_rtx,
	operand1)),
	const0_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5223 */
extern rtx_insn *gen_peephole2_92 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_92 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_92 (rx.md:5223)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5247 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    HOST_WIDE_INT mask = INTVAL (operands[1]);
    int pos = ctz_hwi (mask);
    operands[7] = GEN_INT (pos);
    /* Invert the condition: EQ -> NE, NE -> EQ */
    if (GET_CODE (operands[6]) == EQ)
      operands[8] = gen_rtx_NE (VOIDmode, operands[6], const0_rtx);
    else /* NE */
      operands[8] = gen_rtx_EQ (VOIDmode, operands[6], const0_rtx);
  }
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
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  operand6 = operands[6];
  (void) operand6;
  operand7 = operands[7];
  (void) operand7;
  operand8 = operands[8];
  (void) operand8;
  emit_insn (gen_rtx_SET (gen_rtx_REG (CC_ZSmode,
	48),
	gen_rtx_COMPARE (CC_ZSmode,
	gen_rtx_AND (SImode,
	operand3,
	gen_rtx_ASHIFT (SImode,
	const1_rtx,
	operand7)),
	const0_rtx)));
  emit_insn (gen_rtx_SET (copy_rtx (operand3),
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand8), VOIDmode,
		gen_rtx_REG (CC_ZSmode,
	48),
		const0_rtx),
	copy_rtx (operand3),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5259 */
extern rtx_insn *gen_peephole2_93 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_93 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_93 (rx.md:5259)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5279 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    /* Invert the condition: EQ -> NE, NE -> EQ */
    if (GET_CODE (operands[6]) == EQ)
      operands[8] = gen_rtx_NE (VOIDmode, operands[6], const0_rtx);
    else /* NE */
      operands[8] = gen_rtx_EQ (VOIDmode, operands[6], const0_rtx);
  }
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
  operand4 = operands[4];
  (void) operand4;
  operand5 = operands[5];
  (void) operand5;
  operand6 = operands[6];
  (void) operand6;
  operand7 = operands[7];
  (void) operand7;
  operand8 = operands[8];
  (void) operand8;
  emit_insn (gen_rtx_SET (gen_rtx_REG (CC_ZSmode,
	48),
	gen_rtx_COMPARE (CC_ZSmode,
	gen_rtx_AND (SImode,
	operand3,
	operand1),
	const0_rtx)));
  emit_insn (gen_rtx_SET (copy_rtx (operand3),
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_fmt_ee (GET_CODE (operand8), VOIDmode,
		gen_rtx_REG (CC_ZSmode,
	48),
		const0_rtx),
	copy_rtx (operand3),
	operand4)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5290 */
extern rtx_insn *gen_peephole2_94 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_94 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_94 (rx.md:5290)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand2,
		operand1),
	94));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5302 */
extern rtx_insn *gen_peephole2_95 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_95 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_95 (rx.md:5302)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand2,
		operand1),
	94));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5314 */
extern rtx_insn *gen_peephole2_96 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_96 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_96 (rx.md:5314)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand2,
		operand1),
	94));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:5332 */
extern rtx_insn *gen_peephole2_97 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_97 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_97 (rx.md:5332)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 5349 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"

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
		gen_rtx_SET (operand2,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	gen_rtx_MEM (SImode,
	operand1))),
		gen_hard_reg_clobber (CCmode, 48))), true);
  emit_insn (gen_rtx_SET (gen_rtx_MEM (SImode,
	copy_rtx (operand1)),
	copy_rtx (operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 294:
    case 293:
    case 292:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 1);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 2);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 3);
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (SImode, 4);
      XVECEXP (pattern, 0, 5) = gen_hard_reg_clobber (SImode, 5);
      XVECEXP (pattern, 0, 6) = gen_hard_reg_clobber (SImode, 6);
      break;

    case 291:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 1);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 2);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 3);
      break;

    case 235:
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 1);
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (SImode, 2);
      XVECEXP (pattern, 0, 5) = gen_hard_reg_clobber (SImode, 3);
      XVECEXP (pattern, 0, 6) = gen_hard_reg_clobber (CCmode, 48);
      break;

    case 234:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 1);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 3);
      break;

    case 233:
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 1);
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (SImode, 2);
      XVECEXP (pattern, 0, 5) = gen_hard_reg_clobber (SImode, 3);
      break;

    case 232:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 1);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 2);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 3);
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (CCmode, 48);
      break;

    case 231:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 1);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 2);
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (SImode, 3);
      break;

    case 297:
    case 196:
    case 193:
    case 191:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

    case 126:
    case 125:
    case 124:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCmode, 48);
      break;

    case 68:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (CCmode, 48);
      break;

    case 301:
    case 299:
    case 298:
    case 296:
    case 227:
    case 225:
    case 224:
    case 223:
    case 200:
    case 199:
    case 198:
    case 195:
    case 194:
    case 192:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
    case 176:
    case 175:
    case 174:
    case 157:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
    case 151:
    case 150:
    case 149:
    case 148:
    case 147:
    case 146:
    case 145:
    case 144:
    case 143:
    case 142:
    case 141:
    case 140:
    case 139:
    case 138:
    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 131:
    case 130:
    case 128:
    case 127:
    case 121:
    case 120:
    case 117:
    case 116:
    case 114:
    case 113:
    case 111:
    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 99:
    case 97:
    case 95:
    case 94:
    case 93:
    case 78:
    case 77:
    case 76:
    case 75:
    case 70:
    case 69:
    case 65:
    case 64:
    case 61:
    case 60:
    case 58:
    case 57:
    case 53:
    case 52:
    case 51:
    case 50:
    case 49:
    case 45:
    case 44:
    case 26:
    case 25:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCmode, 48);
      break;

    default:
      gcc_unreachable ();
    }
}


bool
added_clobbers_hard_reg_p (int insn_code_number)
{
  switch (insn_code_number)
    {
    case 297:
    case 196:
    case 193:
    case 191:
      return false;

    case 294:
    case 293:
    case 292:
    case 291:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 126:
    case 125:
    case 124:
    case 68:
    case 301:
    case 299:
    case 298:
    case 296:
    case 227:
    case 225:
    case 224:
    case 223:
    case 200:
    case 199:
    case 198:
    case 195:
    case 194:
    case 192:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 185:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 178:
    case 176:
    case 175:
    case 174:
    case 157:
    case 156:
    case 155:
    case 154:
    case 153:
    case 152:
    case 151:
    case 150:
    case 149:
    case 148:
    case 147:
    case 146:
    case 145:
    case 144:
    case 143:
    case 142:
    case 141:
    case 140:
    case 139:
    case 138:
    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 132:
    case 131:
    case 130:
    case 128:
    case 127:
    case 121:
    case 120:
    case 117:
    case 116:
    case 114:
    case 113:
    case 111:
    case 109:
    case 107:
    case 105:
    case 103:
    case 100:
    case 99:
    case 97:
    case 95:
    case 94:
    case 93:
    case 78:
    case 77:
    case 76:
    case 75:
    case 70:
    case 69:
    case 65:
    case 64:
    case 61:
    case 60:
    case 58:
    case 57:
    case 53:
    case 52:
    case 51:
    case 50:
    case 49:
    case 45:
    case 44:
    case 26:
    case 25:
      return true;

    default:
      gcc_unreachable ();
    }
}
