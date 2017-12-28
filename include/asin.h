/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_ASIN_H_INCLUDED
# define YY_YY_ASIN_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID_ = 258,
     CTE_ = 259,
     TRUE_ = 260,
     FALSE_ = 261,
     LEER_ = 262,
     PABIERTO_ = 263,
     PCERRADO_ = 264,
     LABIERTA_ = 265,
     LCERRADA_ = 266,
     IMPRIMIR_ = 267,
     DO_ = 268,
     FINL_ = 269,
     CORA_ = 270,
     CORC_ = 271,
     AND_AND_ = 272,
     OR_OR_ = 273,
     ASIG_ASIG_ = 274,
     NEG_ASIG_ = 275,
     OPMAS_OPMAS_ = 276,
     OPREST_OPREST_ = 277,
     OPMAS_ASIG_ = 278,
     OPREST_ASIG_ = 279,
     OPMOD_ASIG_ = 280,
     OPMULT_ASIG_ = 281,
     OPDIV_ASIG_ = 282,
     MAYQ_ASIG_ = 283,
     MENQ_ASIG_ = 284,
     OPMAS_ = 285,
     OPMULT_ = 286,
     FOR_ = 287,
     WHILE_ = 288,
     IF_ = 289,
     ELSE_ = 290,
     ELSEIF_ = 291,
     ASIG_ = 292,
     INT_ = 293,
     BOOL_ = 294,
     MENQ_ = 295,
     NEG_ = 296,
     OPDIV_ = 297,
     OPMOD_ = 298,
     OPREST_ = 299,
     MAYQ_ = 300,
     AND_ = 301,
     OR_ = 302
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 11 "./src/asin.y"

	char *ident ; /* Nombre del identificador */
	int cent ; /* Valor de la cte numerica entera */
	Atributos atributos;
	int op;	


/* Line 2058 of yacc.c  */
#line 112 "asin.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_ASIN_H_INCLUDED  */
