
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

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

/* Line 189 of yacc.c  */
#line 1 "cat.y"

#include "cat.h"
#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern int line_num;
ASTNode *root = NULL;
extern FILE *yyin; 
extern int yydebug;


/* Line 189 of yacc.c  */
#line 86 "cat.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
     TOKEN_IF = 258,
     TOKEN_ELSE = 259,
     TOKEN_ELIF = 260,
     TOKEN_SWITCH = 261,
     TOKEN_CASE = 262,
     TOKEN_DEFAULT = 263,
     TOKEN_BREAK = 264,
     TOKEN_FUNCTION = 265,
     TOKEN_FOR = 266,
     TOKEN_WHILE = 267,
     TOKEN_INT = 268,
     TOKEN_FLOAT = 269,
     TOKEN_IMPORT = 270,
     TOKEN_INSERT = 271,
     TOKEN_EXERT = 272,
     TOKEN_PLUS = 273,
     TOKEN_MINUS = 274,
     TOKEN_MULT = 275,
     TOKEN_DIV = 276,
     TOKEN_INCREMENT = 277,
     TOKEN_DECREMENT = 278,
     TOKEN_NOT = 279,
     TOKEN_COMP = 280,
     TOKEN_AND = 281,
     TOKEN_OR = 282,
     TOKEN_LOGICAL_NOT = 283,
     TOKEN_EQ = 284,
     TOKEN_NEQ = 285,
     TOKEN_GT = 286,
     TOKEN_LT = 287,
     TOKEN_GE = 288,
     TOKEN_LE = 289,
     TOKEN_ASSIGN = 290,
     TOKEN_PLUS_ASSIGN = 291,
     TOKEN_MINUS_ASSIGN = 292,
     TOKEN_MULT_ASSIGN = 293,
     TOKEN_DIV_ASSIGN = 294,
     TOKEN_SEMICOLON = 295,
     TOKEN_COLON = 296,
     TOKEN_LPAREN = 297,
     TOKEN_RPAREN = 298,
     TOKEN_LBRACE = 299,
     TOKEN_RBRACE = 300,
     TOKEN_COMMA = 301,
     TOKEN_BLOCK_START = 302,
     TOKEN_ID = 303,
     TOKEN_INT_VALUE = 304,
     TOKEN_FLOAT_VALUE = 305,
     TOKEN_STRING_VALUE = 306
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 16 "cat.y"

    int integer;
    float floating;
    char *string;
    struct ASTNode *node;



