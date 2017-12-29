%{
 #include <stdio.h>
 #include "header.h"
 #include "libtds.h"
 #include "libgci.h"
 int numErrores ;
 
%}
%error-verbose

%union {
	char *ident ; /* Nombre del identificador */
	int cent ; /* Valor de la cte numerica entera */
	Atributos atributos;
	int op;	
}

%type <atributos> tipoSimple expresionMultiplicativa expresionSufija expresion expresionUnaria expresionLogica expresionIgualdad expresionRelacional expresionAditiva
%type <atributos> instruccionSeleccion restoIf instruccionIteracion instruccion listaInstrucciones instruccionEntradaSalida instruccionExpresion
%type <op> operadorUnario operadorAditivo operadorRelacional operadorAsignacion operadorMultiplicativo operadorIncremento operadorLogico operadorIgualdad
%type <ident> programa
%token <ident> ID_

%token <cent>  CTE_ TRUE_ FALSE_ LEER_ 

%token PABIERTO_ PCERRADO_ LABIERTA_ LCERRADA_ IMPRIMIR_ DO_ FINL_ CORA_ CORC_ AND_AND_ OR_OR_ ASIG_ASIG_ NEG_ASIG_ OPMAS_OPMAS_ OPREST_OPREST_ OPMAS_ASIG_ OPREST_ASIG_ OPMOD_ASIG_ OPMULT_ASIG_ OPDIV_ASIG_ MAYQ_ASIG_ MENQ_ASIG_ OPMAS_ OPMULT_ FOR_ WHILE_ IF_ ELSE_ ELSEIF_ ASIG_ INT_ BOOL_ MENQ_
NEG_ OPDIV_ OPMOD_ OPREST_ MAYQ_ AND_ OR_
%%

programa: LABIERTA_{ dvar = 0; si = 0 ;} secuenciaSentencias LCERRADA_
			{
				//$$ = "nombre_del_fichero";
				mostrarTDS();
				emite(FIN, crArgNul(), crArgNul(), crArgNul());
				//volcarCodigo($$); //hay que ver el parametro
			}
            ;
       
operadorLogico: AND_AND_ {$$ = EMULT;}
            | OR_OR_ {$$ = ESUM;}
            ;
   
operadorIgualdad: ASIG_ASIG_ {$$ = EIGUAL;}
            | NEG_ASIG_ {$$ = EDIST;}
            ;   

operadorIncremento: OPMAS_OPMAS_ { $$ = ESUM;}
            | OPREST_OPREST_ {$$ = EDIF;}
            ;


secuenciaSentencias: sentencia
            | secuenciaSentencias sentencia
            ;
            
sentencia: declaracion
			| instruccion
			;   
            
declaracion: tipoSimple ID_ FINL_
			{
				int x = insertarTDS($2, $1.tipo, dvar, -1) ;
				dvar++;
				if (x == 0){
					yyerror("Esta variable ya ha sido declarada en la TDS");
				}
			}
            | tipoSimple ID_ CORA_ CTE_ CORC_ FINL_
            {
				if ($4 <= 0) {
					yyerror("Talla inapropiada");
				} else {
					int refe = insertaTDArray($1.tipo, $4);
					int x = insertarTDS($2, T_ARRAY, dvar, refe) ;
					dvar++;					
					if (x == 0){
						yyerror("Esta variable ya ha sido declarada en la TDS");
					} 
				}
            }
            ;
            
tipoSimple: INT_
			{
				$$.tipo = T_ENTERO;
			}
            | BOOL_
            {
				$$.tipo = T_LOGICO;
			}
            ;

instruccion: LABIERTA_ listaInstrucciones LCERRADA_ 
			{
					$$ = $2;
			}
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
            {
				
			}
            ;            
            
instruccionEntradaSalida: LEER_ PABIERTO_ ID_ PCERRADO_ FINL_
			{
				SIMB sim = obtenerTDS($3); 
				//mostrarTDS();
				if (sim.tipo == T_ERROR) 
					yyerror("Objeto no declarado");
				else if(sim.tipo != T_ENTERO)
					yyerror("El argumento del read debe ser entero");
					
				emite(EREAD, crArgNul(), crArgNul(), crArgPos(sim.desp));
			}
			| IMPRIMIR_ PABIERTO_ expresion PCERRADO_ FINL_
			{
				//if($3.tipo != T_ENTERO)
				//	yyerror("La expresion del print debe ser entera");
				emite(EWRITE, crArgNul(), crArgNul(), crArgPos($<atributos>3.pos));
			}
			;         

