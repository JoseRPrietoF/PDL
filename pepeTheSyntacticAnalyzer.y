%{
 #include <stdio.h>
 extern int yylineno ;
 extern FILE *yyin ;
 int numErrores ;
%}

%token ID_ CTE_ OPMAS_ OPMULT_
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
