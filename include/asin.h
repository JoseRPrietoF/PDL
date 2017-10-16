/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID_ = 258,
    CTE_ = 259,
    OPMAS_ = 260,
    OPMULT_ = 261,
    PABIERTO_ = 262,
    PCERRADO_ = 263,
    LABIERTA_ = 264,
    LCERRADA_ = 265,
    LEER_ = 266,
    IMPRIMIR_ = 267,
    TRUE_ = 268,
    FALSE_ = 269,
    FOR_ = 270,
    WHILE_ = 271,
    IF_ = 272,
    ELSE_ = 273,
    ELSEIF_ = 274,
    DO_ = 275,
    ASIG_ = 276,
    OPREST_ = 277,
    OPDIV_ = 278,
    OPMOD_ = 279,
    MAYQ_ = 280,
    MENQ_ = 281,
    FINL_ = 282,
    CORA_ = 283,
    CORC_ = 284,
    NEG_ = 285,
    AND_ = 286,
    OR_ = 287,
    INT_ = 288,
    BOOL_ = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */
