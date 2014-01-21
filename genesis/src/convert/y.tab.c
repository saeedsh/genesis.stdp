/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "script.y"

static char parsercsid[] = "$Id: script.y,v 1.3 2005/08/08 13:10:23 svitak Exp $";

/*
** $Log: script.y,v $
** Revision 1.3  2005/08/08 13:10:23  svitak
** Removed #ifdef around #include y.tab.h.
**
** Revision 1.2  2005/07/01 10:03:01  svitak
** Misc fixes to address compiler warnings, esp. providing explicit types
** for all functions and cleaning up unused variables.
**
** Revision 1.1.1.1  2005/06/14 04:38:28  svitak
** Import from snapshot of CalTech CVS tree of June 8, 2005
**
** Revision 1.9  2003/03/28 21:07:05  gen-dbeeman
** Fix from Mike Vanier Jan 2003 to fix problem with bison ver. 1.75
**
** Revision 1.8  2001/04/18 22:39:36  mhucka
** Miscellaneous portability fixes, mainly for SGI IRIX.
**
** Revision 1.7  1997/06/12 22:50:55  dhb
** Added include of string.h for strlen() declaration needed by
** included lexer code.
**
** Revision 1.6  1996/07/15 23:19:00  venkat
** Added preprocessor macros to deal with the order of the include lex.yy.c
** statement and the definitions of the macros used in it, for the DEC/alpha
**
 * Revision 1.5  1995/06/16  05:57:12  dhb
 * FreeBSD compatibility.
 *
 * Revision 1.4  1995/04/29  01:18:16  dhb
 * Moved include of lex.yy.c back to original location.  Previous
 * problem is fixed by extern void exit() in script.l.
 *
 * Fixed bug in call to SymtabLook() call where a Symtab rather than
 * a Symtab* was passed.
 *
 * Revision 1.3  1995/04/15  02:26:28  dhb
 * Moved include of lex.yy.c after the parse rules to work around SGI
 * yacc misplacement of include statements.
 *
 * Revision 1.2  1995/04/14  01:03:20  dhb
 * Null change to force patch and reprocessing by yacc.
 *
 * Revision 1.1  1995/01/13  01:09:48  dhb
 * Initial revision
 *
 * Revision 1.1  1992/12/11  21:19:07  dhb
 **
 ** This file is from GENESIS 1.4.1
 **
 * Initial revision
 *
*/

#define YYDEBUG	1

#include <stdio.h>
#include <setjmp.h>
#include <string.h>
#include "parse.h"
#include "symtab.h"

/*
** General declarations.
*/
extern char *strsave();

/*
** Parser routines which return something other than int.
*/

extern ParseNode *vardef();
extern char *TokenStr();

extern char* Combine();
extern char* ArgListToStr();
extern char** AllocateArgList();

/*
** Parser global variables
*/

extern jmp_buf	BreakBuf;	/* Used to break out of a loop */
extern jmp_buf	ReturnBuf;	/* Used to return out of a script */

static int	DefType;	/* Remembers type in a var decl */
static int	DefCast;	/* Remembers cast in a var decl */
static int	BreakAllowed = 0; /* In a loop control structure */
static int	ReturnIdents = 0; /* 1 ==> lexer doesn't classify IDENTs */
static int	Compiling = 0;	/* Make a statement list rather than execute */
static int	InFunctionDefinition = 0;
static int	NextLocal;	/* Next local symbol offset */
static int	ArgMatch;	/* Matches argument number to name in func */
Symtab		GlobalSymbols;	/* Symbols defined outside a function */
static Symtab	*LocalSymbols = NULL;	/* Symbols local to a function */
static ResultValue RV;			/* Dummy ReturnValue for PTNew */


/* Line 268 of yacc.c  */
#line 132 "script.y"


#if !defined(decalpha) || defined(bison) || defined(T3E)
/*
** Start of lexical analyzer.  LEX source is in "script.l".
*/

extern YYSTYPE	yylval;

#include "y.tab.h"
#include "lex.yy.c"

#endif


/* Line 268 of yacc.c  */
#line 190 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NE = 258,
     EQ = 259,
     GE = 260,
     GT = 261,
     LE = 262,
     LT = 263,
     AND = 264,
     OR = 265,
     UMINUS = 266,
     WHILE = 267,
     IF = 268,
     ELSE = 269,
     FOR = 270,
     FOREACH = 271,
     END = 272,
     INCLUDE = 273,
     ENDSCRIPT = 274,
     BREAK = 275,
     INT = 276,
     FLOAT = 277,
     STR = 278,
     RETURN = 279,
     WHITESPACE = 280,
     FUNCTION = 281,
     INTCONST = 282,
     DOLLARARG = 283,
     FLOATCONST = 284,
     STRCONST = 285,
     LITERAL = 286,
     IDENT = 287,
     VARREF = 288,
     FUNCREF = 289,
     EXTERN = 290,
     SL = 291,
     COMMAND = 292,
     ARGUMENT = 293,
     ARGLIST = 294,
     LOCREF = 295,
     ICAST = 296,
     FCAST = 297,
     SCAST = 298
   };
