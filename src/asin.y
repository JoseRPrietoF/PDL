%{
 #include <stdio.h>
 extern int yylineno ;
 extern FILE *yyin ;
 int numErrores ;
%}
%error-verbose
%token ID_ CTE_ OPMAS_ OPMULT_ PABIERTO_ PCERRADO_ LABIERTA_ LCERRADA_ 
LEER_ IMPRIMIR_ TRUE_ FALSE_ FOR_ WHILE_ IF_ ELSE_ ELSEIF_ DO_ ASIG_ OPREST_ OPDIV_ 
OPMOD_ MAYQ_ MENQ_  FINL_ CORA_ CORC_ NEG_ AND_ OR_ INT_ BOOL_
%%

programa: LABIERTA_ secuenciaSentencias LCERRADA_
            ;
       
operadorLogico: AND_ AND_
            | OR_ OR_
            ;
   
operadorIgualdad: ASIG_ ASIG_
            | NEG_ ASIG_
            ;   

operadorIncremento: OPMAS_ OPMAS_
            | OPREST_ OPREST_
            ;


secuenciaSentencias: sentencia
            | secuenciaSentencias sentencia
            ;
            
sentencia: declaracion
			| instruccion
			;   
            
declaracion: tipoSimple ID_ FINL_
            | tipoSimple ID_ CORA_ CTE_ CORC_ FINL_
            ;
            
tipoSimple: INT_
            | BOOL_
            ;

instruccion: LABIERTA_ listaInstrucciones LCERRADA_ 
			| instruccionEntradaSalida
			| instruccionExpresion 
            | instruccionSeleccion
			| instruccionIteracion
			;            

listaInstrucciones: listaInstrucciones instruccion
            |
            ;
            
instruccionExpresion: expresion FINL_
            | FINL_
            ;            
            
instruccionEntradaSalida: LEER_ PABIERTO_ ID_ PCERRADO_ FINL_
			| IMPRIMIR_ PABIERTO_ expresion PCERRADO_ FINL_
			;           

instruccionSeleccion: IF_ PABIERTO_ expresion PCERRADO_ instruccion restoIf
            ;
            
restoIf: ELSEIF_ PABIERTO_ expresion PCERRADO_ instruccion restoIf
            | ELSE_ instruccion
            ;    

instruccionIteracion: WHILE_ PABIERTO_ expresion PCERRADO_ instruccion
			| DO_ instruccion WHILE_ PABIERTO_ expresion PCERRADO_
			;            
        
expresion: expresionLogica
            | ID_ operadorAsignacion expresion
            | ID_ CORA_ expresion CORC_ operadorAsignacion expresion
            ;
            
expresionLogica: expresionIgualdad
            | expresionLogica operadorLogico expresionIgualdad
            ;            
            
expresionIgualdad: expresionRelacional
			| expresionIgualdad operadorIgualdad expresionRelacional
			;            
                       
expresionRelacional: expresionAditiva
            | expresionRelacional operadorRelacional expresionAditiva
            ;
            
expresionAditiva: expresionMultiplicativa 
            | expresionAditiva operadorAditivo expresionMultiplicativa
            ;            
 
expresionMultiplicativa: expresionUnaria
			| expresionMultiplicativa operadorMultiplicativo expresionUnaria
			; 
            
expresionUnaria: expresionSufija
            | operadorUnario expresionUnaria
            | operadorIncremento ID_
            ;

expresionSufija: PABIERTO_ expresion PCERRADO_
            | ID_ operadorIncremento
            | ID_ CORA_ expresion CORC_
            | ID_ 
            | CTE_ 
            | TRUE_ 
            | FALSE_
            ;
operadorAsignacion: ASIG_ 
            | OPMAS_ ASIG_ 
            | OPREST_ ASIG_ 
            | OPMULT_ ASIG_ 
            | OPDIV_ ASIG_ 
            ;         
                       

            
operadorRelacional: MAYQ_ 
            | MENQ_ 
            | MAYQ_ ASIG_ 
            | MENQ_ ASIG_ 
            ;
            
operadorAditivo: OPMAS_
            | OPREST_
            ;
    

operadorMultiplicativo: OPMULT_
            | OPDIV_
            | OPMOD_
            ;
            
operadorUnario: OPMAS_ 
            | OPREST_ 
            | NEG_ 
            ;




	


%%

/* Llamada a yyparse ante un error */
/*void yyerror (char *msg) {
	numErrores++;
	fprintf(stdout, "\n>Error at line %d: %s\n", yylineno, msg);
}
int main (int argc, char **argv){
	 if ((yyin = fopen (argv[1], "r")) == NULL)
		fprintf (stderr, "Fichero no valido \%s", argv[1]);
	 yyparse();
} */
