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

/* config/rx/rx.md:1868 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1868 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1868 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1879 */
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

/* config/rx/rx.md:1879 */
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

/* config/rx/rx.md:1879 */
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

/* config/rx/rx.md:1879 */
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

/* config/rx/rx.md:1879 */
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

/* config/rx/rx.md:1879 */
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

/* config/rx/rx.md:1879 */
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

/* config/rx/rx.md:1879 */
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

/* config/rx/rx.md:1879 */
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

/* config/rx/rx.md:1879 */
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

/* config/rx/rx.md:1879 */
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

/* config/rx/rx.md:1879 */
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

/* config/rx/rx.md:1930 */
rtx
gen_comparesi3_zero_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	16),
	gen_rtx_COMPARE (CCmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
}

/* config/rx/rx.md:1930 */
rtx
gen_comparesi3_sign_extendhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	16),
	gen_rtx_COMPARE (CCmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
}

/* config/rx/rx.md:1930 */
rtx
gen_comparesi3_zero_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	16),
	gen_rtx_COMPARE (CCmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
}

/* config/rx/rx.md:1930 */
rtx
gen_comparesi3_sign_extendqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (gen_rtx_REG (CCmode,
	16),
	gen_rtx_COMPARE (CCmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
}

/* config/rx/rx.md:1942 */
rtx
gen_addsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1953 */
rtx
gen_divsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1964 */
rtx
gen_mulsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1975 */
rtx
gen_subsf3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1986 */
rtx
gen_fix_truncsfsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1996 */
rtx
gen_floatsisf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_FLOAT (SFmode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:2017 */
rtx
gen_bitset (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	const1_rtx,
	operand1),
	operand2));
}

/* config/rx/rx.md:2035 */
rtx
gen_bitset_in_memory (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_IOR (QImode,
	gen_rtx_ASHIFT (QImode,
	const1_rtx,
	operand1),
	operand0));
}

/* config/rx/rx.md:2046 */
rtx
gen_bitinvert (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_XOR (SImode,
	gen_rtx_ASHIFT (SImode,
	const1_rtx,
	operand1),
	operand2));
}

/* config/rx/rx.md:2064 */
rtx
gen_bitinvert_in_memory (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_XOR (QImode,
	gen_rtx_ASHIFT (QImode,
	const1_rtx,
	operand1),
	operand0));
}

/* config/rx/rx.md:2075 */
rtx
gen_bitclr (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	gen_rtx_ASHIFT (SImode,
	const1_rtx,
	operand1)),
	operand2));
}

/* config/rx/rx.md:2095 */
rtx
gen_bitclr_in_memory (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_AND (QImode,
	gen_rtx_NOT (QImode,
	gen_rtx_ASHIFT (QImode,
	const1_rtx,
	operand1)),
	operand0));
}

/* config/rx/rx.md:2124 */
rtx
gen_rx_insv_reg (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	const1_rtx,
	operand1),
	operand2),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:2245 */
rtx
gen_sync_lock_test_and_setsi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	operand2)));
}

/* config/rx/rx.md:2279 */
rtx
gen_xchg_memqi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	operand2)));
}

/* config/rx/rx.md:2279 */
rtx
gen_xchg_memhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	operand1),
		gen_rtx_SET (copy_rtx (operand1),
	operand2)));
}

