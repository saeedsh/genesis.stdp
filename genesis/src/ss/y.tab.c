/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "script.y"

static char parsercsid[] = "$Id: script.y,v 1.5 2006/02/15 18:47:00 svitak Exp $";

/*
** $Log: script.y,v $
** Revision 1.5  2006/02/15 18:47:00  svitak
** Changes to allow parsing of scripts which use linefeeds containing \r, or
** carriage return.
**
** Revision 1.4  2005/08/08 13:10:21  svitak
** Removed #ifdef around #include y.tab.h.
**
** Revision 1.3  2005/06/27 19:01:13  svitak
** Added explicit types to untyped functions and fixed return values as
** appropriate. Initialized values explicitly when it was unclear if
** they were being used uninitialized (may not apply to all files being
** checked in in this batch).
**
** Revision 1.2  2005/06/25 22:04:34  svitak
** Added explicit return types to untyped functions. Fixed return statements.
**
** Revision 1.1.1.1  2005/06/14 04:38:32  svitak
** Import from snapshot of CalTech CVS tree of June 8, 2005
**
** Revision 1.24  2003/03/28 21:03:58  gen-dbeeman
** Changes from Hugo Cornelis to enable debugging commands gctrace and gftrace
** Fix from Mike Vanier Jan 2003 to fix problem with bison ver. 1.75
**
** Revision 1.23  2001/04/25 17:17:04  mhucka
** Misc. small changes to improve portability and address compiler warnings.
**
** Revision 1.21  1997/07/24 00:32:16  dhb
** Additional T3E mods from PSC
**
** Revision 1.20  1997/06/12 22:49:35  dhb
** Added include of string.h for strlen() declaration needed by
** included lexer code.
**
** Revision 1.19  1996/06/26 18:17:55  venkat
** Added preprocessor macros to deal with the order of the include lex.yy.c
** statement and the definitions of the macros used in it on the DEC/alpha.
**
 * Revision 1.18  1995/06/16  06:01:10  dhb
 * FreeBSD compatibility.
 *
 * Revision 1.17  1995/06/14  20:34:25  dhb
 * Fix to allow variable names to appear as first part of a command
 * with trailing arg_component_list.
 *
 * Revision 1.16  1995/05/26  17:37:40  dhb
 * Changed lexer start state used for parsing opt_node syntax from
 * FUNCLIT to LIT which allows commas and parenthesis in the LITERALs
 * there.  The node syntax allows comma separated node specs.
 *
 * Revision 1.15  1995/05/08  22:34:16  dhb
 * Removed non-terminal typing for cmdname_expr (e.g. %type statement)
 *
 * Revision 1.14  1995/05/08  22:31:51  dhb
 * Changed optional node syntax appended to command and function calls
 * to be an optional arg_component_list.  This will allow just about
 * anything following an initial command for function name.
 *
 * Revision 1.13  1995/04/29  01:21:59  dhb
 * Moved include of lex.yy.c back to original location.  SGI specific
 * problem is fixed by extern void exit() in script.l.
 *
 * Revision 1.12  1995/04/24  22:36:15  dhb
 * Call to SymtabKey() in func_call production code was passing
 * a Symtab rather than a Symtab*.
 *
 * Revision 1.11  1995/04/15  02:23:11  dhb
 * Moved include of lex.yy.c after parse rules.  SGI lex generates calls
 * to exit() but SGI yacc doesn't include unistd.h until it starts doing
 * the rules.  Since unistd.h defines void exit() and cc interprets the
 * calls in the lexer as int exit() cc complains we are redefining the
 * return type.
 *
 * Revision 1.10  1994/12/15  21:52:36  dhb
 * Added support for adding @node to SLI script function calls.  Will allow
 * calling script function on other nodes on parallel systems.
 *
 * Revision 1.9  1994/12/02  00:05:45  dhb
 * Added elif to if then else construct.
 *
 * Added ** operator to do pow().
 *
 * Revision 1.8  1994/10/18  17:32:10  dhb
 * Changed PTEval() call to PTCall() which frees the evaluated result.
 *
 * Revision 1.7  1994/10/14  17:22:05  dhb
 * Another memory leak of ScriptInfo patched.
 *
 * Revision 1.6  1994/10/12  17:14:21  dhb
 * Removed dead code.
 *
 * Patched various memory leaks.
 *
 * Removed foreach restriction that the loop variable be a string.
 *
 * Revision 1.5  1994/08/31  03:03:23  dhb
 * Allow additional whitespace in foreach argument list.  This allows
 * for line continuations within the arglist including just after ( and
 * before ).
 *
 * Revision 1.4  1994/06/03  21:09:56  dhb
 * Fixed precedence problem where a == b && c == d was a syntax error.
 *
 * Revision 1.3  1994/04/16  17:19:55  dhb
 * Fixed operator precedence problem.  Made ! have higher prec than
 * || and &&.
 *
 * Revision 1.2  1993/03/01  17:39:01  dhb
 * 1.4 to 2.0 script language changes.
 *
 * 	Removed support for `function call' format of command invokation from
 * 	both the command line and expressions.  Commands are invoked in
 * 	expressions and command arguments by delimiting them with curly braces.
 *
 * 	Added @ operator for string concatenation.
 *
 * Revision 1.1  1992/12/11  21:19:07  dhb
 * Initial revision
 *
*/

#include <stdio.h>
#include <setjmp.h>
#include <string.h>
#include <string.h>
#include "parse.h"
#include "symtab.h"
#include "ss_func_ext.h"

/*
** Parser routines which return something other than int.
*/

extern ParseNode *vardef();
extern char *TokenStr();
extern char *MakeScriptInfo();	/* Actually a generic pointer */

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

/* Line 371 of yacc.c  */
#line 196 "script.y"

#if !defined(decalpha) || defined(bison) || defined(T3E)
/*
** Start of lexical analyzer.  LEX source is in "script.l".
*/

extern YYSTYPE	yylval;

#include "y.tab.h"
#include "lex.yy.c"

#endif

/* Line 371 of yacc.c  */
#line 244 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AND = 258,
     OR = 259,
     NE = 260,
     EQ = 261,
     GE = 262,
     GT = 263,
     LE = 264,
     LT = 265,
     POW = 266,
     UMINUS = 267,
     WHILE = 268,
     IF = 269,
     ELSE = 270,
     ELIF = 271,
     FOR = 272,
     FOREACH = 273,
     END = 274,
     INCLUDE = 275,
     ENDSCRIPT = 276,
     BREAK = 277,
     INT = 278,
     FLOAT = 279,
     STR = 280,
     RETURN = 281,
     WHITESPACE = 282,
     FUNCTION = 283,
     INTCONST = 284,
     DOLLARARG = 285,
     FLOATCONST = 286,
     STRCONST = 287,
     LITERAL = 288,
     IDENT = 289,
     VARREF = 290,
     FUNCREF = 291,
     EXTERN = 292,
     SL = 293,
     COMMAND = 294,
     EXPRCALL = 295,
     ARGUMENT = 296,
     ARGLIST = 297,
     LOCREF = 298,
     ICAST = 299,
     FCAST = 300,
     SCAST = 301
   };
