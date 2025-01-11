
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
     TOKEN_INT = 266,
     TOKEN_FLOAT = 267,
     TOKEN_IMPORT = 268,
     TOKEN_INSERT = 269,
     TOKEN_EXERT = 270,
     TOKEN_PLUS = 271,
     TOKEN_MINUS = 272,
     TOKEN_MULT = 273,
     TOKEN_DIV = 274,
     TOKEN_INCREMENT = 275,
     TOKEN_DECREMENT = 276,
     TOKEN_NOT = 277,
     TOKEN_COMP = 278,
     TOKEN_AND = 279,
     TOKEN_OR = 280,
     TOKEN_LOGICAL_NOT = 281,
     TOKEN_EQ = 282,
     TOKEN_NEQ = 283,
     TOKEN_GT = 284,
     TOKEN_LT = 285,
     TOKEN_GE = 286,
     TOKEN_LE = 287,
     TOKEN_ASSIGN = 288,
     TOKEN_PLUS_ASSIGN = 289,
     TOKEN_MINUS_ASSIGN = 290,
     TOKEN_MULT_ASSIGN = 291,
     TOKEN_DIV_ASSIGN = 292,
     TOKEN_SEMICOLON = 293,
     TOKEN_COLON = 294,
     TOKEN_LPAREN = 295,
     TOKEN_RPAREN = 296,
     TOKEN_LBRACE = 297,
     TOKEN_RBRACE = 298,
     TOKEN_ID = 299,
     TOKEN_INT_VALUE = 300,
     TOKEN_FLOAT_VALUE = 301,
     TOKEN_COMMA = 302
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
#line 178 "cat.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 190 "cat.tab.c"

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
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   148

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  125

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    11,    14,    17,    19,
      21,    23,    26,    29,    32,    35,    37,    43,    45,    49,
      50,    53,    56,    61,    63,    67,    68,    71,    79,    81,
      84,    89,    93,   101,   105,   108,   109,   116,   119,   120,
     122,   124,   128,   130,   132,   136,   140,   142,   146,   150,
     154,   158,   160,   164,   168,   170,   174,   178,   181,   183,
     185,   187,   189,   193,   200,   203
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    50,    -1,    -1,    51,    -1,    50,    51,
      -1,    65,    38,    -1,    66,    38,    -1,    60,    -1,    57,
      -1,    73,    -1,    56,    38,    -1,    54,    38,    -1,    54,
      61,    -1,     9,    38,    -1,    61,    -1,    15,    40,    64,
      41,    38,    -1,    53,    -1,    52,    47,    53,    -1,    -1,
      11,    44,    -1,    12,    44,    -1,    44,    40,    55,    41,
      -1,    64,    -1,    55,    47,    64,    -1,    -1,    13,    44,
      -1,     6,    40,    64,    41,    42,    58,    43,    -1,    59,
      -1,    58,    59,    -1,     7,    64,    39,    50,    -1,     8,
      39,    50,    -1,     3,    40,    64,    41,    61,    62,    63,
      -1,    42,    50,    43,    -1,    42,    43,    -1,    -1,    62,
       5,    40,    64,    41,    61,    -1,     4,    61,    -1,    -1,
      66,    -1,    74,    -1,    44,    33,    64,    -1,    67,    -1,
      68,    -1,    67,    24,    68,    -1,    67,    25,    68,    -1,
      69,    -1,    68,    29,    69,    -1,    68,    30,    69,    -1,
      68,    27,    69,    -1,    68,    28,    69,    -1,    70,    -1,
      69,    16,    70,    -1,    69,    17,    70,    -1,    71,    -1,
      70,    18,    71,    -1,    70,    19,    71,    -1,    17,    71,
      -1,    72,    -1,    45,    -1,    46,    -1,    44,    -1,    40,
      64,    41,    -1,    10,    44,    40,    52,    41,    61,    -1,
      11,    44,    -1,    12,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    67,    67,    71,    72,    73,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,   103,   104,   110,
     114,   119,   127,   136,   137,   143,   147,   155,   164,   165,
     174,   180,   188,   197,   198,   202,   203,   221,   222,   225,
     228,   231,   232,   237,   238,   239,   244,   245,   246,   247,
     248,   253,   254,   255,   259,   260,   261,   265,   266,   271,
     272,   273,   274,   278,   289,   294
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_IF", "TOKEN_ELSE", "TOKEN_ELIF",
  "TOKEN_SWITCH", "TOKEN_CASE", "TOKEN_DEFAULT", "TOKEN_BREAK",
  "TOKEN_FUNCTION", "TOKEN_INT", "TOKEN_FLOAT", "TOKEN_IMPORT",
  "TOKEN_INSERT", "TOKEN_EXERT", "TOKEN_PLUS", "TOKEN_MINUS", "TOKEN_MULT",
  "TOKEN_DIV", "TOKEN_INCREMENT", "TOKEN_DECREMENT", "TOKEN_NOT",
  "TOKEN_COMP", "TOKEN_AND", "TOKEN_OR", "TOKEN_LOGICAL_NOT", "TOKEN_EQ",
  "TOKEN_NEQ", "TOKEN_GT", "TOKEN_LT", "TOKEN_GE", "TOKEN_LE",
  "TOKEN_ASSIGN", "TOKEN_PLUS_ASSIGN", "TOKEN_MINUS_ASSIGN",
  "TOKEN_MULT_ASSIGN", "TOKEN_DIV_ASSIGN", "TOKEN_SEMICOLON",
  "TOKEN_COLON", "TOKEN_LPAREN", "TOKEN_RPAREN", "TOKEN_LBRACE",
  "TOKEN_RBRACE", "TOKEN_ID", "TOKEN_INT_VALUE", "TOKEN_FLOAT_VALUE",
  "TOKEN_COMMA", "$accept", "program", "statement_list", "statement",
  "parameter_list", "parameter", "function_call", "argument_list",
  "import_statement", "switch_statement", "case_list", "case_statement",
  "if_statement", "block", "else_if_list", "else_statement", "expression",
  "declaration", "assignment_expr", "logical_expr", "relational_expr",
  "additive_expr", "multiplicative_expr", "unary_expr", "primary_expr",
  "function_declaration", "variable_declaration", 0
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
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    50,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    52,    52,    52,
      53,    53,    54,    55,    55,    55,    56,    57,    58,    58,
      59,    59,    60,    61,    61,    62,    62,    63,    63,    64,
      65,    66,    66,    67,    67,    67,    68,    68,    68,    68,
      68,    69,    69,    69,    70,    70,    70,    71,    71,    72,
      72,    72,    72,    73,    74,    74
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     2,     2,     1,     1,
       1,     2,     2,     2,     2,     1,     5,     1,     3,     0,
       2,     2,     4,     1,     3,     0,     2,     7,     1,     2,
       4,     3,     7,     3,     2,     0,     6,     2,     0,     1,
       1,     3,     1,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     2,     1,     1,
       1,     1,     3,     6,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    61,    59,    60,     0,     2,     4,     0,     0,
       9,     8,    15,     0,     0,    42,    43,    46,    51,    54,
      58,    10,    40,     0,     0,    14,     0,    64,    65,    26,
       0,    61,    57,    61,     0,    39,    34,     0,     0,    25,
       1,     5,    12,    13,    11,     6,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    19,
       0,    62,    33,    41,     0,    23,    44,    45,    49,    50,
      47,    48,    52,    53,    55,    56,     0,     0,     0,     0,
       0,    17,     0,    22,     0,    35,     0,    20,    21,     0,
       0,    16,    24,    38,     0,     0,     0,    28,    63,    18,
       0,     0,    32,     0,     3,    27,    29,    37,     0,     3,
      31,     0,    30,     0,    36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    15,    16,    17,    90,    91,    18,    74,    19,    20,
     106,   107,    21,    22,   103,   112,    44,    23,    45,    25,
      26,    27,    28,    29,    30,    31,    32
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -35
static const yytype_int16 yypact[] =
{
      81,   -28,   -25,    -8,    -4,     6,    21,    23,     5,    35,
      72,    11,    -6,   -35,   -35,    78,    81,   -35,     4,    47,
     -35,   -35,   -35,    57,    65,    24,    31,    60,    64,   -35,
     -35,   -35,   -35,    72,    72,   -35,    67,   -35,   -35,   -35,
      72,   -35,   -35,    80,    70,   -35,   -35,    26,    72,    72,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,    35,    35,    35,
      35,    35,    35,    35,    35,    35,    35,    74,    83,   117,
      97,   -35,   -35,   -35,   -34,   -35,    31,    31,    60,    60,
      60,    60,    64,    64,   -35,   -35,    63,    98,    95,    99,
     -16,   -35,   103,   -35,    72,   -35,   123,   -35,   -35,    63,
     117,   -35,   -35,   128,    72,   105,     1,   -35,   -35,   -35,
      63,   102,   -35,   106,    81,   -35,   -35,   -35,    72,    81,
      81,   107,    81,    63,   -35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -35,   -35,   -10,   -14,   -35,    46,   -35,   -35,   -35,   -35,
     -35,    41,   -35,   -13,   -35,   -35,   -30,   -35,     0,   -35,
      77,    40,    73,    -3,   -35,   -35,   -35
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      24,    47,    51,    67,    68,    53,    42,    93,   104,   105,
      70,    24,    33,    94,     1,    34,    24,     2,    73,    75,
       3,     4,     5,     6,     7,    99,     8,    48,     9,     1,
      35,   100,     2,    51,    49,     3,     4,     5,     6,     7,
      36,     8,    52,     9,   115,    40,    11,    24,    57,    58,
      37,    10,     9,    11,    46,    12,    13,    14,    59,    60,
      61,    62,    84,    85,   102,    38,    10,    39,    11,    72,
      12,    13,    14,    95,   113,    10,    63,    64,    50,    41,
      13,    14,    65,    66,     1,    54,   108,     2,   121,     9,
       3,     4,     5,     6,     7,    55,     8,   117,     9,    78,
      79,    80,    81,    56,   120,    11,    51,    69,    51,   122,
     124,    71,    10,    48,    24,    86,    43,    13,    14,    24,
      24,    10,    24,    11,    87,    12,    13,    14,    88,    89,
     104,   105,   110,   111,    76,    77,    82,    83,    92,    97,
      96,   101,   118,    98,   114,   119,   109,   116,   123
};

