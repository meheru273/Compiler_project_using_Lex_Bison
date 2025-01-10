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

#define SYMTAB_SIZE 100

/* Function table structure */
#define MAX_PARAMS 10
struct function {
    char *name;
    char *param_names[MAX_PARAMS];
    int param_count;
    int return_value;  // For simplicity, store last return value
    int is_defined;
};

struct function functab[SYMTAB_SIZE];
int func_count = 0;

/* Function table operations */
int func_lookup(char *name) {
    for(int i = 0; i < func_count; i++) {
        if(strcmp(functab[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int func_add(char *name) {
    if(func_count < SYMTAB_SIZE) {
        functab[func_count].name = strdup(name);
        functab[func_count].param_count = 0;
        functab[func_count].is_defined = 1;
        return func_count++;
    }
    return -1;
}

void func_set_return(char *name, int value) {
    int idx = func_lookup(name);
    if(idx != -1) {
        functab[idx].return_value = value;
    }
}

int func_get_return(char *name) {
    int idx = func_lookup(name);
    if(idx != -1) {
        return functab[idx].return_value;
    }
    return 0;
}
struct symbol {
    char *name;
    int value;
    int is_initialized;
};
struct symbol symtab[SYMTAB_SIZE];
int sym_count = 0;

int sym_lookup(char *name) {
    for(int i = 0; i < sym_count; i++) {
        if(strcmp(symtab[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}

int sym_add(char *name, int value) {
    if(sym_count < SYMTAB_SIZE) {
        symtab[sym_count].name = strdup(name);
        symtab[sym_count].value = value;
        symtab[sym_count].is_initialized = 1;
        return sym_count++;
    }
    return -1;
}

int sym_get_value(char *name) {
    int idx = sym_lookup(name);
    if(idx != -1 && symtab[idx].is_initialized) {
        return symtab[idx].value;
    }
    return 0;
}

void sym_set_value(char *name, int value) {
    int idx = sym_lookup(name);
    if(idx != -1) {
        symtab[idx].value = value;
        symtab[idx].is_initialized = 1;
    } else {
        sym_add(name, value);
    }
}
%}

%union {
    int number;
    float float_val;
    char *string;
}

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

%type <number> expr
%type <string> type

%right ASSIGN
%left GT LT
%left PLUS MINUS
%left MULT DIV
%nonassoc UMINUS

%%

program: statements END_MARKER
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
                 func_add($2);
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
        ;

var_decl: type ID ASSIGN expr SEMICOLON
        {
            sym_set_value($2, $4);
            printf("YACC: Variable %s declared and initialized with value %d\n", $2, $4);
        }
        ;

return_stmt: RETURN expr SEMICOLON
          {
              // Store return value in current function
              // For now, just print it
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
        $$ = sym_get_value($1);
        printf("YACC: ID: %s with value %d\n", $1, $$);
    }
    | FUNC_ID LPAREN expr RPAREN 
    { 
        // For now, just return the parameter value
        // In a full implementation, you'd need to handle function execution
        $$ = $3;
        printf("YACC: Function call to %s with parameter value %d\n", $1, $3);
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
    sym_count = 0;  // Initialize symbol table
    
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