/* Line 214 of yacc.c  */
#line 182 "cat.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 194 "cat.tab.c"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNRULES -- Number of states.  */
#define YYNSTATES  146

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    11,    14,    17,    19,
      21,    23,    26,    29,    32,    35,    37,    41,    45,    47,
      49,    51,    55,    56,    59,    62,    67,    69,    73,    74,
      77,    85,    87,    90,    95,    99,   107,   111,   114,   115,
     122,   125,   126,   136,   142,   144,   146,   150,   152,   154,
     158,   162,   164,   168,   172,   176,   180,   182,   186,   190,
     192,   196,   200,   203,   205,   207,   209,   211,   213,   217,
     224,   227,   230,   235
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    -1,    -1,    55,    -1,    54,    55,
      -1,    71,    40,    -1,    72,    40,    -1,    64,    -1,    61,
      -1,    79,    -1,    60,    40,    -1,    58,    40,    -1,    58,
      65,    -1,     9,    40,    -1,    65,    -1,    58,    47,    65,
      -1,    17,    70,    40,    -1,    68,    -1,    69,    -1,    57,
      -1,    56,    46,    57,    -1,    -1,    13,    48,    -1,    14,
      48,    -1,    48,    42,    59,    43,    -1,    70,    -1,    59,
      46,    70,    -1,    -1,    15,    48,    -1,     6,    42,    70,
      43,    44,    62,    45,    -1,    63,    -1,    62,    63,    -1,
       7,    70,    41,    54,    -1,     8,    41,    54,    -1,     3,
      42,    70,    43,    65,    66,    67,    -1,    44,    54,    45,
      -1,    44,    45,    -1,    -1,    66,     5,    42,    70,    43,
      65,    -1,     4,    65,    -1,    -1,    11,    42,    70,    40,
      70,    40,    70,    43,    65,    -1,    12,    42,    70,    43,
      65,    -1,    72,    -1,    80,    -1,    48,    35,    70,    -1,
      73,    -1,    74,    -1,    73,    26,    74,    -1,    73,    27,
      74,    -1,    75,    -1,    74,    31,    75,    -1,    74,    32,
      75,    -1,    74,    29,    75,    -1,    74,    30,    75,    -1,
      76,    -1,    75,    18,    76,    -1,    75,    19,    76,    -1,
      77,    -1,    76,    20,    77,    -1,    76,    21,    77,    -1,
      19,    77,    -1,    78,    -1,    49,    -1,    50,    -1,    51,
      -1,    48,    -1,    42,    70,    43,    -1,    10,    48,    42,
      56,    43,    65,    -1,    13,    48,    -1,    14,    48,    -1,
      14,    48,    35,    70,    -1,    13,    48,    35,    70,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    75,    76,    77,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   106,   107,
     114,   115,   121,   125,   130,   138,   147,   148,   154,   158,
     166,   176,   177,   192,   198,   206,   215,   216,   220,   221,
     239,   240,   244,   251,   258,   261,   264,   265,   270,   271,
     272,   276,   277,   278,   279,   280,   284,   285,   286,   290,
     291,   292,   296,   297,   301,   302,   303,   304,   305,   309,
     318,   325,   332,   340
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_IF", "TOKEN_ELSE", "TOKEN_ELIF",
  "TOKEN_SWITCH", "TOKEN_CASE", "TOKEN_DEFAULT", "TOKEN_BREAK",
  "TOKEN_FUNCTION", "TOKEN_FOR", "TOKEN_WHILE", "TOKEN_INT", "TOKEN_FLOAT",
  "TOKEN_IMPORT", "TOKEN_INSERT", "TOKEN_EXERT", "TOKEN_PLUS",
  "TOKEN_MINUS", "TOKEN_MULT", "TOKEN_DIV", "TOKEN_INCREMENT",
  "TOKEN_DECREMENT", "TOKEN_NOT", "TOKEN_COMP", "TOKEN_AND", "TOKEN_OR",
  "TOKEN_LOGICAL_NOT", "TOKEN_EQ", "TOKEN_NEQ", "TOKEN_GT", "TOKEN_LT",
  "TOKEN_GE", "TOKEN_LE", "TOKEN_ASSIGN", "TOKEN_PLUS_ASSIGN",
  "TOKEN_MINUS_ASSIGN", "TOKEN_MULT_ASSIGN", "TOKEN_DIV_ASSIGN",
  "TOKEN_SEMICOLON", "TOKEN_COLON", "TOKEN_LPAREN", "TOKEN_RPAREN",
  "TOKEN_LBRACE", "TOKEN_RBRACE", "TOKEN_COMMA", "TOKEN_BLOCK_START",
  "TOKEN_ID", "TOKEN_INT_VALUE", "TOKEN_FLOAT_VALUE", "TOKEN_STRING_VALUE",
  "$accept", "program", "statement_list", "statement", "parameter_list",
  "parameter", "function_call", "argument_list", "import_statement",
  "switch_statement", "case_list", "case_statement", "if_statement",
  "block", "else_if_list", "else_statement", "for_loop", "while_loop",
  "expression", "declaration", "assignment_expr", "logical_expr",
  "relational_expr", "additive_expr", "multiplicative_expr", "unary_expr",
  "primary_expr", "function_declaration", "variable_declaration", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    56,    57,    57,    58,    59,    59,    59,    60,
      61,    62,    62,    63,    63,    64,    65,    65,    66,    66,
      67,    67,    68,    69,    70,    71,    72,    72,    73,    73,
      73,    74,    74,    74,    74,    74,    75,    75,    75,    76,
      76,    76,    77,    77,    78,    78,    78,    78,    78,    79,
      80,    80,    80,    80
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     2,     2,     1,     1,
       1,     2,     2,     2,     2,     1,     3,     3,     1,     1,
       1,     3,     0,     2,     2,     4,     1,     3,     0,     2,
       7,     1,     2,     4,     3,     7,     3,     2,     0,     6,
       2,     0,     9,     5,     1,     1,     3,     1,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     2,     1,     1,     1,     1,     1,     3,     6,
       2,     2,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    64,    65,    66,     0,     2,
       4,     0,     0,     9,     8,    15,    18,    19,     0,     0,
      47,    48,    51,    56,    59,    63,    10,    45,     0,     0,
      14,     0,     0,     0,    70,    71,    29,    67,     0,    44,
      67,    62,     0,    37,     0,     0,    28,     1,     5,    12,
       0,    13,    11,     6,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,    17,    68,    36,    46,     0,    26,    16,    49,
      50,    54,    55,    52,    53,    57,    58,    60,    61,     0,
       0,     0,     0,     0,    20,     0,     0,    73,    72,    25,
       0,    38,     0,    23,    24,     0,     0,     0,    43,    27,
      41,     0,     0,     0,    31,    69,    21,     0,     0,     0,
      35,     0,     3,    30,    32,     0,    40,     0,     3,    34,
       0,     0,    33,    42,     0,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,   103,   104,    21,    86,    22,    23,
     123,   124,    24,    25,   120,   130,    26,    27,    48,    28,
      49,    30,    31,    32,    33,    34,    35,    36,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -34