static const yytype_uint8 yycheck[] =
{
       0,    11,    16,    33,    34,    18,     9,    41,     7,     8,
      40,    11,    40,    47,     3,    40,    16,     6,    48,    49,
       9,    10,    11,    12,    13,    41,    15,    33,    17,     3,
      38,    47,     6,    47,    40,     9,    10,    11,    12,    13,
      44,    15,    38,    17,    43,    40,    42,    47,    24,    25,
      44,    40,    17,    42,    43,    44,    45,    46,    27,    28,
      29,    30,    65,    66,    94,    44,    40,    44,    42,    43,
      44,    45,    46,    86,   104,    40,    16,    17,     0,    44,
      45,    46,    18,    19,     3,    38,    99,     6,   118,    17,
       9,    10,    11,    12,    13,    38,    15,   110,    17,    59,
      60,    61,    62,    38,   114,    42,   120,    40,   122,   119,
     123,    41,    40,    33,   114,    41,    44,    45,    46,   119,
     120,    40,   122,    42,    41,    44,    45,    46,    11,    12,
       7,     8,     4,     5,    57,    58,    63,    64,    41,    44,
      42,    38,    40,    44,    39,    39,   100,   106,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     9,    10,    11,    12,    13,    15,    17,
      40,    42,    44,    45,    46,    49,    50,    51,    54,    56,
      57,    60,    61,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    40,    40,    38,    44,    44,    44,    44,
      40,    44,    71,    44,    64,    66,    43,    50,    33,    40,
       0,    51,    38,    61,    38,    38,    38,    24,    25,    27,
      28,    29,    30,    16,    17,    18,    19,    64,    64,    40,
      64,    41,    43,    64,    55,    64,    68,    68,    69,    69,
      69,    69,    70,    70,    71,    71,    41,    41,    11,    12,
      52,    53,    41,    41,    47,    61,    42,    44,    44,    41,
      47,    38,    64,    62,     7,     8,    58,    59,    61,    53,
       4,     5,    63,    64,    39,    43,    59,    61,    40,    39,
      50,    64,    50,    41,    61
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
#line 67 "cat.y"
    { root = (yyvsp[(1) - (1)].node); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 71 "cat.y"
    { (yyval.node) = NULL; ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 72 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 73 "cat.y"
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
#line 86 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); printf("Parsed declaration statement.\n"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 87 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); printf("Parsed assignment statement.\n"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 88 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); printf("Parsed if statement.\n"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 89 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); printf("Parsed switch statement.\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 90 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); printf("Parsed function declaration.\n"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 91 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); printf("Parsed import statement.\n"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 92 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); printf("Parsed function call.\n"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 93 "cat.y"
    { (yyval.node) = createNodeWithBlock(NODE_CALL_BLOCK, (yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 94 "cat.y"
    { (yyval.node) = createNode(NODE_BREAK); printf("Parsed break statement.\n"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 95 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); printf("Parsed block.\n"); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 96 "cat.y"
    {
          (yyval.node) = createNode(NODE_EXERT);
          (yyval.node)->data.control.condition = (yyvsp[(3) - (5)].node);
      ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 103 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 104 "cat.y"
    {
        ASTNode *node = (yyvsp[(1) - (3)].node);
        while (node->next != NULL) node = node->next;
        node->next = (yyvsp[(3) - (3)].node);
        (yyval.node) = (yyvsp[(1) - (3)].node);
    ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 110 "cat.y"
    { (yyval.node) = NULL; ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 114 "cat.y"
    {
        int index = addSymbol((yyvsp[(2) - (2)].string), SYM_PARAMETER, TYPE_INT, currentScope + 1);
        (yyval.node) = createNode(NODE_VARDECL);
        (yyval.node)->data.identifier.symbolIndex = index;
    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 119 "cat.y"
    {
        int index = addSymbol((yyvsp[(2) - (2)].string), SYM_PARAMETER, TYPE_FLOAT, currentScope + 1);
        (yyval.node) = createNode(NODE_VARDECL);
        (yyval.node)->data.identifier.symbolIndex = index;
    ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 127 "cat.y"
    {
        ASTNode *node = createNode(NODE_CALL);
        strncpy(node->data.call.name, (yyvsp[(1) - (4)].string), MAX_ID_LENGTH - 1);
        // Handle arguments
        (yyval.node) = node;
    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 136 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 137 "cat.y"
    {
        ASTNode *node = (yyvsp[(1) - (3)].node);
        while (node->next != NULL) node = node->next;
        node->next = (yyvsp[(3) - (3)].node);
        (yyval.node) = (yyvsp[(1) - (3)].node);
    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 143 "cat.y"
    { (yyval.node) = NULL; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 147 "cat.y"
    {
        ASTNode *node = createNode(NODE_IMPORT);
        strncpy(node->data.identifier.name, (yyvsp[(2) - (2)].string), MAX_ID_LENGTH - 1);
        (yyval.node) = node;
    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 155 "cat.y"
    {
        ASTNode *node = createNode(NODE_SWITCH);
        node->data.control.condition = (yyvsp[(3) - (7)].node);
        node->data.control.thenBranch = (yyvsp[(6) - (7)].node);
        (yyval.node) = node;
    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 164 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 165 "cat.y"
    {
        ASTNode *node = (yyvsp[(1) - (2)].node);
        while (node->next != NULL) node = node->next;
        node->next = (yyvsp[(2) - (2)].node);
        (yyval.node) = (yyvsp[(1) - (2)].node);
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 174 "cat.y"
    {
        ASTNode *node = createNode(NODE_CASE);
        node->data.control.condition = (yyvsp[(2) - (4)].node);
        node->data.control.thenBranch = (yyvsp[(4) - (4)].node);
        (yyval.node) = node;
    ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 180 "cat.y"
    {
        ASTNode *node = createNode(NODE_CASE);
        node->data.control.condition = NULL;
        node->data.control.thenBranch = (yyvsp[(3) - (3)].node);
        (yyval.node) = node;
    ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 188 "cat.y"
    {
        (yyval.node) = createNode(NODE_IF);
        (yyval.node)->data.control.condition = (yyvsp[(3) - (7)].node);
        (yyval.node)->data.control.thenBranch = (yyvsp[(5) - (7)].node);
        (yyval.node)->data.control.elseBranch = (yyvsp[(6) - (7)].node) ? (yyvsp[(6) - (7)].node) : (yyvsp[(7) - (7)].node);
    ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 197 "cat.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); printf("Parsed block with statements.\n"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 198 "cat.y"
    { (yyval.node) = NULL; printf("Parsed empty block.\n"); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 202 "cat.y"
    { (yyval.node) = NULL; ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 203 "cat.y"
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

  case 37:

/* Line 1455 of yacc.c  */
#line 221 "cat.y"
    { (yyval.node) = (yyvsp[(2) - (2)].node); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 222 "cat.y"
    { (yyval.node) = NULL; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 225 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 228 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 231 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_ASSIGN, createIdentifier((yyvsp[(1) - (3)].string)), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 232 "cat.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 238 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 239 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 245 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 246 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 247 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 248 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_NEQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 254 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_PLUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 255 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_MINUS, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 260 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_MULT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 261 "cat.y"
    { (yyval.node) = createBinaryOp(TOKEN_DIV, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 265 "cat.y"
    { (yyval.node) = createUnaryOp(TOKEN_MINUS, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 271 "cat.y"
    { (yyval.node) = createConstant(TYPE_INT, (yyvsp[(1) - (1)].integer)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 272 "cat.y"
    { (yyval.node) = createConstant(TYPE_FLOAT, (yyvsp[(1) - (1)].floating)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 273 "cat.y"
    { (yyval.node) = createIdentifier((yyvsp[(1) - (1)].string)); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 274 "cat.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 278 "cat.y"
    {
        (yyval.node) = createNode(NODE_FUNCTION);
        strncpy((yyval.node)->data.identifier.name, (yyvsp[(2) - (6)].string), MAX_ID_LENGTH - 1);
        (yyval.node)->data.control.thenBranch = (yyvsp[(6) - (6)].node);
        printf("Declared function: %s with parameters.\n", (yyvsp[(2) - (6)].string));
    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 289 "cat.y"
    {
        int index = addSymbol((yyvsp[(2) - (2)].string), SYM_VARIABLE, TYPE_INT, currentScope);
        (yyval.node) = createNode(NODE_VARDECL);
        (yyval.node)->data.identifier.symbolIndex = index;
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 294 "cat.y"
    {
        int index = addSymbol((yyvsp[(2) - (2)].string), SYM_VARIABLE, TYPE_FLOAT, currentScope);
        (yyval.node) = createNode(NODE_VARDECL);
        (yyval.node)->data.identifier.symbolIndex = index;
    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2006 "cat.tab.c"
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
#line 303 "cat.y"


int main(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: %s <input file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }

    yydebug = 1;

    yyin = file;            // Set Flex's input stream
    initSymbolTable();      // Initialize symbol table

    if (yyparse() == 0) {
        printf("Parsing completed successfully.\n");
    } else {
        printf("Parsing failed due to errors.\n");
    }

    fclose(file);           // Close the input file
    return 0;
}