instruccionSeleccion: IF_ PABIERTO_ expresion PCERRADO_
			{
				if($3.tipo != T_LOGICO)
					yyerror("La expresion del IF debe ser logica");
				else{
					$<atributos>$.fin = creaLans(si); 
					emite(EIGUAL,crArgPos($<atributos>3.pos),crArgEnt(0),crArgNul());/*Se debe completar despues */
				}
				
			}
				instruccion 
			{
				
				$<atributos>5.fin = creaLans(si);
				emite(GOTOS,crArgNul(),crArgNul(),crArgNul());
				completaLans($<atributos>$.fin, crArgEnt(si));
			}
				restoIf
            {
				completaLans($<atributos>5.fin, crArgEnt(si));
			}
            ;
            
restoIf: ELSEIF_ PABIERTO_ expresion 
		 {
				if($3.tipo != T_LOGICO)
					yyerror("La expresion del ELSEIF debe ser logica");
				else{
					$<atributos>$.fin = creaLans(si);
					emite(EIGUAL,crArgPos($<atributos>3.pos),crArgEnt(0),crArgNul());
				}
		 }
		 PCERRADO_ instruccion
		 {
				$<atributos>4.fin = creaLans(si);
				emite(GOTOS,crArgNul(),crArgNul(),crArgNul());
				completaLans($<atributos>$.fin, crArgEnt(si));
		 }
		 restoIf
		 {
				completaLans($<atributos>4.fin, crArgEnt(si));
		 }
         | ELSE_ instruccion
         {
			    //completaLans($<atributos>2.fin, crArgEnt(si)); /*Completo el creaLans de instruccionSeleccion, un poco más arriba*/
	     }
         ;    

instruccionIteracion: WHILE_ PABIERTO_ 
					{
						$<atributos>$.pos = si;
					} 
					expresion  PCERRADO_  
					{
						if($<atributos>4.tipo != T_LOGICO)
							yyerror("La expresion del while debe ser logica");
						else{
							$<atributos>$.fin = creaLans(si);
							emite(EIGUAL,crArgPos($<atributos>4.pos),crArgEnt(0),crArgNul());
						}
					}
					instruccion {
						emite(GOTOS, crArgNul(), crArgNul(),crArgEtq($<atributos>3.pos));
						completaLans($<atributos>6.fin, crArgEnt(si));
					 }
					 
			| DO_ 
			{
				$<atributos>$.pos = si; // TODO falla aqui, no guarda la pos como en el while
			}
			  instruccion WHILE_ PABIERTO_ expresion PCERRADO_
			{
				if($<atributos>6.tipo != T_LOGICO)
					yyerror("La expresion del DoWhile debe ser logica");
			    else{			
					emite(EIGUAL,crArgPos($<atributos>6.pos),crArgEnt(1),crArgEtq($<atributos>2.pos));
			    }
			}
			;            
        
