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

/* config/rx/rx.md:2424 */
rtx
gen_rx_movstr (void)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (gen_rtx_MEM (BLKmode,
	gen_rtx_REG (SImode,
	1)),
	gen_rtx_MEM (BLKmode,
	gen_rtx_REG (SImode,
	2))),
		gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (3,
		gen_rtx_REG (SImode,
	1),
		gen_rtx_REG (SImode,
	2),
		gen_rtx_REG (SImode,
	3)),
	20),
		gen_hard_reg_clobber (SImode, 1),
		gen_hard_reg_clobber (SImode, 2),
		gen_hard_reg_clobber (SImode, 3)));
}

/* config/rx/rx.md:2437 */
rtx
gen_rx_strend (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (5,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand1,
		gen_rtx_REG (SImode,
	3)),
	23)),
		gen_hard_reg_clobber (SImode, 1),
		gen_hard_reg_clobber (SImode, 2),
		gen_hard_reg_clobber (SImode, 3),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:2494 */
rtx
gen_rx_cpymem (void)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (6,
		gen_rtx_SET (gen_rtx_MEM (BLKmode,
	gen_rtx_REG (SImode,
	1)),
	gen_rtx_MEM (BLKmode,
	gen_rtx_REG (SImode,
	2))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	3)),
		gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (3,
		gen_rtx_REG (SImode,
	1),
		gen_rtx_REG (SImode,
	2),
		gen_rtx_REG (SImode,
	3)),
	21),
		gen_hard_reg_clobber (SImode, 1),
		gen_hard_reg_clobber (SImode, 2),
		gen_hard_reg_clobber (SImode, 3)));
}

/* config/rx/rx.md:2528 */
rtx
gen_rx_setmem (void)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (gen_rtx_MEM (BLKmode,
	gen_rtx_REG (SImode,
	1)),
	gen_rtx_UNSPEC_VOLATILE (BLKmode,
	gen_rtvec (3,
		gen_rtx_REG (SImode,
	1),
		gen_rtx_REG (SImode,
	2),
		gen_rtx_REG (SImode,
	3)),
	22)),
		gen_hard_reg_clobber (SImode, 1),
		gen_hard_reg_clobber (SImode, 3)));
}

/* config/rx/rx.md:2582 */
rtx
gen_rx_cmpstrn (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (3,
		gen_rtx_REG (SImode,
	1),
		gen_rtx_REG (SImode,
	2),
		gen_rtx_REG (SImode,
	3)),
	24)),
		gen_rtx_USE (VOIDmode,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_hard_reg_clobber (SImode, 1),
		gen_hard_reg_clobber (SImode, 2),
		gen_hard_reg_clobber (SImode, 3),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:2616 */
rtx
gen_machi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	33);
}

/* config/rx/rx.md:2626 */
rtx
gen_maclo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	34);
}

/* config/rx/rx.md:2636 */
rtx
gen_mulhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	35);
}

/* config/rx/rx.md:2646 */
rtx
gen_mullo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	36);
}

/* config/rx/rx.md:2656 */
rtx
gen_mvfachi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	37));
}

/* config/rx/rx.md:2666 */
rtx
gen_mvfacmi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		const0_rtx),
	38));
}

/* config/rx/rx.md:2676 */
rtx
gen_mvtachi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	41);
}

/* config/rx/rx.md:2685 */
rtx
gen_mvtaclo (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	42);
}

/* config/rx/rx.md:2694 */
rtx
gen_racw (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	45);
}

/* config/rx/rx.md:2703 */
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

/* config/rx/rx.md:2719 */
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

/* config/rx/rx.md:2729 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:2743 */
rtx
gen_clrpsw (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	31),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:2753 */
rtx
gen_setpsw (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	50),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:2763 */
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

/* config/rx/rx.md:2775 */
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
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:2786 */
rtx
gen_mvtipl (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	44);
}

/* config/rx/rx.md:2797 */
rtx
gen_brk (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	30);
}

/* config/rx/rx.md:2807 */
rtx
gen_int (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	32);
}

/* config/rx/rx.md:2816 */
rtx
gen_wait (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	51);
}

/* config/rx/rx.md:2832 */
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

/* config/rx/rx.md:2845 */
rtx
gen_nop (void)
{
  return const0_rtx;
}

/* config/rx/rx.md:2859 */
rtx
gen_movdi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

/* config/rx/rx.md:2868 */
rtx
gen_movdf (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	operand1);
}

