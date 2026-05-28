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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2352 */
rtx
gen_ssaddsi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2372 */
rtx
gen_ssaddsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_SS_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2403 */
rtx
gen_subsi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2416 */
rtx
gen_subsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2478 */
rtx
gen_sbb_internal_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2),
	gen_rtx_GEU (SImode,
	gen_rtx_REG (CCmode,
	48),
	const0_rtx))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2493 */
rtx
gen_sbb_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2),
	gen_rtx_GEU (SImode,
	gen_rtx_REG (CCmode,
	48),
	const0_rtx))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2567 */
rtx
gen_subdi3_internal_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand2,
	operand3)),
		gen_rtx_SET (operand1,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	operand4,
	operand5),
	gen_rtx_GTU (SImode,
	copy_rtx (operand3),
	copy_rtx (operand2)))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2588 */
rtx
gen_subdi3_internal_mem2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand2,
	operand3)),
		gen_rtx_SET (operand1,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	operand4,
	operand5),
	gen_rtx_GTU (SImode,
	copy_rtx (operand3),
	copy_rtx (operand2)))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2609 */
rtx
gen_subdi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand2,
	operand3)),
		gen_rtx_SET (operand1,
	gen_rtx_MINUS (SImode,
	gen_rtx_MINUS (SImode,
	operand4,
	operand5),
	gen_rtx_GTU (SImode,
	copy_rtx (operand3),
	copy_rtx (operand2)))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2630 */
rtx
gen_xorsi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2643 */
rtx
gen_xorsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_plussi3_zero_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_andsi3_zero_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_iorsi3_zero_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_xorsi3_zero_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_XOR (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_plussi3_sign_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_andsi3_sign_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_iorsi3_sign_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_xorsi3_sign_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_XOR (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_plussi3_zero_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_andsi3_zero_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_iorsi3_zero_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_xorsi3_zero_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_XOR (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_plussi3_sign_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_andsi3_sign_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_iorsi3_sign_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2763 */
rtx
gen_xorsi3_sign_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_XOR (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
rtx
gen_divsi3_zero_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_DIV (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
rtx
gen_udivsi3_zero_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
rtx
gen_minussi3_zero_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
rtx
gen_divsi3_sign_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_DIV (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
rtx
gen_udivsi3_sign_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
rtx
gen_minussi3_sign_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
rtx
gen_divsi3_zero_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_DIV (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
rtx
gen_udivsi3_zero_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
rtx
gen_minussi3_zero_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
rtx
gen_divsi3_sign_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_DIV (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
rtx
gen_udivsi3_sign_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2775 */
rtx
gen_minussi3_sign_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2))),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
rtx
gen_smaxsi3_zero_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
rtx
gen_sminsi3_zero_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
rtx
gen_multsi3_zero_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
rtx
gen_smaxsi3_sign_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
rtx
gen_sminsi3_sign_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
rtx
gen_multsi3_sign_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
rtx
gen_smaxsi3_zero_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
rtx
gen_sminsi3_zero_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
rtx
gen_multsi3_zero_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
rtx
gen_smaxsi3_sign_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
rtx
gen_sminsi3_sign_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2787 */
rtx
gen_multsi3_sign_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (SImode,
	operand1,
	gen_rtx_SIGN_EXTEND (SImode,
	operand2)));
}

