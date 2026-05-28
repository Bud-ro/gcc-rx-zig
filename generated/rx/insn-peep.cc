/* Generated automatically by the program `genpeep'
from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "tree.h"
#include "rtl.h"
#include "insn-config.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "regs.h"
#include "output.h"
#include "recog.h"
#include "except.h"
#include "diagnostic-core.h"
#include "flags.h"
#include "tm-constrs.h"

extern rtx peep_operand[];

#define operands peep_operand

rtx_insn *
peephole (rtx_insn *ins1)
{
  rtx_insn *insn ATTRIBUTE_UNUSED;
  rtx x ATTRIBUTE_UNUSED, pat ATTRIBUTE_UNUSED;

  if (NEXT_INSN (ins1)
      && BARRIER_P (NEXT_INSN (ins1)))
    return 0;

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != PARALLEL) goto L359;
  if (XVECLEN (x, 0) != 2) goto L359;
  x = XVECEXP (pat, 0, 0);
  if (GET_CODE (x) != SET) goto L359;
  x = XEXP (XVECEXP (pat, 0, 0), 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L359;
  x = XEXP (XVECEXP (pat, 0, 0), 1);
  if (GET_CODE (x) != AND) goto L359;
  if (GET_MODE (x) != SImode) goto L359;
  x = XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
  operands[1] = x;
  if (! register_operand (x, SImode)) goto L359;
  x = XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
  operands[2] = x;
  if (! immediate_operand (x, SImode)) goto L359;
  x = XVECEXP (pat, 0, 1);
  if (GET_CODE (x) != CLOBBER) goto L359;
  x = XEXP (XVECEXP (pat, 0, 1), 0);
  if (GET_CODE (x) != REG) goto L359;
  if (GET_MODE (x) != CCmode) goto L359;
  if (REGNO (x) != 48) goto L359;
  if (! ((REGNO (operands[0]) == REGNO (operands[1])))) goto L359;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 359;
  return NEXT_INSN (insn);
 L359:

  return 0;
}

rtx peep_operand[3];
