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

/* config/rx/rx.md:1906 */
extern rtx_insn *gen_peephole2_75 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_75 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_75 (rx.md:1906)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1906 */
extern rtx_insn *gen_peephole2_76 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_76 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_76 (rx.md:1906)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  operand2 = operands[2];
  (void) operand2;
  emit_insn (gen_rtx_SET (operand2,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1921 */
extern rtx_insn *gen_peephole2_77 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_77 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_77 (rx.md:1921)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1921 */
extern rtx_insn *gen_peephole2_78 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_78 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_78 (rx.md:1921)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1921 */
extern rtx_insn *gen_peephole2_79 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_79 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_79 (rx.md:1921)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:1921 */
extern rtx_insn *gen_peephole2_80 (rtx_insn *, rtx *);
rtx_insn *
gen_peephole2_80 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_peephole2_80 (rx.md:1921)\n");
  start_sequence ();
  operand0 = operands[0];
  (void) operand0;
  operand1 = operands[1];
  (void) operand1;
  emit_insn (gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:2017 */
extern rtx_insn *gen_split_14 (rtx_insn *, rtx *);
rtx_insn *
gen_split_14 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_14 (rx.md:2017)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2026 "config/rx/rx.md"
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

/* config/rx/rx.md:2046 */
extern rtx_insn *gen_split_15 (rtx_insn *, rtx *);
rtx_insn *
gen_split_15 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_15 (rx.md:2046)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2055 "config/rx/rx.md"
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

/* config/rx/rx.md:2075 */
extern rtx_insn *gen_split_16 (rtx_insn *, rtx *);
rtx_insn *
gen_split_16 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands ATTRIBUTE_UNUSED)
{
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_16 (rx.md:2075)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2086 "config/rx/rx.md"
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

/* config/rx/rx.md:2124 */
extern rtx_insn *gen_split_17 (rtx_insn *, rtx *);
rtx_insn *
gen_split_17 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_17 (rx.md:2124)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2136 "config/rx/rx.md"
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

/* config/rx/rx.md:2150 */
extern rtx_insn *gen_split_18 (rtx_insn *, rtx *);
rtx_insn *
gen_split_18 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_18 (rx.md:2150)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2164 "config/rx/rx.md"
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

/* config/rx/rx.md:2189 */
extern rtx_insn *gen_split_19 (rtx_insn *, rtx *);
rtx_insn *
gen_split_19 (rtx_insn *curr_insn ATTRIBUTE_UNUSED, rtx *operands)
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx_insn *_val = NULL;
  if (dump_file)
    fprintf (dump_file, "Splitting with gen_split_19 (rx.md:2189)\n");
  start_sequence ();
#define FAIL return (end_sequence (), _val)
#define DONE return (_val = get_insns (), end_sequence (), _val)
#line 2204 "config/rx/rx.md"

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
		gen_hard_reg_clobber (CCmode, 16))), false);
  _val = get_insns ();
  end_sequence ();
  return _val;
}

/* config/rx/rx.md:2207 */
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
#line 2214 "config/rx/rx.md"
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

/* config/rx/rx.md:2256 */
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
#line 2262 "config/rx/rx.md"
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

/* config/rx/rx.md:2256 */
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
#line 2262 "config/rx/rx.md"
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

/* config/rx/rx.md:2267 */
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
#line 2273 "config/rx/rx.md"
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

/* config/rx/rx.md:2291 */
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
#line 2298 "config/rx/rx.md"
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

/* config/rx/rx.md:2291 */
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
#line 2298 "config/rx/rx.md"
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

/* config/rx/rx.md:2291 */
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
#line 2298 "config/rx/rx.md"
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

/* config/rx/rx.md:2291 */
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
#line 2298 "config/rx/rx.md"
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

/* config/rx/rx.md:2291 */
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
#line 2298 "config/rx/rx.md"
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

/* config/rx/rx.md:2312 */
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
#line 2320 "config/rx/rx.md"
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

/* config/rx/rx.md:2338 */
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
#line 2346 "config/rx/rx.md"
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

/* config/rx/rx.md:2338 */
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
#line 2346 "config/rx/rx.md"
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

/* config/rx/rx.md:2338 */
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
#line 2346 "config/rx/rx.md"
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

/* config/rx/rx.md:2338 */
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
#line 2346 "config/rx/rx.md"
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