#endif
/* Tokens.  */
#define AND 258
#define OR 259
#define NE 260
#define EQ 261
#define GE 262
#define GT 263
#define LE 264
#define LT 265
#define POW 266
#define UMINUS 267
#define WHILE 268
#define IF 269
#define ELSE 270
#define ELIF 271
#define FOR 272
#define FOREACH 273
#define END 274
#define INCLUDE 275
#define ENDSCRIPT 276
#define BREAK 277
#define INT 278
#define FLOAT 279
#define STR 280
#define RETURN 281
#define WHITESPACE 282
#define FUNCTION 283
#define INTCONST 284
#define DOLLARARG 285
#define FLOATCONST 286
#define STRCONST 287
#define LITERAL 288
#define IDENT 289
#define VARREF 290
#define FUNCREF 291
#define EXTERN 292
#define SL 293
#define COMMAND 294
#define EXPRCALL 295
#define ARGUMENT 296
#define ARGLIST 297
#define LOCREF 298
#define ICAST 299
#define FCAST 300
#define SCAST 301



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 401 "y.tab.c"

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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
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


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
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
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   378

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  130
/* YYNRULES -- Number of states.  */
#define YYNSTATES  218

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      58,     2,     2,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    11,     2,     2,     2,    20,    14,     2,
      61,    62,    18,    12,    66,    13,     2,    19,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    60,
       2,    63,     2,     2,    17,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    16,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,    15,    65,    21,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     7,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    46,    48,    50,    51,    59,    60,    72,
      73,    74,    86,    87,    96,    97,   100,   101,   109,   113,
     114,   118,   124,   128,   129,   131,   132,   136,   137,   141,
     142,   147,   149,   150,   156,   157,   161,   163,   167,   168,
     170,   172,   175,   176,   178,   180,   183,   185,   187,   189,
     190,   191,   197,   199,   201,   203,   206,   209,   212,   215,
     216,   217,   224,   225,   229,   231,   235,   237,   239,   241,
     244,   246,   247,   252,   253,   257,   258,   261,   263,   266,
     268,   269,   273,   277,   281,   284,   288,   292,   296,   300,
     304,   308,   312,   315,   319,   323,   326,   330,   334,   338,
     342,   346,   350,   352,   354,   356,   358,   360,   364,   368,
     372
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      68,     0,    -1,    69,    -1,    -1,    -1,    69,    70,    72,
      71,    -1,    58,    -1,    59,    -1,    60,    -1,    74,    -1,
      76,    -1,    78,    -1,    81,    -1,    85,    -1,    88,    -1,
      73,    -1,    93,    -1,    96,    -1,   110,    -1,   108,    -1,
     116,    -1,   122,    -1,   123,    -1,   124,    -1,    32,    -1,
      -1,    24,    61,   125,    62,    75,    69,    30,    -1,    -1,
      28,    61,    85,    60,   125,    60,    85,    62,    77,    69,
      30,    -1,    -1,    -1,    29,    46,    61,    79,   100,    99,
     100,    80,    62,    69,    30,    -1,    -1,    25,    61,   125,
      62,    82,    69,    83,    30,    -1,    -1,    26,    69,    -1,
      -1,    27,    61,   125,    62,    84,    69,    83,    -1,    46,
      63,   125,    -1,    -1,    31,    87,   102,    -1,    86,    44,
      38,    99,   102,    -1,    86,    44,   102,    -1,    -1,   103,
      -1,    -1,    45,    91,    89,    -1,    -1,    46,    92,   103,
      -1,    -1,    90,    94,    98,   102,    -1,    47,    -1,    -1,
      95,    89,    97,    98,   102,    -1,    -1,    98,   101,   103,
      -1,   103,    -1,    99,   101,   103,    -1,    -1,   101,    -1,
      38,    -1,   101,    38,    -1,    -1,    38,    -1,   104,    -1,
     103,   104,    -1,    44,    -1,    43,    -1,    41,    -1,    -1,
      -1,    64,   105,   107,   106,    65,    -1,    96,    -1,    93,
      -1,   125,    -1,    48,    45,    -1,    48,    47,    -1,    39,
      45,    -1,    39,    47,    -1,    -1,    -1,   109,   111,   113,
     112,    69,    30,    -1,    -1,    61,   114,    62,    -1,    45,
      -1,   114,    66,    45,    -1,    34,    -1,    35,    -1,    36,
      -1,   115,   117,    -1,   119,    -1,    -1,   117,    66,   118,
     119,    -1,    -1,    45,   120,   121,    -1,    -1,    63,   125,
      -1,    33,    -1,    37,   125,    -1,    37,    -1,    -1,   125,
      15,   125,    -1,   125,    14,   125,    -1,   125,    16,   125,
      -1,    21,   125,    -1,   125,    17,   125,    -1,   125,    12,
     125,    -1,   125,    13,   125,    -1,   125,    18,   125,    -1,
     125,    19,   125,    -1,   125,    20,   125,    -1,   125,    22,
     125,    -1,    13,   125,    -1,   125,     4,   125,    -1,   125,
       3,   125,    -1,    11,   125,    -1,   125,    10,   125,    -1,
     125,     9,   125,    -1,   125,     8,   125,    -1,   125,     7,
     125,    -1,   125,     6,   125,    -1,   125,     5,   125,    -1,
      46,    -1,    42,    -1,    40,    -1,    43,    -1,    41,    -1,
      64,   125,    65,    -1,    64,    93,    65,    -1,    64,    96,
      65,    -1,    61,   125,    62,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   212,   212,   216,   220,   219,   255,   256,   257,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   277,   298,   297,   315,   314,   337,
     343,   336,   360,   359,   377,   380,   383,   382,   399,   414,
     413,   423,   459,   493,   496,   537,   536,   551,   550,   582,
     581,   621,   629,   628,   650,   653,   659,   663,   669,   670,
     673,   674,   677,   678,   681,   687,   695,   702,   709,   717,
     721,   716,   730,   734,   738,   747,   766,   772,   807,   856,
     860,   855,   876,   877,   881,   892,   905,   911,   917,   925,
     931,   933,   932,   946,   945,   957,   958,   962,   974,   980,
     989,   992,   994,   996,   998,  1001,  1004,  1006,  1008,  1010,
    1012,  1014,  1016,  1019,  1021,  1023,  1026,  1028,  1030,  1032,
    1034,  1036,  1039,  1059,  1066,  1073,  1081,  1089,  1093,  1097,
    1101
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AND", "OR", "NE", "EQ", "GE", "GT",
  "LE", "LT", "'!'", "'+'", "'-'", "'&'", "'|'", "'^'", "'@'", "'*'",
  "'/'", "'%'", "'~'", "POW", "UMINUS", "WHILE", "IF", "ELSE", "ELIF",
  "FOR", "FOREACH", "END", "INCLUDE", "ENDSCRIPT", "BREAK", "INT", "FLOAT",
  "STR", "RETURN", "WHITESPACE", "FUNCTION", "INTCONST", "DOLLARARG",
  "FLOATCONST", "STRCONST", "LITERAL", "IDENT", "VARREF", "FUNCREF",
  "EXTERN", "SL", "COMMAND", "EXPRCALL", "ARGUMENT", "ARGLIST", "LOCREF",
  "ICAST", "FCAST", "SCAST", "'\\n'", "'\\r'", "';'", "'('", "')'", "'='",
  "'{'", "'}'", "','", "$accept", "script", "statement_list", "@1",
  "stmnt_terminator", "statement", "endscript_marker", "while_stmnt", "@2",
  "for_stmnt", "@3", "foreach_stmnt", "$@4", "$@5", "if_stmnt", "@6",
  "else_clause", "@7", "assign_stmnt", "include_hdr", "$@8",
  "include_stmnt", "opt_node", "cmd_name", "$@9", "$@10", "cmd_stmnt",
  "$@11", "funcref", "func_call", "$@12", "opt_arg_list", "arg_list",
  "optwslist", "wslist", "ws", "arg_component_list", "arg_component",
  "$@13", "$@14", "ac_func_cmd_expr", "ext_func", "func_hdr", "func_def",
  "$@15", "$@16", "func_args", "func_arg_list", "decl_type", "decl_stmnt",
  "decl_list", "$@17", "decl_ident", "$@18", "init", "break_stmnt",
  "return_stmnt", "null_stmnt", "expr", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,    33,    43,    45,    38,   124,    94,    64,    42,    47,
      37,   126,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,   299,   300,   301,    10,    13,
      59,    40,    41,    61,   123,   125,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    70,    69,    71,    71,    71,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    73,    75,    74,    77,    76,    79,
      80,    78,    82,    81,    83,    83,    84,    83,    85,    87,
      86,    88,    88,    89,    89,    91,    90,    92,    90,    94,
      93,    95,    97,    96,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   105,
     106,   104,   107,   107,   107,   108,   108,   109,   109,   111,
     112,   110,   113,   113,   114,   114,   115,   115,   115,   116,
     117,   118,   117,   120,   119,   121,   121,   122,   123,   123,
     124,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     7,     0,    11,     0,
       0,    11,     0,     8,     0,     2,     0,     7,     3,     0,
       3,     5,     3,     0,     1,     0,     3,     0,     3,     0,
       4,     1,     0,     5,     0,     3,     1,     3,     0,     1,
       1,     2,     0,     1,     1,     2,     1,     1,     1,     0,
       0,     5,     1,     1,     1,     2,     2,     2,     2,     0,
       0,     6,     0,     3,     1,     3,     1,     1,     1,     2,
       1,     0,     4,     0,     3,     0,     2,     1,     2,     1,
       0,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     2,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     3,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     4,     1,   100,     0,     0,     0,     0,    39,
      24,    97,    86,    87,    88,    99,     0,    45,    47,    51,
       0,     0,    15,     9,    10,    11,    12,    13,     0,    14,
      49,    16,    43,    17,    19,    79,    18,     0,    20,    21,
      22,    23,     0,     0,     0,     0,    62,     0,     0,     0,
     124,   126,   123,   125,   122,     0,     0,    98,    77,    78,
      43,     0,     0,    75,    76,     6,     7,     8,     5,    62,
      54,    68,    67,    66,    69,    52,    44,    64,    82,    93,
      89,    90,     0,     0,     0,     0,    29,    63,    40,   115,
     112,   104,     0,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    38,    48,    63,    42,
      62,     0,    54,    65,     0,    80,    95,    91,    25,    32,
       0,    58,   130,   128,   129,   127,   114,   113,   121,   120,
     119,   118,   117,   116,   106,   107,   102,   101,   103,   105,
     108,   109,   110,   111,    62,    56,    60,     0,    50,    73,
      72,    70,    74,    62,    84,     0,     3,     0,    94,     0,
       3,     3,     0,    60,     0,    59,     0,    41,    61,    55,
       0,    53,    83,     0,     4,    96,    92,     4,     4,     0,
      58,    57,    71,    85,    81,    26,     3,     0,     0,     0,
      30,    59,     4,     0,    33,    27,     0,     0,     3,     3,
      36,     4,     4,     3,    28,    31,     4,    37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    68,    21,    22,    23,   170,    24,
     208,    25,   131,   206,    26,   171,   198,   213,    27,    28,
      46,    29,    75,    30,    60,    62,    31,    70,    32,    33,
     122,   120,   154,   174,   157,    88,    76,    77,   121,   180,
     161,    34,    35,    36,    78,   166,   125,   165,    37,    38,
      80,   169,    81,   126,   168,    39,    40,    41,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -102
