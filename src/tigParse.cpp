/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user declarations.  */
#line 1 "tig.y" /* glr.c:207  */

	#define YYDEBUG 1
    #include <cstdio>
	#include <string>

	#include "compiler.h"
	#include "syntaxNode.h"


    void yyerror(const char *);
    int yylex(void);


	CTigCompiler* tigC;

	//extern int yylineno;
	extern int lineNo;
	extern char* yytext;
	extern fpos_t lastLinePos;
	extern fpos_t linePos;
	extern FILE* yyin;

#line 77 "tigParse.cpp" /* glr.c:207  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#include "tigParse.hpp"

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */

#line 105 "tigParse.cpp" /* glr.c:230  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify clang.  */
# define YYLONGJMP(Env, Val) (longjmp (Env, Val), YYASSERT (0))
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#ifndef YYASSERT
# define YYASSERT(Condition) ((void) ((Condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  100
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   973

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNRULES -- Number of states.  */
#define YYNSTATES  301
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 8
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,     2,     2,     2,    62,    77,     2,
      71,    72,    60,    58,    70,    59,    74,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    67,
      54,    73,    52,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    75,     2,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,    69,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    53,    55,    56,
      57,    64,    65,    66
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,    83,    83,    84,    88,    89,    90,    91,    95,    96,
      97,    98,   100,   101,   102,   103,   104,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   129,   133,   134,
     138,   139,   143,   144,   149,   153,   157,   158,   162,   166,
     167,   173,   174,   175,   176,   177,   183,   184,   189,   193,
     194,   198,   198,   200,   204,   205,   209,   210,   211,   215,
     219,   231,   232,   233,   234,   235,   239,   240,   244,   245,
     249,   253,   266,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   286,   287,
     288,   289,   290,   292,   293,   294,   295,   299,   300,   301,
     302,   307,   312,   313,   318,   322,   323,   328,   329,   332,
     333,   334,   338,   339,   343,   347,   352,   353,   357,   361,
     365,   366,   370,   371,   373,   378,   382,   383,   388,   389,
     390,   391,   392,   393,   397,   398
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRINT", "SET_WINDOW", "CLEAR_WINDOW",
  "OPEN_WINDOW", "END", "RETURN", "EVENT", "OPTION", "OBJECT", "ARROW",
  "INHERITS", "SUPERCLASS", "GETSTRING", "HOT", "MAKE_HOT", "PURGE", "ALL",
  "CLEAR", "USED", "STYLE", "CAP", "ARRAY", "MESSAGE", "START_TIMER",
  "START_EVENT", "AT", "INTEGER", "IDENTIFIER", "STRING", "ENDL", "IF",
  "FOR", "EACH", "IN", "OF", "IS", "NOT", "SELF", "CHILDREN", "ADD_ASSIGN",
  "BREAK", "TRON", "TROFF", "NOTHING", "MOVE", "TO", "EQ", "NE", "GE",
  "'>'", "LE", "'<'", "OR", "AND", "HAS", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'!'", "UMINUS", "IFX", "ELSE", "';'", "'{'", "'}'", "','", "'('",
  "')'", "'='", "'.'", "'['", "']'", "'&'", "$accept", "program",
  "tigcode", "statement", "memberId", "return_expr", "assignment",
  "var_or_obj_memb", "variable_assignee", "obj_member_assignee",
  "obj_expr", "element_assignee", "string_statement", "dec_statement",
  "level", "obj_identifier", "class_identifier", "optional_member_list",
  "$@1", "member_decl_list", "member_decl", "memb_decl_identifier",
  "global_func_decl", "init_expr", "memb_function_def", "statement_list",
  "string_literal", "event_identifier", "code_block", "expression",
  "variable_expr", "deref_variable_expr", "member_call", "func_call",
  "func_ident", "optional_param_list", "param_list", "constant_expr",
  "integer_constant", "array_init_expr", "expr_seq", "array_dyn_init_elem",
  "array_init_list", "constant_seq", "array_init_const",
  "array_element_expr", "array_index_expr", "comparison_expr",
  "logic_expression", YY_NULL
};
#endif