expresion: expresionLogica
			{ 
				$<atributos>$.tipo = $1.tipo;
				$<atributos>$.pos = $1.pos;
			}
            | ID_ operadorAsignacion expresion
            {
				$$.tipo = T_ERROR;
				if($<atributos>3.tipo != T_ERROR){
					SIMB sim = obtenerTDS($1); 
					//mostrarTDS();
					if (sim.tipo == T_ERROR) 
						yyerror("Objeto no declarado");
					else if($<atributos>3.tipo == T_ARRAY)
						yyerror("La expresion debe ser de tipo simple");
					else if (! ( (sim.tipo == $<atributos>3.tipo == T_ENTERO) || 
								 (sim.tipo == $<atributos>3.tipo == T_LOGICO) ) 
							)
						yyerror("Error de tipos en la 'instrucción de asignación'");
					else 
						$$.tipo = sim.tipo;
					
					if($2 != EIGUAL && $<atributos>3.tipo == T_ENTERO){
						$$.pos = creaVarTemp();

						emite($2, crArgPos(sim.desp), crArgPos($<atributos>3.pos), crArgPos($$.pos));
						emite(EASIG, crArgPos($$.pos), crArgNul(), crArgPos(sim.desp));
					}else{
						//TODO esta linea es la que falta en la mayoria de expresiones.
						// todas las expresiones deben de hacer su accion
						// esta por ejemplo no modificaba la variable
						// cn este emite ya lo hace.
						$$.pos = creaVarTemp();
						
						emite(EASIG, crArgPos($<atributos>3.pos), crArgNul(), crArgPos($$.pos));
						emite(EASIG, crArgPos($$.pos), crArgNul(), crArgPos(sim.desp));
					}

				}
            }
            | ID_ CORA_ expresion CORC_ operadorAsignacion expresion
            {
            // Cuidado con el tipo de array
				SIMB sim = obtenerTDS($1); 
				$$.tipo = T_ERROR;
				
				if(sim.tipo != T_ARRAY){
					yyerror("Fallo en expresionSufija, ID_ no es un array");
				}else
					if ($3.tipo == T_ENTERO) {
						DIM dim = obtenerInfoArray(sim.ref);
						
						if($6.tipo != T_ERROR){
							if($6.tipo == dim.telem){
								$$.tipo = dim.telem;
								
								// Generacion de codigo intermedio
								
								
								emite(EVA, crArgPos(sim.desp), crArgPos($3.pos), crArgPos($6.pos));
								
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
				$$.tipo = $1.tipo;
				$$.pos = $1.pos;
			}
            | expresionLogica operadorLogico expresionIgualdad
            {
				if($1.tipo == T_LOGICO && $3.tipo == T_LOGICO){
					$$.tipo = T_LOGICO;
				}else{
					$$.tipo = T_ERROR;
					yyerror("Error en expresion logica");
				}
				if($2 == EMULT){ /*AND*/
					$$.pos = creaVarTemp();
					emite(EASIG, crArgEnt(0), crArgNul(), crArgPos($$.pos));
					emite(EIGUAL, crArgPos($1.pos), crArgEnt(0), crArgEtq(si + 3));
					emite(EIGUAL, crArgPos($3.pos), crArgEnt(0), crArgEtq(si + 2));
					emite(EASIG, crArgEnt(1), crArgNul(), crArgPos($$.pos));
				}
				else{
					$$.pos = creaVarTemp();
					emite(EASIG, crArgEnt(1), crArgNul(), crArgPos($$.pos));
					emite(EIGUAL, crArgPos($1.pos), crArgEnt(1), crArgEtq(si + 3));
					emite(EIGUAL, crArgPos($3.pos), crArgEnt(1), crArgEtq(si + 2));
					emite(EASIG, crArgEnt(0), crArgNul(), crArgPos($$.pos));
				}
				emite($2, crArgPos($1.pos), crArgPos($3.pos), crArgEtq(si+3));
				emite(EASIG, crArgEnt(0), crArgNul(), crArgPos($$.pos));
				emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(si+2));
				emite(EASIG, crArgEnt(1), crArgNul(), crArgPos($$.pos));
		
            }
            ;            
            
expresionIgualdad: expresionRelacional
			{
				$$.tipo = $1.tipo;
				$$.pos = $1.pos;
			}
			| expresionIgualdad operadorIgualdad expresionRelacional
			{
				if($1.tipo == $3.tipo){
					$$.tipo = T_LOGICO;
				}else{
					$$.tipo = T_ERROR;
					yyerror("Error en expresion igualdad. Han de ser del mismo tipo");
				}
			     $$.pos = creaVarTemp();
				 emite($2, crArgPos($1.pos), crArgPos($3.pos), crArgEtq(si+3));
				 emite(EASIG, crArgEnt(0), crArgNul(), crArgPos($$.pos));
				 emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(si+2));
				 emite(EASIG, crArgEnt(1), crArgNul(), crArgPos($$.pos));
	
			}
			;            
                       
expresionRelacional: expresionAditiva
			{
				$$.tipo = $1.tipo;
				$$.pos = $1.pos;
			}
            | expresionRelacional operadorRelacional expresionAditiva
			{
				if($1.tipo == $3.tipo == T_ENTERO){
					$$.tipo = T_LOGICO;
				}else{
					$$.tipo = T_ERROR;
					yyerror("Error en expresion relacional. Solo e pueden comparar dos numeros");
				}
			     $$.pos = creaVarTemp();
				 emite(EASIG, crArgEnt(1), crArgNul(), crArgPos($$.pos));
                 emite($2, crArgPos($1.pos), crArgPos($3.pos), crArgEtq(si + 2));
				 emite(EASIG, crArgEnt(0), crArgNul(), crArgPos($$.pos));
	
			}
            ;
            
expresionAditiva: expresionMultiplicativa 
			{
				$$.tipo = $1.tipo;
				$$.pos = $1.pos;
				
			}
            | expresionAditiva operadorAditivo expresionMultiplicativa
            {
				if($1.tipo == $3.tipo == T_ENTERO){
					$$.tipo = T_ENTERO;
				}else{
					$$.tipo = T_ERROR;
					yyerror("Error en expresion aditiva. Solo se pueden usar numeros");
				}
				
				/** Generacion de codigo intermedio*/
				
				$$.pos = creaVarTemp();
				/*************** Expresion a partir de un operador aritmetico */
				emite($2, crArgPos($1.pos), crArgPos($3.pos), crArgPos($$.pos));
				//mostrarTDS();
				
            }
            ;            
 
expresionMultiplicativa: expresionUnaria
			{
				$$.tipo = $1.tipo;
				$$.pos = $1.pos;
			}
			| expresionMultiplicativa operadorMultiplicativo expresionUnaria
			{
				if($1.tipo != T_ENTERO || $3.tipo != T_ENTERO){
					$$.tipo = T_ERROR;
					yyerror("Error de tipos en expresion multiplicativa");
				}else{
					$$.tipo = T_ENTERO;
				}
				$$.pos = creaVarTemp();
				/*************** Expresion a partir de un operador aritmetico */
				emite($2, crArgPos($1.pos), crArgPos($3.pos), crArgPos($$.pos));
	
			}
			; 
            
expresionUnaria: expresionSufija
            {
              
				$$.tipo = $1.tipo;
				$$.pos = $1.pos;
            }
            | operadorUnario expresionUnaria
            {
              $$.tipo = T_ERROR;
              if($2.tipo == T_ENTERO && $1 != OPMAS_ && $1 != OPREST_){
                yyerror("Error en operadorUnario posittivo/negativo");
              }
              else if($2.tipo == T_LOGICO && $1 != EDIST){
                yyerror("Error en operadorUnario negacion");
              } else{
                if($2.tipo == T_ENTERO){ 
					$$.tipo = T_ENTERO;
					
					if($1 == OPREST_){
						$$.pos = creaVarTemp();
						emite(ESIG, crArgPos($2.pos), crArgNul(), crArgPos($$.pos));
					}
				}
                else $$.tipo = T_LOGICO;
                
                
              }
			
            }
            | operadorIncremento ID_
            
            {
              SIMB sim = obtenerTDS($2);
              $$.tipo = T_ERROR;
              if (sim.tipo == T_ENTERO)
                $$.tipo = sim.tipo;
                
              emite($1, crArgPos(sim.desp), crArgEnt(1), crArgPos(sim.desp));
              
              emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos($$.pos));
            }
            ;

