/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "./src/asin.y" /* yacc.c:339  */

 #include <stdio.h>
 #include "header.h"
 #include "libtds.h"
 #include "libgci.h"
 int numErrores ;
 

#line 75 "asin.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "./src/asin.y" /* yacc.c:355  */

	char *ident ; /* Nombre del identificador */
	int cent ; /* Valor de la cte numerica entera */
	Atributos atributos;
	int op;
	

#line 171 "asin.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 188 "asin.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    30,    30,    30,    33,    34,    37,    38,    41,    42,
      46,    47,    50,    51,    54,    62,    77,    81,    87,    88,
      89,    90,    91,    94,    95,    98,   100,   103,   113,   120,
     126,   129,   132,   137,   144,   148,   166,   193,   197,   209,
     213,   225,   229,   240,   245,   263,   267,   278,   282,   296,
     306,   310,   316,   330,   336,   340,   344,   349,   350,   351,
     352,   353,   358,   359,   360,   361,   364,   365,   369,   370,
     371,   374,   375,   376
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
  "$@1", "operadorLogico", "operadorIgualdad", "operadorIncremento",
  "secuenciaSentencias", "sentencia", "declaracion", "tipoSimple",
  "instruccion", "listaInstrucciones", "instruccionExpresion",
  "instruccionEntradaSalida", "instruccionSeleccion", "restoIf",
  "instruccionIteracion", "expresion", "expresionLogica",
  "expresionIgualdad", "expresionRelacional", "expresionAditiva",
  "expresionMultiplicativa", "expresionUnaria", "expresionSufija",
  "operadorAsignacion", "operadorRelacional", "operadorAditivo",
  "operadorMultiplicativo", "operadorUnario", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

#define YYPACT_NINF -40

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-40)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,   -40,     4,   116,   -40,   -13,   -40,   -40,   -40,    34,
      66,   -40,    35,   200,   -40,   -40,   -40,   -40,    46,    52,
     -40,   -40,   -40,   -40,    58,    45,   -40,   -40,    59,   -40,
     -40,   -40,   -40,   -40,    49,    10,    12,   -22,   -18,    -6,
     -40,   -40,   137,    66,   -40,   -40,   -40,   -40,   -40,   -40,
      66,    61,    56,   158,    66,    40,    66,    66,   -40,   -40,
     -40,    20,   -40,   -40,   -40,   137,   -40,   -40,   137,   -40,
     -40,   -40,   -40,   137,   -40,   -40,   137,   -40,   -40,   -40,
     137,     0,   -40,    60,   -40,    71,   -40,   -40,   -40,    72,
      74,    76,    82,   -40,    64,    12,   -22,   -18,    -6,   -40,
      66,    -7,    78,    79,    66,   200,   200,    84,    85,    66,
     -40,   -40,    86,   -40,     3,    88,   -40,   -40,   -40,   200,
      95,   -40,   -40,   -40,    66,    96,   200,     3,   -40
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,    53,    54,    55,    56,     0,
       0,    24,     0,     0,    26,     8,     9,    71,     0,     0,
      16,    17,    73,    72,     0,     0,    10,    12,     0,    13,
      20,    19,    21,    22,     0,    34,    37,    39,    41,    43,
      45,    47,     0,     0,    58,    59,    60,    61,    57,    51,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     3,
      11,     0,    25,     4,     5,     0,     6,     7,     0,    64,
      65,    63,    62,     0,    66,    67,     0,    68,    69,    70,
       0,    53,    48,     0,    35,     0,    50,    18,    23,     0,
       0,     0,     0,    14,     0,    38,    40,    42,    44,    46,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
      27,    28,     0,    32,     0,     0,    52,    36,    33,     0,
       0,    29,    15,    31,     0,     0,     0,     0,    30
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -40,   -40,   -40,   -40,   -40,    -4,   -40,    81,   -40,   -40,
      -8,   -40,   -40,   -40,   -40,   -23,   -40,   -10,   -40,    43,
      41,    39,    37,   -39,   -40,    14,   -40,   -40,   -40,   -40
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    65,    68,    24,    25,    26,    27,    28,
      29,    53,    30,    31,    32,   121,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    50,    73,    76,    80,    42
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      52,    49,    43,    82,     4,    55,    69,    70,    15,    16,
      44,    45,    74,    46,    47,   100,    44,    45,    71,    46,
      47,    15,    16,    72,    48,    77,    75,    63,    64,     1,
      48,    66,    67,    83,    93,    94,    78,    79,   119,   120,
      84,    99,    51,    54,    89,    88,    91,    92,     5,     6,
       7,     8,     9,    10,    56,    11,    59,    12,    13,    14,
      57,    58,    61,    62,    85,    86,    15,    16,   107,     5,
       6,     7,     8,    90,    10,    17,   101,    49,    18,    19,
     102,   103,   104,    20,    21,   105,    22,    15,    16,    23,
     108,   106,   110,   111,   112,   118,    17,   113,   114,   117,
     115,   116,   122,   124,   128,   126,    60,    22,    95,    96,
      23,   123,    97,    98,   125,   109,     0,     0,   127,     5,
       6,     7,     8,     9,    10,     0,    11,     0,    12,    13,
      14,     0,     0,     0,     0,     0,     0,    15,    16,     0,
      81,     6,     7,     8,     0,    10,    17,     0,     0,    18,
      19,     0,     0,     0,    20,    21,     0,    22,    15,    16,
      23,     5,     6,     7,     8,     9,    10,    17,    11,    87,
      12,    13,    14,     0,     0,     0,     0,     0,    22,    15,
      16,    23,     0,     0,     0,     0,     0,     0,    17,     0,
       0,    18,    19,     0,     0,     0,     0,     0,     0,    22,
       0,     0,    23,     5,     6,     7,     8,     9,    10,     0,
      11,     0,    12,    13,    14,     0,     0,     0,     0,     0,
       0,    15,    16,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,    18,    19,     0,     0,     0,     0,     0,
       0,    22,     0,     0,    23
};

