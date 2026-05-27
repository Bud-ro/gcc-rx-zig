/* Generated automatically by the program `genautomata'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "alias.h"
#include "tree.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "rtl.h"
#include "memmodel.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "output.h"
#include "insn-attr.h"
#include "diagnostic-core.h"
#include "flags.h"
#include "function.h"
#include "emit-rtl.h"

/* Vector translating external insn codes to internal ones.*/
static const unsigned char pipelining_translate[] ATTRIBUTE_UNUSED = {
    0,     0,     1,     2,     2,     3,     3,     4,     4,     5,
    6,     7,     8,     9,    10};

/* Comb vector for state transitions.  */
static const unsigned char pipelining_transitions[] ATTRIBUTE_UNUSED = {
   18,    17,    16,    15,    14,    13,     9,     8,     3,     1,
    0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
   11,    12,    13,    14,    15,    16,    17,    18,     0};

/* Check vector for state transitions.  */
static const unsigned char pipelining_check[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,    11,    12,    13,    14,    15,    16,    17,    18};

/* Base vector for state transitions.  */
static const unsigned char pipelining_base[] = {
    0,     1,     2,     3,     4,     5,     6,     7,     8,     9,
   10,    11,    12,    13,    14,    15,    16,    17,    18};

/* Vector of min issue delay of insns.  */
static const unsigned char pipelining_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,    18,    18,    18,    18,    18,    18,    18,    18,    18,
   18,     0,    17,    17,    17,    17,    17,    17,    17,    17,
   17,    17,     0,    16,    16,    16,    16,    16,    16,    16,
   16,    16,    16,     0,    15,    15,    15,    15,    15,    15,
   15,    15,    15,    15,     0,    14,    14,    14,    14,    14,
   14,    14,    14,    14,    14,     0,    13,    13,    13,    13,
   13,    13,    13,    13,    13,    13,     0,    12,    12,    12,
   12,    12,    12,    12,    12,    12,    12,     0,    11,    11,
   11,    11,    11,    11,    11,    11,    11,    11,     0,    10,
   10,    10,    10,    10,    10,    10,    10,    10,    10,     0,
    9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
    0,     8,     8,     8,     8,     8,     8,     8,     8,     8,
    8,     0,     7,     7,     7,     7,     7,     7,     7,     7,
    7,     7,     0,     6,     6,     6,     6,     6,     6,     6,
    6,     6,     6,     0,     5,     5,     5,     5,     5,     5,
    5,     5,     5,     5,     0,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     0,     3,     3,     3,     3,
    3,     3,     3,     3,     3,     3,     0,     2,     2,     2,
    2,     2,     2,     2,     2,     2,     2,     0,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     0};

/* Vector for locked state flags.  */
static const unsigned char pipelining_dead_lock[] = {
    0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1};


#define DFA__ADVANCE_CYCLE 14

struct DFA_chip
{
  unsigned char pipelining_automaton_state;
};


const int max_insn_queue_index = 31;

static int
internal_min_issue_delay (int insn_code, struct DFA_chip *chip ATTRIBUTE_UNUSED)
{
  int temp ATTRIBUTE_UNUSED;
  int res = -1;

  switch (insn_code)
    {
    case 0: /* throughput__1_latency__1 */
    case 1: /* throughput__1_latency__2 */
    case 2: /* throughput__2_latency__2 */
    case 3: /* throughput__3_latency__3 */
    case 4: /* throughput__3_latency__4 */
    case 5: /* throughput__4_latency__4 */
    case 6: /* throughput__4_latency__5 */
    case 7: /* throughput__5_latency__5 */
    case 8: /* throughput__5_latency__6 */
    case 9: /* throughput__6_latency__6 */
    case 10: /* throughput_10_latency_10 */
    case 11: /* throughput_11_latency_11 */
    case 12: /* throughput_16_latency_16 */
    case 13: /* throughput_18_latency_18 */
    case 14: /* $advance_cycle */

      temp = pipelining_min_issue_delay [pipelining_translate [insn_code] + chip->pipelining_automaton_state * 11];
      res = temp;
      break;


    default:
      res = -1;
      break;
    }
  return res;
}

