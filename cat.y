%{
#include "cat.h"
#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern int line_num;
ASTNode *root = NULL;
extern FILE *yyin; 
extern int yydebug;
%}

%debug
%verbose

%union {
    int integer;
    float floating;
    char *string;
    struct ASTNode *node;
}


/* Token declarations */
%token TOKEN_IF TOKEN_ELSE TOKEN_ELIF TOKEN_SWITCH TOKEN_CASE
%token TOKEN_DEFAULT TOKEN_BREAK TOKEN_FUNCTION TOKEN_INT TOKEN_FLOAT
%token TOKEN_IMPORT TOKEN_INSERT TOKEN_EXERT

%token TOKEN_PLUS TOKEN_MINUS TOKEN_MULT TOKEN_DIV
%token TOKEN_INCREMENT TOKEN_DECREMENT TOKEN_NOT TOKEN_COMP
%token TOKEN_AND TOKEN_OR TOKEN_LOGICAL_NOT

%token TOKEN_EQ TOKEN_NEQ TOKEN_GT TOKEN_LT TOKEN_GE TOKEN_LE
%token TOKEN_ASSIGN TOKEN_PLUS_ASSIGN TOKEN_MINUS_ASSIGN TOKEN_MULT_ASSIGN TOKEN_DIV_ASSIGN
%token TOKEN_SEMICOLON TOKEN_COLON TOKEN_LPAREN TOKEN_RPAREN TOKEN_LBRACE TOKEN_RBRACE
%token TOKEN_COMMA
%token TOKEN_BLOCK_START


%token <string> TOKEN_ID
%token <integer> TOKEN_INT_VALUE
%token <floating> TOKEN_FLOAT_VALUE
%token <string> TOKEN_STRING_VALUE


/* Type declarations for non-terminals */
%type <node> program statement_list statement
%type <node> expression assignment_expr logical_expr relational_expr
%type <node> additive_expr multiplicative_expr unary_expr primary_expr
%type <node> function_declaration parameter_list parameter
%type <node> if_statement else_if_list else_statement
%type <node> switch_statement case_list case_statement
%type <node> declaration variable_declaration import_statement
%type <node> function_call argument_list block

%left TOKEN_ASSIGN
%left TOKEN_OR
%left TOKEN_AND
%left TOKEN_EQ TOKEN_NEQ
%left TOKEN_LT TOKEN_LE TOKEN_GT TOKEN_GE
%left TOKEN_PLUS TOKEN_MINUS
%left TOKEN_MULT TOKEN_DIV
%right TOKEN_NOT
%right TOKEN_ELSE

%%

program
    : statement_list                    { root = $1; }
    ;

statement_list
    : /* empty */                    { $$ = NULL; }
    | statement                      { $$ = $1; }
    | statement_list statement       { 
        if ($1 == NULL) $$ = $2;
        else {
            ASTNode *node = $1;
            while (node->next != NULL) node = node->next;
            node->next = $2;
            $$ = $1;
        }
    }
    ;


statement
    : declaration TOKEN_SEMICOLON      { $$ = $1; printf("Parsed declaration statement.\n"); }
    | assignment_expr TOKEN_SEMICOLON  { $$ = $1; printf("Parsed assignment statement.\n"); }
    | if_statement                     { $$ = $1; printf("Parsed if statement.\n"); }
    | switch_statement                 { $$ = $1; printf("Parsed switch statement.\n"); }
    | function_declaration             { $$ = $1; printf("Parsed function declaration.\n"); }
    | import_statement TOKEN_SEMICOLON { $$ = $1; printf("Parsed import statement.\n"); }
    | function_call TOKEN_SEMICOLON    { $$ = $1; printf("Parsed function call.\n"); }
    | function_call block              { $$ = createNodeWithBlock(NODE_CALL_BLOCK, $1, $2); }
    | TOKEN_BREAK TOKEN_SEMICOLON      { $$ = createNode(NODE_BREAK); printf("Parsed break statement.\n"); }
    | block                            { $$ = $1; printf("Parsed block.\n"); }
    | function_call TOKEN_BLOCK_START block { $$ = createNodeWithBlock(NODE_CALL_BLOCK, $1, $3); }
    | TOKEN_EXERT TOKEN_LPAREN expression TOKEN_RPAREN TOKEN_SEMICOLON {
        $$ = createNode(NODE_EXERT);
        $$->data.control.condition = $3;
        printf("Parsed exert statement.\n");
        }
    ;