static const yytype_int8 yycheck[] =
{
      10,     5,    15,    42,     0,    13,    28,    29,    21,    22,
      23,    24,    30,    26,    27,    15,    23,    24,    40,    26,
      27,    21,    22,    45,    37,    31,    44,    17,    18,    10,
      37,    19,    20,    43,    14,    15,    42,    43,    35,    36,
      50,    80,     8,     8,    54,    53,    56,    57,     3,     4,
       5,     6,     7,     8,     8,    10,    11,    12,    13,    14,
       8,     3,     3,    14,     3,     9,    21,    22,     4,     3,
       4,     5,     6,    33,     8,    30,    16,    81,    33,    34,
       9,     9,     8,    38,    39,     9,    41,    21,    22,    44,
     100,     9,    14,    14,   104,     9,    30,   105,   106,   109,
      16,    16,    14,     8,   127,     9,    25,    41,    65,    68,
      44,   119,    73,    76,   124,   101,    -1,    -1,   126,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
       3,     4,     5,     6,    -1,     8,    30,    -1,    -1,    33,
      34,    -1,    -1,    -1,    38,    39,    -1,    41,    21,    22,
      44,     3,     4,     5,     6,     7,     8,    30,    10,    11,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    41,    21,
      22,    44,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    44,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    49,    50,     0,     3,     4,     5,     6,     7,
       8,    10,    12,    13,    14,    21,    22,    30,    33,    34,
      38,    39,    41,    44,    53,    54,    55,    56,    57,    58,
      60,    61,    62,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    77,    15,    23,    24,    26,    27,    37,    53,
      73,     8,    65,    59,     8,    58,     8,     8,     3,    11,
      55,     3,    14,    17,    18,    51,    19,    20,    52,    28,
      29,    40,    45,    74,    30,    44,    75,    31,    42,    43,
      76,     3,    71,    65,    65,     3,     9,    11,    58,    65,
      33,    65,    65,    14,    15,    67,    68,    69,    70,    71,
      15,    16,     9,     9,     8,     9,     9,     4,    65,    73,
      14,    14,    65,    58,    58,    16,    16,    65,     9,    35,
      36,    63,    14,    58,     8,    65,     9,    58,    63
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    50,    49,    51,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    56,    56,    57,    57,    58,    58,
      58,    58,    58,    59,    59,    60,    60,    61,    61,    62,
      63,    63,    64,    64,    65,    65,    65,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    71,    71,    71,
      72,    72,    72,    72,    72,    72,    72,    73,    73,    73,
      73,    73,    74,    74,    74,    74,    75,    75,    76,    76,
      76,    77,    77,    77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     6,     1,     1,     3,     1,
       1,     1,     1,     2,     0,     2,     1,     5,     5,     6,
       6,     2,     5,     6,     1,     3,     6,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     2,     2,
       3,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 30 "./src/asin.y" /* yacc.c:1646  */
    { dvar = 0;}
#line 1386 "asin.c" /* yacc.c:1646  */
    break;

  case 14:
#line 55 "./src/asin.y" /* yacc.c:1646  */
    {
				int x = insertarTDS((yyvsp[-1].ident), (yyvsp[-2].atributos).tipo, 0, -1) ;
				
				if (x == 0){
					yyerror("Esta variable ya ha sido declarada en la TDS");
				}
			}
#line 1398 "asin.c" /* yacc.c:1646  */
    break;

  case 15:
#line 63 "./src/asin.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-2].cent) <= 0) {
					yyerror("Talla inapropiada");
				} else {
					int refe = insertaTDArray((yyvsp[-5].atributos).tipo, (yyvsp[-2].cent));
					int x = insertarTDS((yyvsp[-4].ident), T_ARRAY, 0, refe) ;
					
					if (x == 0){
						yyerror("Esta variable ya ha sido declarada en la TDS");
					} 
				}
            }
