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
	Atributos atributos;
	
	
}
%type <atributos> tipoSimple expresionMultiplicativa expresionSufija expresion expresionUnaria operadorUnario expresionLogica expresionIgualdad expresionRelacional expresionAditiva 

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
				
				if (x == 0){
					yyerror("Esta variable ya ha sido declarada en la TDS");
				}
			}
            | tipoSimple ID_ CORA_ CTE_ CORC_ FINL_
            {
				if ($4 <= 0) {
					yyerror("Talla inapropiada");
				} else {
					int refe = insertaTDArray($1, $4);
					int x = insertarTDS($2, T_ARRAY, 0, refe) ;
					
					if (x == 0){
						yyerror("Esta variable ya ha sido declarada en la TDS");
					} 
				}
            }
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
			{
				SIMB sim = obtenerTDS($3); 
					//mostrarTDS();
					if (sim.tipo == T_ERROR) 
						yyerror("Objeto no declarado");
					else if(sim.tipo != T_ENTERO)
						yyerror("El argumento del read debe ser entero");
					
			}
			| IMPRIMIR_ PABIERTO_ expresion PCERRADO_ FINL_
			{
				if($<tipo>3 != T_ENTERO)
					yyerror("La expresion del print debe ser entera");
			}
			;         

instruccionSeleccion: IF_ PABIERTO_ expresion PCERRADO_ instruccion restoIf
            {
				
			}
            ;
            
restoIf: ELSEIF_ PABIERTO_ expresion PCERRADO_ instruccion restoIf
			{
			}
            | ELSE_ instruccion
            ;    

instruccionIteracion: WHILE_ PABIERTO_ expresion PCERRADO_ instruccion
			{
				if($<tipo>3 != T_LOGICO)
					yyerror("La expresion del while debe ser logica");
			}
			| DO_ instruccion WHILE_ PABIERTO_ expresion PCERRADO_
			{
				if($<tipo>5 != T_LOGICO)
					yyerror("La expresion del while debe ser logica");
			}
			;            
        
expresion: expresionLogica
			{ 
				$$ = $1;
			}
            | ID_ operadorAsignacion expresion
            {
				$<tipo>$ = T_ERROR;
				if($3 != T_ERROR){
					SIMB sim = obtenerTDS($1); 
					//mostrarTDS();
					if (sim.tipo == T_ERROR) 
						yyerror("Objeto no declarado");
					else if($<tipo>3 == T_ARRAY)
						yyerror("La expresion debe ser de tipo simple");
					else if (! ( (sim.tipo == $<tipo>3 == T_ENTERO) || 
								 (sim.tipo == $<tipo>3 == T_LOGICO) ) 
							)
						yyerror("Error de tipos en la 'instrucción de asignación'");
					else 
						$<tipo>$ = sim.tipo;
				}
            }
            | ID_ CORA_ expresion CORC_ operadorAsignacion expresion
            {
            // Cuidado con el tipo de array
				SIMB sim = obtenerTDS($1); 
				$<tipo>$ = T_ERROR;
				
				if(sim.tipo != T_ARRAY){
					yyerror("Fallo en expresionSufija, ID_ no es un array");
				}else
					if ($<tipo>3 == T_ENTERO) {
						DIM dim = obtenerInfoArray(sim.ref);
						
						if($<tipo>6 != T_ERROR){
							if($<tipo>6 == dim.telem){
								$<tipo>$ = dim.telem;
							}else{
								yyerror("La expresion debe ser del mismo tipo que el array");
							}
						}
					}else{
						yyerror("El indice del array debe ser entero");
					}
				
				
            }
            ;
            
expresionLogica: expresionIgualdad
			{
				$$ = $1;
			}
            | expresionLogica operadorLogico expresionIgualdad
            {
				if($<tipo>1 == T_LOGICO && $<tipo>3 == T_LOGICO){
					$$ = T_LOGICO;
				}else{
					$$ = T_ERROR;
					yyerror("Error en expresion logica");
				}
				
            }
            ;            
            