static int
internal_state_transition (int insn_code, struct DFA_chip *chip ATTRIBUTE_UNUSED)
{
  int temp ATTRIBUTE_UNUSED;

  switch (insn_code)
    {
    case 0: /* throughput__1_latency__1 */
    case 1: /* throughput__1_latency__2 */
    case 2: /* throughput__2_latency__2 */
    case 3: /* throughput__3_latency__3 */
    case 4: /* throughput__3_latency__4 */
    case 5: /* throughput__4_latency__4 */
    case 6: /* throughput__4_latency__5 */
    case 7: /* throughput__5_latency__5 */
    case 8: /* throughput__5_latency__6 */
    case 9: /* throughput__6_latency__6 */
    case 10: /* throughput_10_latency_10 */
    case 11: /* throughput_11_latency_11 */
    case 12: /* throughput_16_latency_16 */
    case 13: /* throughput_18_latency_18 */
    case 14: /* $advance_cycle */
      {

        temp = pipelining_base [chip->pipelining_automaton_state] + pipelining_translate [insn_code];
        if (pipelining_check [temp] != chip->pipelining_automaton_state)
          return internal_min_issue_delay (insn_code, chip);
        else
          chip->pipelining_automaton_state = pipelining_transitions [temp];
        return -1;
      }

    default:
      return -1;
    }
}


static int *dfa_insn_codes;

static int dfa_insn_codes_length;

static void
dfa_insn_code_enlarge (int uid)
{
  int i = dfa_insn_codes_length;
  dfa_insn_codes_length = 2 * uid;
  dfa_insn_codes = XRESIZEVEC (int, dfa_insn_codes,
                 dfa_insn_codes_length);
  for (; i < dfa_insn_codes_length; i++)
    dfa_insn_codes[i] = -1;
}

static inline int
dfa_insn_code (rtx_insn *insn)
{
  int uid = INSN_UID (insn);
  int insn_code;

  if (uid >= dfa_insn_codes_length)
    dfa_insn_code_enlarge (uid);

  insn_code = dfa_insn_codes[uid];
  if (insn_code < 0)
    {
      insn_code = internal_dfa_insn_code (insn);
      dfa_insn_codes[uid] = insn_code;
    }
  return insn_code;
}

int
state_transition (state_t state, rtx insn)
{
  int insn_code;

  if (insn == 0)
    insn_code = DFA__ADVANCE_CYCLE;
  else
    {
      insn_code = dfa_insn_code (as_a <rtx_insn *> (insn));
      if (insn_code > DFA__ADVANCE_CYCLE)
        return -1;
    }
  return internal_state_transition (insn_code, (struct DFA_chip *) state);
}

int
min_issue_delay (state_t state, rtx_insn *insn)
{
  int insn_code;

  if (insn != 0)
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        return 0;
    }
  else
    insn_code = DFA__ADVANCE_CYCLE;

  return internal_min_issue_delay (insn_code, (struct DFA_chip *) state);
}

static int
internal_state_dead_lock_p (struct DFA_chip *ARG_UNUSED (chip))
{
  if (pipelining_dead_lock [chip->pipelining_automaton_state])
    return 1 /* TRUE */;
  return 0 /* FALSE */;
}

int
state_dead_lock_p (state_t state)
{
  return internal_state_dead_lock_p ((struct DFA_chip *) state);
}

int
state_size (void)
{
  return sizeof (struct DFA_chip);
}

static inline void
internal_reset (struct DFA_chip *chip)
{
  memset (chip, 0, sizeof (struct DFA_chip));
}

void
state_reset (state_t state)
{
  internal_reset ((struct DFA_chip *) state);
}

int
min_insn_conflict_delay (state_t state, rtx_insn *insn, rtx_insn *insn2)
{
  struct DFA_chip DFA_chip;
  int insn_code, insn2_code, transition;
  gcc_checking_assert (insn != 0);
  insn_code = dfa_insn_code (insn);
  if (insn_code >= DFA__ADVANCE_CYCLE)
    return 0;
  gcc_checking_assert (insn2 != 0);
  insn2_code = dfa_insn_code (insn2);
  if (insn2_code >= DFA__ADVANCE_CYCLE)
    return 0;
  memcpy (&DFA_chip, state, sizeof (DFA_chip));
  internal_reset (&DFA_chip);
  transition = internal_state_transition (insn_code, &DFA_chip);
  gcc_assert (transition <= 0);
  return internal_min_issue_delay (insn2_code, &DFA_chip);
}

  static const unsigned char default_latencies[] =
    {
        1,   2,   1,   1,   2,   1,   2,   1,
        2,   1,   1,   1,   1,   1,
    };