#endif
/* Tokens.  */
#define NE 258
#define EQ 259
#define GE 260
#define GT 261
#define LE 262
#define LT 263
#define AND 264
#define OR 265
#define UMINUS 266
#define WHILE 267
#define IF 268
#define ELSE 269
#define FOR 270
#define FOREACH 271
#define END 272
#define INCLUDE 273
#define ENDSCRIPT 274
#define BREAK 275
#define INT 276
#define FLOAT 277
#define STR 278
#define RETURN 279
#define WHITESPACE 280
#define FUNCTION 281
#define INTCONST 282
#define DOLLARARG 283
#define FLOATCONST 284
#define STRCONST 285
#define LITERAL 286
#define IDENT 287
#define VARREF 288
#define FUNCREF 289
#define EXTERN 290
#define SL 291
#define COMMAND 292
#define ARGUMENT 293
#define ARGLIST 294
#define LOCREF 295
#define ICAST 296
#define FCAST 297
#define SCAST 298




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 317 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   471

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNRULES -- Number of states.  */
#define YYNSTATES  224

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      54,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     9,     2,     2,     2,    19,    14,     2,
      56,    57,    17,    12,    59,    13,     2,    18,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
       2,    58,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    16,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,    15,    61,    20,     2,     2,     2,
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
       5,     6,     7,     8,    10,    11,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    47,    55,    56,    68,    69,    70,
      82,    83,    92,    93,    94,    98,   102,   103,   108,   113,
     116,   117,   119,   120,   124,   125,   130,   137,   139,   146,
     147,   152,   153,   157,   159,   163,   164,   166,   168,   171,
     173,   179,   180,   182,   184,   187,   189,   191,   193,   194,
     195,   201,   204,   207,   210,   213,   214,   215,   222,   223,
     224,   229,   231,   235,   237,   239,   241,   244,   246,   247,
     252,   253,   257,   258,   261,   263,   266,   268,   269,   273,
     277,   281,   284,   288,   292,   296,   300,   304,   307,   311,
     315,   318,   322,   326,   330,   334,   338,   342,   343,   344,
     353,   354,   355,   364,   366,   368,   370,   372,   374,   376,
     378,   382
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    64,    -1,    -1,    64,    66,    65,    -1,
      54,    -1,    55,    -1,    68,    -1,    70,    -1,    72,    -1,
      75,    -1,    79,    -1,    82,    -1,    67,    -1,    86,    -1,
      89,    -1,   103,    -1,   101,    -1,   110,    -1,   116,    -1,
     117,    -1,   118,    -1,    29,    -1,    -1,    22,    56,   119,
      57,    69,    64,    27,    -1,    -1,    25,    56,    79,    55,
     119,    55,    79,    57,    71,    64,    27,    -1,    -1,    -1,
      26,    43,    56,    73,    96,    92,    96,    74,    57,    64,
      27,    -1,    -1,    23,    56,   119,    57,    76,    64,    77,
      27,    -1,    -1,    -1,    24,    78,    64,    -1,    43,    58,
     119,    -1,    -1,    28,    81,    96,    41,    -1,    80,    35,
      92,    96,    -1,    80,    96,    -1,    -1,    41,    -1,    -1,
      42,    85,    83,    -1,    -1,    84,    87,    91,    96,    -1,
      84,    56,    93,    95,    93,    57,    -1,    44,    -1,    88,
      56,    93,    95,    93,    57,    -1,    -1,    88,    90,    91,
      96,    -1,    -1,    91,    94,    97,    -1,    97,    -1,    92,
      94,    97,    -1,    -1,    94,    -1,    35,    -1,    94,    35,
      -1,    97,    -1,    95,    93,    59,    93,    97,    -1,    -1,
      35,    -1,    98,    -1,    97,    98,    -1,    41,    -1,    40,
      -1,    38,    -1,    -1,    -1,    60,    99,   119,   100,    61,
      -1,    45,    42,    -1,    45,    44,    -1,    36,    42,    -1,
      36,    44,    -1,    -1,    -1,   102,   104,   106,   105,    64,
      27,    -1,    -1,    -1,    56,   107,   108,    57,    -1,    42,
      -1,   108,    59,    42,    -1,    31,    -1,    32,    -1,    33,
      -1,   109,   111,    -1,   113,    -1,    -1,   111,    59,   112,
     113,    -1,    -1,    42,   114,   115,    -1,    -1,    58,   119,
      -1,    30,    -1,    34,   119,    -1,    34,    -1,    -1,   119,
      15,   119,    -1,   119,    14,   119,    -1,   119,    16,   119,
      -1,    20,   119,    -1,   119,    12,   119,    -1,   119,    13,
     119,    -1,   119,    17,   119,    -1,   119,    18,   119,    -1,
     119,    19,   119,    -1,    13,   119,    -1,   119,    11,   119,
      -1,   119,    10,   119,    -1,     9,   119,    -1,   119,     8,
     119,    -1,   119,     7,   119,    -1,   119,     6,   119,    -1,
     119,     5,   119,    -1,   119,     4,   119,    -1,   119,     3,
     119,    -1,    -1,    -1,    42,    56,   120,    93,    95,    93,
     121,    57,    -1,    -1,    -1,    44,    56,   122,    93,    95,
      93,   123,    57,    -1,    43,    -1,    44,    -1,    42,    -1,
      39,    -1,    37,    -1,    40,    -1,    38,    -1,    60,   119,
      61,    -1,    56,   119,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   149,   149,   153,   156,   163,   167,   173,   174,   175,
     176,   177,   182,   183,   184,   189,   194,   195,   196,   197,
     198,   199,   202,   209,   208,   221,   220,   234,   240,   233,
     253,   252,   265,   269,   268,   274,   281,   280,   291,   296,
     303,   306,   313,   312,   328,   327,   360,   391,   398,   410,
     409,   427,   434,   445,   454,   465,   466,   469,   470,   473,
     482,   493,   494,   497,   501,   507,   511,   515,   520,   524,
     519,   543,   558,   565,   591,   616,   622,   615,   637,   639,
     638,   649,   654,   661,   668,   675,   684,   692,   694,   693,
     704,   703,   718,   721,   727,   734,   739,   747,   750,   752,
     754,   756,   759,   772,   774,   776,   778,   780,   783,   785,
     787,   790,   792,   794,   796,   798,   800,   804,   808,   803,
     850,   854,   849,   863,   875,   881,   913,   918,   923,   929,
     935,   942
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NE", "EQ", "GE", "GT", "LE", "LT",
  "'!'", "AND", "OR", "'+'", "'-'", "'&'", "'|'", "'^'", "'*'", "'/'",
  "'%'", "'~'", "UMINUS", "WHILE", "IF", "ELSE", "FOR", "FOREACH", "END",
  "INCLUDE", "ENDSCRIPT", "BREAK", "INT", "FLOAT", "STR", "RETURN",
  "WHITESPACE", "FUNCTION", "INTCONST", "DOLLARARG", "FLOATCONST",
  "STRCONST", "LITERAL", "IDENT", "VARREF", "FUNCREF", "EXTERN", "SL",
  "COMMAND", "ARGUMENT", "ARGLIST", "LOCREF", "ICAST", "FCAST", "SCAST",
  "'\\n'", "';'", "'('", "')'", "'='", "','", "'{'", "'}'", "$accept",
  "script", "statement_list", "stmnt_terminator", "statement",
  "endscript_marker", "while_stmnt", "$@1", "for_stmnt", "$@2",
  "foreach_stmnt", "$@3", "$@4", "if_stmnt", "$@5", "else_clause", "$@6",
  "assign_stmnt", "include_hdr", "$@7", "include_stmnt", "opt_node",
  "cmd_name", "$@8", "cmd_stmnt", "$@9", "funcref", "func_call", "$@10",
  "opt_arg_list", "arg_list", "optwslist", "wslist", "func_call_list",
  "ws", "arg_component_list", "arg_component", "$@11", "$@12", "ext_func",
  "func_hdr", "func_def", "$@13", "$@14", "func_args", "$@15",
  "func_arg_list", "decl_type", "decl_stmnt", "decl_list", "$@16",
  "decl_ident", "$@17", "init", "break_stmnt", "return_stmnt",
  "null_stmnt", "expr", "$@18", "$@19", "$@20", "$@21", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,    33,
     264,   265,    43,    45,    38,   124,    94,    42,    47,    37,
     126,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    10,    59,    40,    41,    61,    44,
     123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    65,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    67,    69,    68,    71,    70,    73,    74,    72,
      76,    75,    77,    78,    77,    79,    81,    80,    82,    82,
      83,    83,    85,    84,    87,    86,    86,    88,    89,    90,
      89,    91,    91,    92,    92,    93,    93,    94,    94,    95,
      95,    96,    96,    97,    97,    98,    98,    98,    99,   100,
      98,   101,   101,   102,   102,   104,   105,   103,   106,   107,
     106,   108,   108,   109,   109,   109,   110,   111,   112,   111,
     114,   113,   115,   115,   116,   117,   117,   118,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   120,   121,   119,
     122,   123,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     7,     0,    11,     0,     0,    11,
       0,     8,     0,     0,     3,     3,     0,     4,     4,     2,
       0,     1,     0,     3,     0,     4,     6,     1,     6,     0,
       4,     0,     3,     1,     3,     0,     1,     1,     2,     1,
       5,     0,     1,     1,     2,     1,     1,     1,     0,     0,
       5,     2,     2,     2,     2,     0,     0,     6,     0,     0,
       4,     1,     3,     1,     1,     1,     2,     1,     0,     4,
       0,     3,     0,     2,     1,     2,     1,     0,     3,     3,
       3,     2,     3,     3,     3,     3,     3,     2,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     0,     0,     8,
       0,     0,     8,     1,     1,     1,     1,     1,     1,     1,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,    97,     1,     0,     0,     0,     0,    36,    22,
      94,    83,    84,    85,    96,     0,    42,     0,    47,     0,
       0,    13,     7,     8,     9,    10,    11,    61,    12,    44,
      14,    49,    15,    17,    75,    16,     0,    18,    19,    20,
      21,     0,     0,     0,     0,    61,     0,     0,     0,   127,
     129,   126,   128,   125,   123,   124,     0,     0,    95,    73,
      74,    40,     0,    71,    72,     5,     6,     4,    62,    39,
      55,    51,    55,    51,    78,    90,    86,    87,     0,     0,
       0,    27,    62,     0,   110,   107,   101,   117,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    41,    43,    35,
      67,    66,    65,    68,    61,    53,    63,    57,     0,    56,
      61,     0,    61,    79,    76,    92,    88,    23,    30,     0,
      61,    37,    55,    55,   131,   130,   116,   115,   114,   113,
     112,   111,   109,   108,   102,   103,    99,    98,   100,   104,
     105,   106,     0,    57,     0,    38,    64,    55,    59,    58,
       0,    45,    55,    50,     0,     3,     0,    91,     0,     3,
       3,     0,     0,     0,     0,    69,    54,     0,    52,     0,
      81,     0,    97,    93,    89,    97,    97,     0,    61,    55,
      55,     0,    46,    55,    48,    80,     0,    77,    24,    33,
       0,     0,    28,   118,   121,    70,     0,    82,     3,    31,
      25,     0,     0,     0,    60,    97,     3,     3,   119,   122,
      97,    97,    26,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    67,    20,    21,    22,   169,    23,   216,
      24,   130,   211,    25,   170,   200,   208,    26,    27,    45,
      28,   108,    29,    61,    30,    71,    31,    32,    73,   120,
     114,   118,   119,   157,    69,   158,   116,   152,   191,    33,
      34,    35,    74,   165,   124,   164,   181,    36,    37,    76,
     168,    77,   125,   167,    38,    39,    40,    58,   132,   212,
     133,   213
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -107
static const yytype_int16 yypact[] =
{
    -107,     2,   248,  -107,   -44,   -38,   -35,   -21,  -107,  -107,
    -107,  -107,  -107,  -107,   207,   -27,  -107,   -32,  -107,    35,
     -48,  -107,  -107,  -107,  -107,  -107,  -107,     3,  -107,   -25,
    -107,    14,  -107,  -107,  -107,  -107,    10,  -107,  -107,  -107,
    -107,   207,   207,    52,    43,    65,   207,   207,   207,  -107,
    -107,  -107,  -107,    72,  -107,    80,   207,   207,   435,  -107,
    -107,    91,   207,  -107,  -107,  -107,  -107,  -107,    66,  -107,
      73,  -107,    73,  -107,    81,  -107,    79,  -107,   106,   154,
      86,  -107,  -107,   101,   219,  -107,  -107,  -107,  -107,   171,
      29,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,  -107,  -107,   435,
    -107,  -107,  -107,  -107,   108,    66,  -107,  -107,    66,   110,
     108,    66,   108,  -107,  -107,    89,  -107,  -107,  -107,   207,
      65,  -107,    73,    73,  -107,  -107,   452,   452,   452,   452,
     452,   452,   240,   240,    67,    67,    67,    67,    67,  -107,
    -107,  -107,   207,    -4,   -11,  -107,  -107,    73,    66,  -107,
     -11,  -107,    73,  -107,   109,  -107,   207,  -107,    10,  -107,
    -107,   188,    66,    66,    66,   435,    66,    24,    66,    37,
    -107,    76,   296,   435,  -107,   320,   272,    52,   108,    73,
      73,    92,  -107,    73,  -107,  -107,   112,  -107,  -107,  -107,
     123,    95,  -107,    96,    96,  -107,    66,  -107,  -107,  -107,
    -107,    99,   140,   151,    66,   344,  -107,  -107,  -107,  -107,
     368,   392,  -107,  -107
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -107,  -107,   -68,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,   -43,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,   107,
      38,   -59,  -106,   -98,   -42,   -67,   -87,  -107,  -107,  -107,
    -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,  -107,
    -107,    41,  -107,  -107,  -107,  -107,  -107,   -37,  -107,  -107,
    -107,  -107
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -63
static const yytype_int16 yytable[] =
{
      80,   115,     3,    83,    78,    79,    65,    66,   154,    84,
      85,    86,    41,   121,   160,    59,   160,    60,    42,    89,
      90,    43,    44,   162,   159,   109,    62,   110,   156,   111,
     112,    70,    91,    92,    93,    94,    95,    96,    68,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   113,
     -62,   -62,    75,   -62,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
      72,   156,   155,   173,   174,   189,   190,    63,   161,    64,
     163,   192,   154,   193,   104,   105,   106,   176,   172,   156,
     135,   156,   171,   178,   194,    17,   193,   182,   177,    81,
      82,   185,   186,   179,   110,   115,   111,   112,   117,    91,
      92,    93,    94,    95,    96,   175,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   113,   156,    87,   183,
     203,   204,   107,   195,   206,   196,    88,   123,   126,   214,
     215,   129,   131,   153,   201,   159,   202,   166,   220,   221,
     209,   180,   210,   205,   207,   193,   217,    91,    92,    93,
      94,    95,    96,   127,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    91,    92,    93,    94,    95,    96,
     122,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    91,    92,    93,    94,    95,    96,   218,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   219,   184,
     188,   128,     0,     0,     0,     0,    46,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,    48,   134,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     0,
       0,     0,     0,   187,    49,    50,    51,    52,    -2,    53,
      54,    55,    99,   100,   101,   102,   103,   104,   105,   106,
       0,     0,     0,    56,     0,     0,     0,    57,     0,     0,
       4,     5,     0,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,     0,    15,     0,     0,     0,     0,     0,
      16,    17,    18,    19,     4,     5,   199,     6,     7,   -32,
       8,     9,    10,    11,    12,    13,    14,     0,    15,     0,
       0,     0,     0,     0,    16,    17,    18,    19,     4,     5,
       0,     6,     7,   197,     8,     9,    10,    11,    12,    13,
      14,     0,    15,     0,     0,     0,     0,     0,    16,    17,
      18,    19,     4,     5,     0,     6,     7,   198,     8,     9,
      10,    11,    12,    13,    14,     0,    15,     0,     0,     0,
       0,     0,    16,    17,    18,    19,     4,     5,     0,     6,
       7,   -34,     8,     9,    10,    11,    12,    13,    14,     0,
      15,     0,     0,     0,     0,     0,    16,    17,    18,    19,
       4,     5,     0,     6,     7,   222,     8,     9,    10,    11,
      12,    13,    14,     0,    15,     0,     0,     0,     0,     0,
      16,    17,    18,    19,     4,     5,     0,     6,     7,   223,
       8,     9,    10,    11,    12,    13,    14,     0,    15,     0,
       0,     0,     0,     0,    16,    17,    18,    19,    91,    92,
      93,    94,    95,    96,     0,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   -63,   -63,   -63,   -63,   -63,
     -63,     0,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-107))

