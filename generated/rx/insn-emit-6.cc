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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3687 */
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3722 */
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3722 */
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3867 */
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3881 */
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
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3939 */
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:3974 */
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

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4028 */
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
		gen_hard_reg_clobber (CCmode, 48)));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4060 */
rtx
gen_save (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	95);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4069 */
rtx
gen_rstr (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	96);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4078 */
rtx
gen_mvfdc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	97));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4090 */
rtx
gen_bfmov (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (5,
		operand0,
		operand1,
		operand2,
		operand3,
		operand4),
	100));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4106 */
rtx
gen_bfmovz (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED,
	rtx operand4 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (4,
		operand1,
		operand2,
		operand3,
		operand4),
	101));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4119 */
rtx
gen_mvtdc (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	98);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4129 */
rtx
gen_mvfdr (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	99);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4141 */
rtx
gen_emula_A0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	55);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4151 */
rtx
gen_emula_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	56);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4161 */
rtx
gen_emaca_A0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	57);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4171 */
rtx
gen_emaca_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	58);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4181 */
rtx
gen_emsba_A0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	59);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4191 */
rtx
gen_emsba_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	60);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4202 */
rtx
gen_maclh_A0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	65);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4212 */
rtx
gen_maclh_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	66);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4224 */
rtx
gen_machi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	33);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4234 */
rtx
gen_machi_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	67);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4246 */
rtx
gen_maclo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	34);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4256 */
rtx
gen_maclo_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	68);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4267 */
rtx
gen_mullh_A0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	61);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4277 */
rtx
gen_mullh_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	62);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4289 */
rtx
gen_mulhi (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	35);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4299 */
rtx
gen_mulhi_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	63);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4311 */
rtx
gen_mullo (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	36);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4321 */
rtx
gen_mullo_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	64);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4332 */
rtx
gen_msblh_A0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	69);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4342 */
rtx
gen_msblh_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	70);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4352 */
rtx
gen_msbhi_A0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	71);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4362 */
rtx
gen_msbhi_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	72);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4372 */
rtx
gen_msblo_A0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	73);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4382 */
rtx
gen_msblo_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (2,
		operand0,
		operand1),
	74);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4395 */
rtx
gen_mvfachi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	37));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4405 */
rtx
gen_mvfachi_A0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	82));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4415 */
rtx
gen_mvfachi_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	83));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4427 */
rtx
gen_mvfacmi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	38));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4437 */
rtx
gen_mvfacmi_A0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	84));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4447 */
rtx
gen_mvfacmi_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	85));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4457 */
rtx
gen_mvfaclo_A0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	86));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4467 */
rtx
gen_mvfaclo_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	87));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4477 */
rtx
gen_mvfacgu_A0 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	88));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4487 */
rtx
gen_mvfacgu_A1 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand1),
	89));
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4499 */
rtx
gen_mvtachi (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	41);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4508 */
rtx
gen_mvtachi_A1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	90);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4519 */
rtx
gen_mvtaclo (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	42);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4528 */
rtx
gen_mvtaclo_A1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	91);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4537 */
rtx
gen_mvtacgu_A0 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	92);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4546 */
rtx
gen_mvtacgu_A1 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	93);
}

/* /tmp/claude/gcc-14.2.0-rx-patched/gcc/config/rx/rx.md:4556 */
rtx
gen_rdacw_A0 (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		operand0),
	75);
}