#define YYPACT_NINF -224
#define YYTABLE_NINF -137

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
     451,   556,   -51,   -18,   556,    14,   556,  -224,   529,    54,
     556,    18,    71,     9,  -224,   -30,    57,  -224,    45,    69,
      72,    67,    67,   496,   161,   451,  -224,   106,    44,  -224,
    -224,    37,   105,   128,  -224,    42,     3,   168,   132,   143,
    -224,  -224,   136,   138,   137,  -224,  -224,   556,   139,   140,
     141,  -224,   150,  -224,    -7,   142,  -224,   556,   556,   556,
     556,   177,   134,    49,   202,   778,    56,  -224,  -224,   146,
    -224,  -224,  -224,  -224,  -224,   556,  -224,   797,  -224,   152,
     911,   153,   690,   155,  -224,   148,   911,    61,  -224,  -224,
     198,   556,    67,  -224,  -224,  -224,   -26,   175,  -224,   361,
    -224,  -224,  -224,  -224,   159,   556,   556,    35,   -21,   556,
    -224,  -224,   203,   171,   168,     7,  -224,   167,   206,   171,
    -224,   556,  -224,  -224,   556,   586,   556,   556,   556,    67,
    -224,  -224,   600,   911,    62,  -224,  -224,    35,    67,   204,
     205,   556,   556,   556,   556,   556,   556,   556,   556,   556,
     556,   556,   556,  -224,   556,   615,  -224,  -224,  -224,   556,
    -224,   556,  -224,   556,   209,   630,   -12,    67,  -224,  -224,
    -224,   556,   816,   911,   166,  -224,   170,   129,   172,   911,
     182,   171,  -224,   172,   223,  -224,   187,   911,   -54,  -224,
     712,   645,   660,   111,  -224,   556,  -224,   179,    37,    67,
      67,    20,    20,    20,    20,    20,    20,    20,    20,    20,
     194,   194,  -224,    21,   192,   734,   190,   835,   911,   195,
     496,    67,    67,   -46,   854,  -224,   189,   556,  -224,  -224,
     199,  -224,  -224,   191,  -224,   104,  -224,   211,   556,  -224,
    -224,  -224,  -224,  -224,    37,    37,  -224,  -224,   556,   556,
    -224,  -224,   215,   496,   316,  -224,  -224,   118,  -224,   223,
    -224,  -224,  -224,   496,   556,   125,   151,  -224,  -224,  -224,
    -224,  -224,  -224,   756,   873,   892,   496,  -224,  -224,  -224,
    -224,   406,   119,  -224,  -224,  -224,  -224,    87,  -224,   556,
    -224,  -224,  -224,  -224,   211,   151,  -224,   675,  -224,  -224,
    -224
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned char yydefact[] =
{
       3,     0,     0,     0,     0,     0,    39,    56,     0,     0,
     121,     0,     0,    44,    80,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     2,     4,     0,     0,    42,
      43,     0,     0,     0,     6,     0,    63,     0,     0,    49,
      46,   116,   109,   110,     0,   108,    85,     0,     0,     0,
       0,   124,   107,   123,    94,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,   109,   110,     0,
      90,   122,    91,    92,   106,     0,    33,     0,    11,     0,
      38,     0,     0,     0,    37,     0,   119,     0,    13,    81,
       0,     0,     0,    27,    29,    30,     0,    46,    78,     0,
       1,     5,     7,     9,     0,     0,     0,     0,     0,     0,
      12,    57,    58,    63,     0,     0,    61,     0,    58,    63,
      55,     0,    15,    16,   121,     0,     0,     0,     0,     0,
      89,   105,     0,   128,     0,   126,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,   121,     0,    31,    21,    34,     0,
      20,     0,    36,     0,     0,     0,     0,     0,   111,    10,
      79,     0,     0,    40,    46,   137,     0,   115,   118,    41,
       0,    63,   115,   118,     0,    51,     0,    50,     0,   104,
       0,     0,     0,     0,    93,     0,   125,     0,   102,     0,
       0,   103,   138,   143,   142,   141,   140,   139,   145,   144,
      86,    87,    88,     0,     0,     0,   116,     0,   120,     0,
       0,     0,     0,     0,     0,    26,    48,   121,   112,    53,
       0,   113,    69,    62,    64,    66,    52,   114,     0,   100,
     101,    97,   127,   135,    95,    96,   114,    32,     0,     0,
      19,    14,    22,    46,     0,    28,    35,     0,    54,     0,
      72,    58,    71,     0,   121,     0,     0,    74,    68,    73,
      77,    75,    70,     0,     0,     0,     0,    25,    24,   117,
      65,     0,     0,    67,   133,   132,   134,     0,   130,     0,
      18,    17,    23,    82,     0,     0,   129,     0,    76,   131,
      98
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -224,  -224,  -224,    19,   261,  -224,  -224,     4,  -224,  -224,
      30,  -224,  -224,   246,  -224,    10,   247,  -111,  -224,  -224,
      27,  -224,  -224,    24,  -224,    31,  -224,  -224,  -223,    -1,
      77,   131,    11,    15,     1,   120,  -112,  -224,   -94,  -224,
    -224,   107,  -224,  -224,     6,  -224,   173,  -224,  -224
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,    24,    25,    98,   286,    79,    27,    62,    29,    30,
      63,    32,    33,    34,    35,    64,    37,   117,   184,   233,
     234,   235,    38,   268,   269,    99,    39,    90,   270,    86,
      66,    41,    67,    68,    69,   228,    87,    70,    71,    72,
     134,   135,   271,   287,   288,    45,   176,    73,    74
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
      65,    44,   180,    77,    28,    80,   -47,    82,   186,   177,
      36,    42,   188,   175,   272,    43,   163,   115,   237,    26,
      75,   255,   167,   -58,   221,   222,    44,    28,   108,    28,
      31,   -47,   -47,    22,    42,    36,    42,   182,    43,   -59,
      43,    91,   213,   175,   101,   113,   125,   119,   108,    76,
     -47,    96,    31,    31,   111,    31,   130,   131,   132,   133,
     116,    22,   138,   137,    51,    52,   -58,   -47,   104,   -46,
     230,   298,   112,    83,   155,    17,   -58,    40,   150,   151,
    -115,    78,   152,  -107,    84,    88,   105,   139,   140,    22,
     165,   163,    92,   246,   -46,   -46,   166,    52,    40,    97,
      40,    89,    40,    28,   172,   173,   141,    17,   179,   178,
      42,   108,    93,   -46,    43,   257,   183,   106,   170,   107,
     187,    22,    31,   108,   181,   190,   191,   192,   162,    31,
     -46,   163,   195,   260,   261,   262,    94,    31,   196,    95,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   282,   -45,   260,   261,   262,   295,   215,   193,
     217,   100,   218,   296,   -58,   -45,   -45,    31,   198,    40,
     224,   -45,   263,   103,   -44,   264,    40,   265,   109,   266,
     284,    84,   285,   241,   174,   108,   -44,   -44,   163,   163,
     279,   294,   -44,   263,   133,   110,   264,   223,   118,   120,
     266,   121,   -45,   122,   -45,   123,    40,   136,   124,   137,
     126,   127,   128,   129,   174,    40,   115,   154,   161,   157,
     158,  -115,   160,   -44,    28,   -44,   164,   168,   116,   244,
     245,    42,   171,   -59,   185,    43,   -60,   273,   219,   252,
     199,   200,  -136,   227,    40,   267,   226,   274,   275,   229,
      31,    31,   254,   232,   236,   243,   152,    28,    28,   247,
     249,   259,   251,  -135,    42,    42,   258,    28,    43,    43,
      85,   102,   277,   278,    42,   267,    40,    40,    43,   263,
      28,   276,   114,    31,    31,    28,   280,    42,   297,   283,
     216,    43,    42,    31,   281,   292,    43,    40,   253,    40,
     170,   299,   242,   231,     0,     0,    31,     0,     0,     0,
     197,    31,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,     5,     6,     0,     0,     0,     0,     0,
      40,    40,     8,     0,     9,     0,     0,     0,     0,     0,
      40,    10,    11,    12,     0,     0,    52,    14,     0,    15,
      16,     0,     0,    40,     0,     0,    17,     0,    40,    18,
      19,    20,     0,    21,     1,     2,     3,     4,     5,     6,
      22,     0,     0,     0,     0,     0,     0,     8,     0,     9,
       0,     0,     0,     0,    23,     0,    10,    11,    12,     0,
     108,    52,    14,     0,    15,    16,     0,     0,     0,     0,
       0,    17,     0,     0,    18,    19,    20,     0,    21,     1,
       2,     3,     4,     5,     6,    22,     0,     0,     0,     0,
       0,     0,     8,     0,     9,     0,     0,     0,     0,    23,
     169,    10,    11,    12,     0,     0,    52,    14,     0,    15,
      16,     0,     0,     0,     0,     0,    17,     0,     0,    18,
      19,    20,     0,    21,     1,     2,     3,     4,     5,     6,
      22,     0,     0,     7,     0,     0,     0,     8,     0,     9,
       0,     0,     0,     0,    23,   293,    10,    11,    12,     0,
       0,    13,    14,     0,    15,    16,     0,     0,     0,     0,
       0,    17,     0,     0,    18,    19,    20,     0,    21,     1,
       2,     3,     4,     5,     6,    22,     0,     0,     0,     0,
       0,     0,     8,     0,     9,     0,     0,     0,     0,    23,
       0,    10,    11,    12,     0,     0,    52,    14,     0,    15,
      16,     0,     0,     0,     0,     0,    17,     0,     0,    18,
      19,    20,     0,    21,    46,    47,    48,     0,     0,    81,
      22,    49,    50,     0,     0,     0,     0,     0,    51,    52,
      53,     0,     0,     0,    23,     0,     0,     0,     0,    54,
      55,    46,    47,    48,     0,    56,     0,     0,    49,    50,
       0,     0,     0,    22,     0,    51,    52,    53,    57,     0,
       0,     0,    58,     0,     0,     0,    54,    55,     0,     0,
      59,     0,    56,     0,    60,     0,    61,   189,     0,     0,
      22,     0,     0,     0,     0,    57,     0,     0,     0,    58,
       0,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,    60,     0,    61,     0,   142,   143,   144,   145,   146,
     147,   148,   149,     0,   150,   151,     0,     0,   152,   142,
     143,   144,   145,   146,   147,   148,   149,     0,   150,   151,
       0,     0,   152,     0,   142,   143,   144,   145,   146,   147,
     148,   149,   194,   150,   151,     0,     0,   152,     0,   142,
     143,   144,   145,   146,   147,   148,   149,   214,   150,   151,
       0,     0,   152,     0,   142,   143,   144,   145,   146,   147,
     148,   149,   220,   150,   151,     0,     0,   152,     0,   142,
     143,   144,   145,   146,   147,   148,   149,   239,   150,   151,
       0,     0,   152,     0,   142,   143,   144,   145,   146,   147,
     148,   149,   240,   150,   151,     0,     0,   152,     0,   142,
     143,   144,   145,   146,   147,   148,   149,   300,   150,   151,
       0,     0,   152,     0,     0,     0,     0,     0,     0,     0,
     159,   142,   143,   144,   145,   146,   147,   148,   149,     0,
     150,   151,     0,     0,   152,     0,     0,     0,     0,     0,
       0,     0,   238,   142,   143,   144,   145,   146,   147,   148,
     149,     0,   150,   151,     0,     0,   152,     0,     0,     0,
       0,     0,     0,     0,   248,   142,   143,   144,   145,   146,
     147,   148,   149,     0,   150,   151,     0,     0,   152,     0,
       0,     0,     0,     0,     0,     0,   289,   142,   143,   144,
     145,   146,   147,   148,   149,     0,   150,   151,     0,     0,
     152,     0,     0,     0,     0,   153,   142,   143,   144,   145,
     146,   147,   148,   149,     0,   150,   151,     0,     0,   152,
       0,     0,     0,     0,   156,   142,   143,   144,   145,   146,
     147,   148,   149,     0,   150,   151,     0,     0,   152,     0,
       0,     0,     0,   225,   142,   143,   144,   145,   146,   147,
     148,   149,     0,   150,   151,     0,     0,   152,     0,     0,
       0,     0,   250,   142,   143,   144,   145,   146,   147,   148,
     149,     0,   150,   151,     0,     0,   152,     0,     0,     0,
       0,   256,   142,   143,   144,   145,   146,   147,   148,   149,
       0,   150,   151,     0,     0,   152,     0,     0,     0,     0,
     290,   142,   143,   144,   145,   146,   147,   148,   149,     0,
     150,   151,     0,     0,   152,     0,     0,     0,     0,   291,
     142,   143,   144,   145,   146,   147,   148,   149,     0,   150,
     151,     0,     0,   152
};