#define yytable_value_is_error(yytable_value) \
  ((yytable_value) == (-63))

static const yytype_int16 yycheck[] =
{
      43,    68,     0,    45,    41,    42,    54,    55,   114,    46,
      47,    48,    56,    72,   120,    42,   122,    44,    56,    56,
      57,    56,    43,   121,    35,    62,    58,    38,   115,    40,
      41,    56,     3,     4,     5,     6,     7,     8,    35,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    60,
      54,    55,    42,    57,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      56,   158,   114,   132,   133,   173,   174,    42,   120,    44,
     122,    57,   188,    59,    17,    18,    19,   154,   130,   176,
      61,   178,   129,   160,    57,    43,    59,   165,   157,    56,
      35,   169,   170,   162,    38,   172,    40,    41,    35,     3,
       4,     5,     6,     7,     8,   152,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    60,   214,    56,   166,
     189,   190,    41,    57,   193,    59,    56,    56,    59,   206,
     208,    55,    41,    35,   187,    35,   188,    58,   216,   217,
      27,    42,    57,    61,    42,    59,    57,     3,     4,     5,
       6,     7,     8,    57,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     3,     4,     5,     6,     7,     8,
      73,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     3,     4,     5,     6,     7,     8,    57,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    57,   168,
     172,    57,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    20,    57,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    55,    37,    38,    39,    40,     0,    42,
      43,    44,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    60,    -1,    -1,
      22,    23,    -1,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    45,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    45,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,    64,     0,    22,    23,    25,    26,    28,    29,
      30,    31,    32,    33,    34,    36,    42,    43,    44,    45,
      66,    67,    68,    70,    72,    75,    79,    80,    82,    84,
      86,    88,    89,   101,   102,   103,   109,   110,   116,   117,
     118,    56,    56,    56,    43,    81,     9,    13,    20,    37,
      38,    39,    40,    42,    43,    44,    56,    60,   119,    42,
      44,    85,    58,    42,    44,    54,    55,    65,    35,    96,
      56,    87,    56,    90,   104,    42,   111,   113,   119,   119,
      79,    56,    35,    96,   119,   119,   119,    56,    56,   119,
     119,     3,     4,     5,     6,     7,     8,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    41,    83,   119,
      38,    40,    41,    60,    92,    97,    98,    35,    93,    94,
      91,    93,    91,    56,   106,   114,    59,    57,    57,    55,
      73,    41,   120,   122,    57,    61,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,    99,    35,    94,    96,    98,    95,    97,    35,
      94,    96,    95,    96,   107,   105,    58,   115,   112,    69,
      76,   119,    96,    93,    93,   119,    97,    93,    97,    93,
      42,   108,    64,   119,   113,    64,    64,    55,    92,    95,
      95,   100,    57,    59,    57,    57,    59,    27,    27,    24,
      77,    79,    96,    93,    93,    61,    93,    42,    78,    27,
      57,    74,   121,   123,    97,    64,    71,    57,    57,    57,
      64,    64,    27,    27
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
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
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
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
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1806 of yacc.c  */
#line 153 "script.y"
    { 
		    (yyval.str) = NULL;
 		  }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 158 "script.y"
    {
		    Output((yyvsp[(3) - (3)].str), NULL);
		  }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 164 "script.y"
    {
		    (yyval.str) = "\n";
		  }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 168 "script.y"
    {
		    (yyval.str) = "; ";
		  }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 178 "script.y"
    {
		    OutputIndentation();
		    Output((yyvsp[(1) - (1)].str), NULL);
		  }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 185 "script.y"
    {
		    OutputIndentation();
		    OutputArgList((yyvsp[(1) - (1)].str));
		  }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 190 "script.y"
    {
		    OutputIndentation();
		    OutputArgList((yyvsp[(1) - (1)].str));
		  }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 203 "script.y"
    {
		    yyaccept();
		  }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 209 "script.y"
    {
		    OutputIndentation();
		    Output("while (", (yyvsp[(3) - (4)].expr).s, ")", NULL);
		  }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 214 "script.y"
    {
		    OutputIndentation();
		    Output("end", NULL);
		  }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 221 "script.y"
    {
		    OutputIndentation();
		    Output("for (", (yyvsp[(3) - (8)].str), "; ", (yyvsp[(5) - (8)].expr).s, "; ", (yyvsp[(7) - (8)].str), ")", NULL);
		  }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 227 "script.y"
    {
		    OutputIndentation();
		    Output("end", NULL);
		  }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 234 "script.y"
    {
			BEGIN FUNCLIT;
			OutputIndentation();
			Output("foreach ", (yyvsp[(2) - (3)].str), " (", NULL);
		    }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 240 "script.y"
    {
			BEGIN 0;
			OutputArgList((yyvsp[(6) - (7)].str));
			Output(")", NULL);
		    }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 246 "script.y"
    {
		    OutputIndentation();
		    Output("end", NULL);
		  }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 253 "script.y"
    {
		    OutputIndentation();
		    Output("if (", (yyvsp[(3) - (4)].expr).s, ")", NULL);
		  }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 258 "script.y"
    {
		    OutputIndentation();
		    Output("end", NULL);
		  }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 265 "script.y"
    {
 		    (yyval.str) = NULL;
 		  }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 269 "script.y"
    { OutputIndentation(); Output("else", NULL); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 271 "script.y"
    { (yyval.str) = NULL; }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 275 "script.y"
    {
		    (yyval.str) = Combine((yyvsp[(1) - (3)].str), " = ", (yyvsp[(3) - (3)].expr).s, NULL);
		  }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 281 "script.y"
    {
		    Pushyybgin(LIT);
		  }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 285 "script.y"
    {
		    OutputIndentation();
		    Output("include ", (yyvsp[(4) - (4)].str), " ", NULL);
		  }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 292 "script.y"
    {
		    Popyybgin();
		    OutputArgList((yyvsp[(3) - (4)].str));
		  }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 297 "script.y"
    {
		    Popyybgin();
		  }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 303 "script.y"
    {
		    (yyval.str) = (char*) strsave("");
		  }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 307 "script.y"
    {
		    (yyval.str) = (yyvsp[(1) - (1)].str);
		  }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 313 "script.y"
    {
		    Pushyybgin(FUNCLIT);
		  }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 317 "script.y"
    {
		    char	cmd[200];

		    sprintf(cmd, "%s%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
		    free((yyvsp[(1) - (3)].str));
		    free((yyvsp[(3) - (3)].str));
		    (yyval.str) = (char*) strsave(cmd);
		  }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 328 "script.y"
    {
		    BEGIN LIT;
		  }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 332 "script.y"
    {
		    char*	cmdname;
		    char**	argv;
		    int		i;

		    Popyybgin();
		    cmdname = (yyvsp[(1) - (4)].str);
		    argv = (char**) (yyvsp[(3) - (4)].str);
		    switch (MapCommand(&cmdname, argv, NULL))
		      {
		      case -1:
			fprintf(stderr, "Error mapping command: %s", cmdname);
			for (i = 0; argv[i] != NULL; i++)
			    fprintf(stderr, " %s", argv[i]);
			fprintf(stderr, "\n");
			InsertItemInArgList(argv, 0, "/* Could not map:", 100);
			InsertItemInArgList(argv, 1, cmdname, 100);
			AddItemToArgList(argv, "*/", 100);
			break;
		      case 0:
			argv[0] = NULL; /* don't output anything */
			break;
		      default:
			InsertItemInArgList(argv, 0, cmdname, 100);
			break;
		      }
		    (yyval.str) = (char*) argv;
		  }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 361 "script.y"
    {
		    char*	cmdname;
		    char**	argv;
		    int		i;

		    Popyybgin();
		    cmdname = (yyvsp[(1) - (6)].str);
		    argv = (char**) (yyvsp[(4) - (6)].str);
		    switch (MapCommand(&cmdname, argv, NULL))
		      {
		      case -1:
			fprintf(stderr, "Error mapping command: %s", cmdname);
			for (i = 0; argv[i] != NULL; i++)
			    fprintf(stderr, " %s", argv[i]);
			fprintf(stderr, "\n");
			InsertItemInArgList(argv, 0, "/* Could not map:", 100);
			InsertItemInArgList(argv, 1, cmdname, 100);
			AddItemToArgList(argv, "*/", 100);
			break;
		      case 0:
			argv[0] = NULL; /* don't output anything */
			break;
		      default:
			InsertItemInArgList(argv, 0, cmdname, 100);
			break;
		      }
		    (yyval.str) = (char*) argv;
		  }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 392 "script.y"
    {
		    Pushyybgin(FUNCLIT);
		    (yyval.str) = (yyvsp[(1) - (1)].str);
		  }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 399 "script.y"
    {
		    char*	cmdname;
		    char**	argv;

		    Popyybgin();
		    cmdname = (yyvsp[(1) - (6)].str);
		    argv = (char**) (yyvsp[(4) - (6)].str);
		    InsertItemInArgList(argv, 0, cmdname, 100);
		    (yyval.str) = (char*) argv;
		  }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 410 "script.y"
    {
		    BEGIN LIT;
		  }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 414 "script.y"
    {
		    char*	cmdname;
		    char**	argv;

		    Popyybgin();
		    cmdname = (yyvsp[(1) - (4)].str);
		    argv = (char**) (yyvsp[(3) - (4)].str);
		    InsertItemInArgList(argv, 0, cmdname, 100);
		    (yyval.str) = (char*) argv;
		  }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 427 "script.y"
    {
		    char**	argv;

		    argv = AllocateArgList(100);
		    argv[0] = NULL;
		    (yyval.str) = (char*) argv;
		  }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 435 "script.y"
    {
		    char**	argv;

		    argv = (char**) (yyvsp[(1) - (3)].str);
		    AddItemToArgList(argv, (yyvsp[(3) - (3)].str), 100);

		    (yyval.str) = (yyvsp[(1) - (3)].str);
		  }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 446 "script.y"
    {
		    char**	argv;

		    argv = AllocateArgList(100);
		    argv[0] = (yyvsp[(1) - (1)].str);
		    argv[1] = NULL;
		    (yyval.str) = (char*) argv;
		  }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 455 "script.y"
    {
		    char**	argv;

		    argv = (char**) (yyvsp[(1) - (3)].str);
		    AddItemToArgList(argv, (yyvsp[(3) - (3)].str), 100);

		    (yyval.str) = (yyvsp[(1) - (3)].str);
		  }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 474 "script.y"
    {
		    char**	argv;

		    argv = AllocateArgList(100);
		    argv[0] = (yyvsp[(1) - (1)].str);
		    argv[1] = NULL;
		    (yyval.str) = (char*) argv;
		  }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 483 "script.y"
    {
		    char**	argv;

		    argv = (char**) (yyvsp[(1) - (5)].str);
		    AddItemToArgList(argv, (yyvsp[(5) - (5)].str), 100);

		    (yyval.str) = (yyvsp[(1) - (5)].str);
		  }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 498 "script.y"
    {
			    (yyval.str) = (yyvsp[(1) - (1)].str);
			  }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 502 "script.y"
    {
			    (yyval.str) = Combine((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str), NULL);
			  }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 508 "script.y"
    {
		    (yyval.str) = (yyvsp[(1) - (1)].str);
		  }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 512 "script.y"
    {
		    (yyval.str) = Combine("\"", (yyvsp[(1) - (1)].str), "\"", NULL);
		  }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 516 "script.y"
    {
		    (yyval.str) = (yyvsp[(1) - (1)].str);
		  }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 520 "script.y"
    {
		    Pushyybgin(0);
		  }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 524 "script.y"
    {
		    Popyybgin();
		  }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 528 "script.y"
    {
		    /*
		    ** Often the expression is just a call to a command
		    ** or function, in which case we get the command
		    ** already wrapped in a {} pair.  Avoid the additional
		    ** curley braces.
		    */

		    if (AlreadyBracketed((yyvsp[(3) - (5)].expr).s))
			(yyval.str) = (yyvsp[(3) - (5)].expr).s;
		    else
			(yyval.str) = Combine("{", (yyvsp[(3) - (5)].expr).s, "}", NULL);
		  }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 544 "script.y"
    {
		    ParseNode	*funcpn;
		    ResultValue	v;
		    Result	*rp;

		    rp = SymtabNew(&GlobalSymbols, (yyvsp[(2) - (2)].str));
		    if (rp->r_type != 0 && rp->r_type != FUNCTION)
			fprintf(stderr, "WARNING: function name '%s' is redefining a variable!\n", (yyvsp[(2) - (2)].str));

		    rp->r_type = FUNCTION;

		    OutputIndentation();
		    Output("extern ", (yyvsp[(2) - (2)].str), NULL);
		  }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 559 "script.y"
    {
		    OutputIndentation();
		    Output("extern ", (yyvsp[(2) - (2)].str), NULL);
		  }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 566 "script.y"
    {
		    ParseNode	*funcpn;
		    ResultValue	v;
		    Result	*rp;
		    char	*script;

		    if (InFunctionDefinition)
		      {
			fprintf(stderr, "Function definition within another function or\n");
			fprintf(stderr, "within a control structure (FUNCTION %s).\n", (yyvsp[(2) - (2)].str));
			fprintf(stderr, "conversion failed\n");
			exit(1);
		      }

		    InFunctionDefinition++;
		    NextLocal = 0;
		    rp = SymtabNew(&GlobalSymbols, (yyvsp[(2) - (2)].str));
		    if (rp->r_type != 0 && rp->r_type != FUNCTION)
			fprintf(stderr, "WARNING: function name '%s' is redefining a variable!\n", (yyvsp[(2) - (2)].str));

		    rp->r_type = FUNCTION;

		    LocalSymbols = SymtabCreate();
		    (yyval.str) = (yyvsp[(2) - (2)].str);
		  }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 592 "script.y"
    {
		    ParseNode	*funcpn;
		    ResultValue	v;
		    Result	*rp;
		    char	*script;

		    rp = (Result *) (yyvsp[(2) - (2)].str);
		    if (InFunctionDefinition)
		      {
			fprintf(stderr, "Function definition within another function or\n");
			fprintf(stderr, "within a control structure (FUNCTION %s).\n", (yyvsp[(2) - (2)].str));
			fprintf(stderr, "conversion failed\n");
			exit(1);
		      }

		    InFunctionDefinition++;
		    NextLocal = 0;
		    LocalSymbols = SymtabCreate();

		    (yyval.str) = (yyvsp[(2) - (2)].str);
		  }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 616 "script.y"
    {
		    OutputIndentation();
		    Output("function ", (yyvsp[(1) - (1)].str), NULL);
		    ReturnIdents = 1;
		  }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 622 "script.y"
    {
		    ReturnIdents = 0;
		  }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 626 "script.y"
    {
		    OutputIndentation();
		    Output("end", NULL);

		    InFunctionDefinition--;
		    SymtabDestroy(LocalSymbols);
		    LocalSymbols = NULL;
		  }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 637 "script.y"
    { (yyval.str) = NULL; }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 639 "script.y"
    {
		    Output("(", NULL);
		  }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 644 "script.y"
    { 
		    Output(")", NULL);
		  }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 650 "script.y"
    {
		    Output((yyvsp[(1) - (1)].str), NULL);
		    vardef((yyvsp[(1) - (1)].str), STR, SCAST, NULL);
		  }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 655 "script.y"
    {
		    Output(", ", (yyvsp[(3) - (3)].str), NULL);
		    vardef((yyvsp[(3) - (3)].str), STR, SCAST, NULL);
		  }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 662 "script.y"
    {
		    ReturnIdents = 1;
		    DefType = INT;
		    DefCast = ICAST;
		    (yyval.str) = "int";
		  }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 669 "script.y"
    {
		    ReturnIdents = 1;
		    DefType = FLOAT;
		    DefCast = FCAST;
		    (yyval.str) = "float";
		  }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 676 "script.y"
    {
		    ReturnIdents = 1;
		    DefType = STR;
		    DefCast = SCAST;
		    (yyval.str) = "str";
		  }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 685 "script.y"
    {
		    OutputIndentation();
		    Output((yyvsp[(1) - (2)].str), " ", (yyvsp[(2) - (2)].str), NULL);
		    (yyval.str) = (yyvsp[(2) - (2)].str);
		  }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 694 "script.y"
    {
		    ReturnIdents = 1;
		  }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 698 "script.y"
    {
		    (yyval.str) = Combine((yyvsp[(1) - (4)].str), ", ", (yyvsp[(4) - (4)].str), NULL);
		  }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 704 "script.y"
    {
		    ReturnIdents = 0;
		  }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 708 "script.y"
    {
		    vardef((yyvsp[(1) - (3)].str), DefType, DefCast, NULL);
		    if ((yyvsp[(3) - (3)].str) != NULL)
			(yyval.str) = Combine((yyvsp[(1) - (3)].str), " = ", (yyvsp[(3) - (3)].str), NULL);
		    else
			(yyval.str) = (yyvsp[(1) - (3)].str);
		  }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 718 "script.y"
    {
		    (yyval.str) = NULL;
		  }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 722 "script.y"
    {
		    (yyval.str) = (yyvsp[(2) - (2)].expr).s;
		  }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 728 "script.y"
    {
		    OutputIndentation();
		    Output("break", NULL);
		  }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 735 "script.y"
    {
		    OutputIndentation();
		    Output("return ", (yyvsp[(2) - (2)].expr).s, NULL);
		  }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 740 "script.y"
    {
		    OutputIndentation();
		    Output("return", NULL);
		  }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 747 "script.y"
    { (yyval.str) = NULL; }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 751 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, "|", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 753 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, "&", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 755 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, "^", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 757 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine("~", (yyvsp[(2) - (2)].expr).s, NULL); }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 760 "script.y"
    {
		    if ((yyvsp[(1) - (3)].expr).t == STR && (yyvsp[(3) - (3)].expr).t == STR)
		      {
			(yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, " @ ", (yyvsp[(3) - (3)].expr).s, NULL);
			(yyval.expr).t = STR;
		      }
		    else
		      {
			(yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, " + ", (yyvsp[(3) - (3)].expr).s, NULL);
			(yyval.expr).t = INT;
		      }
		  }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 773 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, " - ", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 775 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, "*", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 777 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, "/", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 779 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, "%", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 781 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine("-", (yyvsp[(2) - (2)].expr).s, NULL); }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 784 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, " || ", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 786 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, " && ", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 788 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine("!", (yyvsp[(2) - (2)].expr).s, NULL); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 791 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, " < ", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 793 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, " <= ", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 795 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, " > ", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 797 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, " >= ", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 799 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, " == ", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 801 "script.y"
    { (yyval.expr).t = INT; (yyval.expr).s = Combine((yyvsp[(1) - (3)].expr).s, " != ", (yyvsp[(3) - (3)].expr).s, NULL); }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 804 "script.y"
    {
			BEGIN FUNCLIT;
		    }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 808 "script.y"
    {
			BEGIN 0;
		    }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 812 "script.y"
    {
		    char*	cmdname;
		    char**	argv;
		    char*	argstr;
		    int		retstr;
		    int		i;

		    cmdname = (yyvsp[(1) - (8)].str);
		    argv = (char**) (yyvsp[(5) - (8)].str);
		    switch (MapCommand(&cmdname, argv, &retstr))
		      {
		      case -1:
			argstr = ArgListToStr(argv);
			fprintf(stderr, "Error mapping command: %s %s",
			    cmdname, argstr);
			for (i = 0; argv[i] != NULL; i++)
			    fprintf(stderr, " %s", argv[i]);
			fprintf(stderr, "\n");
			(yyval.expr).t = INT;
			(yyval.expr).s = Combine("/* Could not map: ", cmdname, " ",
							argstr, " */", NULL);
			break;
		      case 0:
			fprintf(stderr, "Possible replacement of a command in an expression\n");
			fprintf(stderr, "with multiple commands.  Look for \"probable error\"\n");
			fprintf(stderr, "in converted script file.\n");
			(yyval.expr).t = INT;
			(yyval.expr).s = "/* probable error */"; /* don't output anything */
			break;
		      default:
			(yyval.expr).t = retstr ? STR : INT;
			(yyval.expr).s = Combine("{", cmdname, " ", ArgListToStr(argv),
								    "}", NULL);
			break;
		      }
		  }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 850 "script.y"
    {
			BEGIN FUNCLIT;
		    }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 854 "script.y"
    {
			BEGIN 0;
		    }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 858 "script.y"
    {
		    (yyval.expr).t = INT;
		    (yyval.expr).s = Combine("{", (yyvsp[(1) - (8)].str), " ", ArgListToStr((yyvsp[(5) - (8)].str)), "}", NULL);
		  }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 864 "script.y"
    { 
		    Result*	rp;

		    rp = SymtabLook(LocalSymbols, (yyvsp[(1) - (1)].str));
		    if (rp == NULL)
			rp = SymtabLook(&GlobalSymbols, (yyvsp[(1) - (1)].str));

		    (yyval.expr).t = rp->r_type;
		    (yyval.expr).s = (yyvsp[(1) - (1)].str);
 		  }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 876 "script.y"
    { 
		    (yyval.expr).t = INT;
		    (yyval.expr).s = Combine("{", (yyvsp[(1) - (1)].str), "}", NULL);
 		  }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 882 "script.y"
    { 
		    char*	cmdname;
		    char*	argv[1];
		    int		retstr;
		    int		i;

		    cmdname = (yyvsp[(1) - (1)].str);
		    argv[0] = NULL;
		    switch (MapCommand(&cmdname, argv, &retstr))
		      {
		      case -1:
			fprintf(stderr, "Error mapping command: %s", cmdname);
			fprintf(stderr, "\n");
			(yyval.expr).t = INT;
			(yyval.expr).s = Combine("/* Could not map: ", cmdname,
							    " */", NULL);
			break;
		      case 0:
			fprintf(stderr, "Possible replacement of a command in an expression\n");
			fprintf(stderr, "with multiple commands.  Look for \"probable error\"\n");
			fprintf(stderr, "in converted script file.\n");
			(yyval.expr).t = INT;
			(yyval.expr).s = "/* probable error */"; /* don't output anything */
			break;
		      default:
			(yyval.expr).t = retstr ? STR : INT;
			(yyval.expr).s = Combine("{", cmdname, "}", NULL);
			break;
		      }
 		  }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 914 "script.y"
    { 
		    (yyval.expr).t = INT;
		    (yyval.expr).s = (yyvsp[(1) - (1)].str);
 		  }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 919 "script.y"
    { 
		    (yyval.expr).t = INT;
		    (yyval.expr).s = (yyvsp[(1) - (1)].str);
 		  }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 924 "script.y"
    { 
		    (yyval.expr).t = STR;
		    (yyval.expr).s = Combine("\"", (yyvsp[(1) - (1)].str), "\"", NULL);
 		  }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 930 "script.y"
    {
		    (yyval.expr).t = STR;
		    (yyval.expr).s = (yyvsp[(1) - (1)].str);
		  }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 936 "script.y"
    {
		    (yyval.expr).t = (yyvsp[(2) - (3)].expr).t;
		    (yyval.expr).s = Combine("(", (yyvsp[(2) - (3)].expr).s, ")", NULL);
		  }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 943 "script.y"
    {
		    (yyval.expr).t = (yyvsp[(2) - (3)].expr).t;
		    (yyval.expr).s = Combine("(", (yyvsp[(2) - (3)].expr).s, ")", NULL);
		  }
    break;



/* Line 1806 of yacc.c  */
#line 3049 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 949 "script.y"


#if defined(decalpha) && !defined(bison)
extern YYSTYPE	yylval;

#if defined(__FreeBSD__)
#include "y.tab.h"
#endif

#include "lex.yy.c"

#endif
/*
** TokenStr
**
**	Return the token string for the given token.
*/

char *TokenStr(token)

int	token;

{	/* TokenStr --- Return token string for token */

	static char	buf[100];

	switch (token)
	  {

	  case LT: return("<");
	  case LE: return("<=");
	  case GT: return(">");
	  case GE: return(">=");
	  case EQ: return("==");
	  case NE: return("!=");

	  case OR: return("||");
	  case AND: return("&&");

#define	RET(tok)	case tok: return("tok")

	  RET(UMINUS);

	  RET(WHILE);
	  RET(IF);
	  RET(ELSE);
	  RET(FOR);
	  RET(FOREACH);
	  RET(END);
	  RET(INCLUDE);
	  RET(BREAK);
	  RET(INT);
	  RET(FLOAT);
	  RET(STR);
	  RET(RETURN);
	  RET(WHITESPACE);
	  RET(FUNCTION);
	  RET(INTCONST);
	  RET(DOLLARARG);
	  RET(FLOATCONST);
	  RET(STRCONST);
	  RET(LITERAL);
	  RET(IDENT);
	  RET(VARREF);
	  RET(FUNCREF);
	  RET(SL);
	  RET(COMMAND);
	  RET(ARGUMENT);
	  RET(ARGLIST);
	  RET(LOCREF);
	  RET(ICAST);
	  RET(FCAST);
	  RET(SCAST);

	  }

	if (token < 128)
	    if (token < ' ')
		sprintf(buf, "^%c", token+'@');
	    else
		sprintf(buf, "%c", token);
	else
	    sprintf(buf, "%d", token);

	return(buf);

}	/* TokenStr */



ParseNode *vardef(ident, type, castop, init)

char		*ident;
int		type;
int		castop;
char	*init;

{	/* vardef --- Define a variable */

	ParseNode	*pn;
	Result		*rp, r;
	ResultValue	v, slv;

	if (InFunctionDefinition && LocalSymbols != NULL)
	  {
	    rp = SymtabNew(LocalSymbols, ident);
	        rp->r_type = type;
		rp->r.r_loc.l_type = type;
		rp->r.r_loc.l_offs = NextLocal++;
	  }
	else
	  {
	    rp = SymtabNew(&GlobalSymbols, ident);

	    rp->r_type = type;
	  }

}	/* vardef */


ParseInit()

{    /* ParseInit --- Initialize parser variables */

        InFunctionDefinition = 0;
	Compiling = 0;
	BreakAllowed = 0;
	LocalSymbols = NULL;
	nextchar(1);	/* Flush lexer input */

}    /* ParseInit */


int NestedLevel()

{    /* NestedLevel --- Return TRUE if in func_def or control structure */

        return(InFunctionDefinition || Compiling);

}    /* NestedLevel */

int AlreadyBracketed(str)

char*	str;

{	/* AlreadyBracketed --- Return TRUE if the string has valid curley
				braces */

	if (*str == '{')
	  {
	    int	braceCount;

	    braceCount = 1;
	    for (str++; braceCount > 0 && *str != '\0'; str++)
	      {
		if (*str == '{')
		    braceCount++;
		else if (*str == '}')
		    braceCount--;
	      }

	    return braceCount == 0 && *str == '\0';
	  }
	else
	    return 0;

}	/* AlreadyBracketed */

