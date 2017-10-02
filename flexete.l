%{
#include <stdio.h>
#include "pepeTheSyntacticAnalyzer.h"
void visualizar(char* texto);
%}

%option yylineno

delimitador [ \t\n]+
letra [a-zA-Z_]
digito [0-9]
id {letra}+[a-zA-Z0-9_]*
cte {digito}+
leer read

%%
"//".*    { visualizar("Comentario	: "); }
"(" 	{ visualizar("parentesis abierto	: "); }
")" 	{ visualizar("parentesis cerrado	: "); }
"{" 	{ visualizar("llave abierta	: "); }
"}" 	{ visualizar("llave cerrada	: "); }

read 	{ visualizar("palabra reservada	: "); }
print 	{ visualizar("palabra reservada	: "); }
true	{ visualizar("Palabra reservada	: "); }
false	{ visualizar("Palabra reservada	: "); }
for   	{ visualizar("Palabra reservada	: "); }
while   { visualizar("Palabra reservada	: "); }
if	{ visualizar("Palabra reservada	: "); }
elseif  { visualizar("Palabra reservada	: "); }
do	{ visualizar("Palabra reservada	: "); }
{cte} 	{ visualizar("Constante	: "); }
{id} 	{ visualizar("Id	: "); }
"=" 	{ visualizar("operador :"); }
"+" 	{return(OPMAS_);} 
"-"	{ visualizar("operador- :"); }
"*"	{ return(OPMULT_); }
"/"	{ visualizar("operador/ :"); }
"%"	{ visualizar("operador% :"); }
"<"     { visualizar("operador< :"); }
">"     { visualizar("operador> :"); }
"<="    { visualizar("operador<= :"); }
">="    { visualizar("operador >=:"); }
";"	{ visualizar("delimitador; :"); }
. {yyerror("Caracter no Valido:");}
    



%%

void visualizar(char* texto){
printf("%3d-%s %s\n", yylineno, texto, yytext);}