static const short int yycheck[] =
{
       1,     0,   113,     4,     0,     6,    13,     8,   119,    30,
       0,     0,   124,   107,   237,     0,    70,    14,    72,     0,
      71,    67,    48,    14,    36,    37,    25,    23,    74,    25,
       0,    38,    39,    54,    23,    25,    25,    30,    23,    30,
      25,    71,   154,   137,    25,    35,    47,    37,    74,    67,
      57,    21,    22,    23,    12,    25,    57,    58,    59,    60,
      57,    54,    13,    75,    29,    30,    57,    74,    24,    13,
     181,   294,    30,    19,    75,    40,    67,     0,    58,    59,
      71,    67,    62,    74,    30,    67,    42,    38,    39,    54,
      91,    70,    35,    72,    38,    39,    92,    30,    21,    22,
      23,    30,    25,    99,   105,   106,    57,    40,   109,   108,
      99,    74,    67,    57,    99,   227,   115,    73,    99,    75,
     121,    54,    92,    74,   114,   126,   127,   128,    67,    99,
      74,    70,    70,    29,    30,    31,    67,   107,    76,    67,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   264,    24,    29,    30,    31,    70,   159,   129,
     161,     0,   163,    76,    14,    36,    37,   137,   138,    92,
     171,    42,    68,    67,    24,    71,    99,    73,    73,    75,
      29,    30,    31,    72,   107,    74,    36,    37,    70,    70,
      72,    72,    42,    68,   195,    67,    71,   167,    30,    67,
      75,    58,    73,    67,    75,    67,   129,    30,    71,    75,
      71,    71,    71,    71,   137,   138,    14,    71,    70,    67,
      67,    71,    67,    73,   220,    75,    28,    52,    57,   199,
     200,   220,    73,    30,    67,   220,    30,   238,    29,   220,
      36,    36,    76,    71,   167,   235,    76,   248,   249,    67,
     220,   221,   222,    30,    67,    76,    62,   253,   254,    67,
      70,    70,    67,    74,   253,   254,    67,   263,   253,   254,
       9,    25,   253,   254,   263,   265,   199,   200,   263,    68,
     276,    66,    35,   253,   254,   281,   259,   276,   289,   265,
     159,   276,   281,   263,   263,   276,   281,   220,   221,   222,
     281,   295,   195,   183,    -1,    -1,   276,    -1,    -1,    -1,
     137,   281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
     253,   254,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
     263,    25,    26,    27,    -1,    -1,    30,    31,    -1,    33,
      34,    -1,    -1,   276,    -1,    -1,    40,    -1,   281,    43,
      44,    45,    -1,    47,     3,     4,     5,     6,     7,     8,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    18,
      -1,    -1,    -1,    -1,    68,    -1,    25,    26,    27,    -1,
      74,    30,    31,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    44,    45,    -1,    47,     3,
       4,     5,     6,     7,     8,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    68,
      69,    25,    26,    27,    -1,    -1,    30,    31,    -1,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      44,    45,    -1,    47,     3,     4,     5,     6,     7,     8,
      54,    -1,    -1,    12,    -1,    -1,    -1,    16,    -1,    18,
      -1,    -1,    -1,    -1,    68,    69,    25,    26,    27,    -1,
      -1,    30,    31,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    43,    44,    45,    -1,    47,     3,
       4,     5,     6,     7,     8,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    68,
      -1,    25,    26,    27,    -1,    -1,    30,    31,    -1,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      44,    45,    -1,    47,    15,    16,    17,    -1,    -1,    20,
      54,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    40,
      41,    15,    16,    17,    -1,    46,    -1,    -1,    22,    23,
      -1,    -1,    -1,    54,    -1,    29,    30,    31,    59,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    40,    41,    -1,    -1,
      71,    -1,    46,    -1,    75,    -1,    77,    21,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    75,    -1,    77,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    -1,    62,    49,
      50,    51,    52,    53,    54,    55,    56,    -1,    58,    59,
      -1,    -1,    62,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    72,    58,    59,    -1,    -1,    62,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    72,    58,    59,
      -1,    -1,    62,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    72,    58,    59,    -1,    -1,    62,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    72,    58,    59,
      -1,    -1,    62,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    72,    58,    59,    -1,    -1,    62,    -1,    49,
      50,    51,    52,    53,    54,    55,    56,    72,    58,    59,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    58,    59,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    67,    49,    50,    51,    52,
      53,    54,    55,    56,    -1,    58,    59,    -1,    -1,    62,
      -1,    -1,    -1,    -1,    67,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    58,    59,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    67,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    58,    59,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    67,    49,    50,    51,    52,    53,    54,    55,
      56,    -1,    58,    59,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    58,    59,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      67,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      58,    59,    -1,    -1,    62,    -1,    -1,    -1,    -1,    67,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    58,
      59,    -1,    -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    12,    16,    18,
      25,    26,    27,    30,    31,    33,    34,    40,    43,    44,
      45,    47,    54,    68,    79,    80,    81,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,   100,   104,
     108,   109,   110,   111,   112,   123,    15,    16,    17,    22,
      23,    29,    30,    31,    40,    41,    46,    59,    63,    71,
      75,    77,    85,    88,    93,   107,   108,   110,   111,   112,
     115,   116,   117,   125,   126,    71,    67,   107,    67,    83,
     107,    20,   107,    19,    30,    82,   107,   114,    67,    30,
     105,    71,    35,    67,    67,    67,    88,   108,    81,   103,
       0,    81,    91,    67,    24,    42,    73,    75,    74,    73,
      67,    12,    30,    93,    94,    14,    57,    95,    30,    93,
      67,    58,    67,    67,    71,   107,    71,    71,    71,    71,
     107,   107,   107,   107,   118,   119,    30,    75,    13,    38,
      39,    57,    49,    50,    51,    52,    53,    54,    55,    56,
      58,    59,    62,    67,    71,   107,    67,    67,    67,    70,
      67,    70,    67,    70,    28,   107,    85,    48,    52,    69,
      81,    73,   107,   107,   108,   116,   124,    30,   112,   107,
      95,    93,    30,   112,    96,    67,    95,   107,   114,    21,
     107,   107,   107,    88,    72,    70,    76,   124,    88,    36,
      36,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   114,    72,   107,   109,   107,   107,    29,
      72,    36,    37,    88,   107,    67,    76,    71,   113,    67,
      95,   113,    30,    97,    98,    99,    67,    72,    70,    72,
      72,    72,   119,    76,    88,    88,    72,    67,    70,    70,
      67,    67,    81,   108,    88,    67,    67,   114,    67,    70,
      29,    30,    31,    68,    71,    73,    75,    93,   101,   102,
     106,   120,   106,   107,   107,   107,    66,    81,    81,    72,
      98,   103,   114,   101,    29,    31,    82,   121,   122,    70,
      67,    67,    81,    69,    72,    70,    76,   107,   106,   122,
      72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    78,    79,    79,    80,    80,    80,    80,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    83,    83,
      84,    84,    85,    85,    86,    87,    88,    88,    89,    90,
      90,    91,    91,    91,    91,    91,    92,    92,    93,    94,
      94,    96,    95,    95,    97,    97,    98,    98,    98,    99,
     100,   101,   101,   101,   101,   101,   102,   102,   103,   103,
     104,   105,   106,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   108,   108,   108,
     108,   109,   110,   110,   111,   112,   112,   113,   113,   114,
     114,   114,   115,   115,   116,   117,   118,   118,   119,   120,
     121,   121,   122,   122,   122,   123,   124,   124,   125,   125,
     125,   125,   125,   125,   126,   126
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     2,     3,     2,
       3,     2,     2,     2,     5,     2,     2,     7,     7,     5,
       3,     3,     5,     7,     6,     6,     4,     2,     5,     2,
       2,     3,     5,     2,     3,     5,     3,     1,     1,     0,
       3,     3,     1,     1,     1,     3,     1,     1,     4,     1,
       3,     3,     4,     4,     5,     2,     1,     2,     1,     1,
       2,     0,     3,     0,     1,     3,     1,     3,     2,     1,
       5,     1,     1,     1,     1,     1,     4,     1,     1,     2,
       1,     1,     3,     1,     2,     1,     3,     3,     3,     2,
       1,     1,     1,     3,     1,     4,     4,     4,     8,     1,
       4,     4,     3,     3,     3,     2,     1,     1,     1,     1,
       1,     3,     4,     4,     4,     1,     1,     3,     0,     1,
       3,     0,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     4,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0
};

