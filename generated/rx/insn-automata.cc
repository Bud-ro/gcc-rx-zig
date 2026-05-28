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
   34,    32,    30,    28,    26,    24,    16,    14,     4,     1,
    0,    36,    45,    55,    67,    80,    93,   141,   149,   184,
  188,     2,     3,    56,    68,    81,    94,   108,   150,   159,
  186,   187,     4,     5,    44,    53,    64,    76,    88,   136,
  144,   179,   184,     6,     7,    54,    65,    77,    89,   103,
  145,   154,   173,   177,     8,     9,    66,    78,    90,   104,
  115,   155,   165,   168,   171,    10,    11,    79,    91,   105,
  116,   127,   160,   162,   163,   166,    12,    13,    92,   106,
  117,   128,   140,   151,   152,   153,   158,    14,    15,    43,
   52,    63,    75,    87,   135,   143,   144,   149,    16,    17,
   42,    50,    60,    71,    83,   131,   135,   136,   141,    18,
   19,    51,    61,    72,    84,    99,   120,   123,   124,   129,
   20,    21,    62,    73,    85,   100,   109,   110,   112,   113,
  118,    22,    23,    74,    86,    95,    96,    97,    98,   101,
  102,   107,    24,    25,    41,    49,    59,    70,    82,    83,
   87,    88,    93,    26,    27,    40,    48,    58,    69,    70,
   71,    75,    76,    80,    28,    29,    39,    47,    57,    58,
   59,    60,    63,    64,    67,    30,    31,    38,    46,    47,
   48,    49,    50,    52,    53,    55,    32,    33,    37,    38,
   39,    40,    41,    42,    43,    44,    45,    34,    35,    33,
   31,    29,    27,    25,    17,    15,     5,    36,     0,     4,
    6,     8,    10,    12,    14,    16,    18,    20,    22,    24,
   26,    28,    30,    32,    34,     0,     2,    35,    33,    31,
   29,    27,    19,    17,     7,     3,    37,    38,    39,    40,
   51,    21,    42,    54,     9,    56,     5,    46,    47,    48,
   61,    62,    23,    50,    65,    66,    11,    68,    44,    57,
   58,    72,    73,    74,    25,    60,    77,    78,    79,    13,
   81,    53,    69,    84,    85,    86,    41,    71,    89,    90,
   91,    92,    15,    94,    64,    49,    59,    70,    99,   100,
   95,    83,   103,   104,   105,   106,    43,   108,    76,    96,
  111,   109,    98,   114,   115,   116,   117,    52,   119,    88,
  121,   122,    97,   110,   125,   126,   127,   128,    63,   130,
  102,   132,   133,   134,    82,   120,   137,   138,   139,   140,
   75,   142,   113,   131,   145,   146,   147,   148,    87,   150,
  124,   123,   135,   154,   155,   156,   157,   101,   159,   136,
  161,   112,   151,   164,   165,   160,   167,   144,   169,   170,
  162,   172,   153,   174,   175,   176,   152,   178,   163,   180,
  181,   182,   183,   143,   185,   168,   173,   186,   189,   179,
};

/* Check vector for state transitions.  */
static const unsigned char pipelining_check[] = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
    2,     2,     2,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     6,     6,     6,     6,     6,     6,
    6,     6,     6,     6,     6,     8,     8,     8,     8,     8,
    8,     8,     8,     8,     8,     8,    10,    10,    10,    10,
   10,    10,    10,    10,    10,    10,    10,    12,    12,    12,
   12,    12,    12,    12,    12,    12,    12,    12,    14,    14,
   14,    14,    14,    14,    14,    14,    14,    14,    14,    16,
   16,    16,    16,    16,    16,    16,    16,    16,    16,    16,
   18,    18,    18,    18,    18,    18,    18,    18,    18,    18,
   18,    20,    20,    20,    20,    20,    20,    20,    20,    20,
   20,    20,    22,    22,    22,    22,    22,    22,    22,    22,
   22,    22,    22,    24,    24,    24,    24,    24,    24,    24,
   24,    24,    24,    24,    26,    26,    26,    26,    26,    26,
   26,    26,    26,    26,    26,    28,    28,    28,    28,    28,
   28,    28,    28,    28,    28,    28,    30,    30,    30,    30,
   30,    30,    30,    30,    30,    30,    30,    32,    32,    32,
   32,    32,    32,    32,    32,    32,    32,    32,    34,    34,
   34,    34,    34,    34,    34,    34,    34,    34,    34,     3,
    5,     7,     9,    11,    13,    15,    17,    19,    21,    23,
   25,    27,    29,    31,    33,    35,    36,    37,    38,    39,
   40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
   50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
   60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
   70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
   80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
   90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
  100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
  110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
  120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
  130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
  140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
  150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
  160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
  170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
  180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
};

