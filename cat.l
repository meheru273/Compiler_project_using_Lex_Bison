%{
#include <stdio.h>
#include <string.h>
#include "cat.tab.h"
extern char *strdup(const char *s);  
int line_number = 1;
extern FILE* yyin;
%}




%option yylineno

%%
"import"        { printf("LEX: Found IMPORT\n"); return IMPORT; }
"function"      { printf("LEX: Found FUNCTION\n"); return FUNCTION; }
"return"        { printf("LEX: Found RETURN\n"); return RETURN; }
"main"          { printf("LEX: Found MAIN\n"); return MAIN; }
"IF"            { printf("LEX: Found IF\n"); return IF; }
"ELSE"          { printf("LEX: Found ELSE\n"); return ELSE; }
"ELIF"          { printf("LEX: Found ELIF\n"); return ELIF; }
"EXERT>"        { printf("LEX: Found EXERT_OUT\n"); return EXERT_OUT; }
"int"           { printf("LEX: Found INT\n"); return INT; }
"float"         { printf("LEX: Found FLOAT\n"); return FLOAT; }

"+"             { printf("LEX: Found PLUS\n"); return PLUS; }
"-"             { printf("LEX: Found MINUS\n"); return MINUS; }
"*"             { printf("LEX: Found MULT\n"); return MULT; }
"/"             { printf("LEX: Found DIV\n"); return DIV; }
">"             { printf("LEX: Found GT\n"); return GT; }
"<"             { printf("LEX: Found LT\n"); return LT; }
"="             { printf("LEX: Found ASSIGN\n"); return ASSIGN; }

"("             { printf("LEX: Found LPAREN\n"); return LPAREN; }
")"             { printf("LEX: Found RPAREN\n"); return RPAREN; }
"{"             { printf("LEX: Found LBRACE\n"); return LBRACE; }
"}"             { printf("LEX: Found RBRACE\n"); return RBRACE; }
";"             { printf("LEX: Found SEMICOLON\n"); return SEMICOLON; }
"$$"            { printf("LEX: Found END_MARKER\n"); return END_MARKER; }

@[a-zA-Z][a-zA-Z0-9_]*  { 
    printf("LEX: Found FUNC_ID: %s\n", yytext);
    yylval.string = strdup(yytext);
    return FUNC_ID;
}

[a-zA-Z][a-zA-Z0-9_]*   { 
    printf("LEX: Found ID: %s\n", yytext);
    yylval.string = strdup(yytext);
    return ID;
}

[0-9]+          { 
    printf("LEX: Found NUMBER: %s\n", yytext);
    yylval.number = atoi(yytext);
    return NUMBER;
}

[0-9]+\.[0-9]+  { 
    printf("LEX: Found FLOAT_NUM: %s\n", yytext);
    yylval.float_val = atof(yytext);
    return FLOAT_NUM;
}

"[%]"[^\n]*     { printf("LEX: Found comment\n"); }  /* Skip comments */
[ \t]           ;  /* Skip whitespace */
\n              ;  /* Skip newlines */
.               { printf("LEX: Unexpected character: %s\n", yytext); }

%%

int yywrap(void) {
    return 1;
}

