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

/* config/rx/rx.md:161 */
rtx
gen_cbranchsi4 (rtx operand0,
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

/* config/rx/rx.md:172 */
extern rtx_insn *gen_split_1 (rtx_insn *, rtx *);
rtx_insn *
gen_split_1 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_1 (rx.md:172)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 184 "config/rx/rx.md"
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

/* config/rx/rx.md:201 */
extern rtx_insn *gen_split_2 (rtx_insn *, rtx *);
rtx_insn *
gen_split_2 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_2 (rx.md:201)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 214 "config/rx/rx.md"
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

/* config/rx/rx.md:222 */
extern rtx_insn *gen_split_3 (rtx_insn *, rtx *);
rtx_insn *
gen_split_3 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_3 (rx.md:222)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 237 "config/rx/rx.md"
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

/* config/rx/rx.md:264 */
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

/* config/rx/rx.md:275 */
extern rtx_insn *gen_split_4 (rtx_insn *, rtx *);
rtx_insn *
gen_split_4 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_4 (rx.md:275)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 287 "config/rx/rx.md"
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

/* config/rx/rx.md:353 */
rtx
gen_return (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 356 "config/rx/rx.md"
rx_expand_epilogue (false); DONE;
#undef DONE
#undef FAIL
  }
  emit_jump_insn (ret_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:426 */
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
#line 430 "config/rx/rx.md"
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

/* config/rx/rx.md:452 */
rtx
gen_call_value (rtx operand0,
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
#line 457 "config/rx/rx.md"
{
    rtx dest = XEXP (operands[1], 0);

    if (! rx_call_operand (dest, Pmode))
      dest = force_reg (Pmode, dest);
    emit_call_insn (gen_call_value_internal (operands[0], dest));
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
  emit_call_insn (gen_rtx_SET (operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:485 */
rtx
gen_sibcall (rtx operand0,
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
#line 491 "config/rx/rx.md"
{
    if (MEM_P (operands[0]))
      operands[0] = XEXP (operands[0], 0);
    emit_call_insn (gen_sibcall_internal (operands[0]));
    DONE;
  }
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (QImode,
	operand0),
	operand1),
		ret_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:509 */
rtx
gen_sibcall_value (rtx operand0,
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
#line 516 "config/rx/rx.md"
{
    if (MEM_P (operands[1]))
      operands[1] = XEXP (operands[1], 0);
    emit_call_insn (gen_sibcall_value_internal (operands[0], operands[1]));
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
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (QImode,
	operand1),
	operand2)),
		ret_rtx)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:537 */
rtx
gen_prologue (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 540 "config/rx/rx.md"
rx_expand_prologue (); DONE;
#undef DONE
#undef FAIL
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:543 */
rtx
gen_epilogue (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 546 "config/rx/rx.md"
rx_expand_epilogue (false); DONE;
#undef DONE
#undef FAIL
  }
  emit_jump_insn (ret_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:549 */
rtx
gen_sibcall_epilogue (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 552 "config/rx/rx.md"
rx_expand_epilogue (true); DONE;
#undef DONE
#undef FAIL
  }
  emit_jump_insn (ret_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:572 */
rtx
gen_movsf (rtx operand0,
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
#line 576 "config/rx/rx.md"
{
    if (MEM_P (operands[0]) && MEM_P (operands[1]))
      operands[1] = copy_to_mode_reg (SFmode, operands[1]);
    operands[0] = rx_maybe_pidify_operand (operands[0], 0);
    operands[1] = rx_maybe_pidify_operand (operands[1], 0);
    if (GET_CODE (operands[0]) != REG
	&& GET_CODE (operands[1]) == PLUS)
      operands[1] = copy_to_mode_reg (SFmode, operands[1]);
    if (GET_CODE (operands[1]) == PLUS && GET_MODE (operands[1]) == SImode)
      {
        emit_insn (gen_addsi3 (operands[0], XEXP (operands[1], 0), XEXP (operands[1], 1)));
        DONE;
      }
    if (CONST_INT_P (operand1)
        && ! rx_is_legitimate_constant (SFmode, operand1))
      FAIL;
  }
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:572 */
rtx
gen_movsi (rtx operand0,
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
#line 576 "config/rx/rx.md"
{
    if (MEM_P (operands[0]) && MEM_P (operands[1]))
      operands[1] = copy_to_mode_reg (SImode, operands[1]);
    operands[0] = rx_maybe_pidify_operand (operands[0], 0);
    operands[1] = rx_maybe_pidify_operand (operands[1], 0);
    if (GET_CODE (operands[0]) != REG
	&& GET_CODE (operands[1]) == PLUS)
      operands[1] = copy_to_mode_reg (SImode, operands[1]);
    if (GET_CODE (operands[1]) == PLUS && GET_MODE (operands[1]) == SImode)
      {
        emit_insn (gen_addsi3 (operands[0], XEXP (operands[1], 0), XEXP (operands[1], 1)));
        DONE;
      }
    if (CONST_INT_P (operand1)
        && ! rx_is_legitimate_constant (SImode, operand1))
      FAIL;
  }
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:572 */
rtx
gen_movhi (rtx operand0,
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
#line 576 "config/rx/rx.md"
{
    if (MEM_P (operands[0]) && MEM_P (operands[1]))
      operands[1] = copy_to_mode_reg (HImode, operands[1]);
    operands[0] = rx_maybe_pidify_operand (operands[0], 0);
    operands[1] = rx_maybe_pidify_operand (operands[1], 0);
    if (GET_CODE (operands[0]) != REG
	&& GET_CODE (operands[1]) == PLUS)
      operands[1] = copy_to_mode_reg (HImode, operands[1]);
    if (GET_CODE (operands[1]) == PLUS && GET_MODE (operands[1]) == SImode)
      {
        emit_insn (gen_addsi3 (operands[0], XEXP (operands[1], 0), XEXP (operands[1], 1)));
        DONE;
      }
    if (CONST_INT_P (operand1)
        && ! rx_is_legitimate_constant (HImode, operand1))
      FAIL;
  }
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:572 */
rtx
gen_movqi (rtx operand0,
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
#line 576 "config/rx/rx.md"
{
    if (MEM_P (operands[0]) && MEM_P (operands[1]))
      operands[1] = copy_to_mode_reg (QImode, operands[1]);
    operands[0] = rx_maybe_pidify_operand (operands[0], 0);
    operands[1] = rx_maybe_pidify_operand (operands[1], 0);
    if (GET_CODE (operands[0]) != REG
	&& GET_CODE (operands[1]) == PLUS)
      operands[1] = copy_to_mode_reg (QImode, operands[1]);
    if (GET_CODE (operands[1]) == PLUS && GET_MODE (operands[1]) == SImode)
      {
        emit_insn (gen_addsi3 (operands[0], XEXP (operands[1], 0), XEXP (operands[1], 1)));
        DONE;
      }
    if (CONST_INT_P (operand1)
        && ! rx_is_legitimate_constant (QImode, operand1))
      FAIL;
  }
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
  }
  emit_insn (gen_rtx_SET (operand0,
	operand1));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:677 */
extern rtx_insn *gen_split_5 (rtx_insn *, rtx *);
rtx_insn *
gen_split_5 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_5 (rx.md:677)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 687 "config/rx/rx.md"
{
  rtx flags, x;

  flags = gen_rtx_REG (CCmode, CC_REG);
  x = gen_rtx_COMPARE (CCmode, operands[2], operands[3]);
  x = gen_rtx_SET (flags, x);
  emit_insn (x);

  x = gen_rtx_fmt_ee (GET_CODE (operands[1]), SImode, flags, const0_rtx);
  x = gen_rtx_SET (operands[0], x);
  emit_insn (x);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:710 */
extern rtx_insn *gen_split_6 (rtx_insn *, rtx *);
rtx_insn *
gen_split_6 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_6 (rx.md:710)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 719 "config/rx/rx.md"
{
  rtx flags, x;

  flags = gen_rtx_REG (CC_Fmode, CC_REG);
  x = gen_rtx_COMPARE (CC_Fmode, operands[2], operands[3]);
  x = gen_rtx_SET (flags, x);
  emit_insn (x);

  x = gen_rtx_fmt_ee (GET_CODE (operands[1]), SImode, flags, const0_rtx);
  x = gen_rtx_SET (operands[0], x);
  emit_insn (x);
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:733 */
rtx
gen_movsicc (rtx operand0,
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
#line 741 "config/rx/rx.md"
{
  /* Make sure that we have an integer comparison...  */
  if (GET_MODE (XEXP (operands[1], 0)) != CCmode
      && GET_MODE (XEXP (operands[1], 0)) != SImode)
    FAIL;

  /* One operand must be a constant or a register, the other must be a register.  */
  if (   ! CONSTANT_P (operands[2])
      && ! CONSTANT_P (operands[3])
      && ! (REG_P (operands[2]) && REG_P (operands[3])))
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
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:754 */
extern rtx_insn *gen_split_7 (rtx_insn *, rtx *);
rtx_insn *
gen_split_7 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_7 (rx.md:754)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 768 "config/rx/rx.md"
{
  rtx x, flags, op0, op1, op2;
  enum rtx_code cmp_code;

  flags = gen_rtx_REG (CCmode, CC_REG);
  x = gen_rtx_COMPARE (CCmode, operands[3], operands[4]);
  emit_insn (gen_rtx_SET (flags, x));

  cmp_code = GET_CODE (operands[5]);
  op0 = operands[0];
  op1 = operands[1];
  op2 = operands[2];

  /* If OP2 is the constant, reverse the sense of the move.
     Likewise if both operands are registers but OP1 == OP0.  */
  if ((! CONSTANT_P (operands[1]) && CONSTANT_P (operands[2]))
      || (REG_P (operands[1]) && REG_P (operands[2])
          && rtx_equal_p (op0, op1)))
    {
      x = op1, op1 = op2, op2 = x;
      cmp_code = reverse_condition (cmp_code);
    }

  /* If OP2 does not match the output, copy it into place.  We have allowed
     these alternatives so that the destination can legitimately be one of
     the comparison operands without increasing register pressure.  */
  if (! rtx_equal_p (op0, op2))
    emit_move_insn (op0, op2);

  x = gen_rtx_fmt_ee (cmp_code, VOIDmode, flags, const0_rtx);
  x = gen_rtx_IF_THEN_ELSE (SImode, x, op1, op0);
  emit_insn (gen_rtx_SET (op0, x));
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:866 */
rtx
gen_addsi3 (rtx operand0,
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
#line 872 "config/rx/rx.md"

      operands[0] = rx_maybe_pidify_operand (operands[0], 1);
      operands[1] = rx_maybe_pidify_operand (operands[1], 1);
      operands[2] = rx_maybe_pidify_operand (operands[2], 1);
  
#undef DONE
#undef FAIL
    operand0 = operands[0];
    (void) operand0;
    operand1 = operands[1];
    (void) operand1;
    operand2 = operands[2];
    (void) operand2;
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:932 */
rtx
gen_addsi3_flags (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
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
	operand1,
	operand2))));
}

/* config/rx/rx.md:982 */
extern rtx_insn *gen_peephole2_1 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_1 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_1 (rx.md:982)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CC_ZSCmode,
	16),
	gen_rtx_COMPARE (CC_ZSCmode,
	gen_rtx_PLUS (SImode,
	operand1,
	const0_rtx),
	const0_rtx)),
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	const0_rtx)))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:996 */
extern rtx_insn *gen_peephole2_2 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_2 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_2 (rx.md:996)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CC_ZSCmode,
	16),
	gen_rtx_COMPARE (CC_ZSCmode,
	gen_rtx_PLUS (SImode,
	operand1,
	const0_rtx),
	const0_rtx)),
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	const0_rtx)))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1010 */
rtx
gen_adddi3 (rtx operand0,
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
#line 1015 "config/rx/rx.md"
{
  rtx op0l, op0h, op1l, op1h, op2l, op2h;

  op0l = gen_lowpart (SImode, operands[0]);
  op1l = gen_lowpart (SImode, operands[1]);
  op2l = gen_lowpart (SImode, operands[2]);
  op0h = gen_highpart (SImode, operands[0]);
  op1h = gen_highpart (SImode, operands[1]);
  op2h = gen_highpart_mode (SImode, DImode, operands[2]);

  emit_insn (gen_adddi3_internal (op0l, op0h, op1l, op2l, op1h, op2h));
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
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1029 */
extern rtx_insn *gen_split_8 (rtx_insn *, rtx *);
rtx_insn *
gen_split_8 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_8 (rx.md:1029)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1045 "config/rx/rx.md"
{
  rtx op0l = operands[0];
  rtx op0h = operands[1];
  rtx op1l = operands[2];
  rtx op2l = operands[3];
  rtx op1h = operands[4];
  rtx op2h = operands[5];
  rtx scratch = operands[6];
  rtx x;

  if (reg_overlap_mentioned_p (op0l, op1h))
    {
      emit_move_insn (scratch, op0l);
      op1h = scratch;
      if (reg_overlap_mentioned_p (op0l, op2h))
	op2h = scratch;
    }
  else if (reg_overlap_mentioned_p (op0l, op2h))
    {
      emit_move_insn (scratch, op0l);
      op2h = scratch;
    }

  if (rtx_equal_p (op0l, op1l))
    ;
  /* It is preferable that op0l == op1l...  */
  else if (rtx_equal_p (op0l, op2l))
    x = op1l, op1l = op2l, op2l = x;
  /* ... but it is only a requirement if op2l == MEM.  */
  else if (MEM_P (op2l))
    {
      /* Let's hope that we still have a scratch register free.  */
      gcc_assert (op1h != scratch);
      emit_move_insn (scratch, op2l);
      op2l = scratch;
    }

  emit_insn (gen_addsi3_flags (op0l, op1l, op2l));

  if (rtx_equal_p (op0h, op1h))
    ;
  else if (rtx_equal_p (op0h, op2h))
    x = op1h, op1h = op2h, op2h = x;
  else
    {
      emit_move_insn (op0h, op1h);
      op1h = op0h;
    }
  emit_insn (gen_adc_internal (op0h, op1h, op2h));
  DONE;
}
#undef DONE
#undef FAIL
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1097 */
extern rtx_insn *gen_split_9 (rtx_insn *, rtx *);
rtx_insn *
gen_split_9 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_9 (rx.md:1097)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1116 "config/rx/rx.md"
{
  /* For negated single bit constants use the bclr insn for smaller code.  */

  if (!rx_reg_dead_or_unused_after_insn (curr_insn, CC_REG))
    FAIL;

  rx_copy_reg_dead_or_unused_notes (operands[1], curr_insn,
    emit_insn (gen_bitclr (operands[0],
			   GEN_INT (exact_log2 (~UINTVAL (operands[2]))),
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

/* config/rx/rx.md:1283 */
rtx
gen_umaxhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1294 "config/rx/rx.md"
operands[3] = gen_reg_rtx (SImode);
   operands[4] = gen_reg_rtx (SImode);
   operands[5] = gen_reg_rtx (SImode);
   operands[6] = gen_rtx_SUBREG (GET_MODE (operands[0]), operands[3],
     TARGET_BIG_ENDIAN_DATA ? (GET_MODE (operands[0]) == HImode ? 2 : 3) : 0);
   if (GET_CODE (operands[2]) != CONST_INT)
     {
       emit_move_insn (operands[5], gen_rtx_ZERO_EXTEND (SImode, operands[2]));
       operands[2] = operands[5];
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
  }
  emit_insn (gen_rtx_SET (operand4,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (operand3,
	gen_rtx_SMAX (SImode,
	copy_rtx (operand4),
	operand2)));
  emit_insn (gen_rtx_SET (operand0,
	operand6));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1283 */
rtx
gen_umaxqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1294 "config/rx/rx.md"
operands[3] = gen_reg_rtx (SImode);
   operands[4] = gen_reg_rtx (SImode);
   operands[5] = gen_reg_rtx (SImode);
   operands[6] = gen_rtx_SUBREG (GET_MODE (operands[0]), operands[3],
     TARGET_BIG_ENDIAN_DATA ? (GET_MODE (operands[0]) == HImode ? 2 : 3) : 0);
   if (GET_CODE (operands[2]) != CONST_INT)
     {
       emit_move_insn (operands[5], gen_rtx_ZERO_EXTEND (SImode, operands[2]));
       operands[2] = operands[5];
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
  }
  emit_insn (gen_rtx_SET (operand4,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (operand3,
	gen_rtx_SMAX (SImode,
	copy_rtx (operand4),
	operand2)));
  emit_insn (gen_rtx_SET (operand0,
	operand6));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1307 */
rtx
gen_uminhi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1318 "config/rx/rx.md"
operands[3] = gen_reg_rtx (SImode);
   operands[4] = gen_reg_rtx (SImode);
   operands[5] = gen_reg_rtx (SImode);
   operands[6] = gen_rtx_SUBREG (GET_MODE (operands[0]), operands[3],
     TARGET_BIG_ENDIAN_DATA ? (GET_MODE (operands[0]) == HImode ? 2 : 3) : 0);
   if (GET_CODE (operands[2]) != CONST_INT)
     {
       emit_move_insn (operands[5], gen_rtx_ZERO_EXTEND (SImode, operands[2]));
       operands[2] = operands[5];
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
  }
  emit_insn (gen_rtx_SET (operand4,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (operand3,
	gen_rtx_SMIN (SImode,
	copy_rtx (operand4),
	operand2)));
  emit_insn (gen_rtx_SET (operand0,
	operand6));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1307 */
rtx
gen_uminqi3 (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx_insn *_val = 0;
  start_sequence ();
  {
    rtx operands[7];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1318 "config/rx/rx.md"
operands[3] = gen_reg_rtx (SImode);
   operands[4] = gen_reg_rtx (SImode);
   operands[5] = gen_reg_rtx (SImode);
   operands[6] = gen_rtx_SUBREG (GET_MODE (operands[0]), operands[3],
     TARGET_BIG_ENDIAN_DATA ? (GET_MODE (operands[0]) == HImode ? 2 : 3) : 0);
   if (GET_CODE (operands[2]) != CONST_INT)
     {
       emit_move_insn (operands[5], gen_rtx_ZERO_EXTEND (SImode, operands[2]));
       operands[2] = operands[5];
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
  }
  emit_insn (gen_rtx_SET (operand4,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (operand3,
	gen_rtx_SMIN (SImode,
	copy_rtx (operand4),
	operand2)));
  emit_insn (gen_rtx_SET (operand0,
	operand6));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

