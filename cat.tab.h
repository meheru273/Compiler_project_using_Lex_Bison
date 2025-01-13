
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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
     TOKEN_COMMA = 299,
     TOKEN_BLOCK_START = 300,
     TOKEN_ID = 301,
     TOKEN_INT_VALUE = 302,
     TOKEN_FLOAT_VALUE = 303,
     TOKEN_STRING_VALUE = 304
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 16 "cat.y"

    int integer;
    float floating;
    char *string;
    struct ASTNode *node;



/* Line 1676 of yacc.c  */
#line 110 "cat.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


