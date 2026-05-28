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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:683 */
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
#line 688 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:717 */
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
#line 723 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:742 */
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
#line 749 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:771 */
rtx
gen_prologue (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 774 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
rx_expand_prologue (); DONE;
#undef DONE
#undef FAIL
  }
  emit_insn (const0_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:777 */
rtx
gen_epilogue (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 780 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
rx_expand_epilogue (false); DONE;
#undef DONE
#undef FAIL
  }
  emit_jump_insn (ret_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:783 */
rtx
gen_sibcall_epilogue (void)
{
  rtx_insn *_val = 0;
  start_sequence ();
  {
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 786 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
rx_expand_epilogue (true); DONE;
#undef DONE
#undef FAIL
  }
  emit_jump_insn (ret_rtx);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:806 */
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
#line 810 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:806 */
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
#line 810 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:806 */
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
#line 810 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:806 */
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
#line 810 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:983 */
extern rtx_insn *gen_split_8 (rtx_insn *, rtx *);
rtx_insn *
gen_split_8 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_8 (rx.md:983)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 993 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1007 */
extern rtx_insn *gen_split_9 (rtx_insn *, rtx *);
rtx_insn *
gen_split_9 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_9 (rx.md:1007)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1017 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1041 */
extern rtx_insn *gen_split_10 (rtx_insn *, rtx *);
rtx_insn *
gen_split_10 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_10 (rx.md:1041)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1050 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1064 */
extern rtx_insn *gen_split_11 (rtx_insn *, rtx *);
rtx_insn *
gen_split_11 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_11 (rx.md:1064)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1073 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1087 */
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
#line 1095 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1108 */
extern rtx_insn *gen_split_12 (rtx_insn *, rtx *);
rtx_insn *
gen_split_12 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_12 (rx.md:1108)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1132 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    rtx flags = gen_rtx_REG (CC_ZSmode, CC_REG);
    operands[6] = gen_rtx_fmt_ee (GET_CODE (operands[5]), CC_ZSmode, flags, const0_rtx);
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
  emit_insn (gen_rtx_SET (gen_rtx_REG (CC_ZSmode,
	48),
	gen_rtx_COMPARE (CC_ZSmode,
	gen_rtx_AND (SImode,
	operand3,
	operand4),
	const0_rtx)));
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand6,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1138 */
extern rtx_insn *gen_split_13 (rtx_insn *, rtx *);
rtx_insn *
gen_split_13 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_13 (rx.md:1138)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1162 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    rtx flags = gen_rtx_REG (CC_ZSmode, CC_REG);
    operands[6] = gen_rtx_fmt_ee (GET_CODE (operands[5]), CC_ZSmode, flags, const0_rtx);
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
  emit_insn (gen_rtx_SET (gen_rtx_REG (CC_ZSmode,
	48),
	gen_rtx_COMPARE (CC_ZSmode,
	gen_rtx_AND (SImode,
	operand3,
	operand4),
	const0_rtx)));
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand6,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1168 */
extern rtx_insn *gen_split_14 (rtx_insn *, rtx *);
rtx_insn *
gen_split_14 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
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
    fprintf (dump_file, "Splitting with gen_split_14 (rx.md:1168)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1193 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
    HOST_WIDE_INT mask;
    rtx flags = gen_rtx_REG (CC_ZSmode, CC_REG);

    mask = 1;
    mask <<= INTVAL (operands[4]);
    mask -= 1;
    mask <<= INTVAL (operands[5]);

    operands[7] = GEN_INT (mask);
    operands[8] = gen_rtx_fmt_ee (GET_CODE (operands[6]), CC_ZSmode, flags, const0_rtx);
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
	operand7),
	const0_rtx)));
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand8,
	operand1,
	operand2)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1207 */
