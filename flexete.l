%{
#include <stdio.h>
#include "pepeTheSyntacticAnalyzer.h"
#include "header.h"
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
"//".*    { if(verbosidad) ECHO; return COMEN_; }
"(" 	  { if(verbosidad) ECHO; return PABIERTO_; }
")" 	  { if(verbosidad) ECHO; return PCERRADO_; }
"{" 	  { if(verbosidad) ECHO; return LABIERTA_; }
"}" 	  { if(verbosidad) ECHO; return LCERRADA_; }
"["		  { if(verbosidad) ECHO; return CORA_; }
"]"		  { if(verbosidad) ECHO; return CORC_; }

read 	  { if(verbosidad) ECHO; return LEER_; }
print 	  { if(verbosidad) ECHO; return IMPRIMIR_; }
true	  { if(verbosidad) ECHO; return TRUE_; }
false	  { if(verbosidad) ECHO; return FALSE_; }
for   	  { if(verbosidad) ECHO; return FOR_; }
while     { if(verbosidad) ECHO; return WHILE_; }
if	      { if(verbosidad) ECHO; return IF_; }
else      { if(verbosidad) ECHO; return ELSE_; }
elseif    { if(verbosidad) ECHO; return ELSEIF_; }
do	{ if(verbosidad) ECHO; return DO_;}
{cte} 	{ if(verbosidad) ECHO; return CTE_; }
{id} 	{ if(verbosidad) ECHO; return ID_;}
"=" 	{ if(verbosidad) ECHO; return ASIG_;}
"+" 	{ if(verbosidad) ECHO; return OPMAS_; }
"-"	{ if(verbosidad) ECHO; return OPREST_; }
"*"	{ if(verbosidad) ECHO; return OPMULT_; }
"/"	{ if(verbosidad) ECHO; return OPDIV_; }
"%"	{ if(verbosidad) ECHO; return OPMOD_; }
"<"     { if(verbosidad) ECHO; return MENQ_; }
">"     { if(verbosidad) ECHO; return MAYQ_; }
";"	{ if(verbosidad) ECHO; return FINL_; }
"!"		{ if(verbosidad) ECHO; return NEG_; }
"&" { if(verbosidad) ECHO; return AND_; }
"|" { if(verbosidad) ECHO; return OR_;}

%%

void visualizar(char* texto){
printf("%3d-%s %s\n", yylineno, texto, yytext);}

