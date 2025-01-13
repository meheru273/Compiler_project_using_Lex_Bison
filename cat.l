%{
#include "cat.h"        
#include "cat.tab.h"    
int line_num = 1;      
extern FILE *yyin;     
%}

%%
[ \t]                   { /* Ignore whitespace */ }
\n                      { line_num++; }

\"[^\"]*\"             { 
    yylval.string = strdup(yytext); 
    return TOKEN_STRING_VALUE; 
}


"INT"                   { return TOKEN_INT; }
"FLOAT"                 { return TOKEN_FLOAT; }
"IF"                    { return TOKEN_IF; }
"ELSE"                  { return TOKEN_ELSE; }
"ELIF"                  { return TOKEN_ELIF; }
"SWITCH"                { return TOKEN_SWITCH; }
"CASE"                  { return TOKEN_CASE; }
"DEFAULT"               { return TOKEN_DEFAULT; }
"BREAK"                 { return TOKEN_BREAK; }
"FUNCTION"              { return TOKEN_FUNCTION; }
"IMPORT"                { return TOKEN_IMPORT; }
"INSERT<"               { return TOKEN_INSERT; }
"EXERT>"                { return TOKEN_EXERT; }

"="                     { return TOKEN_ASSIGN; }
"+"                     { return TOKEN_PLUS; }
"-"                     { return TOKEN_MINUS; }
"*"                     { return TOKEN_MULT; }
"/"                     { return TOKEN_DIV; }
"++"                    { return TOKEN_INCREMENT; }
"--"                    { return TOKEN_DECREMENT; }
"!"                     { return TOKEN_NOT; }
"^"                     { return TOKEN_COMP; }
"&&"                    { return TOKEN_AND; }
"||"                    { return TOKEN_OR; }
"!!"                    { return TOKEN_LOGICAL_NOT; }

"=="                    { return TOKEN_EQ; }
"!="                    { return TOKEN_NEQ; }
">"                     { return TOKEN_GT; }
"<"                     { return TOKEN_LT; }
">="                    { return TOKEN_GE; }
"<="                    { return TOKEN_LE; }

"+="                    { return TOKEN_PLUS_ASSIGN; }
"-="                    { return TOKEN_MINUS_ASSIGN; }
"*="                    { return TOKEN_MULT_ASSIGN; }
"/="                    { return TOKEN_DIV_ASSIGN; }

"("                     { return TOKEN_LPAREN; }
")"                     { return TOKEN_RPAREN; }
"{"                     { printf("TOKEN_LBRACE matched\n"); return TOKEN_LBRACE; }
"}"                     { printf("TOKEN_RBRACE matched\n"); return TOKEN_RBRACE; }
";"                     { return TOKEN_SEMICOLON; }
":"                     { return TOKEN_COLON; }
","                     { return TOKEN_COMMA; }

[0-9]+                  { yylval.integer = atoi(yytext); return TOKEN_INT_VALUE; }
[0-9]+\.[0-9]+          { yylval.floating = atof(yytext); return TOKEN_FLOAT_VALUE; }
[a-zA-Z_][a-zA-Z0-9_]*  { yylval.string = strdup(yytext); return TOKEN_ID; }

[%].*                   { /* Single line comment */ }
[/][m][/][^/]*[/][m][/] { /* Multi-line comment */ }

.                       { printf("Unknown character: %s\n", yytext); }

%%

int yywrap(void) {
    return 1;
}