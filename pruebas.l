%{
#include <stdio.h>
void visualizar(char* texto);
%}

%option yylineno

delimitador [ \t\n]+
letra [a-zA-Z]
digito [0-9]
id {letra}+({digito})*([_]({letra})*({digito})*)*
cte {digito}+
bool [True|False]

leer read
par_abierto (
par_cerrado )
%%
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
if		{ visualizar("Palabra reservada	: "); }
elseif  { visualizar("Palabra reservada	: "); }
do		{ visualizar("Palabra reservada	: "); }
{cte} 	{ visualizar("Constante	: "); }
{id} 	{ visualizar("Id	: "); }
"=" 	{ visualizar("operador :"); }
"+" 	{ visualizar("operador :"); }
"-"		{ visualizar("operador :"); }
"*"		{ visualizar("operador :"); }
"/"		{ visualizar("operador :"); }
"%"		{ visualizar("operador :"); }
"<"     { visualizar("operador :"); }
">"     { visualizar("operador :"); }
"<="    { visualizar("operador :"); }
">="    { visualizar("operador :"); }
";"		{ visualizar("delimitador :"); }

    



%%

void visualizar(char* texto){
printf("%3d-%s %s\n", yylineno, texto, yytext);}
int main (){
	printf("%2d.- ", yylineno);
	yylex (); 
} 