parameter_list
    : parameter                        { $$ = $1; }
    | parameter_list TOKEN_COMMA parameter {
        ASTNode *node = $1;
        while (node->next != NULL) node = node->next;
        node->next = $3;
        $$ = $1;
    }
    |                                 { $$ = NULL; }
    ;

parameter
    : TOKEN_INT TOKEN_ID              {
        int index = addSymbol($2, SYM_PARAMETER, TYPE_INT, currentScope + 1);
        $$ = createNode(NODE_VARDECL);
        $$->data.identifier.symbolIndex = index;
    }
    | TOKEN_FLOAT TOKEN_ID            {
        int index = addSymbol($2, SYM_PARAMETER, TYPE_FLOAT, currentScope + 1);
        $$ = createNode(NODE_VARDECL);
        $$->data.identifier.symbolIndex = index;
    }
    ;

function_call
    : TOKEN_ID TOKEN_LPAREN argument_list TOKEN_RPAREN {
        ASTNode *node = createNode(NODE_CALL);
        strncpy(node->data.call.name, $1, MAX_ID_LENGTH - 1);
        // Handle arguments
        $$ = node;
    }
    ;

argument_list
    : expression                      { $$ = $1; }
    | argument_list TOKEN_COMMA expression {
        ASTNode *node = $1;
        while (node->next != NULL) node = node->next;
        node->next = $3;
        $$ = $1;
    }
    |                                 { $$ = NULL; }
    ;

import_statement
    : TOKEN_IMPORT TOKEN_ID           {
        ASTNode *node = createNode(NODE_IMPORT);
        strncpy(node->data.identifier.name, $2, MAX_ID_LENGTH - 1);
        $$ = node;
    }
    ;

switch_statement
    : TOKEN_SWITCH TOKEN_LPAREN expression TOKEN_RPAREN TOKEN_LBRACE case_list TOKEN_RBRACE {
        ASTNode *node = createNode(NODE_SWITCH);
        node->data.control.condition = $3;
        node->data.control.thenBranch = $6;
        $$ = node;
    }
    ;

case_list
    : case_statement                  { $$ = $1; }
    | case_list case_statement        {
        ASTNode *node = $1;
        while (node->next != NULL) node = node->next;
        node->next = $2;
        $$ = $1;
    }
    ;

case_statement
    : TOKEN_CASE expression TOKEN_COLON statement_list {
        ASTNode *node = createNode(NODE_CASE);
        node->data.control.condition = $2;
        node->data.control.thenBranch = $4;
        $$ = node;
    }
    | TOKEN_DEFAULT TOKEN_COLON statement_list {
        ASTNode *node = createNode(NODE_CASE);
        node->data.control.condition = NULL;
        node->data.control.thenBranch = $3;
        $$ = node;
    }
    ;
if_statement
    : TOKEN_IF TOKEN_LPAREN expression TOKEN_RPAREN block else_if_list else_statement {
        $$ = createNode(NODE_IF);
        $$->data.control.condition = $3;
        $$->data.control.thenBranch = $5;
        $$->data.control.elseBranch = $6 ? $6 : $7;
    }
    ;

block
    : TOKEN_LBRACE statement_list TOKEN_RBRACE { $$ = $2; printf("Parsed block with statements.\n"); }
    | TOKEN_LBRACE TOKEN_RBRACE               { $$ = NULL; printf("Parsed empty block.\n"); }
    ;

else_if_list
    : /* empty */ { $$ = NULL; }
    | else_if_list TOKEN_ELIF TOKEN_LPAREN expression TOKEN_RPAREN block {
        ASTNode *node = createNode(NODE_IF);
        node->data.control.condition = $4;
        node->data.control.thenBranch = $6;
        if ($1 != NULL) {
            ASTNode *temp = $1;
            while (temp->data.control.elseBranch != NULL)
                temp = temp->data.control.elseBranch;
            temp->data.control.elseBranch = node;
            $$ = $1;
        } else {
            $$ = node;
        }
    }
    ;


