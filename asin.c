/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "./src/asin.y"

 #include <stdio.h>
 #include "header.h"
 #include "libtds.h"
 int numErrores ;

/* Line 371 of yacc.c  */
#line 75 "asin.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "asin.h".  */
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
/* Line 387 of yacc.c  */
#line 9 "./src/asin.y"

	char *ident ; /* Nombre del identificador */
	int cent ; /* Valor de la cte numerica entera */
	Atributos atributos;
	
	


/* Line 387 of yacc.c  */
#line 174 "asin.c"
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

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 202 "asin.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   245

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNRULES -- Number of states.  */
#define YYNSTATES  128

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,     9,    11,    13,    15,    17,    19,
      21,    24,    26,    28,    32,    39,    41,    43,    47,    49,
      51,    53,    55,    58,    59,    62,    64,    70,    76,    83,
      90,    93,    99,   106,   108,   112,   119,   121,   125,   127,
     131,   133,   137,   139,   143,   145,   149,   151,   154,   157,
     161,   164,   169,   171,   173,   175,   177,   179,   181,   183,
     185,   187,   189,   191,   193,   195,   197,   199,   201,   203,
     205,   207,   209
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      49,     0,    -1,    10,    53,    11,    -1,    17,    -1,    18,
      -1,    19,    -1,    20,    -1,    21,    -1,    22,    -1,    54,
      -1,    53,    54,    -1,    55,    -1,    57,    -1,    56,     3,
      14,    -1,    56,     3,    15,     4,    16,    14,    -1,    38,
      -1,    39,    -1,    10,    58,    11,    -1,    60,    -1,    59,
      -1,    61,    -1,    63,    -1,    58,    57,    -1,    -1,    64,
      14,    -1,    14,    -1,     7,     8,     3,     9,    14,    -1,
      12,     8,    64,     9,    14,    -1,    34,     8,    64,     9,
      57,    62,    -1,    36,     8,    64,     9,    57,    62,    -1,
      35,    57,    -1,    33,     8,    64,     9,    57,    -1,    13,
      57,    33,     8,    64,     9,    -1,    65,    -1,     3,    72,
      64,    -1,     3,    15,    64,    16,    72,    64,    -1,    66,
      -1,    65,    50,    66,    -1,    67,    -1,    66,    51,    67,
      -1,    68,    -1,    67,    73,    68,    -1,    69,    -1,    68,
      74,    69,    -1,    70,    -1,    69,    75,    70,    -1,    71,
      -1,    76,    70,    -1,    52,     3,    -1,     8,    64,     9,
      -1,     3,    52,    -1,     3,    15,    64,    16,    -1,     3,
      -1,     4,    -1,     5,    -1,     6,    -1,    37,    -1,    23,
      -1,    24,    -1,    26,    -1,    27,    -1,    45,    -1,    40,
      -1,    28,    -1,    29,    -1,    30,    -1,    44,    -1,    31,
      -1,    42,    -1,    43,    -1,    30,    -1,    44,    -1,    41,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    26,    26,    29,    30,    33,    34,    37,    38,    42,
      43,    46,    47,    50,    58,    73,    77,    83,    84,    85,
      86,    87,    90,    91,    94,    96,    99,   109,   116,   122,
     125,   128,   133,   140,   144,   162,   189,   193,   205,   209,
     221,   225,   236,   240,   251,   255,   266,   270,   284,   294,
     298,   304,   318,   324,   328,   332,   337,   338,   339,   340,
     341,   346,   347,   348,   349,   352,   353,   357,   358,   359,
     362,   363,   364
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID_", "CTE_", "TRUE_", "FALSE_",
  "LEER_", "PABIERTO_", "PCERRADO_", "LABIERTA_", "LCERRADA_", "IMPRIMIR_",
  "DO_", "FINL_", "CORA_", "CORC_", "AND_AND_", "OR_OR_", "ASIG_ASIG_",
  "NEG_ASIG_", "OPMAS_OPMAS_", "OPREST_OPREST_", "OPMAS_ASIG_",
  "OPREST_ASIG_", "OPMOD_ASIG_", "OPMULT_ASIG_", "OPDIV_ASIG_",
  "MAYQ_ASIG_", "MENQ_ASIG_", "OPMAS_", "OPMULT_", "FOR_", "WHILE_", "IF_",
  "ELSE_", "ELSEIF_", "ASIG_", "INT_", "BOOL_", "MENQ_", "NEG_", "OPDIV_",
  "OPMOD_", "OPREST_", "MAYQ_", "AND_", "OR_", "$accept", "programa",
  "operadorLogico", "operadorIgualdad", "operadorIncremento",
  "secuenciaSentencias", "sentencia", "declaracion", "tipoSimple",
  "instruccion", "listaInstrucciones", "instruccionExpresion",
  "instruccionEntradaSalida", "instruccionSeleccion", "restoIf",
  "instruccionIteracion", "expresion", "expresionLogica",
  "expresionIgualdad", "expresionRelacional", "expresionAditiva",
  "expresionMultiplicativa", "expresionUnaria", "expresionSufija",
  "operadorAsignacion", "operadorRelacional", "operadorAditivo",
  "operadorMultiplicativo", "operadorUnario", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    52,    52,    53,
      53,    54,    54,    55,    55,    56,    56,    57,    57,    57,
      57,    57,    58,    58,    59,    59,    60,    60,    61,    62,
      62,    63,    63,    64,    64,    64,    65,    65,    66,    66,
      67,    67,    68,    68,    69,    69,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    72,    72,    72,    72,
      72,    73,    73,    73,    73,    74,    74,    75,    75,    75,
      76,    76,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     6,     1,     1,     3,     1,     1,
       1,     1,     2,     0,     2,     1,     5,     5,     6,     6,
       2,     5,     6,     1,     3,     6,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     2,     2,     3,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    52,    53,    54,    55,     0,     0,    23,
       0,     0,    25,     7,     8,    70,     0,     0,    15,    16,
      72,    71,     0,     0,     9,    11,     0,    12,    19,    18,
      20,    21,     0,    33,    36,    38,    40,    42,    44,    46,
       0,     1,     0,    57,    58,    59,    60,    56,    50,     0,
       0,     0,     0,     0,     0,     0,     0,    48,     2,    10,
       0,    24,     3,     4,     0,     5,     6,     0,    63,    64,
      62,    61,     0,    65,    66,     0,    67,    68,    69,     0,
      52,    47,     0,    34,     0,    49,    17,    22,     0,     0,
       0,     0,    13,     0,    37,    39,    41,    43,    45,     0,
      51,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      27,     0,    31,     0,     0,    51,    35,    32,     0,     0,
      28,    14,    30,     0,     0,     0,     0,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,    64,    67,    22,    23,    24,    25,    26,    27,
      52,    28,    29,    30,   120,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    49,    72,    75,    79,    40
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -38
static const yytype_int16 yypact[] =
{
       5,   117,     4,   -13,   -38,   -38,   -38,    17,    67,   -38,
      23,   201,   -38,   -38,   -38,   -38,    32,    47,   -38,   -38,
     -38,   -38,    24,    46,   -38,   -38,    34,   -38,   -38,   -38,
     -38,   -38,    49,    18,    19,   -22,   -18,   -10,   -38,   -38,
     138,   -38,    67,   -38,   -38,   -38,   -38,   -38,   -38,    67,
      61,    56,   159,    67,    33,    67,    67,   -38,   -38,   -38,
      29,   -38,   -38,   -38,   138,   -38,   -38,   138,   -38,   -38,
     -38,   -38,   138,   -38,   -38,   138,   -38,   -38,   -38,   138,
       7,   -38,    53,   -38,    65,   -38,   -38,   -38,    68,    73,
      74,    77,   -38,    78,    19,   -22,   -18,   -10,   -38,    67,
      -7,    79,    80,    67,   201,   201,    76,    85,    67,   -38,
     -38,    87,   -38,    26,    88,   -38,   -38,   -38,   201,    95,
     -38,   -38,   -38,    67,    96,   201,    26,   -38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -38,   -38,   -38,   -38,    -2,   -38,    81,   -38,   -38,    -6,
     -38,   -38,   -38,   -38,   -20,   -38,    -8,   -38,    43,    42,
      38,    39,   -37,   -38,    13,   -38,   -38,   -38,   -38
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      51,    48,    42,    81,    41,    54,    68,    69,    13,    14,
      43,    44,    73,    45,    46,     1,    43,    44,    70,    45,
      46,    76,    99,    71,    47,    50,    74,    57,    13,    14,
      47,    53,    77,    78,    82,    62,    63,    60,    65,    66,
      55,    83,    98,    92,    93,    88,    87,    90,    91,     3,
       4,     5,     6,     7,     8,    56,     9,    58,    10,    11,
      12,   118,   119,    61,    84,    85,    89,    13,    14,   100,
       3,     4,     5,     6,   101,     8,    15,   102,    48,    16,
      17,   103,   106,   104,    18,    19,   105,    20,    13,    14,
      21,   107,   114,   109,   110,   111,   117,    15,   112,   113,
     116,   115,   121,   123,    59,   125,   127,    94,    20,    95,
      96,    21,   122,   108,    97,   124,     0,     0,     0,   126,
       3,     4,     5,     6,     7,     8,     0,     9,     0,    10,
      11,    12,     0,     0,     0,     0,     0,     0,    13,    14,
       0,    80,     4,     5,     6,     0,     8,    15,     0,     0,
      16,    17,     0,     0,     0,    18,    19,     0,    20,    13,
      14,    21,     3,     4,     5,     6,     7,     8,    15,     9,
      86,    10,    11,    12,     0,     0,     0,     0,     0,    20,
      13,    14,    21,     0,     0,     0,     0,     0,     0,    15,
       0,     0,    16,    17,     0,     0,     0,     0,     0,     0,
      20,     0,     0,    21,     3,     4,     5,     6,     7,     8,
       0,     9,     0,    10,    11,    12,     0,     0,     0,     0,
       0,     0,    13,    14,     0,     0,     0,     0,     0,     0,
       0,    15,     0,     0,    16,    17,     0,     0,     0,     0,
       0,     0,    20,     0,     0,    21
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-38)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       8,     3,    15,    40,     0,    11,    28,    29,    21,    22,
      23,    24,    30,    26,    27,    10,    23,    24,    40,    26,
      27,    31,    15,    45,    37,     8,    44,     3,    21,    22,
      37,     8,    42,    43,    42,    17,    18,     3,    19,    20,
       8,    49,    79,    14,    15,    53,    52,    55,    56,     3,
       4,     5,     6,     7,     8,     8,    10,    11,    12,    13,
      14,    35,    36,    14,     3,     9,    33,    21,    22,    16,
       3,     4,     5,     6,     9,     8,    30,     9,    80,    33,
      34,     8,     4,     9,    38,    39,     9,    41,    21,    22,
      44,    99,    16,    14,    14,   103,     9,    30,   104,   105,
     108,    16,    14,     8,    23,     9,   126,    64,    41,    67,
      72,    44,   118,   100,    75,   123,    -1,    -1,    -1,   125,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      -1,     3,     4,     5,     6,    -1,     8,    30,    -1,    -1,
      33,    34,    -1,    -1,    -1,    38,    39,    -1,    41,    21,
      22,    44,     3,     4,     5,     6,     7,     8,    30,    10,
      11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    41,
      21,    22,    44,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    49,     3,     4,     5,     6,     7,     8,    10,
      12,    13,    14,    21,    22,    30,    33,    34,    38,    39,
      41,    44,    52,    53,    54,    55,    56,    57,    59,    60,
      61,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      76,     0,    15,    23,    24,    26,    27,    37,    52,    72,
       8,    64,    58,     8,    57,     8,     8,     3,    11,    54,
       3,    14,    17,    18,    50,    19,    20,    51,    28,    29,
      40,    45,    73,    30,    44,    74,    31,    42,    43,    75,
       3,    70,    64,    64,     3,     9,    11,    57,    64,    33,
      64,    64,    14,    15,    66,    67,    68,    69,    70,    15,
      16,     9,     9,     8,     9,     9,     4,    64,    72,    14,
      14,    64,    57,    57,    16,    16,    64,     9,    35,    36,
      62,    14,    57,     8,    64,     9,    57,    62
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 13:
/* Line 1792 of yacc.c  */
#line 51 "./src/asin.y"
    {
				int x = insertarTDS((yyvsp[(2) - (3)].ident), (yyvsp[(1) - (3)].atributos), 0, -1) ;
				
				if (x == 0){
					yyerror("Esta variable ya ha sido declarada en la TDS");
				}
			}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 59 "./src/asin.y"
    {
				if ((yyvsp[(4) - (6)].cent) <= 0) {
					yyerror("Talla inapropiada");
				} else {
					int refe = insertaTDArray((yyvsp[(1) - (6)].atributos), (yyvsp[(4) - (6)].cent));
					int x = insertarTDS((yyvsp[(2) - (6)].ident), T_ARRAY, 0, refe) ;
					
					if (x == 0){
						yyerror("Esta variable ya ha sido declarada en la TDS");
					} 
				}
            }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 74 "./src/asin.y"
    {
				(yyval.atributos) = T_ENTERO;
			}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 78 "./src/asin.y"
    {
				(yyval.atributos) = T_LOGICO;
			}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 100 "./src/asin.y"
    {
				SIMB sim = obtenerTDS((yyvsp[(3) - (5)].ident)); 
					//mostrarTDS();
					if (sim.tipo == T_ERROR) 
						yyerror("Objeto no declarado");
					else if(sim.tipo != T_ENTERO)
						yyerror("El argumento del read debe ser entero");
					
			}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 110 "./src/asin.y"
    {
				if((yyvsp[(3) - (5)].tipo) != T_ENTERO)
					yyerror("La expresion del print debe ser entera");
			}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 117 "./src/asin.y"
    {
				
			}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 123 "./src/asin.y"
    {
			}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 129 "./src/asin.y"
    {
				if((yyvsp[(3) - (5)].tipo) != T_LOGICO)
					yyerror("La expresion del while debe ser logica");
			}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 134 "./src/asin.y"
    {
				if((yyvsp[(5) - (6)].tipo) != T_LOGICO)
					yyerror("La expresion del while debe ser logica");
			}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 141 "./src/asin.y"
    { 
				(yyval.atributos) = (yyvsp[(1) - (1)].atributos);
			}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 145 "./src/asin.y"
    {
				(yyval.tipo) = T_ERROR;
				if((yyvsp[(3) - (3)].atributos) != T_ERROR){
					SIMB sim = obtenerTDS((yyvsp[(1) - (3)].ident)); 
					//mostrarTDS();
					if (sim.tipo == T_ERROR) 
						yyerror("Objeto no declarado");
					else if((yyvsp[(3) - (3)].tipo) == T_ARRAY)
						yyerror("La expresion debe ser de tipo simple");
					else if (! ( (sim.tipo == (yyvsp[(3) - (3)].tipo) == T_ENTERO) || 
								 (sim.tipo == (yyvsp[(3) - (3)].tipo) == T_LOGICO) ) 
							)
						yyerror("Error de tipos en la 'instrucción de asignación'");
					else 
						(yyval.tipo) = sim.tipo;
				}
            }
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 163 "./src/asin.y"
    {
            // Cuidado con el tipo de array
				SIMB sim = obtenerTDS((yyvsp[(1) - (6)].ident)); 
				(yyval.tipo) = T_ERROR;
				
				if(sim.tipo != T_ARRAY){
					yyerror("Fallo en expresionSufija, ID_ no es un array");
				}else
					if ((yyvsp[(3) - (6)].tipo) == T_ENTERO) {
						DIM dim = obtenerInfoArray(sim.ref);
						
						if((yyvsp[(6) - (6)].tipo) != T_ERROR){
							if((yyvsp[(6) - (6)].tipo) == dim.telem){
								(yyval.tipo) = dim.telem;
							}else{
								yyerror("La expresion debe ser del mismo tipo que el array");
							}
						}
					}else{
						yyerror("El indice del array debe ser entero");
					}
				
				
            }
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 190 "./src/asin.y"
    {
				(yyval.atributos) = (yyvsp[(1) - (1)].atributos);
			}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 194 "./src/asin.y"
    {
				if((yyvsp[(1) - (3)].tipo) == T_LOGICO && (yyvsp[(3) - (3)].tipo) == T_LOGICO){
					(yyval.atributos) = T_LOGICO;
				}else{
					(yyval.atributos) = T_ERROR;
					yyerror("Error en expresion logica");
				}
				
            }
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 206 "./src/asin.y"
    {
				(yyval.atributos) = (yyvsp[(1) - (1)].atributos);
			}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 210 "./src/asin.y"
    {
				if((yyvsp[(1) - (3)].tipo) == (yyvsp[(3) - (3)].tipo)){
					(yyval.atributos) = T_LOGICO;
				}else{
					(yyval.atributos) = T_ERROR;
					yyerror("Error en expresion igualdad. Han de ser del mismo tipo");
				}
				
			}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 222 "./src/asin.y"
    {
				(yyval.atributos) = (yyvsp[(1) - (1)].atributos);
			}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 226 "./src/asin.y"
    {
				if((yyvsp[(1) - (3)].tipo) == (yyvsp[(3) - (3)].tipo) == T_ENTERO){
					(yyval.atributos) = T_LOGICO;
				}else{
					(yyval.atributos) = T_ERROR;
					yyerror("Error en expresion relacional. Solo e pueden comparar dos numeros");
				}
			}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 237 "./src/asin.y"
    {
				(yyval.atributos) = (yyvsp[(1) - (1)].atributos);
			}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 241 "./src/asin.y"
    {
				if((yyvsp[(1) - (3)].tipo) == (yyvsp[(3) - (3)].tipo) == T_ENTERO){
					(yyval.atributos) = T_ENTERO;
				}else{
					(yyval.atributos) = T_ERROR;
					yyerror("Error en expresion aditiva. Solo se pueden usar numeros");
				}
            }
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 252 "./src/asin.y"
    {
				(yyval.atributos) = (yyvsp[(1) - (1)].atributos);
			}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 256 "./src/asin.y"
    {
				if((yyvsp[(1) - (3)].tipo) != T_ENTERO || (yyvsp[(3) - (3)].tipo) != T_ENTERO){
					(yyval.atributos) = T_ERROR;
					yyerror("Error de tipos en expresion multiplicativa");
				}else{
					(yyval.atributos) = T_ENTERO;
				}
			}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 267 "./src/asin.y"
    {
				(yyval.atributos) = (yyvsp[(1) - (1)].atributos);
			}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 271 "./src/asin.y"
    {
				(yyval.atributos) = T_ERROR;
				if((yyvsp[(2) - (2)].tipo) == T_ENTERO && (yyvsp[(1) - (2)].atributos) != OPMAS_ && (yyvsp[(1) - (2)].atributos) != OPREST_){
					yyerror("Error en operadorUnario posittivo/negativo");
				}
				else if((yyvsp[(2) - (2)].tipo) == T_LOGICO && (yyvsp[(1) - (2)].atributos) != NEG_){
					yyerror("Error en operadorUnario negacion");
				} else{
					if((yyvsp[(2) - (2)].tipo) == T_ENTERO) (yyval.atributos) = T_ENTERO;
					else (yyval.atributos) = T_LOGICO;
				}
			
            }
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 285 "./src/asin.y"
    {
				SIMB sim = obtenerTDS((yyvsp[(2) - (2)].ident));
				(yyval.tipo) = T_ERROR;
				if (sim.tipo == T_ENTERO)
					(yyval.atributos) = sim.tipo;
				
            }
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 295 "./src/asin.y"
    {
				(yyval.atributos) = (yyvsp[(2) - (3)].atributos);
			}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 299 "./src/asin.y"
    {
				SIMB sim = obtenerTDS((yyvsp[(1) - (2)].ident)); (yyval.tipo) = T_ERROR;
				if (sim.tipo == T_ENTERO) 
					(yyval.atributos) = sim.tipo;
            }
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 305 "./src/asin.y"
    {
				SIMB sim = obtenerTDS((yyvsp[(1) - (4)].ident));
				(yyval.atributos) = T_ERROR;
				if(sim.tipo != T_ARRAY){
					
					yyerror("Fallo en expresionSufija, ID_ no es un array");
				}
				(yyval.tipo) = T_ERROR;
				if ((yyvsp[(3) - (4)].atributos) == T_ENTERO) {
					DIM dim = obtenerInfoArray(sim.ref);
					(yyval.atributos) = dim.telem;
				}
            }
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 319 "./src/asin.y"
    {
				SIMB sim = obtenerTDS((yyvsp[(1) - (1)].ident)); (yyval.tipo) = T_ERROR;
				if (sim.tipo != T_ERROR) 
					(yyval.atributos) = sim.tipo;
            }
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 325 "./src/asin.y"
    {
				(yyval.atributos) = T_ENTERO;
			}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 329 "./src/asin.y"
    {
				(yyval.atributos) = T_LOGICO;
            }
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 333 "./src/asin.y"
    {
				(yyval.atributos) = T_LOGICO;
            }
    break;

  case 70:
/* Line 1792 of yacc.c  */
#line 362 "./src/asin.y"
    { (yyval.atributos) = OPMAS_; }
    break;

  case 71:
/* Line 1792 of yacc.c  */
#line 363 "./src/asin.y"
    { (yyval.atributos) = OPREST_; }
    break;

  case 72:
/* Line 1792 of yacc.c  */
#line 364 "./src/asin.y"
    { (yyval.atributos) = NEG_; }
    break;


/* Line 1792 of yacc.c  */
#line 1931 "asin.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 373 "./src/asin.y"