/* Error token number */
#define YYTERROR 1



YYSTYPE yylval;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YYDPRINTF(Args)                        \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
  } while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YYFPRINTF (stderr, "%s ", Title);                               \
        yy_symbol_print (stderr, Type, Value);        \
        YYFPRINTF (stderr, "\n");                                       \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

struct yyGLRStack;
static void yypstack (struct yyGLRStack* yystackp, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (struct yyGLRStack* yystackp)
  __attribute__ ((__unused__));

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static void yyFail (yyGLRStack* yystackp, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULL)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystackp)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULL;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, size_t yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp)
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == YY_NULL);
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn)
    {
        case 2:
#line 83 "tig.y" /* glr.c:788  */
    { tigC->encode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1278 "tigParse.cpp" /* glr.c:788  */
    break;

  case 3:
#line 84 "tig.y" /* glr.c:788  */
    { ;}
#line 1284 "tigParse.cpp" /* glr.c:788  */
    break;

  case 4:
#line 88 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1290 "tigParse.cpp" /* glr.c:788  */
    break;

  case 5:
#line 89 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1296 "tigParse.cpp" /* glr.c:788  */
    break;

  case 6:
#line 90 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1302 "tigParse.cpp" /* glr.c:788  */
    break;

  case 7:
#line 91 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1308 "tigParse.cpp" /* glr.c:788  */
    break;

  case 8:
#line 95 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPrint,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1314 "tigParse.cpp" /* glr.c:788  */
    break;

  case 9:
#line 96 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1320 "tigParse.cpp" /* glr.c:788  */
    break;

  case 10:
#line 97 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1326 "tigParse.cpp" /* glr.c:788  */
    break;

  case 11:
#line 98 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opEnd);}
#line 1332 "tigParse.cpp" /* glr.c:788  */
    break;

  case 12:
#line 100 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CStrStatement((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr));}
#line 1338 "tigParse.cpp" /* glr.c:788  */
    break;

  case 13:
#line 101 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opStartTimer); }
#line 1344 "tigParse.cpp" /* glr.c:788  */
    break;

  case 14:
#line 102 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CTimedEventNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.iValue)); }
#line 1350 "tigParse.cpp" /* glr.c:788  */
    break;

  case 15:
#line 103 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CallDiscardNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1356 "tigParse.cpp" /* glr.c:788  */
    break;

  case 16:
#line 104 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CallDiscardNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1362 "tigParse.cpp" /* glr.c:788  */
    break;

  case 17:
#line 106 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CHotTextNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1368 "tigParse.cpp" /* glr.c:788  */
    break;

  case 18:
#line 107 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CHotTextNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1374 "tigParse.cpp" /* glr.c:788  */
    break;

  case 19:
#line 108 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPurge,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1380 "tigParse.cpp" /* glr.c:788  */
    break;

  case 20:
#line 109 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPurge,new CIntNode(0),new CIntNode(0)); }
#line 1386 "tigParse.cpp" /* glr.c:788  */
    break;

  case 21:
#line 110 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CReturnNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1392 "tigParse.cpp" /* glr.c:788  */
    break;

  case 22:
#line 111 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr), NULL); }
#line 1398 "tigParse.cpp" /* glr.c:788  */
    break;

  case 23:
#line 112 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CIfNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1404 "tigParse.cpp" /* glr.c:788  */
    break;

  case 24:
#line 113 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CForEachNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1410 "tigParse.cpp" /* glr.c:788  */
    break;

  case 25:
#line 114 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CForEachElementNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1416 "tigParse.cpp" /* glr.c:788  */
    break;

  case 26:
#line 115 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpAssignNode(opAdd,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1422 "tigParse.cpp" /* glr.c:788  */
    break;

  case 27:
#line 116 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opBrk); }
#line 1428 "tigParse.cpp" /* glr.c:788  */
    break;

  case 28:
#line 117 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMove,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1434 "tigParse.cpp" /* glr.c:788  */
    break;

  case 29:
#line 118 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CTronNode(true); }
#line 1440 "tigParse.cpp" /* glr.c:788  */
    break;

  case 30:
#line 119 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CTronNode(false); }
#line 1446 "tigParse.cpp" /* glr.c:788  */
    break;

  case 31:
#line 120 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opOpenWin,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1452 "tigParse.cpp" /* glr.c:788  */
    break;

  case 32:
#line 121 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opWin,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr)); }
#line 1458 "tigParse.cpp" /* glr.c:788  */
    break;

  case 33:
#line 122 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opClr); }
#line 1464 "tigParse.cpp" /* glr.c:788  */
    break;

  case 34:
#line 123 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opHotClr); }
#line 1470 "tigParse.cpp" /* glr.c:788  */
    break;

  case 35:
#line 124 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opArrayPush,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.nPtr)); }
#line 1476 "tigParse.cpp" /* glr.c:788  */
    break;

  case 36:
#line 125 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMsgNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1482 "tigParse.cpp" /* glr.c:788  */
    break;

  case 37:
#line 129 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberIdNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1488 "tigParse.cpp" /* glr.c:788  */
    break;

  case 38:
#line 133 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1494 "tigParse.cpp" /* glr.c:788  */
    break;

  case 39:
#line 134 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 1500 "tigParse.cpp" /* glr.c:788  */
    break;

  case 40:
#line 138 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAssign,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr)); }
#line 1506 "tigParse.cpp" /* glr.c:788  */
    break;

  case 41:
#line 139 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAssign,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr)); }
#line 1512 "tigParse.cpp" /* glr.c:788  */
    break;

  case 42:
#line 143 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1518 "tigParse.cpp" /* glr.c:788  */
    break;

  case 43:
#line 144 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1524 "tigParse.cpp" /* glr.c:788  */
    break;

  case 44:
#line 149 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CVarAssigneeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1530 "tigParse.cpp" /* glr.c:788  */
    break;

  case 45:
#line 153 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjMemberAssigneeNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1536 "tigParse.cpp" /* glr.c:788  */
    break;

  case 46:
#line 157 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1542 "tigParse.cpp" /* glr.c:788  */
    break;

  case 47:
#line 158 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPushSelf); }
#line 1548 "tigParse.cpp" /* glr.c:788  */
    break;

  case 48:
#line 162 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayAssignNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1554 "tigParse.cpp" /* glr.c:788  */
    break;

  case 49:
#line 166 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1560 "tigParse.cpp" /* glr.c:788  */
    break;

  case 50:
#line 167 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAdd, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1566 "tigParse.cpp" /* glr.c:788  */
    break;

  case 51:
#line 173 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 1572 "tigParse.cpp" /* glr.c:788  */
    break;

  case 52:
#line 174 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr)); }
#line 1578 "tigParse.cpp" /* glr.c:788  */
    break;

  case 53:
#line 175 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 1584 "tigParse.cpp" /* glr.c:788  */
    break;

  case 54:
#line 176 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr)); }
#line 1590 "tigParse.cpp" /* glr.c:788  */
    break;

  case 55:
#line 177 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1596 "tigParse.cpp" /* glr.c:788  */
    break;

  case 56:
#line 183 "tig.y" /* glr.c:788  */
    { CSyntaxNode::childLevel++; }
#line 1602 "tigParse.cpp" /* glr.c:788  */
    break;

  case 57:
#line 184 "tig.y" /* glr.c:788  */
    { CSyntaxNode::childLevel++; }
#line 1608 "tigParse.cpp" /* glr.c:788  */
    break;

  case 58:
#line 189 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CObjIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1614 "tigParse.cpp" /* glr.c:788  */
    break;

  case 59:
#line 193 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new ClassIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1620 "tigParse.cpp" /* glr.c:788  */
    break;

  case 60:
#line 194 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),new ClassIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str))); }
#line 1626 "tigParse.cpp" /* glr.c:788  */
    break;

  case 61:
#line 198 "tig.y" /* glr.c:788  */
    { CSyntaxNode::funcMode(true); }
#line 1632 "tigParse.cpp" /* glr.c:788  */
    break;

  case 62:
#line 199 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1638 "tigParse.cpp" /* glr.c:788  */
    break;

  case 63:
#line 200 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 1644 "tigParse.cpp" /* glr.c:788  */
    break;

  case 64:
#line 204 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1650 "tigParse.cpp" /* glr.c:788  */
    break;

  case 65:
#line 205 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1656 "tigParse.cpp" /* glr.c:788  */
    break;

  case 66:
#line 209 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr),NULL); }
#line 1662 "tigParse.cpp" /* glr.c:788  */
    break;

  case 67:
#line 210 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1668 "tigParse.cpp" /* glr.c:788  */
    break;

  case 68:
#line 211 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1674 "tigParse.cpp" /* glr.c:788  */
    break;

  case 69:
#line 215 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMembDeclIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1680 "tigParse.cpp" /* glr.c:788  */
    break;

  case 70:
#line 219 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CGlobalFuncDeclNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1686 "tigParse.cpp" /* glr.c:788  */
    break;

  case 71:
#line 231 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1692 "tigParse.cpp" /* glr.c:788  */
    break;

  case 72:
#line 232 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.iValue)); }
#line 1698 "tigParse.cpp" /* glr.c:788  */
    break;

  case 73:
#line 233 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1704 "tigParse.cpp" /* glr.c:788  */
    break;

  case 74:
#line 234 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((CObjIdentNode*)(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1710 "tigParse.cpp" /* glr.c:788  */
    break;

  case 75:
#line 235 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CInitNode((CArrayInitListNode*)(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1716 "tigParse.cpp" /* glr.c:788  */
    break;

  case 76:
#line 239 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFunctionDefNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1722 "tigParse.cpp" /* glr.c:788  */
    break;

  case 77:
#line 240 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFunctionDefNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1728 "tigParse.cpp" /* glr.c:788  */
    break;

  case 78:
#line 244 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1734 "tigParse.cpp" /* glr.c:788  */
    break;

  case 79:
#line 245 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1740 "tigParse.cpp" /* glr.c:788  */
    break;

  case 80:
#line 249 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CStrNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1746 "tigParse.cpp" /* glr.c:788  */
    break;

  case 81:
#line 253 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CEventIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1752 "tigParse.cpp" /* glr.c:788  */
    break;

  case 82:
#line 266 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CodeBlockNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1758 "tigParse.cpp" /* glr.c:788  */
    break;

  case 83:
#line 270 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1764 "tigParse.cpp" /* glr.c:788  */
    break;

  case 84:
#line 271 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CVarIdNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1770 "tigParse.cpp" /* glr.c:788  */
    break;

  case 85:
#line 272 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opGetString); }
#line 1776 "tigParse.cpp" /* glr.c:788  */
    break;

  case 86:
#line 273 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAdd, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1782 "tigParse.cpp" /* glr.c:788  */
    break;

  case 87:
#line 274 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opSub, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1788 "tigParse.cpp" /* glr.c:788  */
    break;

  case 88:
#line 275 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMod, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1794 "tigParse.cpp" /* glr.c:788  */
    break;

  case 89:
#line 276 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMinus, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1800 "tigParse.cpp" /* glr.c:788  */
    break;

  case 90:
#line 277 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1806 "tigParse.cpp" /* glr.c:788  */
    break;

  case 91:
#line 278 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1812 "tigParse.cpp" /* glr.c:788  */
    break;

  case 92:
#line 279 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1818 "tigParse.cpp" /* glr.c:788  */
    break;

  case 93:
#line 280 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1824 "tigParse.cpp" /* glr.c:788  */
    break;

  case 94:
#line 281 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opPushSelf); }
#line 1830 "tigParse.cpp" /* glr.c:788  */
    break;

  case 95:
#line 282 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opIn,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1836 "tigParse.cpp" /* glr.c:788  */
    break;

  case 96:
#line 283 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opNotIn,(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1842 "tigParse.cpp" /* glr.c:788  */
    break;

  case 97:
#line 284 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opChildren,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1848 "tigParse.cpp" /* glr.c:788  */
    break;

  case 98:
#line 286 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opMakeHot,(((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr));}
#line 1854 "tigParse.cpp" /* glr.c:788  */
    break;

  case 99:
#line 287 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CNothingNode(); }
#line 1860 "tigParse.cpp" /* glr.c:788  */
    break;

  case 100:
#line 288 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opStyle,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1866 "tigParse.cpp" /* glr.c:788  */
    break;

  case 101:
#line 289 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opCap,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1872 "tigParse.cpp" /* glr.c:788  */
    break;

  case 102:
#line 290 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opInherits,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1878 "tigParse.cpp" /* glr.c:788  */
    break;

  case 103:
#line 292 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opHas,(((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1884 "tigParse.cpp" /* glr.c:788  */
    break;

  case 104:
#line 293 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opHotCheck,(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1890 "tigParse.cpp" /* glr.c:788  */
    break;

  case 105:
#line 294 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opNot,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1896 "tigParse.cpp" /* glr.c:788  */
    break;

  case 106:
#line 295 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1902 "tigParse.cpp" /* glr.c:788  */
    break;

  case 107:
#line 299 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CVarExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 1908 "tigParse.cpp" /* glr.c:788  */
    break;

  case 108:
#line 300 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1914 "tigParse.cpp" /* glr.c:788  */
    break;

  case 109:
#line 301 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1920 "tigParse.cpp" /* glr.c:788  */
    break;

  case 110:
#line 302 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1926 "tigParse.cpp" /* glr.c:788  */
    break;

  case 111:
#line 307 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CDerefVarNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1932 "tigParse.cpp" /* glr.c:788  */
    break;

  case 112:
#line 312 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberCallNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1938 "tigParse.cpp" /* glr.c:788  */
    break;

  case 113:
#line 313 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CSuperCallNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1944 "tigParse.cpp" /* glr.c:788  */
    break;

  case 114:
#line 318 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CMemberCallNode(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 1950 "tigParse.cpp" /* glr.c:788  */
    break;

  case 115:
#line 322 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFuncIdentNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str),NULL); }
#line 1956 "tigParse.cpp" /* glr.c:788  */
    break;

  case 116:
#line 323 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CFuncIdentNode(NULL,(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1962 "tigParse.cpp" /* glr.c:788  */
    break;

  case 117:
#line 328 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr); }
#line 1968 "tigParse.cpp" /* glr.c:788  */
    break;

  case 118:
#line 329 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 1974 "tigParse.cpp" /* glr.c:788  */
    break;

  case 119:
#line 332 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CParamExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 1980 "tigParse.cpp" /* glr.c:788  */
    break;

  case 120:
#line 333 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),new CParamExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr))); }
#line 1986 "tigParse.cpp" /* glr.c:788  */
    break;

  case 121:
#line 334 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = NULL; }
#line 1992 "tigParse.cpp" /* glr.c:788  */
    break;

  case 122:
#line 338 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 1998 "tigParse.cpp" /* glr.c:788  */
    break;

  case 123:
#line 339 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CStrNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 2004 "tigParse.cpp" /* glr.c:788  */
    break;

  case 124:
#line 343 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CIntNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.iValue)); }
#line 2010 "tigParse.cpp" /* glr.c:788  */
    break;

  case 125:
#line 347 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayDynInitNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2016 "tigParse.cpp" /* glr.c:788  */
    break;

  case 126:
#line 352 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2022 "tigParse.cpp" /* glr.c:788  */
    break;

  case 127:
#line 353 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2028 "tigParse.cpp" /* glr.c:788  */
    break;

  case 128:
#line 357 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayDynInitElem((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2034 "tigParse.cpp" /* glr.c:788  */
    break;

  case 129:
#line 361 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitListNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2040 "tigParse.cpp" /* glr.c:788  */
    break;

  case 130:
#line 365 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2046 "tigParse.cpp" /* glr.c:788  */
    break;

  case 131:
#line 366 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CJointNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2052 "tigParse.cpp" /* glr.c:788  */
    break;

  case 132:
#line 370 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitConstNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 2058 "tigParse.cpp" /* glr.c:788  */
    break;

  case 133:
#line 371 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitConstNode((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.iValue)); }
#line 2064 "tigParse.cpp" /* glr.c:788  */
    break;

  case 134:
#line 373 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayInitConstNode((CMemberIdNode*)(((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2070 "tigParse.cpp" /* glr.c:788  */
    break;

  case 135:
#line 378 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new CArrayElementExprNode((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.nPtr),(((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.nPtr)); }
#line 2076 "tigParse.cpp" /* glr.c:788  */
    break;

  case 136:
#line 382 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2082 "tigParse.cpp" /* glr.c:788  */
    break;

  case 137:
#line 383 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr); }
#line 2088 "tigParse.cpp" /* glr.c:788  */
    break;

  case 138:
#line 388 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opEq, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2094 "tigParse.cpp" /* glr.c:788  */
    break;

  case 139:
#line 389 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opLT, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2100 "tigParse.cpp" /* glr.c:788  */
    break;

  case 140:
#line 390 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opLE, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2106 "tigParse.cpp" /* glr.c:788  */
    break;

  case 141:
#line 391 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opGT, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2112 "tigParse.cpp" /* glr.c:788  */
    break;

  case 142:
#line 392 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opGE, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2118 "tigParse.cpp" /* glr.c:788  */
    break;

  case 143:
#line 393 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opNE, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2124 "tigParse.cpp" /* glr.c:788  */
    break;

  case 144:
#line 397 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opAnd, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2130 "tigParse.cpp" /* glr.c:788  */
    break;

  case 145:
#line 398 "tig.y" /* glr.c:788  */
    { ((*yyvalp).nPtr) = new COpNode(opOr, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.nPtr), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.nPtr)); }