static int
internal_insn_latency (int insn_code ATTRIBUTE_UNUSED, int insn2_code ATTRIBUTE_UNUSED,
	rtx_insn *insn ATTRIBUTE_UNUSED, rtx_insn *insn2 ATTRIBUTE_UNUSED)
{
  switch (insn_code)
    {
    }
  return default_latencies[insn_code];
}

int
insn_latency (rtx_insn *insn, rtx_insn *insn2)
{
  int insn_code, insn2_code;
  gcc_checking_assert (insn != 0);
  insn_code = dfa_insn_code (insn);
  if (insn_code >= DFA__ADVANCE_CYCLE)
    return 0;
  gcc_checking_assert (insn2 != 0);
  insn2_code = dfa_insn_code (insn2);
  if (insn2_code >= DFA__ADVANCE_CYCLE)
    return 0;
  return internal_insn_latency (insn_code, insn2_code, insn, insn2);
}

static int
internal_maximal_insn_latency (int insn_code ATTRIBUTE_UNUSED)
{
  switch (insn_code)
    {
    }
  return default_latencies[insn_code];
}

int
maximal_insn_latency (rtx_insn *insn)
{
  int insn_code;
  gcc_checking_assert (insn != 0);
  insn_code = dfa_insn_code (insn);
  if (insn_code >= DFA__ADVANCE_CYCLE)
    return 0;
  return internal_maximal_insn_latency (insn_code);
}

void
print_reservation (FILE *f, rtx_insn *insn ATTRIBUTE_UNUSED)
{
  static const char *const reservation_names[] =
    {
      "throughput",
      "throughput,nothing",
      "throughput*2",
      "throughput*3",
      "throughput*3,nothing",
      "throughput*4",
      "throughput*4,nothing",
      "throughput*5",
      "throughput*5,nothing",
      "throughput*6",
      "throughput*10",
      "throughput*11",
      "throughput*16",
      "throughput*18",
      "nothing"
    };
  int insn_code;

  if (insn == 0)
    insn_code = DFA__ADVANCE_CYCLE;
  else
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        insn_code = DFA__ADVANCE_CYCLE;
    }
  fputs (reservation_names[insn_code], f);
}


#if CPU_UNITS_QUERY

int
get_cpu_unit_code (const char *cpu_unit_name)
{
  struct name_code {const char *name; int code;};
  int cmp, l, m, h;
  static struct name_code name_code_table [] =
    {
    };

  /* The following is binary search: */
  l = 0;
  h = sizeof (name_code_table) / sizeof (struct name_code) - 1;
  while (l <= h)
    {
      m = (l + h) / 2;
      cmp = strcmp (cpu_unit_name, name_code_table [m].name);
      if (cmp < 0)
        h = m - 1;
      else if (cmp > 0)
        l = m + 1;
      else
        return name_code_table [m].code;
    }
  return -1;
}

int
cpu_unit_reservation_p (state_t state, int cpu_unit_code)
{
  gcc_assert (cpu_unit_code >= 0 && cpu_unit_code < 0);
  return 0;
}


#endif /* #if CPU_UNITS_QUERY */

bool
insn_has_dfa_reservation_p (rtx_insn *insn ATTRIBUTE_UNUSED)
{
  int insn_code;

  if (insn == 0)
    insn_code = DFA__ADVANCE_CYCLE;
  else
    {
      insn_code = dfa_insn_code (insn);
      if (insn_code > DFA__ADVANCE_CYCLE)
        insn_code = DFA__ADVANCE_CYCLE;
    }

  return insn_code != DFA__ADVANCE_CYCLE;
}

void
dfa_clean_insn_cache (void)
{
  int i;

  for (i = 0; i < dfa_insn_codes_length; i++)
    dfa_insn_codes [i] = -1;
}

void
dfa_clear_single_insn_cache (rtx_insn *insn)
{
  int i;

  i = INSN_UID (insn);
  if (i < dfa_insn_codes_length)
    dfa_insn_codes [i] = -1;
}

void
dfa_start (void)
{
  dfa_insn_codes_length = get_max_uid ();
  dfa_insn_codes = XNEWVEC (int, dfa_insn_codes_length);
  dfa_clean_insn_cache ();
}

void
dfa_finish (void)
{
  free (dfa_insn_codes);
}