static const yytype_int16 yypact[] =
{
     198,   -26,   -24,    25,   -18,    24,    33,    28,    29,    30,
     -13,     7,   -13,   134,   -25,   -34,   -34,   -34,    42,   198,
     -34,   -33,    39,   -34,   -34,   -34,   -34,   -34,    41,    43,
      -2,    -9,    15,    27,   -34,   -34,   -34,   -34,   -13,   -13,
     -34,    40,   -13,   -13,    49,    50,   -34,    51,    48,   -34,
     -34,   -34,    47,   -34,   149,   -13,   -13,   -34,   -34,   -34,
      45,   -34,   -34,   -34,   -34,     7,     7,     7,     7,     7,
       7,     7,     7,     7,     7,    52,    55,    46,    53,    57,
     -13,   -13,   -34,   -34,   -34,   -34,   -31,   -34,   -34,    -9,
      -9,    15,    15,    15,    15,    27,    27,   -34,   -34,    45,
      58,    44,    56,    -3,   -34,   -13,    45,   -34,   -34,   -34,
     -13,   -34,    54,   -34,   -34,    45,    46,    61,   -34,   -34,
      59,   -13,    62,     1,   -34,   -34,   -34,   -13,    45,    63,
     -34,    65,   198,   -34,   -34,    64,   -34,   -13,   198,   198,
      45,    68,   198,   -34,    45,   -34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -34,   -34,   -10,   -15,   -34,    -8,   -34,   -34,   -34,   -34,
     -34,   -32,   -34,   -19,   -34,   -34,   -34,   -34,   -11,   -34,
       0,   -34,     6,   -17,     2,    -6,   -34,   -34,   -34
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      29,    52,    61,    54,    58,    51,    11,    59,   121,   122,
      55,    13,   109,    29,    60,   110,    38,    56,    39,    29,
      67,    68,    69,    70,    65,    66,    11,    75,    76,    12,
      41,    78,    79,    71,    72,    47,    15,    16,    17,    58,
     115,    88,    57,   116,    85,    87,   133,    73,    74,    12,
      91,    92,    93,    94,    29,    50,    15,    16,    17,   101,
     102,   121,   122,   128,   129,    40,    42,    97,    98,   107,
     108,    89,    90,    95,    96,    43,    44,    45,    46,    62,
     111,    63,    77,    64,    80,    81,    55,   118,    82,    13,
      83,   134,   113,   105,   117,    99,   125,     0,   100,   119,
     106,   127,   112,   132,   114,   137,   138,   140,   126,   136,
     131,   144,     0,     0,     0,     0,   135,     0,     0,     0,
       0,   143,   139,     0,    58,   145,   141,    58,   142,     0,
       0,     0,    29,     0,     0,     0,     0,     1,    29,    29,
       2,     0,    29,     3,     4,     5,     6,     7,     8,     9,
       0,    10,     1,    11,     0,     2,     0,     0,     3,     4,
       5,     6,     7,     8,     9,     0,    10,     0,    11,     0,
       0,     0,     0,     0,     0,     0,    12,     0,    13,    53,
       0,     0,    14,    15,    16,    17,     0,     0,     0,     0,
       0,    12,     0,    13,    84,     0,     0,    14,    15,    16,
      17,     1,     0,     0,     2,     0,     0,     3,     4,     5,
       6,     7,     8,     9,     0,    10,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,    13,     0,     0,     0,    14,    15,    16,    17
};