static const yytype_int16 yypact[] =
{
    -102,    23,    28,  -102,   242,   -32,    17,    24,   -12,  -102,
    -102,  -102,  -102,  -102,  -102,    93,   -29,  -102,    27,  -102,
     -21,   -27,  -102,  -102,  -102,  -102,  -102,  -102,    47,  -102,
    -102,  -102,    43,  -102,  -102,  -102,  -102,    53,  -102,  -102,
    -102,  -102,    93,    93,    54,    38,    63,    93,    93,    93,
    -102,  -102,  -102,  -102,  -102,    93,    81,   309,  -102,  -102,
      43,    93,    43,  -102,  -102,  -102,  -102,  -102,  -102,    70,
    -102,  -102,  -102,  -102,  -102,  -102,    43,  -102,    48,  -102,
      45,  -102,   159,   179,    27,    55,  -102,  -102,  -102,   356,
    -102,    91,   200,    52,    65,    67,    32,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,  -102,   309,    43,    43,  -102,
      80,    81,  -102,  -102,    75,  -102,    74,  -102,  -102,  -102,
      93,   100,  -102,  -102,  -102,  -102,   327,   327,   345,   345,
     345,   345,   345,   345,   131,   131,   131,   131,   131,   131,
      91,    91,    91,  -102,    80,    43,   -38,    39,  -102,  -102,
    -102,  -102,   309,    80,  -102,   -58,  -102,    93,  -102,    53,
    -102,  -102,   241,  -102,    43,   102,    39,  -102,  -102,    43,
      76,  -102,  -102,    99,   113,   309,  -102,   116,   -15,    54,
     100,    43,  -102,  -102,  -102,  -102,  -102,    86,   122,    96,
    -102,    39,   125,    93,  -102,  -102,    97,   220,  -102,  -102,
    -102,   130,   140,  -102,  -102,  -102,   -15,  -102
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,    98,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,   -36,  -102,   -41,  -102,
    -102,  -102,   142,  -102,  -102,  -102,   -47,  -102,  -102,   -46,
    -102,    68,    26,    21,  -101,   -44,   -45,   -74,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,    62,  -102,  -102,  -102,  -102,  -102,   -42
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -64
static const yytype_int16 yytable[] =
{
      82,    83,   123,    85,   182,    89,    90,    91,   183,    94,
      95,   196,   197,    92,    96,   -34,    58,   117,    59,   116,
     -63,   -63,   -63,     3,    63,   119,    64,   -63,    -2,    42,
     175,    65,    66,    67,    45,    97,    98,    99,   100,   101,
     102,   103,   104,   123,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   176,   114,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   155,   159,   160,   158,   178,    43,   162,
      71,   123,    72,    73,    71,    44,    72,    73,   172,   201,
      61,    69,    47,   -47,    48,   -47,   -47,   135,    79,    86,
      84,    87,    49,    74,    47,   123,    48,    74,   118,   124,
     177,   127,   179,   114,    49,   130,   -47,   123,   156,   181,
     164,    50,    51,    52,    53,   185,    17,    93,    19,   155,
     133,   191,   134,    50,    51,    52,    53,   167,   173,    54,
     178,   192,    55,   194,   193,    56,   195,   203,   199,   111,
     112,   113,   204,   114,    55,   -35,   191,    56,   205,   209,
     214,   207,    97,    98,    99,   100,   101,   102,   103,   104,
     215,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     217,   114,    97,    98,    99,   100,   101,   102,   103,   104,
     163,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     190,   114,   115,    97,    98,    99,   100,   101,   102,   103,
     104,   200,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   128,   114,    97,    98,    99,   100,   101,   102,   103,
     104,   186,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   129,   114,     0,    97,    98,    99,   100,   101,   102,
     103,   104,     0,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   132,   114,   184,     0,     5,     6,   187,   188,
       7,     8,     0,     9,    10,    11,    12,    13,    14,    15,
       0,    16,   210,     0,     0,     0,     0,    17,    18,    19,
      20,     0,     0,     0,   202,     0,     0,     0,     0,     0,
       0,   189,     0,     0,     0,     0,   211,   212,     0,     0,
       0,   216,    97,    98,    99,   100,   101,   102,   103,   104,
       0,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       0,   114,    99,   100,   101,   102,   103,   104,     0,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     0,   114,
     -64,   -64,   -64,   -64,   -64,   -64,     0,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     0,   114,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,   114
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-102)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-64)))

