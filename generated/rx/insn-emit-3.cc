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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1383 */
rtx
gen_abssi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ABS (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1395 */
rtx
gen_absdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ABS (DFmode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1435 */
rtx
gen_addsi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1447 */
rtx
gen_addsi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1524 */
rtx
gen_adc_internal_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	48),
	const0_rtx),
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1539 */
rtx
gen_adc_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	48),
	const0_rtx),
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1650 */
rtx
gen_adddi3_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED,
	rtx operand5 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	operand3)),
		gen_rtx_SET (operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand2),
	copy_rtx (operand3)),
	copy_rtx (operand2)),
	operand4),
	operand5)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1718 */
rtx
gen_andsi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1730 */
rtx
gen_andsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1802 */
rtx
gen_bswapsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_BSWAP (SImode,
	operand1));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1812 */
rtx
gen_bswaphi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_BSWAP (HImode,
	operand1));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1821 */
rtx
gen_divsi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1833 */
rtx
gen_divsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1846 */
rtx
gen_udivsi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1859 */
rtx
gen_udivsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1877 */
rtx
gen_mulsidi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1890 */
rtx
gen_mulsidi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1908 */
rtx
gen_umulsidi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1919 */
rtx
gen_umulsidi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1930 */
rtx
gen_smaxsi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (SImode,
	operand1,
	operand2));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1941 */
rtx
gen_smaxsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (SImode,
	operand1,
	operand2));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1953 */
rtx
gen_sminsi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (SImode,
	operand1,
	operand2));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1964 */
rtx
gen_sminsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (SImode,
	operand1,
	operand2));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1978 */
rtx
gen_unsign_maxqi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMAX (QImode,
	operand1,
	operand2));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:1989 */
rtx
gen_unsign_maxhi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMAX (HImode,
	operand1,
	operand2));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2000 */
rtx
gen_unsign_minhi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMIN (HImode,
	operand1,
	operand2));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2012 */
rtx
gen_unsign_minqi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UMIN (QImode,
	operand1,
	operand2));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2023 */
rtx
gen_mulsi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2034 */
rtx
gen_mulsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2054 */
rtx
gen_negsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NEG (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2066 */
rtx
gen_negdf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NEG (DFmode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2076 */
rtx
gen_negsf2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NEG (SFmode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2102 */
rtx
gen_one_cmplsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NOT (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2128 */
rtx
gen_iorsi3_mem (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2141 */
rtx
gen_iorsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2213 */
rtx
gen_rotlsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2237 */
rtx
gen_rotrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ROTATERT (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2261 */
rtx
gen_ashrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2291 */
rtx
gen_lshrsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:2321 */
rtx
gen_ashlsi3 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)),
		gen_hard_reg_clobber (CCmode, 48)));
}