static const yytype_int16 yycheck[] =
{
       0,    12,    21,    13,    19,    11,    19,    40,     7,     8,
      35,    44,    43,    13,    47,    46,    42,    42,    42,    19,
      29,    30,    31,    32,    26,    27,    19,    38,    39,    42,
      48,    42,    43,    18,    19,    48,    49,    50,    51,    54,
      43,    60,     0,    46,    55,    56,    45,    20,    21,    42,
      67,    68,    69,    70,    54,    48,    49,    50,    51,    13,
      14,     7,     8,     4,     5,    40,    42,    73,    74,    80,
      81,    65,    66,    71,    72,    42,    48,    48,    48,    40,
      99,    40,    42,    40,    35,    35,    35,   106,    40,    44,
      43,   123,    48,    40,   105,    43,   115,    -1,    43,   110,
      43,    40,    44,    41,    48,    42,    41,    43,   116,   128,
     121,    43,    -1,    -1,    -1,    -1,   127,    -1,    -1,    -1,
      -1,   140,   132,    -1,   139,   144,   137,   142,   138,    -1,
      -1,    -1,   132,    -1,    -1,    -1,    -1,     3,   138,   139,
       6,    -1,   142,     9,    10,    11,    12,    13,    14,    15,
      -1,    17,     3,    19,    -1,     6,    -1,    -1,     9,    10,
      11,    12,    13,    14,    15,    -1,    17,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,
      -1,    -1,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    44,    45,    -1,    -1,    48,    49,    50,
      51,     3,    -1,    -1,     6,    -1,    -1,     9,    10,    11,
      12,    13,    14,    15,    -1,    17,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     9,    10,    11,    12,    13,    14,    15,
      17,    19,    42,    44,    48,    49,    50,    51,    53,    54,
      55,    58,    60,    61,    64,    65,    68,    69,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    42,    42,
      40,    48,    42,    42,    48,    48,    48,    48,    70,    72,
      48,    77,    70,    45,    54,    35,    42,     0,    55,    40,
      47,    65,    40,    40,    40,    26,    27,    29,    30,    31,
      32,    18,    19,    20,    21,    70,    70,    42,    70,    70,
      35,    35,    40,    43,    45,    70,    59,    70,    65,    74,
      74,    75,    75,    75,    75,    76,    76,    77,    77,    43,
      43,    13,    14,    56,    57,    40,    43,    70,    70,    43,
      46,    65,    44,    48,    48,    43,    46,    70,    65,    70,
      66,     7,     8,    62,    63,    65,    57,    40,     4,     5,
      67,    70,    41,    45,    63,    70,    65,    42,    41,    54,
      43,    70,    54,    65,    43,    65
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
        case 2:

/* Line 1455 of yacc.c  */
#line 71 "cat.y"
    { root = (yyvsp[(1) - (1)].node); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 75 "cat.y"
    { (yyval.node) = NULL; ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 76 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 77 "cat.y"
    { 
        if ((yyvsp[(1) - (2)].node) == NULL) (yyval.node) = (yyvsp[(2) - (2)].node);
        else {
            ASTNode *node = (yyvsp[(1) - (2)].node);
            while (node->next != NULL) node = node->next;
            node->next = (yyvsp[(2) - (2)].node);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        }
    ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 90 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); printf("Parsed declaration statement.\n"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 91 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); printf("Parsed assignment statement.\n"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 92 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); printf("Parsed if statement.\n"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 93 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); printf("Parsed switch statement.\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 94 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); printf("Parsed function declaration.\n"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 95 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); printf("Parsed import statement.\n"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 96 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); printf("Parsed function call.\n"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 97 "cat.y"
    { (yyval.node) = createNodeWithBlock(NODE_CALL_BLOCK, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 98 "cat.y"
    { (yyval.node) = createNode(NODE_BREAK); printf("Parsed break statement.\n"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 99 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); printf("Parsed block.\n"); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 100 "cat.y"
    { (yyval.node) = createNodeWithBlock(NODE_CALL_BLOCK, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 101 "cat.y"
    { 
        (yyval.node) = createNode(NODE_EXERT);
        (yyval.node)->data.control.condition = (yyvsp[(2) - (3)].node);
        printf("Parsed exert statement.\n");
    ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 106 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); printf("Parsed for loop statement.\n"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 107 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); printf("Parsed while loop statement.\n"); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 114 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 115 "cat.y"
    {
        ASTNode *node = (yyvsp[(1) - (3)].node);
        while (node->next != NULL) node = node->next;
        node->next = (yyvsp[(3) - (3)].node);
        (yyval.node) = (yyvsp[(1) - (3)].node);
    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 121 "cat.y"
    { (yyval.node) = NULL; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 125 "cat.y"
    {
        int index = addSymbol((yyvsp[(2) - (2)].string), SYM_PARAMETER, TYPE_INT, currentScope + 1);
        (yyval.node) = createNode(NODE_VARDECL);
        (yyval.node)->data.identifier.symbolIndex = index;
    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 130 "cat.y"
    {
        int index = addSymbol((yyvsp[(2) - (2)].string), SYM_PARAMETER, TYPE_FLOAT, currentScope + 1);
        (yyval.node) = createNode(NODE_VARDECL);
        (yyval.node)->data.identifier.symbolIndex = index;
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 138 "cat.y"
    {
        ASTNode *node = createNode(NODE_CALL);
        strncpy(node->data.call.name, (yyvsp[(1) - (4)].string), MAX_ID_LENGTH - 1);
        // Handle arguments
        (yyval.node) = node;
    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 147 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 148 "cat.y"
    {
        ASTNode *node = (yyvsp[(1) - (3)].node);
        while (node->next != NULL) node = node->next;
        node->next = (yyvsp[(3) - (3)].node);
        (yyval.node) = (yyvsp[(1) - (3)].node);
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 154 "cat.y"
    { (yyval.node) = NULL; ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 158 "cat.y"
    {
        ASTNode *node = createNode(NODE_IMPORT);
        strncpy(node->data.identifier.name, (yyvsp[(2) - (2)].string), MAX_ID_LENGTH - 1);
        (yyval.node) = node;
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 166 "cat.y"
    {
        (yyval.node) = createNode(NODE_SWITCH);
        (yyval.node)->data.control.condition = (yyvsp[(3) - (7)].node);
        (yyval.node)->data.control.thenBranch = (yyvsp[(6) - (7)].node);  // This points to the first case
        (yyval.node)->data.control.elseBranch = NULL;
        printf("Created switch node\n");
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 176 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 177 "cat.y"
    {
        if ((yyvsp[(1) - (2)].node)) {
            ASTNode *last = (yyvsp[(1) - (2)].node);
            while (last->data.control.elseBranch) {
                last = last->data.control.elseBranch;
            }
            last->data.control.elseBranch = (yyvsp[(2) - (2)].node);
            (yyval.node) = (yyvsp[(1) - (2)].node);
        } else {
            (yyval.node) = (yyvsp[(2) - (2)].node);
        }
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 192 "cat.y"
    {
        (yyval.node) = createNode(NODE_CASE);
        (yyval.node)->data.control.condition = (yyvsp[(2) - (4)].node);
        (yyval.node)->data.control.thenBranch = (yyvsp[(4) - (4)].node);
        (yyval.node)->data.control.elseBranch = NULL;
    ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 198 "cat.y"
    {
        (yyval.node) = createNode(NODE_CASE);
        (yyval.node)->data.control.condition = NULL;
        (yyval.node)->data.control.thenBranch = (yyvsp[(3) - (3)].node);
        (yyval.node)->data.control.elseBranch = NULL;
    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 206 "cat.y"
    {
        (yyval.node) = createNode(NODE_IF);
        (yyval.node)->data.control.condition = (yyvsp[(3) - (7)].node);
        (yyval.node)->data.control.thenBranch = (yyvsp[(5) - (7)].node);
        (yyval.node)->data.control.elseBranch = (yyvsp[(6) - (7)].node) ? (yyvsp[(6) - (7)].node) : (yyvsp[(7) - (7)].node);
    ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 215 "cat.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); printf("Parsed block with statements.\n"); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 216 "cat.y"
    { (yyval.node) = NULL; printf("Parsed empty block.\n"); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 220 "cat.y"
    { (yyval.node) = NULL; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 221 "cat.y"
    {
        ASTNode *node = createNode(NODE_IF);
        node->data.control.condition = (yyvsp[(4) - (6)].node);
        node->data.control.thenBranch = (yyvsp[(6) - (6)].node);
        if ((yyvsp[(1) - (6)].node) != NULL) {
            ASTNode *temp = (yyvsp[(1) - (6)].node);
            while (temp->data.control.elseBranch != NULL)
                temp = temp->data.control.elseBranch;
            temp->data.control.elseBranch = node;
            (yyval.node) = (yyvsp[(1) - (6)].node);
        } else {
            (yyval.node) = node;
        }
    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 239 "cat.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 240 "cat.y"
    { (yyval.node) = NULL; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 244 "cat.y"
    {
        (yyval.node) = createForLoopNode((yyvsp[(3) - (9)].node), (yyvsp[(5) - (9)].node), (yyvsp[(7) - (9)].node), (yyvsp[(9) - (9)].node));
        printf("Parsed for loop.\n");
    ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 251 "cat.y"
    {
        (yyval.node) = createWhileLoopNode((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node));
        printf("Parsed while loop.\n");
    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 258 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 261 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 264 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_ASSIGN, createIdentifier((yyvsp[(1) - (3)].string)), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 265 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 270 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 271 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 272 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 276 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 277 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 278 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 279 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 280 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_NEQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 284 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 285 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 286 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 290 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 291 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_MULT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 292 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_DIV, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 296 "cat.y"
    { (yyval.node) = createUnaryOp(TOKEN_MINUS, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 297 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 301 "cat.y"
    { (yyval.node) = createConstant(TYPE_INT, (yyvsp[(1) - (1)].integer)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 302 "cat.y"
    { (yyval.node) = createConstant(TYPE_FLOAT, (yyvsp[(1) - (1)].floating)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 303 "cat.y"
    { (yyval.node) = createConstantString((yyvsp[(1) - (1)].string)); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 304 "cat.y"
    { (yyval.node) = createIdentifier((yyvsp[(1) - (1)].string)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 305 "cat.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 309 "cat.y"
    {
        (yyval.node) = createNode(NODE_FUNCTION);
        strncpy((yyval.node)->data.identifier.name, (yyvsp[(2) - (6)].string), MAX_ID_LENGTH - 1);
        (yyval.node)->data.control.thenBranch = (yyvsp[(6) - (6)].node);
        printf("Declared function: %s with parameters.\n", (yyvsp[(2) - (6)].string));
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 318 "cat.y"
    {
        int index = addSymbol((yyvsp[(2) - (2)].string), SYM_VARIABLE, TYPE_INT, currentScope);
        (yyval.node) = createNode(NODE_VARDECL);
        strncpy((yyval.node)->data.identifier.name, (yyvsp[(2) - (2)].string), MAX_ID_LENGTH - 1);  // Add this line
        (yyval.node)->data.identifier.symbolIndex = index;
        (yyval.node)->data.identifier.dataType = TYPE_INT;
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 325 "cat.y"
    {
        int index = addSymbol((yyvsp[(2) - (2)].string), SYM_VARIABLE, TYPE_FLOAT, currentScope);
        (yyval.node) = createNode(NODE_VARDECL);
        strncpy((yyval.node)->data.identifier.name, (yyvsp[(2) - (2)].string), MAX_ID_LENGTH - 1);  // Add this line
        (yyval.node)->data.identifier.symbolIndex = index;
        (yyval.node)->data.identifier.dataType = TYPE_FLOAT;
    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 332 "cat.y"
    {
        int index = addSymbol((yyvsp[(2) - (4)].string), SYM_VARIABLE, TYPE_FLOAT, currentScope);
        (yyval.node) = createNode(NODE_VARDECL);
        (yyval.node)->data.identifier.symbolIndex = index;
        (yyval.node)->data.identifier.dataType = TYPE_FLOAT;
        (yyval.node)->data.identifier.hasInitializer = 1;
        (yyval.node)->data.identifier.initializer = (yyvsp[(4) - (4)].node);
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 340 "cat.y"
    {
        int index = addSymbol((yyvsp[(2) - (4)].string), SYM_VARIABLE, TYPE_INT, currentScope);
        (yyval.node) = createNode(NODE_VARDECL);
        strncpy((yyval.node)->data.identifier.name, (yyvsp[(2) - (4)].string), MAX_ID_LENGTH - 1);  // Add this line
        (yyval.node)->data.identifier.symbolIndex = index;
        (yyval.node)->data.identifier.dataType = TYPE_INT;
        (yyval.node)->data.identifier.hasInitializer = 1;
        (yyval.node)->data.identifier.initializer = (yyvsp[(4) - (4)].node);
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2169 "cat.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 352 "cat.y"


int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <input file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    FILE *outFile = fopen("output.txt", "w");  // Open output file
    if (!file) {
        perror("Error opening input file");
        return 1;
    }
    if (!outFile) {
        perror("Error opening output file");
        fclose(file);
        return 1;
    }

    yydebug = 1;
    yyin = file;
    initSymbolTable();

    if (yyparse() == 0) {
        fprintf(outFile, "Parsing completed successfully.\n");
        fprintf(outFile, "\nGenerated Abstract Syntax Tree:\n");
        printAST(root, outFile);  // We'll modify printAST to write to file
    } else {
        fprintf(outFile, "Parsing failed due to errors.\n");
    }

    fclose(file);
    fclose(outFile);
    return 0;
}