#line 1415 "asin.c" /* yacc.c:1646  */
    break;

  case 16:
#line 78 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = T_ENTERO;
			}
#line 1423 "asin.c" /* yacc.c:1646  */
    break;

  case 17:
#line 82 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = T_LOGICO;
			}
#line 1431 "asin.c" /* yacc.c:1646  */
    break;

  case 27:
#line 104 "./src/asin.y" /* yacc.c:1646  */
    {
				SIMB sim = obtenerTDS((yyvsp[-2].ident)); 
					//mostrarTDS();
					if (sim.tipo == T_ERROR) 
						yyerror("Objeto no declarado");
					else if(sim.tipo != T_ENTERO)
						yyerror("El argumento del read debe ser entero");
					
			}
#line 1445 "asin.c" /* yacc.c:1646  */
    break;

  case 28:
#line 114 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2].atributos).tipo != T_ENTERO)
					yyerror("La expresion del print debe ser entera");
			}
#line 1454 "asin.c" /* yacc.c:1646  */
    break;

  case 29:
#line 121 "./src/asin.y" /* yacc.c:1646  */
    {
				
			}
#line 1462 "asin.c" /* yacc.c:1646  */
    break;

  case 30:
#line 127 "./src/asin.y" /* yacc.c:1646  */
    {
			}
#line 1469 "asin.c" /* yacc.c:1646  */
    break;

  case 32:
#line 133 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2].atributos).tipo != T_LOGICO)
					yyerror("La expresion del while debe ser logica");
			}
#line 1478 "asin.c" /* yacc.c:1646  */
    break;

  case 33:
#line 138 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-1].atributos).tipo != T_LOGICO)
					yyerror("La expresion del while debe ser logica");
			}
#line 1487 "asin.c" /* yacc.c:1646  */
    break;

  case 34:
#line 145 "./src/asin.y" /* yacc.c:1646  */
    { 
				(yyval.atributos) = (yyvsp[0].atributos);
			}
#line 1495 "asin.c" /* yacc.c:1646  */
    break;

  case 35:
#line 149 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = T_ERROR;
				if((yyvsp[0].atributos).tipo != T_ERROR){
					SIMB sim = obtenerTDS((yyvsp[-2].ident)); 
					//mostrarTDS();
					if (sim.tipo == T_ERROR) 
						yyerror("Objeto no declarado");
					else if((yyvsp[0].atributos).tipo == T_ARRAY)
						yyerror("La expresion debe ser de tipo simple");
					else if (! ( (sim.tipo == (yyvsp[0].atributos).tipo == T_ENTERO) || 
								 (sim.tipo == (yyvsp[0].atributos).tipo == T_LOGICO) ) 
							)
						yyerror("Error de tipos en la 'instrucción de asignación'");
					else 
						(yyval.atributos).tipo = sim.tipo;
				}
            }
#line 1517 "asin.c" /* yacc.c:1646  */
    break;

  case 36:
#line 167 "./src/asin.y" /* yacc.c:1646  */
    {
            // Cuidado con el tipo de array
				SIMB sim = obtenerTDS((yyvsp[-5].ident)); 
				(yyval.atributos).tipo = T_ERROR;
				
				if(sim.tipo != T_ARRAY){
					yyerror("Fallo en expresionSufija, ID_ no es un array");
				}else
					if ((yyvsp[-3].atributos).tipo == T_ENTERO) {
						DIM dim = obtenerInfoArray(sim.ref);
						
						if((yyvsp[0].atributos).tipo != T_ERROR){
							if((yyvsp[0].atributos).tipo == dim.telem){
								(yyval.atributos).tipo = dim.telem;
							}else{
								yyerror("La expresion debe ser del mismo tipo que el array");
							}
						}
					}else{
						yyerror("El indice del array debe ser entero");
					}
				
				
            }