expresionSufija: PABIERTO_ expresion PCERRADO_
            {
              
 				$$.tipo = $2.tipo;
				$$.pos = $2.pos;
            }
            | ID_ operadorIncremento
            {
              SIMB sim = obtenerTDS($1); $$.tipo = T_ERROR;
              if (sim.tipo == T_ENTERO) 
                $$.tipo = sim.tipo;
              
              $$.pos = creaVarTemp();
              
              emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos($$.pos));
              
              emite($2, crArgPos(sim.desp), crArgEnt(1), crArgPos(sim.desp));
              
            }
            
                
                
                | ID_ CORA_ expresion CORC_ 
                {
                  SIMB sim = obtenerTDS($1);
                  $$.tipo = T_ERROR;
                  if(sim.tipo != T_ARRAY){
                    
                    yyerror("Fallo en expresionSufija, ID_ no es un array");
                  }
                  $$.tipo = T_ERROR;
                  if ($3.tipo == T_ENTERO) {
                    DIM dim = obtenerInfoArray(sim.ref);
                    $$.tipo = dim.telem;
                    
                    // Generacion de codigo intermedio
                    emite(EAV, crArgPos(sim.desp), crArgPos($3.pos), crArgPos($$.pos));
                    
                  }
                }
            | ID_ 
            {
            SIMB sim = obtenerTDS($1); $$.tipo = T_ERROR;
            if (sim.tipo != T_ERROR) 
              $$.tipo = sim.tipo;
				$$.pos = sim.desp;
				emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos($$.pos));
            }
            | CTE_ 
            {
				$$.tipo = T_ENTERO;
				$$.pos = creaVarTemp();
				emite(EASIG, crArgEnt($1), crArgNul(), crArgPos($$.pos));
			}
            | TRUE_ 
            {
				$$.tipo = T_LOGICO;
				$$.pos = creaVarTemp();
				emite(EASIG, crArgEnt(1), crArgNul(), crArgPos($$.pos));
            }
            | FALSE_
            {
				$$.tipo = T_LOGICO;
				$$.pos = creaVarTemp();
				emite(EASIG, crArgEnt(0), crArgNul(), crArgPos($$.pos));
            }
            ;
operadorAsignacion: ASIG_ {$$ = EIGUAL; }
            | OPMAS_ASIG_ {$$ = ESUM; }
            | OPREST_ASIG_ {$$ = EDIF; }
            | OPMULT_ASIG_ {$$ = EMULT; }
            | OPDIV_ASIG_ {$$ = EDIVI; }
            ;         
                       

            
operadorRelacional: MAYQ_ {$$ = EMAY; }
            | MENQ_  {$$ = EMEN; }
            | MAYQ_ASIG_  {$$ = EMAYEQ; }
            | MENQ_ASIG_  {$$ = EMENEQ; }
            ;
            
operadorAditivo: OPMAS_ {$$ = ESUM; }
            | OPREST_ {$$ = EDIF; }
            ;
    

operadorMultiplicativo: OPMULT_ {$$ = EMULT; }
            | OPDIV_ {$$ = EDIVI; }
            | OPMOD_ {$$ =  RESTO; }
            ;
            
operadorUnario: OPMAS_ { $$ = ESUM; }
            | OPREST_ { $$ = EDIF; }
            | NEG_ { $$ = EDIST; }
            ;


%%