/* config/rx/rx.md:2357 */
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
#line 2365 "config/rx/rx.md"
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

/* config/rx/rx.md:2376 */
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
#line 2384 "config/rx/rx.md"
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

/* config/rx/rx.md:2399 */
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
#line 2405 "config/rx/rx.md"
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

/* config/rx/rx.md:2452 */
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
#line 2461 "config/rx/rx.md"
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

/* config/rx/rx.md:2508 */
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
#line 2515 "config/rx/rx.md"
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

/* config/rx/rx.md:2539 */
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
#line 2547 "config/rx/rx.md"
{
    rtx str1 = gen_rtx_REG (SImode, 1);
    rtx str2 = gen_rtx_REG (SImode, 2);
    rtx len  = gen_rtx_REG (SImode, 3);
  
    emit_move_insn (str1, force_operand (XEXP (operands[1], 0), NULL_RTX));
    emit_move_insn (str2, force_operand (XEXP (operands[2], 0), NULL_RTX));
    emit_move_insn (len, operands[3]);

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

/* config/rx/rx.md:2561 */
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
#line 2568 "config/rx/rx.md"
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

/* config/rx/rx.md:2852 */
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



void
add_clobbers (rtx pattern ATTRIBUTE_UNUSED, int insn_code_number)
{
  switch (insn_code_number)
    {
    case 167:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 1);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 2);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 3);
      break;

    case 157:
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 1);
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (SImode, 2);
      XVECEXP (pattern, 0, 5) = gen_hard_reg_clobber (SImode, 3);
      XVECEXP (pattern, 0, 6) = gen_hard_reg_clobber (CCmode, 16);
      break;

    case 156:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 1);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 3);
      break;

    case 155:
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 1);
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (SImode, 2);
      XVECEXP (pattern, 0, 5) = gen_hard_reg_clobber (SImode, 3);
      break;

    case 154:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (SImode, 1);
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 2);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 3);
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (CCmode, 16);
      break;

    case 153:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (SImode, 1);
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (SImode, 2);
      XVECEXP (pattern, 0, 4) = gen_hard_reg_clobber (SImode, 3);
      break;

    case 86:
      XVECEXP (pattern, 0, 2) = gen_hard_reg_clobber (CCmode, 16);
      break;

    case 46:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_hard_reg_clobber (CCmode, 16);
      break;

    case 173:
    case 171:
    case 170:
    case 169:
    case 149:
    case 147:
    case 146:
    case 138:
    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 116:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 108:
    case 107:
    case 106:
    case 105:
    case 104:
    case 103:
    case 102:
    case 101:
    case 100:
    case 99:
    case 98:
    case 97:
    case 96:
    case 95:
    case 94:
    case 93:
    case 92:
    case 91:
    case 90:
    case 89:
    case 87:
    case 84:
    case 82:
    case 80:
    case 78:
    case 76:
    case 74:
    case 72:
    case 70:
    case 68:
    case 66:
    case 64:
    case 52:
    case 51:
    case 47:
    case 44:
    case 42:
    case 40:
    case 37:
    case 34:
    case 19:
    case 18:
      XVECEXP (pattern, 0, 1) = gen_hard_reg_clobber (CCmode, 16);
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
    case 167:
    case 157:
    case 156:
    case 155:
    case 154:
    case 153:
    case 86:
    case 46:
    case 173:
    case 171:
    case 170:
    case 169:
    case 149:
    case 147:
    case 146:
    case 138:
    case 137:
    case 136:
    case 135:
    case 134:
    case 133:
    case 116:
    case 115:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 108:
    case 107:
    case 106:
    case 105:
    case 104:
    case 103:
    case 102:
    case 101:
    case 100:
    case 99:
    case 98:
    case 97:
    case 96:
    case 95:
    case 94:
    case 93:
    case 92:
    case 91:
    case 90:
    case 89:
    case 87:
    case 84:
    case 82:
    case 80:
    case 78:
    case 76:
    case 74:
    case 72:
    case 70:
    case 68:
    case 66:
    case 64:
    case 52:
    case 51:
    case 47:
    case 44:
    case 42:
    case 40:
    case 37:
    case 34:
    case 19:
    case 18:
      return true;

    default:
      gcc_unreachable ();
    }
}