/* Base vector for state transitions.  */
static const unsigned short pipelining_base[] = {
    0,    11,    22,   199,    33,   200,    44,   201,    55,   202,
   66,   203,    77,   204,    88,   205,    99,   206,   110,   207,
  121,   208,   132,   209,   143,   210,   154,   211,   165,   212,
  176,   213,   187,   214,   198,   215,   216,   217,   218,   219,
  220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
  230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
  240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
  250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
  260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
  270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
  280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
  290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
  300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
  310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
  320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
  330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
  340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
  350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
  360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
};

/* Vector of min issue delay of insns.  */
static const unsigned char pipelining_min_issue_delay[] ATTRIBUTE_UNUSED = {
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     0,     0,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
    0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     0,     0,     0,     0,     0,     0,     0,
    0,     0,     0,     0,     0,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     0,     2,     2,     2,
    2,     2,     2,     2,     2,     2,     2,     0,     2,     2,
    2,     2,     2,     2,     2,     2,     2,     2,     0,     2,
    2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
    2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    2,     0,     2,     2,     2,     2,     2,     2,     2,     2,
    2,     2,     0,     2,     2,     2,     2,     2,     2,     2,
    2,     2,     2,     0,     2,     2,     2,     2,     2,     2,
    2,     2,     2,     2,     0,     2,     2,     2,     2,     2,
    2,     2,     2,     2,     2,     0,     3,     3,     3,     3,
    3,     3,     3,     3,     3,     3,     0,     3,     3,     3,
    3,     3,     3,     3,     3,     3,     3,     0,     3,     3,
    3,     3,     3,     3,     3,     3,     3,     3,     0,     3,
    3,     3,     3,     3,     3,     3,     3,     3,     3,     0,
    3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
    0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
    2,     0,     3,     3,     3,     3,     3,     3,     3,     3,
    3,     3,     0,     3,     3,     3,     3,     3,     3,     3,
    3,     3,     3,     0,     2,     2,     2,     2,     2,     2,
    2,     2,     2,     2,     0,     3,     3,     3,     3,     3,
    3,     3,     3,     3,     3,     0,     2,     2,     2,     2,
    2,     2,     2,     2,     2,     2,     0,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     0,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     4,     0,     4,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    0,     3,     3,     3,     3,     3,     3,     3,     3,     3,
    3,     0,     2,     2,     2,     2,     2,     2,     2,     2,
    2,     2,     0,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     0,     4,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     0,     3,     3,     3,     3,     3,
    3,     3,     3,     3,     3,     0,     2,     2,     2,     2,
    2,     2,     2,     2,     2,     2,     0,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     0,     3,     3,
    3,     3,     3,     3,     3,     3,     3,     3,     0,     5,
    5,     5,     5,     5,     5,     5,     5,     5,     5,     0,
    5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
    0,     5,     5,     5,     5,     5,     5,     5,     5,     5,
    5,     0,     4,     4,     4,     4,     4,     4,     4,     4,
    4,     4,     0,     3,     3,     3,     3,     3,     3,     3,
    3,     3,     3,     0,     2,     2,     2,     2,     2,     2,
    2,     2,     2,     2,     0,     5,     5,     5,     5,     5,
    5,     5,     5,     5,     5,     0,     5,     5,     5,     5,
    5,     5,     5,     5,     5,     5,     0,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     0,     3,     3,
    3,     3,     3,     3,     3,     3,     3,     3,     0,     2,
    2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
    5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
    0,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    4,     0,     6,     6,     6,     6,     6,     6,     6,     6,
    6,     6,     0,     6,     6,     6,     6,     6,     6,     6,
    6,     6,     6,     0,     5,     5,     5,     5,     5,     5,
    5,     5,     5,     5,     0,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     0,     3,     3,     3,     3,
    3,     3,     3,     3,     3,     3,     0,     6,     6,     6,
    6,     6,     6,     6,     6,     6,     6,     0,     6,     6,
    6,     6,     6,     6,     6,     6,     6,     6,     0,     5,
    5,     5,     5,     5,     5,     5,     5,     5,     5,     0,
    4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
    0,     3,     3,     3,     3,     3,     3,     3,     3,     3,
    3,     0,     2,     2,     2,     2,     2,     2,     2,     2,
    2,     2,     0,     6,     6,     6,     6,     6,     6,     6,
    6,     6,     6,     0,     5,     5,     5,     5,     5,     5,
    5,     5,     5,     5,     0,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     0,     5,     5,     5,     5,
    5,     5,     5,     5,     5,     5,     0,     6,     6,     6,
    6,     6,     6,     6,     6,     6,     6,     0,     7,     7,
    7,     7,     7,     7,     7,     7,     7,     7,     0,     6,
    6,     6,     6,     6,     6,     6,     6,     6,     6,     0,
    5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
    0,     7,     7,     7,     7,     7,     7,     7,     7,     7,
    7,     0,     7,     7,     7,     7,     7,     7,     7,     7,
    7,     7,     0,     6,     6,     6,     6,     6,     6,     6,
    6,     6,     6,     0,     5,     5,     5,     5,     5,     5,
    5,     5,     5,     5,     0,     4,     4,     4,     4,     4,
    4,     4,     4,     4,     4,     0,     3,     3,     3,     3,
    3,     3,     3,     3,     3,     3,     0,     7,     7,     7,
    7,     7,     7,     7,     7,     7,     7,     0,     6,     6,
    6,     6,     6,     6,     6,     6,     6,     6,     0,     6,
    6,     6,     6,     6,     6,     6,     6,     6,     6,     0,
    8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
    0,     7,     7,     7,     7,     7,     7,     7,     7,     7,
    7,     0,     8,     8,     8,     8,     8,     8,     8,     8,
    8,     8,     0,     8,     8,     8,     8,     8,     8,     8,
    8,     8,     8,     0,     7,     7,     7,     7,     7,     7,
    7,     7,     7,     7,     0,     6,     6,     6,     6,     6,
    6,     6,     6,     6,     6,     0,     5,     5,     5,     5,
    5,     5,     5,     5,     5,     5,     0,     4,     4,     4,
    4,     4,     4,     4,     4,     4,     4,     0,     8,     8,
    8,     8,     8,     8,     8,     8,     8,     8,     0,     7,
    7,     7,     7,     7,     7,     7,     7,     7,     7,     0,
    9,     9,     9,     9,     9,     9,     9,     9,     9,     9,
    0,     8,     8,     8,     8,     8,     8,     8,     8,     8,
    8,     0,     7,     7,     7,     7,     7,     7,     7,     7,
    7,     7,     0,     9,     9,     9,     9,     9,     9,     9,
    9,     9,     9,     0,     9,     9,     9,     9,     9,     9,
    9,     9,     9,     9,     0,     8,     8,     8,     8,     8,
    8,     8,     8,     8,     8,     0,     7,     7,     7,     7,
    7,     7,     7,     7,     7,     7,     0,     6,     6,     6,
    6,     6,     6,     6,     6,     6,     6,     0,     5,     5,
    5,     5,     5,     5,     5,     5,     5,     5,     0,     9,
    9,     9,     9,     9,     9,     9,     9,     9,     9,     0,
    8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
    0,    10,    10,    10,    10,    10,    10,    10,    10,    10,
   10,     0,     9,     9,     9,     9,     9,     9,     9,     9,
    9,     9,     0,     8,     8,     8,     8,     8,     8,     8,
    8,     8,     8,     0,     7,     7,     7,     7,     7,     7,
    7,     7,     7,     7,     0,    10,    10,    10,    10,    10,
   10,    10,    10,    10,    10,     0,    10,    10,    10,    10,
   10,    10,    10,    10,    10,    10,     0,     9,     9,     9,
    9,     9,     9,     9,     9,     9,     9,     0,     8,     8,
    8,     8,     8,     8,     8,     8,     8,     8,     0,     7,
    7,     7,     7,     7,     7,     7,     7,     7,     7,     0,
    6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
    0,    10,    10,    10,    10,    10,    10,    10,    10,    10,
   10,     0,     9,     9,     9,     9,     9,     9,     9,     9,
    9,     9,     0,    11,    11,    11,    11,    11,    11,    11,
   11,    11,    11,     0,    11,    11,    11,    11,    11,    11,
   11,    11,    11,    11,     0,    10,    10,    10,    10,    10,
   10,    10,    10,    10,    10,     0,     9,     9,     9,     9,
    9,     9,     9,     9,     9,     9,     0,     8,     8,     8,
    8,     8,     8,     8,     8,     8,     8,     0,     7,     7,
    7,     7,     7,     7,     7,     7,     7,     7,     0,    11,
   11,    11,    11,    11,    11,    11,    11,    11,    11,     0,
   10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
    0,    10,    10,    10,    10,    10,    10,    10,    10,    10,
   10,     0,    11,    11,    11,    11,    11,    11,    11,    11,
   11,    11,     0,    12,    12,    12,    12,    12,    12,    12,
   12,    12,    12,     0,    11,    11,    11,    11,    11,    11,
   11,    11,    11,    11,     0,    10,    10,    10,    10,    10,
   10,    10,    10,    10,    10,     0,     9,     9,     9,     9,
    9,     9,     9,     9,     9,     9,     0,     8,     8,     8,
    8,     8,     8,     8,     8,     8,     8,     0,    12,    12,
   12,    12,    12,    12,    12,    12,    12,    12,     0,    11,
   11,    11,    11,    11,    11,    11,    11,    11,    11,     0,
   10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
    0,     9,     9,     9,     9,     9,     9,     9,     9,     9,
    9,     0,    11,    11,    11,    11,    11,    11,    11,    11,
   11,    11,     0,    13,    13,    13,    13,    13,    13,    13,
   13,    13,    13,     0,    12,    12,    12,    12,    12,    12,
   12,    12,    12,    12,     0,    11,    11,    11,    11,    11,
   11,    11,    11,    11,    11,     0,    13,    13,    13,    13,
   13,    13,    13,    13,    13,    13,     0,    12,    12,    12,
   12,    12,    12,    12,    12,    12,    12,     0,    14,    14,
   14,    14,    14,    14,    14,    14,    14,    14,     0,    13,
   13,    13,    13,    13,    13,    13,    13,    13,    13,     0,
   12,    12,    12,    12,    12,    12,    12,    12,    12,    12,
    0,    14,    14,    14,    14,    14,    14,    14,    14,    14,
   14,     0,    13,    13,    13,    13,    13,    13,    13,    13,
   13,    13,     0,    15,    15,    15,    15,    15,    15,    15,
   15,    15,    15,     0,    14,    14,    14,    14,    14,    14,
   14,    14,    14,    14,     0,    13,    13,    13,    13,    13,
   13,    13,    13,    13,    13,     0,    12,    12,    12,    12,
   12,    12,    12,    12,    12,    12,     0,    15,    15,    15,
   15,    15,    15,    15,    15,    15,    15,     0,    14,    14,
   14,    14,    14,    14,    14,    14,    14,    14,     0,    16,
   16,    16,    16,    16,    16,    16,    16,    16,    16,     0,
   15,    15,    15,    15,    15,    15,    15,    15,    15,    15,
    0,    14,    14,    14,    14,    14,    14,    14,    14,    14,
   14,     0,    13,    13,    13,    13,    13,    13,    13,    13,
   13,    13,     0,    12,    12,    12,    12,    12,    12,    12,
   12,    12,    12,     0,    16,    16,    16,    16,    16,    16,
   16,    16,    16,    16,     0,    15,    15,    15,    15,    15,
   15,    15,    15,    15,    15,     0,    16,    16,    16,    16,
   16,    16,    16,    16,    16,    16,     0,    17,    17,    17,
   17,    17,    17,    17,    17,    17,    17,     0,    18,    18,
   18,    18,    18,    18,    18,    18,    18,    18,     0,    17,
   17,    17,    17,    17,    17,    17,    17,    17,    17,     0,
};

/* Vector for locked state flags.  */
static const unsigned char pipelining_dead_lock[] = {
    0,     0,     0,     1,     0,     1,     0,     1,     0,     1,
    0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
    0,     1,     0,     1,     0,     1,     0,     1,     0,     1,
    0,     1,     0,     1,     0,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
    1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
};


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
      "throughput_pri|throughput_sec",
      "throughput_pri|throughput_sec,nothing",
      "throughput_pri*2|throughput_sec*2",
      "throughput_pri*3|throughput_sec*3",
      "throughput_pri*3|throughput_sec*3,nothing",
      "throughput_pri*4|throughput_sec*4",
      "throughput_pri*4|throughput_sec*4,nothing",
      "throughput_pri*5|throughput_sec*5",
      "throughput_pri*5|throughput_sec*5,nothing",
      "throughput_pri*6|throughput_sec*6",
      "throughput_pri*10|throughput_sec*10",
      "throughput_pri*11|throughput_sec*11",
      "throughput_pri*16|throughput_sec*16",
      "throughput_pri*18|throughput_sec*18",
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

