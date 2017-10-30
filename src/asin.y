%{
 #include <stdio.h>
 #include "header.h"
 #include "libtds.h"
 int numErrores ;
%}
%error-verbose

%union {
	char *ident ; /* Nombre del identificador */
	int cent ; /* Valor de la cte numerica entera */
	int tipo;
	
	
}
%type <tipo> tipoSimple

%token <ident> ID_ 

%token <cent>  CTE_ TRUE_ FALSE_ LEER_

%token PABIERTO_ PCERRADO_ LABIERTA_ LCERRADA_ IMPRIMIR_ DO_ FINL_ CORA_ CORC_ AND_AND_ OR_OR_ ASIG_ASIG_ NEG_ASIG_ OPMAS_OPMAS_ OPREST_OPREST_ OPMAS_ASIG_ OPREST_ASIG_ OPMOD_ASIG_ OPMULT_ASIG_ OPDIV_ASIG_ MAYQ_ASIG_ MENQ_ASIG_ OPMAS_ OPMULT_ FOR_ WHILE_ IF_ ELSE_ ELSEIF_ ASIG_ INT_ BOOL_ MENQ_
NEG_ OPDIV_ OPMOD_ OPREST_ MAYQ_ AND_ OR_
%%

programa: LABIERTA_ secuenciaSentencias LCERRADA_
            ;
       
operadorLogico: AND_AND_
            | OR_OR_
            ;
   
operadorIgualdad: ASIG_ASIG_
            | NEG_ASIG_
            ;   

operadorIncremento: OPMAS_OPMAS_
            | OPREST_OPREST_
            ;


secuenciaSentencias: sentencia
            | secuenciaSentencias sentencia
            ;
            
sentencia: declaracion
			| instruccion
			;   
            
declaracion: tipoSimple ID_ FINL_
			{
				int x = insertarTDS($2, $1, 0, -1) ;
				mostrarTDS();
				if (x == 0){
					yyerror("Esta variable ya ha sido declarada en la TDS");
				}
			}
            | tipoSimple ID_ CORA_ CTE_ CORC_ FINL_
            ;
            
tipoSimple: INT_
			{
				$$ = T_ENTERO;
			}
            | BOOL_
            {
				$$ = T_LOGICO;
			}
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
            | OPMAS_ASIG_ 
            | OPREST_ASIG_ 
            | OPMULT_ASIG_ 
            | OPDIV_ASIG_ 
            ;         
                       

            
operadorRelacional: MAYQ_ 
            | MENQ_ 
            | MAYQ_ASIG_ 
            | MENQ_ASIG_ 
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