extern rtx_insn *gen_split_15 (rtx_insn *, rtx *);
rtx_insn *
gen_split_15 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_15 (rx.md:1207)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1221 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1256 */
extern rtx_insn *gen_split_16 (rtx_insn *, rtx *);
rtx_insn *
gen_split_16 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_16 (rx.md:1256)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1269 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

  /* If OP2 is the constant, reverse the sense of the move.  */
  if ((!CONSTANT_P (operands[1]) && CONSTANT_P (operands[2]))
      || (REG_P(operands[1]) && REG_P(operands[2])
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1422 */
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
#line 1428 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"

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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1514 */
rtx
gen_addsi3_flags (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CC_ZSCmode,
	48),
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1603 */
extern rtx_insn *gen_peephole2_1 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_1 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_1 (rx.md:1603)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CC_ZSCmode,
	48),
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1617 */
extern rtx_insn *gen_peephole2_2 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_2 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_2 (rx.md:1617)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CC_ZSCmode,
	48),
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1631 */
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
#line 1636 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1650 */
extern rtx_insn *gen_split_17 (rtx_insn *, rtx *);
rtx_insn *
gen_split_17 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_17 (rx.md:1650)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1666 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1730 */
extern rtx_insn *gen_split_18 (rtx_insn *, rtx *);
rtx_insn *
gen_split_18 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_18 (rx.md:1730)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 1748 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
{
  /* For negated single bit constants use the bclr insn for smaller code.  */

  if (!rx_reg_dead_or_unused_after_insn (curr_insn, CC_REG))
    FAIL;

  rx_copy_reg_dead_or_unused_notes (operands[1], curr_insn,
    emit_insn (gen_bclr (operands[0],
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2141 */
extern rtx_insn *gen_split_19 (rtx_insn *, rtx *);
rtx_insn *
gen_split_19 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_19 (rx.md:2141)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2159 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2352 */
extern rtx_insn *gen_split_20 (rtx_insn *, rtx *);
rtx_insn *
gen_split_20 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_20 (rx.md:2352)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2369 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"

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
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (gen_rtx_REG (CC_ZSCmode,
	48),
	gen_rtx_COMPARE (CC_ZSCmode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2)),
	const0_rtx)))), true);
  emit_insn (gen_rtx_SET (copy_rtx (operand0),
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		copy_rtx (operand0),
		gen_rtx_REG (CCmode,
	48)),
	49)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2372 */
extern rtx_insn *gen_split_21 (rtx_insn *, rtx *);
rtx_insn *
gen_split_21 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_21 (rx.md:2372)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2389 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"

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
	48),
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
	48)),
	49)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2468 */
rtx
gen_subsi3_flags (rtx operand0,
	rtx operand1,
	rtx operand2)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (CC_ZSCmode,
	48),
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2548 */
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
#line 2553 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2567 */
extern rtx_insn *gen_split_22 (rtx_insn *, rtx *);
rtx_insn *
gen_split_22 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_22 (rx.md:2567)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2582 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2588 */
extern rtx_insn *gen_split_23 (rtx_insn *, rtx *);
rtx_insn *
gen_split_23 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_23 (rx.md:2588)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2603 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2609 */
extern rtx_insn *gen_split_24 (rtx_insn *, rtx *);
rtx_insn *
gen_split_24 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_24 (rx.md:2609)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2624 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2643 */
extern rtx_insn *gen_split_25 (rtx_insn *, rtx *);
rtx_insn *
gen_split_25 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_25 (rx.md:2643)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2654 "/tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md"
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_3 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_3 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_3 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_4 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_4 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_4 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_5 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_5 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_5 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_6 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_6 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_6 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_7 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_7 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_7 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_8 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_8 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_8 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_9 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_9 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_9 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_10 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_10 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_10 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_11 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_11 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_11 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_12 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_12 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_12 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_13 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_13 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_13 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_14 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_14 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_14 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_15 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_15 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_15 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_16 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_16 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_16 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_17 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_17 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_17 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2697 */
extern rtx_insn *gen_peephole2_18 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_18 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_18 (rx.md:2697)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2711 */
extern rtx_insn *gen_peephole2_19 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_19 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_19 (rx.md:2711)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2711 */
extern rtx_insn *gen_peephole2_20 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_20 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_20 (rx.md:2711)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2711 */
extern rtx_insn *gen_peephole2_21 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_21 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_21 (rx.md:2711)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2711 */
extern rtx_insn *gen_peephole2_22 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_22 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_22 (rx.md:2711)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2711 */
extern rtx_insn *gen_peephole2_23 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_23 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_23 (rx.md:2711)\n");
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
		gen_hard_reg_clobber (CCmode, 48))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

