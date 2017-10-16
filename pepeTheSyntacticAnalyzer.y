%{
 #include <stdio.h>
 extern int yylineno ;
 extern FILE *yyin ;
 int numErrores ;
%}
%error-verbose
%token ID_ CTE_ OPMAS_ OPMULT_ COMEN_ PABIERTO_ PCERRADO_ LABIERTA_ LCERRADA_ 
LEER_ IMPRIMIR_ TRUE_ FALSE_ FOR_ WHILE_ IF_ ELSEIF_ DO_ ASIG_ OPREST_ OPDIV_ 
OPMOD_ MAYQ_ MENQ_  FINL_ CORA_ CORC_ NEG_ AND_ OR_
%%

programa: {secuenciaSentencias}
;

declaracion: tipoSimple ID_ FINL_
| tipoSimple ID_ CORA_ CTE_ CORC_ FINL_
;

listaInstrucciones: listaInstrucciones instruccion
|
;

instruccionSeleccion: IF_ PABIERTO_ expresion PCERRADO_ instruccion restoIF
;

expresion: expresionLogica
| ID_ operadorAsignacion expresion
| ID_ CORA_ expresion CORC_ operadorAsignacion expresion
;

expresionRelacional: expresionAditiva
| expresionRelacional operadorRelacional expresionAditiva
;

expresionUniaria: expresionSufija
| operadorUnario expresionUnaria
| operadorIncremento ID_
;

operadorLogico: AND_
| OR_
;

operadorAditivo: OPSUM_
| OPREST_
;

operadorIncremento: OPSUM_ OPSUM_
| OPREST_ OPREST_
;

%%

/* Llamada a yyparse ante un error */
void yyerror (char *msg) {
	numErrores++;
	fprintf(stdout, "\n>Error at line %d: %s\n", yylineno, msg);
}
int main (int argc, char **argv){
	 if ((yyin = fopen (argv[1], "r")) == NULL)
		fprintf (stderr, "Fichero no valido \%s", argv[1]);
	 yyparse();
} 
