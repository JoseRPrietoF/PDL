%{
#include <stdio.h>
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
"//".*    { return comentario; }
"(" 	{ return parentesisAbierto; }
")" 	{ return parentesisCerrado; }
"{" 	{ return llaveAbierta; }
"}" 	{ return llaveCerrada; }

read 	{ return leer; }
print 	{ return imprimir; }
true	{ return true; }
false	{ return false; }
for   	{ return for; }
while   { return while; }
if	{ return if; }
elseif  { return elseif; }
do	{ return do;}
{cte} 	{ return constante; }
{id} 	{ return identificador;}
"=" 	{ return asignacion;}
"+" 	{ return suma; }
"-"	{ return resta; }
"*"	{ return multiplicacion; }
"/"	{ return division; }
"%"	{ return modulo; }
"<"     { return menorQue; }
">"     { return mayorQue; }
"<="    { return menorIgualQue; }
">="    { return mayorIgualQue; }
";"	{ return finLinea }

    



%%

void visualizar(char* texto){
printf("%3d-%s %s\n", yylineno, texto, yytext);}
int main (){
	printf("%2d.- ", yylineno);
	yylex (); 
} 
