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
"//".*    { return COMEN_; }
"(" 	{ return PABERTO_; }
")" 	{ return PCERRADO_; }
"{" 	{ return LABIERTA_; }
"}" 	{ return LCERRADA_; }

read 	{ return LEER_; }
print 	{ return IMPRIMIR_; }
true	{ return TRUE_; }
false	{ return FALSE_; }
for   	{ return FOR_; }
while   { return WHILE_; }
if	{ return IF_; }
elseif  { return ELSEIF_; }
do	{ returnDO_;}
{cte} 	{ return CTE_; }
{id} 	{ return ID_;}
"=" 	{ return ASIG_;}
"+" 	{ return OPMAS_; }
"-"	{ return OPREST_; }
"*"	{ return OPMULT_; }
"/"	{ return OPDIV_; }
"%"	{ return OPMOD_; }
"<"     { return MENQ_; }
">"     { return MAYQ_; }
"<="    { return MENIG_; }
">="    { return MAYIG_; }
";"	{ return FINL_ }


%%

void visualizar(char* texto){
printf("%3d-%s %s\n", yylineno, texto, yytext);}

