%{
#include <stdio.h>
void visualizar(char* texto);
%}

%option yylineno

id [a-zA-Z]+[0-9]*
cte [A-Z]+
int [0-9]+

leer read( *id *)
%%
read { visualizar("palabra reservada	: "); }
print { visualizar("palabra reservada	: "); }
{cte} { visualizar("Constante	: "); }
True { visualizar("Palabra reservada	: "); }
False { visualizar("Palabra reservada	: "); }
{id} { visualizar("Id	: "); }
{int} { visualizar("Integer	: "); }

%%

void visualizar(char* texto){
printf("%3d-%s %s\n", yylineno, texto, yytext);}
int main (){
	printf("%2d.- ", yylineno);
	yylex (); 
} 