#line 2136 "tigParse.cpp" /* glr.c:788  */
    break;


#line 2140 "tigParse.cpp" /* glr.c:788  */
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved ", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete ", yymsg);
          yy_symbol_print (stderr, yystos[yys->yylrState],
                           YY_NULL);
          YYFPRINTF (stderr, "\n");
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-224)))

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) \
  0

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
                int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yypact_value_is_default (yypact[yystate])
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULL;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULL;
  yystackp->yylastDeleted = YY_NULL;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULL)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULL)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULL)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULL)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULL)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                 yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULL)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULL;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULL;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULL)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            {
              YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
                          (unsigned long int) yyi, (unsigned long int) yyj));
            }
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print Args;               \
} while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (int yynormal, yyGLRStackItem* yyvsp, size_t yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long int) yyk, yyrule - 1,
             (unsigned long int) yyrline[yyrule]);
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyvsp[yyi - yynrhs + 1].yystate.yylrState],
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval
                                              );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YYFPRINTF (stderr, " (unresolved)");
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULL)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((1, yyrhs, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp);
    }
  else
    {
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((0, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULL)
    {
      YYRESULTTAG yyflag;
      YYSTYPE yysval;

      yyflag = yydoAction (yystackp, yyk, yyrule, &yysval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULL)
        {
          YYDPRINTF ((stderr, "Parse on stack %lu rejected by rule #%d.\n",
                     (unsigned long int) yyk, yyrule - 1));
        }
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  "
                  "Now in state %d.\n",
                  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULL)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long int) yyk,
                                (unsigned long int) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULL)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = YY_NULL;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == YY_NULL)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == YY_NULL)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULL)
                break;
              else if (*yyz0p == YY_NULL)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
               (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]));
          else
            YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]),
                       (unsigned long int) (yystates[yyi-1]->yyposn + 1),
                       (unsigned long int) yystates[yyi]->yyposn);
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULL; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YYASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULL; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULL;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULL)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULL;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULL;
  yystackp->yylastDeleted = YY_NULL;

  while (yyr != YY_NULL)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULL)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
                  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YYDPRINTF ((stderr,
                          "Stack %lu dies "
                          "(predicate failure or explicit user error).\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yySymbol yytoken;
          int yyaction;
          const short int* yyconflicts;

          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
          if (yychar == YYEMPTY)
            {
              YYDPRINTF ((stderr, "Reading a token: "));
              yychar = yylex ();
            }

          if (yychar <= YYEOF)
            {
              yychar = yytoken = YYEOF;
              YYDPRINTF ((stderr, "Now at end of input.\n"));
            }
          else
            {
              yytoken = YYTRANSLATE (yychar);
              YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
            }

          yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

          while (*yyconflicts != 0)
            {
              YYRESULTTAG yyflag;
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long int) yynewStack,
                          (unsigned long int) yyk));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr, "Stack %lu dies.\n",
                              (unsigned long int) yynewStack));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr,
                              "Stack %lu dies "
                              "(predicate failure or explicit user error).\n",
                              (unsigned long int) yyk));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (YY_NULL, yytokenName (yytoken));
  size_t yysize = yysize0;
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULL;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;
          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytokenName (yyx);
                {
                  size_t yysz = yysize + yytnamerr (YY_NULL, yytokenName (yyx));
                  yysize_overflow |= yysz < yysize;
                  yysize = yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    size_t yysz = yysize + strlen (yyformat);
    yysize_overflow |= yysz < yysize;
    yysize = yysz;
  }

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yyarg[yyi++]);
              yyformat += 2;
            }
          else
            {
              yyp++;
              yyformat++;
            }
        }
      yyerror (yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yySymbol yytoken;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULL);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
          }
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = yylex ();
        if (yychar <= YYEOF)
          {
            yychar = yytoken = YYEOF;
            YYDPRINTF ((stderr, "Now at end of input.\n"));
          }
        else
          {
            yytoken = YYTRANSLATE (yychar);
            YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
          }
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != YY_NULL)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, YY_NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULL)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULL)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULL)
    yyFail (yystackp, YY_NULL);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
        {
          yyRuleNum yyrule;
          int yyaction;
          const short int* yyconflicts;

          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yySymbol yytoken;
              if (yychar == YYEMPTY)
                {
                  YYDPRINTF ((stderr, "Reading a token: "));
                  yychar = yylex ();
                }

              if (yychar <= YYEOF)
                {
                  yychar = yytoken = YYEOF;
                  YYDPRINTF ((stderr, "Now at end of input.\n"));
                }
              else
                {
                  yytoken = YYTRANSLATE (yychar);
                  YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
                }

              yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      while (yytrue)
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));

              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              int yyaction;
              const short int* yyconflicts;
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              yygetLRActions (yystate, yytoken_to_shift, &yyaction,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long int) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                  if (yys->yypred != YY_NULL)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULL)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                         \
    ((YYX) == YY_NULL ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long int) yyp->yystate.yyposn,
                     (long int) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long int) YYINDEX (yyp->yyoption.yystate),
                     (long int) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
               (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif

#undef yylval
#undef yychar
#undef yynerrs



#line 401 "tig.y" /* glr.c:2549  */


void yyerror(const char *s) {
	fprintf(stdout, "\n%s, unexpected '%s' on line %d:", s, yytext,lineNo);
	rewind(yyin);
	char buf[500];
	for (int line=0; line < lineNo;line++)
		fgets(buf,500,yyin);
	fprintf(stdout, "\n%s", buf);
}
