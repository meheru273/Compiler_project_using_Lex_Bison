%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void yyerror(const char *s);
int yylex(void);
extern FILE *yyin;
extern int yyparse();
extern int yylineno;
%}

%union {
    int number;
    float float_val;
    char *string;
}

/* Token definitions */
%token <string> ID FUNC_ID
%token <number> NUMBER
%token <float_val> FLOAT_NUM
%token IMPORT FUNCTION MAIN RETURN
%token IF ELSE ELIF
%token EXERT_OUT
%token INT FLOAT
%token LPAREN RPAREN LBRACE RBRACE
%token SEMICOLON
%token ASSIGN
%token PLUS MINUS MULT DIV
%token GT LT
%token END_MARKER

/* Type definitions */
%type <number> expr
%type <string> type

/* Operator precedence (lowest to highest) */
%right ASSIGN
%left GT LT
%left PLUS MINUS
%left MULT DIV
%nonassoc UMINUS

%%

program: statements
       {
           printf("YACC: Program parsed successfully\n");
       }
       ;

statements: /* empty */
         | statements statement
         {
             printf("YACC: Statement processed\n");
         }
         ;

statement: import_stmt
        | function_decl
        | expr_stmt
        | var_decl
        | if_stmt
        | return_stmt
        | SEMICOLON
        ;

import_stmt: IMPORT ID SEMICOLON
          {
              printf("YACC: Import statement for %s\n", $2);
          }
          ;

function_decl: FUNCTION FUNC_ID LPAREN param_list RPAREN LBRACE statements RBRACE
             {
                 printf("YACC: Function defined: %s\n", $2);
             }
             | FUNCTION MAIN LPAREN RPAREN LBRACE statements RBRACE
             {
                 printf("YACC: Main function defined\n");
             }
             ;

param_list: /* empty */
         | param
         ;

param: type ID
     {
         printf("YACC: Parameter: %s of type %s\n", $2, $1);
     }
     ;

expr_stmt: EXERT_OUT LPAREN expr RPAREN SEMICOLON
        {
            printf("YACC: EXERT statement with value %d\n", $3);
        }
        | expr SEMICOLON
        {
            printf("YACC: Expression statement\n");
        }
        ;

var_decl: type ID ASSIGN expr SEMICOLON
        {
            printf("YACC: Variable declared and initialized: %s\n", $2);
        }
        ;

return_stmt: RETURN expr SEMICOLON
          {
              printf("YACC: Return statement with value %d\n", $2);
          }
          ;

if_stmt: IF LPAREN expr RPAREN LBRACE statements RBRACE
       {
           printf("YACC: IF statement\n");
       }
       | IF LPAREN expr RPAREN LBRACE statements RBRACE ELSE LBRACE statements RBRACE
       {
           printf("YACC: IF-ELSE statement\n");
       }
       ;

expr: NUMBER 
    { 
        $$ = $1;
        printf("YACC: Number: %d\n", $1);
    }
    | ID 
    { 
        $$ = 0;  // Simplified for testing
        printf("YACC: ID: %s\n", $1);
    }
    | MINUS expr %prec UMINUS
    { 
        $$ = -$2;
        printf("YACC: Negation\n");
    }
    | expr PLUS expr 
    { 
        $$ = $1 + $3;
        printf("YACC: Addition: %d + %d = %d\n", $1, $3, $$);
    }
    | expr MINUS expr 
    { 
        $$ = $1 - $3;
        printf("YACC: Subtraction: %d - %d = %d\n", $1, $3, $$);
    }
    | expr MULT expr 
    { 
        $$ = $1 * $3;
        printf("YACC: Multiplication: %d * %d = %d\n", $1, $3, $$);
    }
    | expr DIV expr 
    { 
        if ($3 != 0) {
            $$ = $1 / $3;
            printf("YACC: Division: %d / %d = %d\n", $1, $3, $$);
        } else {
            yyerror("Division by zero");
            $$ = 0;
        }
    }
    | expr GT expr 
    { 
        $$ = $1 > $3;
        printf("YACC: Greater than: %d > %d = %d\n", $1, $3, $$);
    }
    | expr LT expr 
    { 
        $$ = $1 < $3;
        printf("YACC: Less than: %d < %d = %d\n", $1, $3, $$);
    }
    | LPAREN expr RPAREN 
    { 
        $$ = $2;
        printf("YACC: Parenthesized expression: %d\n", $$);
    }
    | FUNC_ID LPAREN expr RPAREN 
    { 
        $$ = $3;  // Simplified function call
        printf("YACC: Function call to %s\n", $1);
    }
    ;

type: INT { $$ = "int"; }
    | FLOAT { $$ = "float"; }
    ;

%%

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d\n", s, yylineno);
}

int main(int argc, char **argv) {
    if (argc > 1) {
        if (!(yyin = fopen(argv[1], "r"))) {
            printf("Could not open file: %s\n", argv[1]);
            return 1;
        }
    }

    printf("Starting parser...\n");
    int result = yyparse();
    
    if (argc > 1) {
        fclose(yyin);
    }
    
    return result;
}