expresionIgualdad: expresionRelacional
			{
				$$ = $1;
			}
			| expresionIgualdad operadorIgualdad expresionRelacional
			{
				if($<tipo>1 == $<tipo>3){
					$$ = T_LOGICO;
				}else{
					$$ = T_ERROR;
					yyerror("Error en expresion igualdad. Han de ser del mismo tipo");
				}
				
			}
			;            
                       
expresionRelacional: expresionAditiva
			{
				$$ = $1;
			}
            | expresionRelacional operadorRelacional expresionAditiva
			{
				if($<tipo>1 == $<tipo>3 == T_ENTERO){
					$$ = T_LOGICO;
				}else{
					$$ = T_ERROR;
					yyerror("Error en expresion relacional. Solo e pueden comparar dos numeros");
				}
			}
            ;
            
expresionAditiva: expresionMultiplicativa 
			{
				$$ = $1;
			}
            | expresionAditiva operadorAditivo expresionMultiplicativa
            {
				if($<tipo>1 == $<tipo>3 == T_ENTERO){
					$$ = T_ENTERO;
				}else{
					$$ = T_ERROR;
					yyerror("Error en expresion aditiva. Solo se pueden usar numeros");
				}
            }
            ;            
 
expresionMultiplicativa: expresionUnaria
			{
				$$ = $1;
			}
			| expresionMultiplicativa operadorMultiplicativo expresionUnaria
			{
				if($<tipo>1 != T_ENTERO || $<tipo>3 != T_ENTERO){
					$$ = T_ERROR;
					yyerror("Error de tipos en expresion multiplicativa");
				}else{
					$$ = T_ENTERO;
				}
			}
			; 
            
expresionUnaria: expresionSufija
			{
				$$ = $1;
			}
            | operadorUnario expresionUnaria
            {
				$$ = T_ERROR;
				if($<tipo>2 == T_ENTERO && $1 != OPMAS_ && $1 != OPREST_){
					yyerror("Error en operadorUnario posittivo/negativo");
				}
				else if($<tipo>2 == T_LOGICO && $1 != NEG_){
					yyerror("Error en operadorUnario negacion");
				} else{
					if($<tipo>2 == T_ENTERO) $$ = T_ENTERO;
					else $$ = T_LOGICO;
				}
			
            }
            | operadorIncremento ID_
            {
				SIMB sim = obtenerTDS($2);
				$<tipo>$ = T_ERROR;
				if (sim.tipo == T_ENTERO)
					$$ = sim.tipo;
				
            }
            ;

expresionSufija: PABIERTO_ expresion PCERRADO_
			{
				$$ = $2;
			}
            | ID_ operadorIncremento
            {
				SIMB sim = obtenerTDS($1); $<tipo>$ = T_ERROR;
				if (sim.tipo == T_ENTERO) 
					$$ = sim.tipo;
            }
            | ID_ CORA_ expresion CORC_
            {
				SIMB sim = obtenerTDS($1);
				$$ = T_ERROR;
				if(sim.tipo != T_ARRAY){
					
					yyerror("Fallo en expresionSufija, ID_ no es un array");
				}
				$<tipo>$ = T_ERROR;
				if ($3 == T_ENTERO) {
					DIM dim = obtenerInfoArray(sim.ref);
					$$ = dim.telem;
				}
            }
            | ID_ 
            {
				SIMB sim = obtenerTDS($1); $<tipo>$ = T_ERROR;
				if (sim.tipo != T_ERROR) 
					$$ = sim.tipo;
            }
            | CTE_ 
            {
				$$ = T_ENTERO;
			}
            | TRUE_ 
            {
				$$ = T_LOGICO;
            }
            | FALSE_
            {
				$$ = T_LOGICO;
            }
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
            
operadorUnario: OPMAS_ { $$ = OPMAS_; }
            | OPREST_ { $$ = OPREST_; }
            | NEG_ { $$ = NEG_; }
            ;




	


%%

