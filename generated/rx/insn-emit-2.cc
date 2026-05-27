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

/* config/rx/rx.md:322 */
rtx
gen_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

/* config/rx/rx.md:331 */
rtx
gen_indirect_jump (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (pc_rtx,
	operand0);
}

/* config/rx/rx.md:340 */
rtx
gen_tablejump (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

/* config/rx/rx.md:359 */
rtx
gen_simple_return (void)
{
  return simple_return_rtx;
}

/* config/rx/rx.md:369 */
rtx
gen_deallocate_and_return (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (SImode,
	0),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	0),
	gen_rtx_CONST (SImode,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand0),
	13)))),
		ret_rtx));
}

/* config/rx/rx.md:380 */
rtx
gen_pop_and_return (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		operand1,
		ret_rtx));
}

/* config/rx/rx.md:395 */
rtx
gen_fast_interrupt_return (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		ret_rtx),
	11);
}

/* config/rx/rx.md:403 */
rtx
gen_exception_return (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		ret_rtx),
	10);
}

/* config/rx/rx.md:411 */
rtx
gen_naked_return (void)
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		ret_rtx),
	12);
}

/* config/rx/rx.md:440 */
rtx
gen_call_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (QImode,
	operand0),
	const0_rtx),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:467 */
rtx
gen_call_value_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (QImode,
	operand1),
	const0_rtx)),
		gen_hard_reg_clobber (CCmode, 16)));
}

/* config/rx/rx.md:499 */
rtx
gen_sibcall_internal (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (QImode,
	operand0),
	const0_rtx),
		ret_rtx));
}

/* config/rx/rx.md:524 */
rtx
gen_sibcall_value_internal (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_CALL (VOIDmode,
	gen_rtx_MEM (QImode,
	operand1),
	const0_rtx)),
		ret_rtx));
}

/* config/rx/rx.md:606 */
rtx
gen_extendhisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* config/rx/rx.md:606 */
rtx
gen_extendqisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

/* config/rx/rx.md:616 */
rtx
gen_zero_extendhisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* config/rx/rx.md:616 */
rtx
gen_zero_extendqisi2 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return gen_rtx_SET (operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1));
}

/* config/rx/rx.md:626 */
rtx
gen_stack_push (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (gen_rtx_REG (SImode,
	0),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	0),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
		gen_rtx_SET (gen_rtx_MEM (SImode,
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	0),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)])),
	operand0)));
}

/* config/rx/rx.md:637 */
rtx
gen_stack_pushm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return operand1;
}

/* config/rx/rx.md:651 */
rtx
gen_stack_pop (rtx operand0 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	0))),
		gen_rtx_SET (gen_rtx_REG (SImode,
	0),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	0),
	const_int_rtx[MAX_SAVED_CONST_INT + (4)]))));
}

/* config/rx/rx.md:663 */
rtx
gen_stack_popm (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED)
{
  return operand1;
}

/* config/rx/rx.md:677 */
rtx
gen_cstoresi4 (rtx operand0 ATTRIBUTE_UNUSED,
	rtx operand1 ATTRIBUTE_UNUSED,
	rtx operand2 ATTRIBUTE_UNUSED,
	rtx operand3 ATTRIBUTE_UNUSED)
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (operand0,
	gen_rtx_fmt_ee (GET_CODE (operand1), SImode,
		operand2,
		operand3)),
		gen_hard_reg_clobber (CCmode, 16)));
}