else_statement
    : TOKEN_ELSE block { $$ = $2; }
    | /* empty */ { $$ = NULL; }
    ;
expression
    : assignment_expr           { $$ = $1; }
    ;
declaration
    : variable_declaration { $$ = $1; }
    ;
assignment_expr:
    TOKEN_ID TOKEN_ASSIGN expression { $$ = createBinaryOp(TOKEN_ASSIGN, createIdentifier($1), $3); }
    | logical_expr { $$ = $1; }
    ;


logical_expr
    : relational_expr                              { $$ = $1; }
    | logical_expr TOKEN_AND relational_expr       { $$ = createBinaryOp(TOKEN_AND, $1, $3); }
    | logical_expr TOKEN_OR relational_expr        { $$ = createBinaryOp(TOKEN_OR, $1, $3); }
    ;

relational_expr
    : additive_expr                               { $$ = $1; }
    | relational_expr TOKEN_GT additive_expr      { $$ = createBinaryOp(TOKEN_GT, $1, $3); }
    | relational_expr TOKEN_LT additive_expr      { $$ = createBinaryOp(TOKEN_LT, $1, $3); }
    | relational_expr TOKEN_EQ additive_expr      { $$ = createBinaryOp(TOKEN_EQ, $1, $3); }
    | relational_expr TOKEN_NEQ additive_expr     { $$ = createBinaryOp(TOKEN_NEQ, $1, $3); }
    ;

additive_expr
    : multiplicative_expr                         { $$ = $1; }
    | additive_expr TOKEN_PLUS multiplicative_expr  { $$ = createBinaryOp(TOKEN_PLUS, $1, $3); }
    | additive_expr TOKEN_MINUS multiplicative_expr { $$ = createBinaryOp(TOKEN_MINUS, $1, $3); }
    ;

multiplicative_expr
    : unary_expr                                 { $$ = $1; }
    | multiplicative_expr TOKEN_MULT unary_expr  { $$ = createBinaryOp(TOKEN_MULT, $1, $3); }
    | multiplicative_expr TOKEN_DIV unary_expr   { $$ = createBinaryOp(TOKEN_DIV, $1, $3); }
    ;

unary_expr
    : TOKEN_MINUS unary_expr                     { $$ = createUnaryOp(TOKEN_MINUS, $2); }
    | primary_expr                               { $$ = $1; }
    ;

primary_expr
    : TOKEN_INT_VALUE           { $$ = createConstant(TYPE_INT, $1); }
    | TOKEN_FLOAT_VALUE         { $$ = createConstant(TYPE_FLOAT, $1); }
    | TOKEN_STRING_VALUE        { $$ = createConstantString($1); }
    | TOKEN_ID                  { $$ = createIdentifier($1); }
    | TOKEN_LPAREN expression TOKEN_RPAREN { $$ = $2; }
    ;

function_declaration
    : TOKEN_FUNCTION TOKEN_ID TOKEN_LPAREN parameter_list TOKEN_RPAREN block {
        $$ = createNode(NODE_FUNCTION);
        strncpy($$->data.identifier.name, $2, MAX_ID_LENGTH - 1);
        $$->data.control.thenBranch = $6;
        printf("Declared function: %s with parameters.\n", $2);
    }
    ;



variable_declaration
    : TOKEN_INT TOKEN_ID        {
        int index = addSymbol($2, SYM_VARIABLE, TYPE_INT, currentScope);
        $$ = createNode(NODE_VARDECL);
        $$->data.identifier.symbolIndex = index;
    }
    | TOKEN_FLOAT TOKEN_ID      {
        int index = addSymbol($2, SYM_VARIABLE, TYPE_FLOAT, currentScope);
        $$ = createNode(NODE_VARDECL);
        $$->data.identifier.symbolIndex = index;
    }
    ;



%%

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