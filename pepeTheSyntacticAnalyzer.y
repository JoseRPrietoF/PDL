%{
 #include <stdio.h>
 extern int yylineno ;
 extern FILE *yyin ;
 int numErrores ;
%}
%error-verbose
%token ID_ CTE_ OPMAS_ OPMULT_ COMEN_ PABIERTO_ PCERRADO_ LABIERTA_ LCERRADA_ 
LEER_ IMPRIMIR_ TRUE_ FALSE_ FOR_ WHILE_ IF_ ELSEIF_ DO_ ASIG_ OPREST_ OPDIV_ 
OPMOD_ MAYQ_ MENQ_ FINL_ CORA_ CORC_ NEG_ AND_ OR_
%%

sentencia: declaracion
			| instruccion
			;

instruccion: LABIERTA_ listaInstrucciones LCERRADA_ |
			| instruccionEntradaSalida
			| instruccionExpresion | instruccionSeleccion
			| instruccionIteracion
			;

instruccionEntradaSalida: LEER_ PABIERTO_ ID_ PCERRADO_ FINL_
			| IMPRIMIR_ PABIERTO_ expresion PCERRADO_ FINL_
			;

instruccionIteracion: WHILE_ PABIERTO_ expresion PCERRADO_ instruccion
			| DO_ instruccion WHILE_ PABIERTO_ expresion PCERRADO_
			;
			
expresionIgualdad: expresionRelacional
			| expresionIgualdad operadorIgualdad expresionRelacional
			;
			
expresionMultiplicativa: expresionUnaria
			| expresionMultiplicativa operadorMultiplicatico expresionUnaria
			;

operadorAsignacion: ASIG_ | OPMAS_ ASIG_ | OPREST_ ASIG_ | OPMULT_ ASIG_ | OPDIV_ ASIG_ ;

operadorRelacional: MAYQ_ | MENQ_ | MAYQ_ ASIG_ | MENQ_ ASIG_ ;

operadorUnario: OPMAS_ | OPREST_ | NEG_ ;

secuenciaSentencias: sentencia
	| secuenciaSentencias sentencia
	;
	
tipoSimple: CTE_
	| TRUE_
	| FALSE_
	;
	
instruccionExpresion: expresion FINL_
	| FINL_
	;
	
restoIf: ELSEIF_ PABIERTO_ expresion PCERRADO_ instruccion restoIf
	| ELSE_ instruccion
	;

expresionLogica: expresionIgualdad
	|	expresionLogica operadorAsignacion expresionIgualdad
	;
	
expresionAditiva: expresionMultiplicativa 
	|	expresionAditiva operadorAditivo expresionMultiplicativa
	;
	
expresionSufija: PABIERTO_ expresion PCERRADO_
	| ID_ operadorIncremento
	| ID_ CORA_ expresion CORC_
	;

operadorIgualdad: ASIG_ ASIG_
	| NEG_ ASIG_
	;
	
operadorMultiplicativo: OPMULT_
	| OPDIV_
	| OPMOD_
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
