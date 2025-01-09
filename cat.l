/* author: shakib1507034 */

%{
	#include<stdio.h>
	#include <string.h>
	#include "cat.tab.h"
	#include<stdlib.h>
    void yyerror(const char *s);
    int yyparse(void);

	int _user_function=0,keyword=0,_identifiers=0,_arithmatic_operator=0,_unary_operator=0,_logical_operator=0,_relational_operator=0,_assignment_operator=0,_library_function=0,_datatype=0,_loop=0,cndstatement=0,_integer=0,floatnum=0,_string=0,scmnt=0,mcmnt=0,newl=0;

%}

Datatype "int"|"float" 
identifiers "prince_"[a-zA-Z]([a-zA-Z0-9])*
arithmatic_operator "jog"|"biyog"|"goon"|"bag"|"exp"
unary_operator "~++"|"~--"|"~~"|"~!"|"~+"|"~-"
logical_operator [&][&]|[|][|]|[!][!]
relational_operator "<<"|">>"|"<<="|">>="|"=="|"!="
assignment_operator [=]|"+="|"-="|"/="
import "import "[a-zA-Z]([a-zA-Z0-9])*
library_function "TAKEIN<"|"SHOWOUT>"
user_function "function"
conditional_statement "IF"|"ELSE"|"ELIF"|"WHILE"
integer (-|\+)?[0-9]+
float [+-]?[0-9]+[.][0-9]+|[+-]?[.][0-9]+|[1-9]+e[+-][0-9]+
single_line_comment [/][/].*
multiple_line_comment [ ]*[/][m][/][a-zA-Z0-9!@#*(){}_+-,.:\|?><\n\t ]*[/][m][/]

/*RE and Action*/

%%
"inout"   {return inpit;}
"import"  {return importtt;}

{single_line_comment} {
printf("single line comment\n");
scmnt++;
}
{multiple_line_comment} {
mcmnt++;
printf("multiple_line_comment\n");
}
"SHOWOUT"  return SHOWOUT;
"~++"    {_unary_operator++;return inc;}
"{"	 {
keyword++ ;

return LB; }
"}"	  { 
keyword++ ;
return RB; }
"colon"   {keyword++ ;return COLON;}
"BREAK"    {  keyword++ ;  return BREAK;     }
"CASE"      { keyword++ ;return CASE;      }
"select"      { keyword++ ;return SWITCH;}
"default"     {  keyword++ ;return DEFAULT;}
"WHILE"  {keyword++ ;_loop++;return WHILE;}
"int"	{ keyword++ ;_datatype++;return INT; }
"float"	{ keyword++ ;_datatype++;return FLOAT; }
"char"	{ keyword++ ;_datatype++;return CHAR; }
":"     {keyword++ ;return COL;}
[0-9]+	{ 
		yylval.number = atoi(yytext);
		return NUM;
	}
"FOR"   {keyword++ ;_loop++;return FOR;}  
"LP"	{keyword++ ; return LP; }
"RP"	{keyword++ ; return RP; }

"cm"	{ keyword++ ;return CM; }
"$$"	{ newl++;keyword++ ;return SM; }
"jog"	{ keyword++ ;_arithmatic_operator++;
return PLUS; 
}
"biyog"	{ keyword++ ;_arithmatic_operator++;
return MINUS; }
"goon"	{ keyword++ ;_arithmatic_operator++;
return MULT; }
"bag"	{ keyword++ ;_arithmatic_operator++;
return DIV; }
"="	{ _relational_operator++;_assignment_operator++;keyword++;return ASSIGN;  }
">>"	{_relational_operator++; keyword++ ;return GT; }
"<<"	{ _relational_operator++;keyword++ ;return LT; }

[a-z_]+  {
	_identifiers++;
	 yylval.string=strdup(yytext);return VAR;
	}

"IF"		{ cndstatement++;keyword++ ;return IF;}
"ELSE"		{ cndstatement++;keyword++ ;return ELSE;}

"function @func_name"	{ keyword++ ;return VOIDMAIN; }

[ \t\n]*	

. {
	yyerror("Unknown Character.\n");
}
%%

/* user subroutines */

int main(int argc, char **argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r"); // Open input file
        if (!yyin) {
            perror("Error opening input file");
            return 1;
        }
    } else {
        yyin = stdin; // Default to standard input
    }

    yyparse(); // Start parsing
    return 0;
}