static const yytype_int16 yycheck[] =
{
      42,    43,    76,    44,    62,    47,    48,    49,    66,    56,
      56,    26,    27,    55,    56,    30,    45,    62,    47,    61,
      58,    59,    60,     0,    45,    69,    47,    65,     0,    61,
     131,    58,    59,    60,    46,     3,     4,     5,     6,     7,
       8,     9,    10,   117,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   154,    22,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   118,   121,   121,   120,    38,    61,   121,
      41,   155,    43,    44,    41,    61,    43,    44,   130,   190,
      63,    44,    11,    41,    13,    43,    44,    65,    45,    61,
      46,    38,    21,    64,    11,   179,    13,    64,    38,    61,
     154,    66,   157,    22,    21,    60,    64,   191,    38,   163,
      45,    40,    41,    42,    43,   167,    45,    46,    47,   174,
      65,   176,    65,    40,    41,    42,    43,    63,    38,    46,
      38,    65,    61,    30,    45,    64,    30,    61,   189,    18,
      19,    20,    30,    22,    61,    30,   201,    64,    62,    62,
      30,   203,     3,     4,     5,     6,     7,     8,     9,    10,
      30,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     216,    22,     3,     4,     5,     6,     7,     8,     9,    10,
     122,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     174,    22,    60,     3,     4,     5,     6,     7,     8,     9,
      10,   190,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    62,    22,     3,     4,     5,     6,     7,     8,     9,
      10,   169,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    62,    22,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    62,    22,   166,    -1,    24,    25,   170,   171,
      28,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,    62,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,   208,   209,    -1,    -1,
      -1,   213,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    -1,    22
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    68,    69,     0,    70,    24,    25,    28,    29,    31,
      32,    33,    34,    35,    36,    37,    39,    45,    46,    47,
      48,    72,    73,    74,    76,    78,    81,    85,    86,    88,
      90,    93,    95,    96,   108,   109,   110,   115,   116,   122,
     123,   124,    61,    61,    61,    46,    87,    11,    13,    21,
      40,    41,    42,    43,    46,    61,    64,   125,    45,    47,
      91,    63,    92,    45,    47,    58,    59,    60,    71,    44,
      94,    41,    43,    44,    64,    89,   103,   104,   111,    45,
     117,   119,   125,   125,    46,    85,    61,    38,   102,   125,
     125,   125,   125,    46,    93,    96,   125,     3,     4,     5,
       6,     7,     8,     9,    10,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    22,    89,   125,   103,    38,   102,
      98,   105,    97,   104,    61,   113,   120,    66,    62,    62,
      60,    79,    62,    65,    65,    65,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,    99,   103,    38,   101,   102,    93,
      96,   107,   125,    98,    45,   114,   112,    63,   121,   118,
      75,    82,   125,    38,   100,   101,   101,   102,    38,   103,
     106,   102,    62,    66,    69,   125,   119,    69,    69,    60,
      99,   103,    65,    45,    30,    30,    26,    27,    83,    85,
     100,   101,    69,    61,    30,    62,    80,   125,    77,    62,
      62,    69,    69,    84,    30,    30,    69,    83
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

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
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
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
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

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

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

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
/* Line 1787 of yacc.c  */
#line 216 "script.y"
    { 
		    (yyval.pn) = NULL;
 		  }
    break;

  case 4:
/* Line 1787 of yacc.c  */
#line 220 "script.y"
    {
		    (yyval.str) = (char *) MakeScriptInfo();
		    SetLine((yyval.str));
		  }
    break;

  case 5:
/* Line 1787 of yacc.c  */
#line 225 "script.y"
    {
		    ResultValue	v;

		    if (InFunctionDefinition || Compiling)
			if ((yyvsp[(3) - (4)].pn) != NULL)
			  {
			    v.r_str = (yyvsp[(2) - (4)].str);
			    (yyval.pn) = PTNew(SL, v, (yyvsp[(1) - (4)].pn), (yyvsp[(3) - (4)].pn));
			  }
			else
			  {
			    FreeScriptInfo((yyvsp[(2) - (4)].str));
			    (yyval.pn) = (yyvsp[(1) - (4)].pn);
			  }
		    else
		      {
		        /* execute statement */
		        if (setjmp(BreakBuf) == 0) {
			    if (setjmp(ReturnBuf) == 0)
				PTCall((yyvsp[(3) - (4)].pn));
			    else
				EndScript();
		        }
			FreeScriptInfo((yyvsp[(2) - (4)].str));
			FreePTValues((yyvsp[(3) - (4)].pn));
			PTFree((yyvsp[(3) - (4)].pn));
		      }
		  }
    break;

  case 24:
/* Line 1787 of yacc.c  */
#line 278 "script.y"
    {
		    /*
		    ** When the end of a script is encountered, the simulator
		    ** sgets routine returns NULL.  The nextchar routine in the
		    ** lexer returns a special character '\200' which is lexed
		    ** as ENDSCRIPT.  We need this when we include a script
		    ** in a function or control structure so that the script
		    ** local variable storage is allocated and deallocated.
		    */

		    if (Compiling || InFunctionDefinition)
		      {
			(yyval.pn) = PTNew(ENDSCRIPT, RV, NULL, NULL);
		      }
		    else
			(yyval.pn) = NULL;
		  }
    break;

  case 25:
/* Line 1787 of yacc.c  */
#line 298 "script.y"
    {
		    Compiling++;
		    BreakAllowed++;
		    (yyval.str) = (char *) MakeScriptInfo();
		  }
    break;

  case 26:
/* Line 1787 of yacc.c  */
#line 304 "script.y"
    {
		    ResultValue	v;

		    v.r_str = (yyvsp[(5) - (7)].str);
		    (yyval.pn) = PTNew(WHILE, v, (yyvsp[(3) - (7)].pn), (yyvsp[(6) - (7)].pn));
		    Compiling--;
		    BreakAllowed--;
		  }
    break;

  case 27:
/* Line 1787 of yacc.c  */
#line 315 "script.y"
    {
		      Compiling++;
		      BreakAllowed++;
		      (yyval.str) = (char *) MakeScriptInfo();
		    }
    break;

  case 28:
/* Line 1787 of yacc.c  */
#line 322 "script.y"
    {
		    ResultValue	v;
		    ParseNode	*forbody, *whilepart;

		    v.r_str = (char *) MakeScriptInfo();
		    forbody = PTNew(SL, v, (yyvsp[(10) - (11)].pn), (yyvsp[(7) - (11)].pn));
		    v.r_str = (yyvsp[(9) - (11)].str);
		    whilepart = PTNew(FOR, v, (yyvsp[(5) - (11)].pn), forbody);
		    (yyval.pn) = PTNew(SL, v, (yyvsp[(3) - (11)].pn), whilepart);
		    Compiling--;
		    BreakAllowed--;
		  }
    break;

  case 29:
/* Line 1787 of yacc.c  */
#line 337 "script.y"
    {
			BEGIN FUNCLIT;
			Compiling++;
			BreakAllowed++;
		    }
    break;

  case 30:
/* Line 1787 of yacc.c  */
#line 343 "script.y"
    {
			BEGIN 0;
		    }
    break;

  case 31:
/* Line 1787 of yacc.c  */
#line 347 "script.y"
    {
		    Result	*rp;
		    ResultValue	v;

		    rp = (Result *) (yyvsp[(2) - (11)].str);
		    v.r_str = (char *) rp;
		    (yyval.pn) = PTNew(FOREACH, v, (yyvsp[(6) - (11)].pn), (yyvsp[(10) - (11)].pn));
		    Compiling--;
		    BreakAllowed--;
		  }
    break;

  case 32:
/* Line 1787 of yacc.c  */
#line 360 "script.y"
    {
		    Compiling++;
		    (yyval.str) = (char *) MakeScriptInfo();
		  }
    break;

  case 33:
/* Line 1787 of yacc.c  */
#line 365 "script.y"
    {
		    ResultValue	v;
		    ParseNode	*stmntlists;

		    stmntlists = PTNew(0, v, (yyvsp[(6) - (8)].pn), (yyvsp[(7) - (8)].pn));
		    v.r_str = (yyvsp[(5) - (8)].str);
		    (yyval.pn) = PTNew(IF, v, (yyvsp[(3) - (8)].pn), stmntlists);
		    Compiling--;
		  }
    break;

  case 34:
/* Line 1787 of yacc.c  */
#line 377 "script.y"
    {
 		    (yyval.pn) = NULL;
 		  }
    break;

  case 35:
/* Line 1787 of yacc.c  */
#line 381 "script.y"
    { (yyval.pn) = (yyvsp[(2) - (2)].pn); }
    break;

  case 36:
/* Line 1787 of yacc.c  */
#line 383 "script.y"
    {
		    Compiling++;
		    (yyval.str) = (char *) MakeScriptInfo();
		  }
    break;

  case 37:
/* Line 1787 of yacc.c  */
#line 388 "script.y"
    {
		    ResultValue	v;
		    ParseNode	*stmntlists;

		    stmntlists = PTNew(0, v, (yyvsp[(6) - (7)].pn), (yyvsp[(7) - (7)].pn));
		    v.r_str = (yyvsp[(5) - (7)].str);
		    (yyval.pn) = PTNew(IF, v, (yyvsp[(3) - (7)].pn), stmntlists);
		    Compiling--;
		  }
    break;

  case 38:
/* Line 1787 of yacc.c  */
#line 400 "script.y"
    {
		    ResultValue	v;
		    Result	*rp;

		    (yyval.pn) = NULL;
		    rp = (Result *) (yyvsp[(1) - (3)].str);
			  {
			    v.r_str = (char *) rp;
		            (yyval.pn) = PTNew('=', v, (yyvsp[(3) - (3)].pn), NULL);
			  }
		  }
    break;

  case 39:
/* Line 1787 of yacc.c  */
#line 414 "script.y"
    {
		    Pushyybgin(LIT);
		  }
    break;

  case 40:
/* Line 1787 of yacc.c  */
#line 418 "script.y"
    {
		    (yyval.str) = NULL;
		  }
    break;

  case 41:
/* Line 1787 of yacc.c  */
#line 424 "script.y"
    {
		    ResultValue	v;
		    int		argc;
		    char	*argv[100];
		    char	argbuf[1000];

		    Popyybgin();
		    sprintf(argbuf, "%s", (yyvsp[(2) - (5)].str));
		    argc = 1;
		    argv[0] = argbuf;
		    do_cmd_args((yyvsp[(4) - (5)].pn), &argc, argv);
		    argv[argc] = NULL;

		    if (!IncludeScript(argc, argv))
		      {
			sprintf(argbuf, "Script '%s' not found", (yyvsp[(2) - (5)].str));
			FreePTValues((yyvsp[(4) - (5)].pn));
			PTFree((yyvsp[(4) - (5)].pn));
			free((yyvsp[(2) - (5)].str));
			yyerror(argbuf);
		      }

		    if (Compiling || InFunctionDefinition)
		      {
			v.r_str = (yyvsp[(2) - (5)].str);
			(yyval.pn) = PTNew(INCLUDE, v, (yyvsp[(4) - (5)].pn), NULL);
		      }
		    else
		      {
			FreePTValues((yyvsp[(4) - (5)].pn));
			PTFree((yyvsp[(4) - (5)].pn));
			free((yyvsp[(2) - (5)].str));
			(yyval.pn) = NULL;
		      }
		  }
    break;

  case 42:
/* Line 1787 of yacc.c  */
#line 460 "script.y"
    {
		    ResultValue	v;
		    int		argc;
		    char	*argv[100];
		    char	argbuf[1000];

		    Popyybgin();
		    sprintf(argbuf, "%s", (yyvsp[(2) - (3)].str));
		    argc = 1;
		    argv[0] = argbuf;
		    argv[argc] = NULL;

		    if (!IncludeScript(argc, argv))
		      {
			sprintf(argbuf, "Script '%s' not found", (yyvsp[(2) - (3)].str));
			free((yyvsp[(2) - (3)].str));
			yyerror(argbuf);
		      }

		    if (Compiling || InFunctionDefinition)
		      {
			v.r_str = (yyvsp[(2) - (3)].str);
			(yyval.pn) = PTNew(INCLUDE, v, NULL, NULL);
		      }
		    else
		      {
			free((yyvsp[(2) - (3)].str));
			(yyval.pn) = NULL;
		      }
		  }
    break;

  case 43:
/* Line 1787 of yacc.c  */
#line 493 "script.y"
    {
		    (yyval.pn) = (ParseNode*) NULL;
		  }
    break;

  case 44:
/* Line 1787 of yacc.c  */
#line 497 "script.y"
    {
		    (yyval.pn) = (yyvsp[(1) - (1)].pn);
		  }
    break;

  case 45:
/* Line 1787 of yacc.c  */
#line 537 "script.y"
    {
		    Pushyybgin(LIT);
		  }
    break;

  case 46:
/* Line 1787 of yacc.c  */
#line 541 "script.y"
    {
		    ResultValue	v;

		    v.r_str = (yyvsp[(1) - (3)].str);
		    if ((yyvsp[(3) - (3)].pn) == NULL)
			(yyval.pn) = PTNew(COMMAND, v, NULL, NULL);
		    else
			(yyval.pn) = PTNew(FUNCTION, v, NULL, (yyvsp[(3) - (3)].pn));
		  }
    break;

  case 47:
/* Line 1787 of yacc.c  */
#line 551 "script.y"
    {
		    Pushyybgin(LIT);
		  }
    break;

  case 48:
/* Line 1787 of yacc.c  */
#line 555 "script.y"
    {
		    ResultValue	v;
		    char*	varname;

		    varname = NULL;
		    if (LocalSymbols != NULL)
			varname = SymtabKey(LocalSymbols, (yyvsp[(1) - (3)].str));
		    if (varname == NULL)
			varname = SymtabKey(&GlobalSymbols, (yyvsp[(1) - (3)].str));
		    v.r_str = (char*) strsave(varname);

		    (yyval.pn) = PTNew(FUNCTION, v, NULL, (yyvsp[(3) - (3)].pn));
		  }
    break;

  case 49:
/* Line 1787 of yacc.c  */
#line 582 "script.y"
    {
		    BEGIN LIT;
		  }
    break;

  case 50:
/* Line 1787 of yacc.c  */
#line 586 "script.y"
    {
		    int		argc;
		    char	*argv[100];
		    char	argbuf[1000];

		    (yyval.pn) = (yyvsp[(1) - (4)].pn);
		    (yyvsp[(1) - (4)].pn)->pn_left = (yyvsp[(3) - (4)].pn);
		    Popyybgin();
		    if ((yyvsp[(1) - (4)].pn)->pn_val.r_type != EXPRCALL && (yyvsp[(1) - (4)].pn)->pn_right == NULL &&
				!IsCommand((yyvsp[(1) - (4)].pn)->pn_val.r.r_str))
		      {
			if (IsInclude((yyvsp[(1) - (4)].pn)->pn_val.r.r_str))
			  {
			    sprintf(argbuf, "%s", (yyvsp[(1) - (4)].pn)->pn_val.r.r_str);
			    argc = 1;
			    argv[0] = argbuf;
			    do_cmd_args((yyvsp[(3) - (4)].pn), &argc, argv);
			    argv[argc] = NULL;
			    IncludeScript(argc, argv);

			    if (Compiling || InFunctionDefinition)
			      {
				(yyvsp[(1) - (4)].pn)->pn_val.r_type = INCLUDE;
			      }
			    else
			      {
				FreePTValues((yyvsp[(1) - (4)].pn));
				PTFree((yyvsp[(1) - (4)].pn));
				(yyval.pn) = NULL;
			      }
			  }
		      }
		  }
    break;

  case 51:
/* Line 1787 of yacc.c  */
#line 622 "script.y"
    {
		    Pushyybgin(LIT);
		    (yyval.str) = (yyvsp[(1) - (1)].str);
		  }
    break;

  case 52:
/* Line 1787 of yacc.c  */
#line 629 "script.y"
    {
		    BEGIN LIT;
		  }
    break;

  case 53:
/* Line 1787 of yacc.c  */
#line 633 "script.y"
    {
		    ResultValue	v;
		    Result	*rp;

		    Popyybgin();
		    rp = (Result *) (yyvsp[(1) - (5)].str);
		    if ((yyvsp[(2) - (5)].pn) == NULL)
			(yyval.pn) = PTNew(FUNCTION, rp->r, (yyvsp[(4) - (5)].pn), NULL);
		    else
		      {
			v.r_str = (char*) strsave(SymtabKey(&GlobalSymbols, rp));
			(yyval.pn) = PTNew(FUNCTION, v, (yyvsp[(4) - (5)].pn), (yyvsp[(2) - (5)].pn));
		      }
		  }
    break;

  case 54:
/* Line 1787 of yacc.c  */
#line 650 "script.y"
    {
		    (yyval.pn) = NULL;
		  }
    break;

  case 55:
/* Line 1787 of yacc.c  */
#line 654 "script.y"
    {
		    (yyval.pn) = PTNew(ARGLIST, RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn));
		  }
    break;

  case 56:
/* Line 1787 of yacc.c  */
#line 660 "script.y"
    {
		    (yyval.pn) = PTNew(ARGLIST, RV, NULL, (yyvsp[(1) - (1)].pn));
		  }
    break;

  case 57:
/* Line 1787 of yacc.c  */
#line 664 "script.y"
    {
		    (yyval.pn) = PTNew(ARGLIST, RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn));
		  }
    break;

  case 64:
/* Line 1787 of yacc.c  */
#line 682 "script.y"
    {
			    ResultValue	v;

			    (yyval.pn) = PTNew(ARGUMENT, v, NULL, (yyvsp[(1) - (1)].pn));
			  }
    break;

  case 65:
/* Line 1787 of yacc.c  */
#line 688 "script.y"
    {
			    ResultValue	v;

			    (yyval.pn) = PTNew(ARGUMENT, v, (yyvsp[(1) - (2)].pn), (yyvsp[(2) - (2)].pn));
			  }
    break;

  case 66:
/* Line 1787 of yacc.c  */
#line 696 "script.y"
    {
		    ResultValue	v;

		    v.r_str = (yyvsp[(1) - (1)].str);
		    (yyval.pn) = PTNew(LITERAL, v, NULL, NULL);
		  }
    break;

  case 67:
/* Line 1787 of yacc.c  */
#line 703 "script.y"
    {
		    ResultValue	v;

		    v.r_str = (yyvsp[(1) - (1)].str);
		    (yyval.pn) = PTNew(LITERAL, v, NULL, NULL);
		  }
    break;

  case 68:
/* Line 1787 of yacc.c  */
#line 710 "script.y"
    {
		    ResultValue	v;

		    v.r_int = (yyvsp[(1) - (1)].iconst);
		    (yyval.pn) = PTNew(DOLLARARG, v, NULL, NULL);
		  }
    break;

  case 69:
/* Line 1787 of yacc.c  */
#line 717 "script.y"
    {
		    Pushyybgin(0);
		  }
    break;

  case 70:
/* Line 1787 of yacc.c  */
#line 721 "script.y"
    {
		    Popyybgin();
		  }
    break;

  case 71:
/* Line 1787 of yacc.c  */
#line 725 "script.y"
    {
		    (yyval.pn) = (yyvsp[(3) - (5)].pn);
		  }
    break;

  case 72:
/* Line 1787 of yacc.c  */
#line 731 "script.y"
    {
		    (yyval.pn) = (yyvsp[(1) - (1)].pn);
		  }
    break;

  case 73:
/* Line 1787 of yacc.c  */
#line 735 "script.y"
    {
		    (yyval.pn) = (yyvsp[(1) - (1)].pn);
		  }
    break;

  case 74:
/* Line 1787 of yacc.c  */
#line 739 "script.y"
    {
		    if ((yyvsp[(1) - (1)].pn)->pn_val.r_type == STRCONST)
			(yyvsp[(1) - (1)].pn)->pn_val.r_type = LITERAL;

		    (yyval.pn) = (yyvsp[(1) - (1)].pn);
		  }
    break;

  case 75:
/* Line 1787 of yacc.c  */
#line 748 "script.y"
    {
		    ParseNode	*funcpn;
		    ResultValue	v;
		    Result	*rp;

		    rp = SymtabNew(&GlobalSymbols, (yyvsp[(2) - (2)].str));
		    if (rp->r_type != 0 && rp->r_type != FUNCTION)
			fprintf(stderr, "WARNING: function name '%s' is redefining a variable!\n", (yyvsp[(2) - (2)].str));

		    rp->r_type = FUNCTION;

		    v.r_str = (char *) NULL;
		    funcpn = PTNew(SL, v, NULL, NULL);
		    rp->r.r_str = (char *) funcpn;

		    free((yyvsp[(2) - (2)].str));
		    (yyval.pn) = NULL;
		  }
    break;

  case 76:
/* Line 1787 of yacc.c  */
#line 767 "script.y"
    {
		    (yyval.pn) = NULL;
		  }
    break;

  case 77:
/* Line 1787 of yacc.c  */
#line 773 "script.y"
    {
		    ParseNode	*funcpn;
		    ResultValue	v;
		    Result	*rp;

		    if (InFunctionDefinition)
		      {
			fprintf(stderr, "Function definition within another function or\n");
			fprintf(stderr, "within a control structure (FUNCTION %s).\n", (yyvsp[(2) - (2)].str));
			yyerror("");
			/* No Return */
		      }

		    InFunctionDefinition++;
		    NextLocal = 0;
		    rp = SymtabNew(&GlobalSymbols, (yyvsp[(2) - (2)].str));
		    if (rp->r_type != 0 && rp->r_type != FUNCTION)
			fprintf(stderr, "WARNING: function name '%s' is redefining a variable!\n", (yyvsp[(2) - (2)].str));

		    rp->r_type = FUNCTION;

		    LocalSymbols = SymtabCreate();
		    v.r_str = (char *) LocalSymbols;
		    funcpn = PTNew(SL, v, NULL, NULL);

		    /*- copy function name as parse node info */

		    funcpn->pcInfo = strsave((yyvsp[(2) - (2)].str));

		    rp->r.r_str = (char *) funcpn;

		    free((yyvsp[(2) - (2)].str));
		    (yyval.pn) = funcpn;
		  }
    break;

  case 78:
/* Line 1787 of yacc.c  */
#line 808 "script.y"
    {
		    ParseNode	*funcpn;
		    Result	*rp;

		    rp = (Result *) (yyvsp[(2) - (2)].str);
		    if (InFunctionDefinition)
		      {
			fprintf(stderr, "Function definition within another function or\n");
			fprintf(stderr, "within a control structure (FUNCTION %s).\n", (yyvsp[(2) - (2)].str));
			yyerror("");
			/* No Return */
		      }

		    /*
		    ** Free old function parse tree and symtab
		    */

		    funcpn = (ParseNode *) rp->r.r_str;
		    if (funcpn->pn_val.r.r_str != NULL)
			SymtabDestroy(funcpn->pn_val.r.r_str);
		    FreePTValues(funcpn->pn_left);
		    PTFree(funcpn->pn_left);
		    FreePTValues(funcpn->pn_right);
		    PTFree(funcpn->pn_right);

		    InFunctionDefinition++;
		    NextLocal = 0;
		    LocalSymbols = SymtabCreate();
		    funcpn->pn_val.r.r_str = (char *) LocalSymbols;

		    /*- copy the function name as parse node info */

		    if (!funcpn->pcInfo)
		    {
			funcpn->pcInfo = strsave(yytext);
		    }
		    else
		    {
			/*! this should not happen */

			int i = 0;
		    }

		    (yyval.pn) = funcpn;
		  }
    break;

  case 79:
/* Line 1787 of yacc.c  */
#line 856 "script.y"
    {
		    ReturnIdents = 1;
		  }
    break;

  case 80:
/* Line 1787 of yacc.c  */
#line 860 "script.y"
    {
		    ReturnIdents = 0;
		  }
    break;

  case 81:
/* Line 1787 of yacc.c  */
#line 864 "script.y"
    {
		    InFunctionDefinition--;

		    (yyvsp[(1) - (6)].pn)->pn_left = (yyvsp[(3) - (6)].pn);
		    (yyvsp[(1) - (6)].pn)->pn_right = (yyvsp[(5) - (6)].pn);

		    LocalSymbols = NULL;
		    (yyval.pn) = NULL;
		  }
    break;

  case 82:
/* Line 1787 of yacc.c  */
#line 876 "script.y"
    { (yyval.pn) = NULL; }
    break;

  case 83:
/* Line 1787 of yacc.c  */
#line 878 "script.y"
    { (yyval.pn) = (yyvsp[(2) - (3)].pn); }
    break;

  case 84:
/* Line 1787 of yacc.c  */
#line 882 "script.y"
    {
		    ResultValue	v;
		    ParseNode	*init;

		    ArgMatch = 1;
		    v.r_int = ArgMatch++;
		    init = PTNew(DOLLARARG, v, NULL, NULL);
		    (yyval.pn) = vardef((yyvsp[(1) - (1)].str), STR, SCAST, init);
		    free((yyvsp[(1) - (1)].str));
		  }
    break;

  case 85:
/* Line 1787 of yacc.c  */
#line 893 "script.y"
    {
		    ResultValue	v;
		    ParseNode	*init;

		    v.r_int = ArgMatch++;
		    init = PTNew(DOLLARARG, v, NULL, NULL);
		    v.r_str = (char *) MakeScriptInfo();
		    (yyval.pn) = PTNew(SL, v, (yyvsp[(1) - (3)].pn), vardef((yyvsp[(3) - (3)].str), STR, SCAST, init));
		    free((yyvsp[(3) - (3)].str));
		  }
    break;

  case 86:
/* Line 1787 of yacc.c  */
#line 906 "script.y"
    {
		    ReturnIdents = 1;
		    DefType = INT;
		    DefCast = ICAST;
		  }
    break;

  case 87:
/* Line 1787 of yacc.c  */
#line 912 "script.y"
    {
		    ReturnIdents = 1;
		    DefType = FLOAT;
		    DefCast = FCAST;
		  }
    break;

  case 88:
/* Line 1787 of yacc.c  */
#line 918 "script.y"
    {
		    ReturnIdents = 1;
		    DefType = STR;
		    DefCast = SCAST;
		  }
    break;

  case 89:
/* Line 1787 of yacc.c  */
#line 926 "script.y"
    {
		    (yyval.pn) = (yyvsp[(2) - (2)].pn);
		  }
    break;

  case 91:
/* Line 1787 of yacc.c  */
#line 933 "script.y"
    {
		    ReturnIdents = 1;
		  }
    break;

  case 92:
/* Line 1787 of yacc.c  */
#line 937 "script.y"
    {
		    ResultValue	v;

		    v.r_str = (char *) MakeScriptInfo();
		    (yyval.pn) = PTNew(SL, v, (yyvsp[(1) - (4)].pn), (yyvsp[(4) - (4)].pn));
		  }
    break;

  case 93:
/* Line 1787 of yacc.c  */
#line 946 "script.y"
    {
		    ReturnIdents = 0;
		  }
    break;

  case 94:
/* Line 1787 of yacc.c  */
#line 950 "script.y"
    {
		    (yyval.pn) = vardef((yyvsp[(1) - (3)].str), DefType, DefCast, (yyvsp[(3) - (3)].pn));
		    free((yyvsp[(1) - (3)].str));
		  }
    break;

  case 95:
/* Line 1787 of yacc.c  */
#line 957 "script.y"
    { (yyval.pn) = NULL; }
    break;

  case 96:
/* Line 1787 of yacc.c  */
#line 959 "script.y"
    { (yyval.pn) = (yyvsp[(2) - (2)].pn); }
    break;

  case 97:
/* Line 1787 of yacc.c  */
#line 963 "script.y"
    {
		    ResultValue	v;

		    if (BreakAllowed)
			(yyval.pn) = PTNew(BREAK, v, NULL, NULL);
		    else
			yyerror("BREAK found outside of a loop");
			/* No Return */
		  }
    break;

  case 98:
/* Line 1787 of yacc.c  */
#line 975 "script.y"
    {
		    ResultValue	v;

		    (yyval.pn) = PTNew(RETURN, v, (yyvsp[(2) - (2)].pn), NULL);
		  }
    break;

  case 99:
/* Line 1787 of yacc.c  */
#line 981 "script.y"
    {
		    ResultValue	v;

		    (yyval.pn) = PTNew(RETURN, v, NULL, NULL);
		  }
    break;

  case 100:
/* Line 1787 of yacc.c  */
#line 989 "script.y"
    { (yyval.pn) = NULL; }
    break;

  case 101:
/* Line 1787 of yacc.c  */
#line 993 "script.y"
    { (yyval.pn) = PTNew('|', RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 102:
/* Line 1787 of yacc.c  */
#line 995 "script.y"
    { (yyval.pn) = PTNew('&', RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 103:
/* Line 1787 of yacc.c  */
#line 997 "script.y"
    { (yyval.pn) = PTNew('^', RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 104:
/* Line 1787 of yacc.c  */
#line 999 "script.y"
    { (yyval.pn) = PTNew('~', RV, (yyvsp[(2) - (2)].pn), NULL); }
    break;

  case 105:
/* Line 1787 of yacc.c  */
#line 1002 "script.y"
    { (yyval.pn) = PTNew('@', RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 106:
/* Line 1787 of yacc.c  */
#line 1005 "script.y"
    { (yyval.pn) = PTNew('+', RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 107:
/* Line 1787 of yacc.c  */
#line 1007 "script.y"
    { (yyval.pn) = PTNew('-', RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 108:
/* Line 1787 of yacc.c  */
#line 1009 "script.y"
    { (yyval.pn) = PTNew('*', RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 109:
/* Line 1787 of yacc.c  */
#line 1011 "script.y"
    { (yyval.pn) = PTNew('/', RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 110:
/* Line 1787 of yacc.c  */
#line 1013 "script.y"
    { (yyval.pn) = PTNew('%', RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 111:
/* Line 1787 of yacc.c  */
#line 1015 "script.y"
    { (yyval.pn) = PTNew(POW, RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 112:
/* Line 1787 of yacc.c  */
#line 1017 "script.y"
    { (yyval.pn) = PTNew(UMINUS, RV, (yyvsp[(2) - (2)].pn), NULL); }
    break;

  case 113:
/* Line 1787 of yacc.c  */
#line 1020 "script.y"
    { (yyval.pn) = PTNew(OR, RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 114:
/* Line 1787 of yacc.c  */
#line 1022 "script.y"
    { (yyval.pn) = PTNew(AND, RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 115:
/* Line 1787 of yacc.c  */
#line 1024 "script.y"
    { (yyval.pn) = PTNew('!', RV, (yyvsp[(2) - (2)].pn), NULL); }
    break;

  case 116:
/* Line 1787 of yacc.c  */
#line 1027 "script.y"
    { (yyval.pn) = PTNew(LT, RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 117:
/* Line 1787 of yacc.c  */
#line 1029 "script.y"
    { (yyval.pn) = PTNew(LE, RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 118:
/* Line 1787 of yacc.c  */
#line 1031 "script.y"
    { (yyval.pn) = PTNew(GT, RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 119:
/* Line 1787 of yacc.c  */
#line 1033 "script.y"
    { (yyval.pn) = PTNew(GE, RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 120:
/* Line 1787 of yacc.c  */
#line 1035 "script.y"
    { (yyval.pn) = PTNew(EQ, RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 121:
/* Line 1787 of yacc.c  */
#line 1037 "script.y"
    { (yyval.pn) = PTNew(NE, RV, (yyvsp[(1) - (3)].pn), (yyvsp[(3) - (3)].pn)); }
    break;

  case 122:
/* Line 1787 of yacc.c  */
#line 1040 "script.y"
    { 
		    Result	*rp;
		    ResultValue	v;

		    /*
		    ** Variable reference
		    */

		    rp = (Result *) (yyvsp[(1) - (1)].str);
		      {
			if (rp->r_type == FUNCTION || rp->r_type == LOCREF)
			    v = rp->r;
			else /* Global Variable */
			    v.r_str = (char *) rp;

		        (yyval.pn) = PTNew(rp->r_type, v, NULL, NULL);
		      }
 		  }
    break;

  case 123:
/* Line 1787 of yacc.c  */
#line 1060 "script.y"
    { 
		    ResultValue	v;

		    v.r_float = (yyvsp[(1) - (1)].fconst);
		    (yyval.pn) = PTNew(FLOATCONST, v, NULL, NULL);
 		  }
    break;

  case 124:
/* Line 1787 of yacc.c  */
#line 1067 "script.y"
    { 
		    ResultValue	v;

		    v.r_int = (yyvsp[(1) - (1)].iconst);
		    (yyval.pn) = PTNew(INTCONST, v, NULL, NULL);
 		  }
    break;

  case 125:
/* Line 1787 of yacc.c  */
#line 1074 "script.y"
    { 
		    ResultValue	v;

		    v.r_str = (yyvsp[(1) - (1)].str);
		    (yyval.pn) = PTNew(STRCONST, v, NULL, NULL);
 		  }
    break;

  case 126:
/* Line 1787 of yacc.c  */
#line 1082 "script.y"
    {
		    ResultValue	v;

		    v.r_int = (yyvsp[(1) - (1)].iconst);
		    (yyval.pn) = PTNew(DOLLARARG, v, NULL, NULL);
		  }
    break;

  case 127:
/* Line 1787 of yacc.c  */
#line 1090 "script.y"
    { (yyval.pn) = (yyvsp[(2) - (3)].pn); }
    break;

  case 128:
/* Line 1787 of yacc.c  */
#line 1094 "script.y"
    { (yyval.pn) = (yyvsp[(2) - (3)].pn); }
    break;

  case 129:
/* Line 1787 of yacc.c  */
#line 1098 "script.y"
    { (yyval.pn) = (yyvsp[(2) - (3)].pn); }
    break;

  case 130:
/* Line 1787 of yacc.c  */
#line 1102 "script.y"
    { (yyval.pn) = (yyvsp[(2) - (3)].pn); }
    break;


/* Line 1787 of yacc.c  */
#line 2979 "y.tab.c"
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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


/* Line 2050 of yacc.c  */
#line 1105 "script.y"


#if defined(decalpha) && !defined(bison) && !defined(T3E)
/*
** Start of lexical analyzer.  LEX source is in "script.l".
*/

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
ParseNode	*init;

{	/* vardef --- Define a variable */

	ParseNode	*pn;
	Result		*rp;
	ResultValue	v, slv;

	if (InFunctionDefinition && LocalSymbols != NULL)
	  {
	    rp = SymtabNew(LocalSymbols, ident);
	    if (rp->r_type == 0)
	      {
	        rp->r_type = LOCREF;
		rp->r.r_loc.l_type = type;
		rp->r.r_loc.l_offs = NextLocal++;
	      }

	    v.r_str = (char *) rp;
	    pn = PTNew(castop, v, NULL, NULL);
	    if (init)
	      {
		slv.r_str = (char *) MakeScriptInfo();
		pn = PTNew(SL, slv, pn, PTNew('=', v, init, NULL));
	      }
	  }
	else
	  {
	    rp = SymtabNew(&GlobalSymbols, ident);
	    switch(type)
	      {

	      case INT:
	        if (rp->r_type == 0)
	            rp->r.r_int = 0;
	        else
		    CastToInt(rp);
	        break;

	      case FLOAT:
	        if (rp->r_type == 0)
	            rp->r.r_float = 0.0;
	        else
		    CastToFloat(rp);
	        break;

	      case STR:
	        if (rp->r_type == 0)
	            rp->r.r_str = (char *) strsave("");
	        else
		    CastToStr(rp);
	        break;

	      }

	    rp->r_type = type;
	    v.r_str = (char *) rp;
	    if (init)
	        pn = PTNew('=', v, init, NULL);
	    else
	        pn = NULL;
	  }

	return(pn);

}	/* vardef */


void ParseInit()

{    /* ParseInit --- Initialize parser variables */

        InFunctionDefinition = 0;
	Compiling = 0;
	BreakAllowed = 0;
	LocalSymbols = NULL;
	nextchar(1);	/* Flush lexer input */
	PTInit();	/* Reinit parse tree evaluation */

}    /* ParseInit */


int NestedLevel()

{    /* NestedLevel --- Return TRUE if in func_def or control structure */

        return(InFunctionDefinition || Compiling);

}    /* NestedLevel */
