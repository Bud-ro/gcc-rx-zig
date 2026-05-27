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

/* config/rx/rx.md:710 */
rtx
gen_cstoresf4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand2,
		operand3));
}

/* config/rx/rx.md:839 */
rtx
gen_abssi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_ABS (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:879 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:942 */
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
	16),
	const0_rtx),
	operand1),
	operand2)),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1029 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1097 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1155 */
rtx
gen_bswapsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_BSWAP (SImode,
	operand1));
}

/* config/rx/rx.md:1164 */
rtx
gen_bswaphi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_BSWAP (HImode,
	operand1));
}

/* config/rx/rx.md:1172 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1184 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1201 */
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

/* config/rx/rx.md:1218 */
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

/* config/rx/rx.md:1228 */
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

/* config/rx/rx.md:1239 */
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

/* config/rx/rx.md:1250 */
rtx
gen_umaxhi3_u (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2)));
}

/* config/rx/rx.md:1250 */
rtx
gen_umaxqi3_u (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (SImode,
	operand1,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2)));
}

/* config/rx/rx.md:1261 */
rtx
gen_uminhi3_ur (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2),
	operand1));
}

/* config/rx/rx.md:1261 */
rtx
gen_uminqi3_ur (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMIN (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2),
	operand1));
}

/* config/rx/rx.md:1272 */
rtx
gen_umaxhi3_ur (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2),
	operand1));
}

/* config/rx/rx.md:1272 */
rtx
gen_umaxqi3_ur (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SMAX (SImode,
	gen_rtx_ZERO_EXTEND (SImode,
	operand2),
	operand1));
}

/* config/rx/rx.md:1331 */
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

/* config/rx/rx.md:1351 */
rtx
gen_negsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NEG (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1377 */
rtx
gen_one_cmplsi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_NOT (SImode,
	operand1)),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1401 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1458 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1480 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:1502 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

