%{
 #include <stdio.h>
 extern int yylineno ;
 extern FILE *yyin ;
 int numErrores ;
%}
%error-verbose
%token ID_ CTE_ OPMAS_ OPMULT_ COMEN_ PABIERTO_ PCERRADO_ LABIERTA_ LCERRADA_ 
LEER_ IMPRIMIR_ TRUE_ FALSE_ FOR_ WHILE_ IF_ ELSEIF_ DO_ ASIG_ OPREST_ OPDIV_ 
OPMOD_ MAYQ_ MENQ_ MENIG_ MAYIG_ FINL_
%%

expresion: expresion OPMAS_ termino
 | termino
 ;

termino: termino OPMULT_ factor
 | factor
 ;
 
factor: CTE_
 | ID_
 ;

%%

/* Llamada a yyparse ante un error */
void yyerror (char *msg) {
	numErrores++;
	fprintf(stdout, "\nError JODER at line %d: %s\n", yylineno, msg);
}
int main (int argc, char **argv){
	 if ((yyin = fopen (argv[1], "r")) == NULL)
		fprintf (stderr, "Fichero no valido \%s", argv[1]);
	 yyparse();
} 