#line 1546 "asin.c" /* yacc.c:1646  */
    break;

  case 37:
#line 194 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos) = (yyvsp[0].atributos);
			}
#line 1554 "asin.c" /* yacc.c:1646  */
    break;

  case 38:
#line 198 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2].atributos).tipo == T_LOGICO && (yyvsp[0].atributos).tipo == T_LOGICO){
					(yyval.atributos).tipo = T_LOGICO;
				}else{
					(yyval.atributos).tipo = T_ERROR;
					yyerror("Error en expresion logica");
				}
				
            }
#line 1568 "asin.c" /* yacc.c:1646  */
    break;

  case 39:
#line 210 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos) = (yyvsp[0].atributos);
			}
#line 1576 "asin.c" /* yacc.c:1646  */
    break;

  case 40:
#line 214 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo){
					(yyval.atributos).tipo = T_LOGICO;
				}else{
					(yyval.atributos).tipo = T_ERROR;
					yyerror("Error en expresion igualdad. Han de ser del mismo tipo");
				}
				
			}
#line 1590 "asin.c" /* yacc.c:1646  */
    break;

  case 41:
#line 226 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos) = (yyvsp[0].atributos);
			}
#line 1598 "asin.c" /* yacc.c:1646  */
    break;

  case 42:
#line 230 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo == T_ENTERO){
					(yyval.atributos).tipo = T_LOGICO;
				}else{
					(yyval.atributos).tipo = T_ERROR;
					yyerror("Error en expresion relacional. Solo e pueden comparar dos numeros");
				}
			}
#line 1611 "asin.c" /* yacc.c:1646  */
    break;

  case 43:
#line 241 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos) = (yyvsp[0].atributos);
				
			}
#line 1620 "asin.c" /* yacc.c:1646  */
    break;

  case 44:
#line 246 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo == T_ENTERO){
					(yyval.atributos).tipo = T_ENTERO;
				}else{
					(yyval.atributos).tipo = T_ERROR;
					yyerror("Error en expresion aditiva. Solo se pueden usar numeros");
				}
				
				/** Generacion de codigo intermedio*/
				
				(yyval.atributos).pos = creaVarTemp();
				/*************** Expresion a partir de un operador aritmetico */
				emite((yyvsp[-1].op), crArgPos((yyvsp[-2].atributos).pos), crArgPos((yyvsp[0].atributos).pos), crArgPos((yyval.atributos).pos));
				
            }
#line 1640 "asin.c" /* yacc.c:1646  */
    break;

  case 45:
#line 264 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos) = (yyvsp[0].atributos);
			}
#line 1648 "asin.c" /* yacc.c:1646  */
    break;

  case 46:
#line 268 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2].atributos).tipo != T_ENTERO || (yyvsp[0].atributos).tipo != T_ENTERO){
					(yyval.atributos).tipo = T_ERROR;
					yyerror("Error de tipos en expresion multiplicativa");
				}else{
					(yyval.atributos).tipo = T_ENTERO;
				}
			}
#line 1661 "asin.c" /* yacc.c:1646  */
    break;

  case 47:
#line 279 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos) = (yyvsp[0].atributos);
			}
#line 1669 "asin.c" /* yacc.c:1646  */
    break;

  case 48:
#line 283 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = T_ERROR;
				if((yyvsp[0].atributos).tipo == T_ENTERO && (yyvsp[-1].op) != OPMAS_ && (yyvsp[-1].op) != OPREST_){
					yyerror("Error en operadorUnario posittivo/negativo");
				}
				else if((yyvsp[0].atributos).tipo == T_LOGICO && (yyvsp[-1].op) != NEG_){
					yyerror("Error en operadorUnario negacion");
				} else{
					if((yyvsp[0].atributos).tipo == T_ENTERO) (yyval.atributos).tipo = T_ENTERO;
					else (yyval.atributos).tipo = T_LOGICO;
				}
			
            }
#line 1687 "asin.c" /* yacc.c:1646  */
    break;

  case 49:
#line 297 "./src/asin.y" /* yacc.c:1646  */
    {
				SIMB sim = obtenerTDS((yyvsp[0].ident));
				(yyval.atributos).tipo = T_ERROR;
				if (sim.tipo == T_ENTERO)
					(yyval.atributos).tipo = sim.tipo;
				
            }
#line 1699 "asin.c" /* yacc.c:1646  */
    break;

  case 50:
#line 307 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos) = (yyvsp[-1].atributos);
			}
#line 1707 "asin.c" /* yacc.c:1646  */
    break;

  case 51:
#line 311 "./src/asin.y" /* yacc.c:1646  */
    {
				SIMB sim = obtenerTDS((yyvsp[-1].ident)); (yyval.atributos).tipo = T_ERROR;
				if (sim.tipo == T_ENTERO) 
					(yyval.atributos).tipo = sim.tipo;
            }
#line 1717 "asin.c" /* yacc.c:1646  */
    break;

  case 52:
#line 317 "./src/asin.y" /* yacc.c:1646  */
    {
				SIMB sim = obtenerTDS((yyvsp[-3].ident));
				(yyval.atributos).tipo = T_ERROR;
				if(sim.tipo != T_ARRAY){
					
					yyerror("Fallo en expresionSufija, ID_ no es un array");
				}
				(yyval.atributos).tipo = T_ERROR;
				if ((yyvsp[-1].atributos).tipo == T_ENTERO) {
					DIM dim = obtenerInfoArray(sim.ref);
					(yyval.atributos).tipo = dim.telem;
				}
            }
#line 1735 "asin.c" /* yacc.c:1646  */
    break;

  case 53:
#line 331 "./src/asin.y" /* yacc.c:1646  */
    {
				SIMB sim = obtenerTDS((yyvsp[0].ident)); (yyval.atributos).tipo = T_ERROR;
				if (sim.tipo != T_ERROR) 
					(yyval.atributos).tipo = sim.tipo;
            }
#line 1745 "asin.c" /* yacc.c:1646  */
    break;

  case 54:
#line 337 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = T_ENTERO;
			}
#line 1753 "asin.c" /* yacc.c:1646  */
    break;

  case 55:
#line 341 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = T_LOGICO;
            }
#line 1761 "asin.c" /* yacc.c:1646  */
    break;

  case 56:
#line 345 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = T_LOGICO;
            }
#line 1769 "asin.c" /* yacc.c:1646  */
    break;

  case 57:
#line 349 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EIGUAL; }
#line 1775 "asin.c" /* yacc.c:1646  */
    break;

  case 58:
#line 350 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = ESUM; }
#line 1781 "asin.c" /* yacc.c:1646  */
    break;

  case 59:
#line 351 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EDIF; }
#line 1787 "asin.c" /* yacc.c:1646  */
    break;

  case 60:
#line 352 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EMULT; }
#line 1793 "asin.c" /* yacc.c:1646  */
    break;

  case 61:
#line 353 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EDIVI; }
#line 1799 "asin.c" /* yacc.c:1646  */
    break;

  case 62:
#line 358 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EMAY; }
#line 1805 "asin.c" /* yacc.c:1646  */
    break;

  case 63:
#line 359 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EMAY; }
#line 1811 "asin.c" /* yacc.c:1646  */
    break;

  case 64:
#line 360 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EMAYEQ; }
#line 1817 "asin.c" /* yacc.c:1646  */
    break;

  case 65:
#line 361 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EMENEQ; }
#line 1823 "asin.c" /* yacc.c:1646  */
    break;

  case 66:
#line 364 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = ESUM; }
#line 1829 "asin.c" /* yacc.c:1646  */
    break;

  case 67:
#line 365 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EDIF; }
#line 1835 "asin.c" /* yacc.c:1646  */
    break;

  case 68:
#line 369 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EMULT; }
#line 1841 "asin.c" /* yacc.c:1646  */
    break;

  case 69:
#line 370 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EDIVI; }
#line 1847 "asin.c" /* yacc.c:1646  */
    break;

  case 70:
#line 371 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) =  RESTO; }
#line 1853 "asin.c" /* yacc.c:1646  */
    break;

  case 71:
#line 374 "./src/asin.y" /* yacc.c:1646  */
    { (yyval.op) = ESUM; }
#line 1859 "asin.c" /* yacc.c:1646  */
    break;

  case 72:
#line 375 "./src/asin.y" /* yacc.c:1646  */
    { (yyval.op) = EDIF; }
#line 1865 "asin.c" /* yacc.c:1646  */
    break;

  case 73:
#line 376 "./src/asin.y" /* yacc.c:1646  */
    { (yyval.op) = EDIST; }
#line 1871 "asin.c" /* yacc.c:1646  */
    break;


#line 1875 "asin.c" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 380 "./src/asin.y" /* yacc.c:1906  */


