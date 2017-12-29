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

#line 170 "asin.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASIN_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 187 "asin.c" /* yacc.c:358  */

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
#define YYLAST   207

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  136

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
       0,    30,    30,    30,    39,    40,    43,    44,    47,    48,
      52,    53,    56,    57,    60,    68,    83,    87,    93,    97,
      98,    99,   100,   103,   104,   107,   109,   115,   126,   135,
     145,   134,   158,   167,   157,   176,   183,   187,   182,   201,
     200,   214,   219,   254,   287,   292,   322,   327,   344,   349,
     365,   371,   390,   395,   410,   416,   439,   453,   459,   475,
     493,   501,   507,   513,   520,   521,   522,   523,   524,   529,
     530,   531,   532,   535,   536,   540,   541,   542,   545,   546,
     547
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
  "instruccionEntradaSalida", "instruccionSeleccion", "@2", "@3",
  "restoIf", "@4", "@5", "instruccionIteracion", "@6", "@7", "@8",
  "expresion", "expresionLogica", "expresionIgualdad",
  "expresionRelacional", "expresionAditiva", "expresionMultiplicativa",
  "expresionUnaria", "expresionSufija", "operadorAsignacion",
  "operadorRelacional", "operadorAditivo", "operadorMultiplicativo",
  "operadorUnario", YY_NULLPTR
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

#define YYPACT_NINF -53

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-53)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,   -53,    24,    79,   -53,    31,   -53,   -53,   -53,    33,
     100,   -53,    42,   -53,   -53,   -53,   -53,   -53,    48,    61,
     -53,   -53,   -53,   -53,    29,     4,   -53,   -53,    36,   -53,
     -53,   -53,   -53,   -53,    58,   -13,     3,    -9,     5,    28,
     -53,   -53,   142,   100,   -53,   -53,   -53,   -53,   -53,   -53,
     100,    72,    67,   121,   100,   163,   -53,   100,   -53,   -53,
     -53,    15,   -53,   -53,   -53,   142,   -53,   -53,   142,   -53,
     -53,   -53,   -53,   142,   -53,   -53,   142,   -53,   -53,   -53,
     142,     6,   -53,    63,   -53,    68,   -53,   -53,   -53,    85,
      55,   100,    86,   -53,    92,     3,    -9,     5,    28,   -53,
     100,    37,    83,    84,    99,   101,   -53,    95,    98,   100,
     -53,   -53,   100,   -53,   163,   102,   -53,   -53,   106,   163,
     -53,   -53,   -53,   -53,    30,   163,   128,   -53,   -53,   100,
     -53,   129,   163,   -53,    30,   -53
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,    60,    61,    62,    63,     0,
       0,    24,     0,    39,    26,     8,     9,    78,     0,     0,
      16,    17,    80,    79,     0,     0,    10,    12,     0,    13,
      20,    19,    21,    22,     0,    41,    44,    46,    48,    50,
      52,    54,     0,     0,    65,    66,    67,    68,    64,    58,
       0,     0,     0,     0,     0,     0,    36,     0,    56,     3,
      11,     0,    25,     4,     5,     0,     6,     7,     0,    71,
      72,    70,    69,     0,    73,    74,     0,    75,    76,    77,
       0,    60,    55,     0,    42,     0,    57,    18,    23,     0,
       0,     0,     0,    14,     0,    45,    47,    49,    51,    53,
       0,    59,     0,     0,     0,     0,    29,     0,     0,     0,
      27,    28,     0,    37,     0,     0,    59,    43,     0,     0,
      30,    15,    40,    38,     0,     0,     0,    31,    35,     0,
      32,     0,     0,    33,     0,    34
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,   -53,   -53,   -53,    -3,   -53,   112,   -53,   -53,
     -52,   -53,   -53,   -53,   -53,   -53,   -53,    18,   -53,   -53,
     -53,   -53,   -53,   -53,   -10,   -53,    74,    81,    80,    64,
     -29,   -53,    56,   -53,   -53,   -53,   -53
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    65,    68,    24,    25,    26,    27,    28,
      29,    53,    30,    31,    32,   114,   124,   127,   131,   134,
      33,    91,   119,    55,    34,    35,    36,    37,    38,    39,
      40,    41,    50,    73,    76,    80,    42
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      52,    88,    49,    90,    63,    64,     1,     5,     6,     7,
       8,     9,    10,    82,    11,    59,    12,    13,    14,    69,
      70,   100,    66,    67,     4,    15,    16,    15,    16,    93,
      94,    71,    58,    83,    17,    74,    72,    18,    19,    61,
      84,    51,    20,    21,    89,    22,    43,    92,    23,    75,
      54,    99,    15,    16,    44,    45,    56,    46,    47,    77,
      44,    45,   120,    46,    47,   125,   126,   123,    48,    57,
      78,    79,    62,   128,    48,    85,    86,   102,    49,   101,
     133,   105,     5,     6,     7,     8,     9,    10,   104,    11,
     108,    12,    13,    14,   103,   106,   107,   110,   111,   117,
      15,    16,   118,     5,     6,     7,     8,   112,    10,    17,
     113,   115,    18,    19,   116,   122,   121,    20,    21,   130,
      22,    15,    16,    23,     5,     6,     7,     8,     9,    10,
      17,    11,    87,    12,    13,    14,   129,    60,   132,    95,
      98,    22,    15,    16,    23,    81,     6,     7,     8,    96,
      10,    17,   135,    97,    18,    19,     0,   109,     0,     0,
       0,     0,    22,    15,    16,    23,     5,     6,     7,     8,
       9,    10,    17,    11,     0,    12,    13,    14,     0,     0,
       0,     0,     0,    22,    15,    16,    23,     0,     0,     0,
       0,     0,     0,    17,     0,     0,    18,    19,     0,     0,
       0,     0,     0,     0,    22,     0,     0,    23
};

static const yytype_int16 yycheck[] =
{
      10,    53,     5,    55,    17,    18,    10,     3,     4,     5,
       6,     7,     8,    42,    10,    11,    12,    13,    14,    28,
      29,    15,    19,    20,     0,    21,    22,    21,    22,    14,
      15,    40,     3,    43,    30,    30,    45,    33,    34,     3,
      50,     8,    38,    39,    54,    41,    15,    57,    44,    44,
       8,    80,    21,    22,    23,    24,     8,    26,    27,    31,
      23,    24,   114,    26,    27,    35,    36,   119,    37,     8,
      42,    43,    14,   125,    37,     3,     9,     9,    81,    16,
     132,    91,     3,     4,     5,     6,     7,     8,    33,    10,
     100,    12,    13,    14,     9,     9,     4,    14,    14,   109,
      21,    22,   112,     3,     4,     5,     6,     8,     8,    30,
       9,    16,    33,    34,    16,     9,    14,    38,    39,   129,
      41,    21,    22,    44,     3,     4,     5,     6,     7,     8,
      30,    10,    11,    12,    13,    14,     8,    25,     9,    65,
      76,    41,    21,    22,    44,     3,     4,     5,     6,    68,
       8,    30,   134,    73,    33,    34,    -1,   101,    -1,    -1,
      -1,    -1,    41,    21,    22,    44,     3,     4,     5,     6,
       7,     8,    30,    10,    -1,    12,    13,    14,    -1,    -1,
      -1,    -1,    -1,    41,    21,    22,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    49,    50,     0,     3,     4,     5,     6,     7,
       8,    10,    12,    13,    14,    21,    22,    30,    33,    34,
      38,    39,    41,    44,    53,    54,    55,    56,    57,    58,
      60,    61,    62,    68,    72,    73,    74,    75,    76,    77,
      78,    79,    84,    15,    23,    24,    26,    27,    37,    53,
      80,     8,    72,    59,     8,    71,     8,     8,     3,    11,
      55,     3,    14,    17,    18,    51,    19,    20,    52,    28,
      29,    40,    45,    81,    30,    44,    82,    31,    42,    43,
      83,     3,    78,    72,    72,     3,     9,    11,    58,    72,
      58,    69,    72,    14,    15,    74,    75,    76,    77,    78,
      15,    16,     9,     9,    33,    72,     9,     4,    72,    80,
      14,    14,     8,     9,    63,    16,    16,    72,    72,    70,
      58,    14,     9,    58,    64,    35,    36,    65,    58,     8,
      72,    66,     9,    58,    67,    65
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    50,    49,    51,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    56,    56,    57,    57,    58,    58,
      58,    58,    58,    59,    59,    60,    60,    61,    61,    63,
      64,    62,    66,    67,    65,    65,    69,    70,    68,    71,
      68,    72,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    78,    78,    78,    79,    79,    79,
      79,    79,    79,    79,    80,    80,    80,    80,    80,    81,
      81,    81,    81,    82,    82,    83,    83,    83,    84,    84,
      84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     6,     1,     1,     3,     1,
       1,     1,     1,     2,     0,     2,     1,     5,     5,     0,
       0,     8,     0,     0,     8,     2,     0,     0,     7,     0,
       7,     1,     3,     6,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     2,     2,     3,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
    { dvar = 0; si = 0 ;}
#line 1386 "asin.c" /* yacc.c:1646  */
    break;

  case 3:
#line 31 "./src/asin.y" /* yacc.c:1646  */
    {
				//$$ = "nombre_del_fichero";
				mostrarTDS();
				emite(FIN, crArgNul(), crArgNul(), crArgNul());
				//volcarCodigo($$); //hay que ver el parametro
			}
#line 1397 "asin.c" /* yacc.c:1646  */
    break;

  case 4:
#line 39 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EMULT;}
#line 1403 "asin.c" /* yacc.c:1646  */
    break;

  case 5:
#line 40 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = ESUM;}
#line 1409 "asin.c" /* yacc.c:1646  */
    break;

  case 6:
#line 43 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EIGUAL;}
#line 1415 "asin.c" /* yacc.c:1646  */
    break;

  case 7:
#line 44 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EDIST;}
#line 1421 "asin.c" /* yacc.c:1646  */
    break;

  case 8:
#line 47 "./src/asin.y" /* yacc.c:1646  */
    { (yyval.op) = ESUM;}
#line 1427 "asin.c" /* yacc.c:1646  */
    break;

  case 9:
#line 48 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EDIF;}
#line 1433 "asin.c" /* yacc.c:1646  */
    break;

  case 14:
#line 61 "./src/asin.y" /* yacc.c:1646  */
    {
				int x = insertarTDS((yyvsp[-1].ident), (yyvsp[-2].atributos).tipo, dvar, -1) ;
				dvar++;
				if (x == 0){
					yyerror("Esta variable ya ha sido declarada en la TDS");
				}
			}
#line 1445 "asin.c" /* yacc.c:1646  */
    break;

  case 15:
#line 69 "./src/asin.y" /* yacc.c:1646  */
    {
				if ((yyvsp[-2].cent) <= 0) {
					yyerror("Talla inapropiada");
				} else {
					int refe = insertaTDArray((yyvsp[-5].atributos).tipo, (yyvsp[-2].cent));
					int x = insertarTDS((yyvsp[-4].ident), T_ARRAY, dvar, refe) ;
					dvar++;					
					if (x == 0){
						yyerror("Esta variable ya ha sido declarada en la TDS");
					} 
				}
            }
#line 1462 "asin.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = T_ENTERO;
			}
#line 1470 "asin.c" /* yacc.c:1646  */
    break;

  case 17:
#line 88 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = T_LOGICO;
			}
#line 1478 "asin.c" /* yacc.c:1646  */
    break;

  case 18:
#line 94 "./src/asin.y" /* yacc.c:1646  */
    {
					(yyval.atributos) = (yyvsp[-1].atributos);
			}
#line 1486 "asin.c" /* yacc.c:1646  */
    break;

  case 26:
#line 110 "./src/asin.y" /* yacc.c:1646  */
    {
				
			}
#line 1494 "asin.c" /* yacc.c:1646  */
    break;

  case 27:
#line 116 "./src/asin.y" /* yacc.c:1646  */
    {
				SIMB sim = obtenerTDS((yyvsp[-2].ident)); 
				//mostrarTDS();
				if (sim.tipo == T_ERROR) 
					yyerror("Objeto no declarado");
				else if(sim.tipo != T_ENTERO)
					yyerror("El argumento del read debe ser entero");
					
				emite(EREAD, crArgNul(), crArgNul(), crArgPos(sim.desp));
			}
#line 1509 "asin.c" /* yacc.c:1646  */
    break;

  case 28:
#line 127 "./src/asin.y" /* yacc.c:1646  */
    {
				//if($3.tipo != T_ENTERO)
				//	yyerror("La expresion del print debe ser entera");
				emite(EWRITE, crArgNul(), crArgNul(), crArgPos((yyvsp[-2].atributos).pos));
			}
#line 1519 "asin.c" /* yacc.c:1646  */
    break;

  case 29:
#line 135 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-1].atributos).tipo != T_LOGICO)
					yyerror("La expresion del IF debe ser logica");
				else{
					(yyval.atributos).fin = creaLans(si); 
					emite(EIGUAL,crArgPos((yyvsp[-1].atributos).pos),crArgEnt(0),crArgNul());/*Se debe completar despues */
				}
				
			}
#line 1533 "asin.c" /* yacc.c:1646  */
    break;

  case 30:
#line 145 "./src/asin.y" /* yacc.c:1646  */
    {
				
				(yyvsp[-1].atributos).fin = creaLans(si);
				emite(GOTOS,crArgNul(),crArgNul(),crArgNul());
				completaLans((yyval.atributos).fin, crArgEnt(si));
			}
#line 1544 "asin.c" /* yacc.c:1646  */
    break;

  case 31:
#line 152 "./src/asin.y" /* yacc.c:1646  */
    {
				completaLans((yyvsp[-3].atributos).fin, crArgEnt(si));
			}
#line 1552 "asin.c" /* yacc.c:1646  */
    break;

  case 32:
#line 158 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[0].atributos).tipo != T_LOGICO)
					yyerror("La expresion del ELSEIF debe ser logica");
				else{
					(yyval.atributos).fin = creaLans(si);
					emite(EIGUAL,crArgPos((yyvsp[0].atributos).pos),crArgEnt(0),crArgNul());
				}
		 }
#line 1565 "asin.c" /* yacc.c:1646  */
    break;

  case 33:
#line 167 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyvsp[-2].atributos).fin = creaLans(si);
				emite(GOTOS,crArgNul(),crArgNul(),crArgNul());
				completaLans((yyval.atributos).fin, crArgEnt(si));
		 }
#line 1575 "asin.c" /* yacc.c:1646  */
    break;

  case 34:
#line 173 "./src/asin.y" /* yacc.c:1646  */
    {
				completaLans((yyvsp[-4].atributos).fin, crArgEnt(si));
		 }
#line 1583 "asin.c" /* yacc.c:1646  */
    break;

  case 35:
#line 177 "./src/asin.y" /* yacc.c:1646  */
    {
			    //completaLans($<atributos>2.fin, crArgEnt(si)); /*Completo el creaLans de instruccionSeleccion, un poco más arriba*/
	     }
#line 1591 "asin.c" /* yacc.c:1646  */
    break;

  case 36:
#line 183 "./src/asin.y" /* yacc.c:1646  */
    {
						(yyval.atributos).pos = si;
					}
#line 1599 "asin.c" /* yacc.c:1646  */
    break;

  case 37:
#line 187 "./src/asin.y" /* yacc.c:1646  */
    {
						if((yyvsp[-1].atributos).tipo != T_LOGICO)
							yyerror("La expresion del while debe ser logica");
						else{
							(yyval.atributos).fin = creaLans(si);
							emite(EIGUAL,crArgPos((yyvsp[-1].atributos).pos),crArgEnt(0),crArgNul());
						}
					}
#line 1612 "asin.c" /* yacc.c:1646  */
    break;

  case 38:
#line 195 "./src/asin.y" /* yacc.c:1646  */
    {
						emite(GOTOS, crArgNul(), crArgNul(),crArgEtq((yyvsp[-4].atributos).pos));
						completaLans((yyvsp[-1].atributos).fin, crArgEnt(si));
					 }
#line 1621 "asin.c" /* yacc.c:1646  */
    break;

  case 39:
#line 201 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).pos = si; // TODO falla aqui, no guarda la pos como en el while
			}
#line 1629 "asin.c" /* yacc.c:1646  */
    break;

  case 40:
#line 205 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-1].atributos).tipo != T_LOGICO)
					yyerror("La expresion del DoWhile debe ser logica");
			    else{			
					emite(EIGUAL,crArgPos((yyvsp[-1].atributos).pos),crArgEnt(1),crArgEtq((yyvsp[-5].atributos).pos));
			    }
			}
#line 1641 "asin.c" /* yacc.c:1646  */
    break;

  case 41:
#line 215 "./src/asin.y" /* yacc.c:1646  */
    { 
				(yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
				(yyval.atributos).pos = (yyvsp[0].atributos).pos;
			}
#line 1650 "asin.c" /* yacc.c:1646  */
    break;

  case 42:
#line 220 "./src/asin.y" /* yacc.c:1646  */
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
					
					if((yyvsp[-1].op) != EIGUAL && (yyvsp[0].atributos).tipo == T_ENTERO){
						(yyval.atributos).pos = creaVarTemp();

						emite((yyvsp[-1].op), crArgPos(sim.desp), crArgPos((yyvsp[0].atributos).pos), crArgPos((yyval.atributos).pos));
						emite(EASIG, crArgPos((yyval.atributos).pos), crArgNul(), crArgPos(sim.desp));
					}else{
						//TODO esta linea es la que falta en la mayoria de expresiones.
						// todas las expresiones deben de hacer su accion
						// esta por ejemplo no modificaba la variable
						// cn este emite ya lo hace.
						(yyval.atributos).pos = creaVarTemp();
						
						emite(EASIG, crArgPos((yyvsp[0].atributos).pos), crArgNul(), crArgPos((yyval.atributos).pos));
						emite(EASIG, crArgPos((yyval.atributos).pos), crArgNul(), crArgPos(sim.desp));
					}

				}
            }
#line 1689 "asin.c" /* yacc.c:1646  */
    break;

  case 43:
#line 255 "./src/asin.y" /* yacc.c:1646  */
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
								
								// Generacion de codigo intermedio
								
								
								emite(EVA, crArgPos(sim.desp), crArgPos((yyvsp[-3].atributos).pos), crArgPos((yyvsp[0].atributos).pos));
								
							}else{
								yyerror("La expresion debe ser del mismo tipo que el array");
							}
						}
					}else{
						yyerror("El indice del array debe ser entero");
					}
				
				
            }
#line 1724 "asin.c" /* yacc.c:1646  */
    break;

  case 44:
#line 288 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
				(yyval.atributos).pos = (yyvsp[0].atributos).pos;
			}
#line 1733 "asin.c" /* yacc.c:1646  */
    break;

  case 45:
#line 293 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2].atributos).tipo == T_LOGICO && (yyvsp[0].atributos).tipo == T_LOGICO){
					(yyval.atributos).tipo = T_LOGICO;
				}else{
					(yyval.atributos).tipo = T_ERROR;
					yyerror("Error en expresion logica");
				}
				if((yyvsp[-1].op) == EMULT){ /*AND*/
					(yyval.atributos).pos = creaVarTemp();
					emite(EASIG, crArgEnt(0), crArgNul(), crArgPos((yyval.atributos).pos));
					emite(EIGUAL, crArgPos((yyvsp[-2].atributos).pos), crArgEnt(0), crArgEtq(si + 3));
					emite(EIGUAL, crArgPos((yyvsp[0].atributos).pos), crArgEnt(0), crArgEtq(si + 2));
					emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.atributos).pos));
				}
				else{
					(yyval.atributos).pos = creaVarTemp();
					emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.atributos).pos));
					emite(EIGUAL, crArgPos((yyvsp[-2].atributos).pos), crArgEnt(1), crArgEtq(si + 3));
					emite(EIGUAL, crArgPos((yyvsp[0].atributos).pos), crArgEnt(1), crArgEtq(si + 2));
					emite(EASIG, crArgEnt(0), crArgNul(), crArgPos((yyval.atributos).pos));
				}
				emite((yyvsp[-1].op), crArgPos((yyvsp[-2].atributos).pos), crArgPos((yyvsp[0].atributos).pos), crArgEtq(si+3));
				emite(EASIG, crArgEnt(0), crArgNul(), crArgPos((yyval.atributos).pos));
				emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(si+2));
				emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.atributos).pos));
		
            }
#line 1765 "asin.c" /* yacc.c:1646  */
    break;

  case 46:
#line 323 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
				(yyval.atributos).pos = (yyvsp[0].atributos).pos;
			}
#line 1774 "asin.c" /* yacc.c:1646  */
    break;

  case 47:
#line 328 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo){
					(yyval.atributos).tipo = T_LOGICO;
				}else{
					(yyval.atributos).tipo = T_ERROR;
					yyerror("Error en expresion igualdad. Han de ser del mismo tipo");
				}
			     (yyval.atributos).pos = creaVarTemp();
				 emite((yyvsp[-1].op), crArgPos((yyvsp[-2].atributos).pos), crArgPos((yyvsp[0].atributos).pos), crArgEtq(si+3));
				 emite(EASIG, crArgEnt(0), crArgNul(), crArgPos((yyval.atributos).pos));
				 emite(GOTOS, crArgNul(), crArgNul(), crArgEtq(si+2));
				 emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.atributos).pos));
	
			}
#line 1793 "asin.c" /* yacc.c:1646  */
    break;

  case 48:
#line 345 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
				(yyval.atributos).pos = (yyvsp[0].atributos).pos;
			}
#line 1802 "asin.c" /* yacc.c:1646  */
    break;

  case 49:
#line 350 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2].atributos).tipo == (yyvsp[0].atributos).tipo == T_ENTERO){
					(yyval.atributos).tipo = T_LOGICO;
				}else{
					(yyval.atributos).tipo = T_ERROR;
					yyerror("Error en expresion relacional. Solo e pueden comparar dos numeros");
				}
			     (yyval.atributos).pos = creaVarTemp();
				 emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.atributos).pos));
                 emite((yyvsp[-1].op), crArgPos((yyvsp[-2].atributos).pos), crArgPos((yyvsp[0].atributos).pos), crArgEtq(si + 2));
				 emite(EASIG, crArgEnt(0), crArgNul(), crArgPos((yyval.atributos).pos));
	
			}
#line 1820 "asin.c" /* yacc.c:1646  */
    break;

  case 50:
#line 366 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
				(yyval.atributos).pos = (yyvsp[0].atributos).pos;
				
			}
#line 1830 "asin.c" /* yacc.c:1646  */
    break;

  case 51:
#line 372 "./src/asin.y" /* yacc.c:1646  */
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
				//mostrarTDS();
				
            }
#line 1851 "asin.c" /* yacc.c:1646  */
    break;

  case 52:
#line 391 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
				(yyval.atributos).pos = (yyvsp[0].atributos).pos;
			}
#line 1860 "asin.c" /* yacc.c:1646  */
    break;

  case 53:
#line 396 "./src/asin.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2].atributos).tipo != T_ENTERO || (yyvsp[0].atributos).tipo != T_ENTERO){
					(yyval.atributos).tipo = T_ERROR;
					yyerror("Error de tipos en expresion multiplicativa");
				}else{
					(yyval.atributos).tipo = T_ENTERO;
				}
				(yyval.atributos).pos = creaVarTemp();
				/*************** Expresion a partir de un operador aritmetico */
				emite((yyvsp[-1].op), crArgPos((yyvsp[-2].atributos).pos), crArgPos((yyvsp[0].atributos).pos), crArgPos((yyval.atributos).pos));
	
			}
#line 1877 "asin.c" /* yacc.c:1646  */
    break;

  case 54:
#line 411 "./src/asin.y" /* yacc.c:1646  */
    {
              
				(yyval.atributos).tipo = (yyvsp[0].atributos).tipo;
				(yyval.atributos).pos = (yyvsp[0].atributos).pos;
            }
#line 1887 "asin.c" /* yacc.c:1646  */
    break;

  case 55:
#line 417 "./src/asin.y" /* yacc.c:1646  */
    {
              (yyval.atributos).tipo = T_ERROR;
              if((yyvsp[0].atributos).tipo == T_ENTERO && (yyvsp[-1].op) != OPMAS_ && (yyvsp[-1].op) != OPREST_){
                yyerror("Error en operadorUnario posittivo/negativo");
              }
              else if((yyvsp[0].atributos).tipo == T_LOGICO && (yyvsp[-1].op) != EDIST){
                yyerror("Error en operadorUnario negacion");
              } else{
                if((yyvsp[0].atributos).tipo == T_ENTERO){ 
					(yyval.atributos).tipo = T_ENTERO;
					
					if((yyvsp[-1].op) == OPREST_){
						(yyval.atributos).pos = creaVarTemp();
						emite(ESIG, crArgPos((yyvsp[0].atributos).pos), crArgNul(), crArgPos((yyval.atributos).pos));
					}
				}
                else (yyval.atributos).tipo = T_LOGICO;
                
                
              }
			
            }
#line 1914 "asin.c" /* yacc.c:1646  */
    break;

  case 56:
#line 441 "./src/asin.y" /* yacc.c:1646  */
    {
              SIMB sim = obtenerTDS((yyvsp[0].ident));
              (yyval.atributos).tipo = T_ERROR;
              if (sim.tipo == T_ENTERO)
                (yyval.atributos).tipo = sim.tipo;
                
              emite((yyvsp[-1].op), crArgPos(sim.desp), crArgEnt(1), crArgPos(sim.desp));
              
              emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos((yyval.atributos).pos));
            }
#line 1929 "asin.c" /* yacc.c:1646  */
    break;

  case 57:
#line 454 "./src/asin.y" /* yacc.c:1646  */
    {
              
 				(yyval.atributos).tipo = (yyvsp[-1].atributos).tipo;
				(yyval.atributos).pos = (yyvsp[-1].atributos).pos;
            }
#line 1939 "asin.c" /* yacc.c:1646  */
    break;

  case 58:
#line 460 "./src/asin.y" /* yacc.c:1646  */
    {
              SIMB sim = obtenerTDS((yyvsp[-1].ident)); (yyval.atributos).tipo = T_ERROR;
              if (sim.tipo == T_ENTERO) 
                (yyval.atributos).tipo = sim.tipo;
              
              (yyval.atributos).pos = creaVarTemp();
              
              emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos((yyval.atributos).pos));
              
              emite((yyvsp[0].op), crArgPos(sim.desp), crArgEnt(1), crArgPos(sim.desp));
              
            }
#line 1956 "asin.c" /* yacc.c:1646  */
    break;

  case 59:
#line 476 "./src/asin.y" /* yacc.c:1646  */
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
                    
                    // Generacion de codigo intermedio
                    emite(EAV, crArgPos(sim.desp), crArgPos((yyvsp[-1].atributos).pos), crArgPos((yyval.atributos).pos));
                    
                  }
                }
#line 1978 "asin.c" /* yacc.c:1646  */
    break;

  case 60:
#line 494 "./src/asin.y" /* yacc.c:1646  */
    {
            SIMB sim = obtenerTDS((yyvsp[0].ident)); (yyval.atributos).tipo = T_ERROR;
            if (sim.tipo != T_ERROR) 
              (yyval.atributos).tipo = sim.tipo;
				(yyval.atributos).pos = sim.desp;
				emite(EASIG, crArgPos(sim.desp), crArgNul(), crArgPos((yyval.atributos).pos));
            }
#line 1990 "asin.c" /* yacc.c:1646  */
    break;

  case 61:
#line 502 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = T_ENTERO;
				(yyval.atributos).pos = creaVarTemp();
				emite(EASIG, crArgEnt((yyvsp[0].cent)), crArgNul(), crArgPos((yyval.atributos).pos));
			}
#line 2000 "asin.c" /* yacc.c:1646  */
    break;

  case 62:
#line 508 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = T_LOGICO;
				(yyval.atributos).pos = creaVarTemp();
				emite(EASIG, crArgEnt(1), crArgNul(), crArgPos((yyval.atributos).pos));
            }
#line 2010 "asin.c" /* yacc.c:1646  */
    break;

  case 63:
#line 514 "./src/asin.y" /* yacc.c:1646  */
    {
				(yyval.atributos).tipo = T_LOGICO;
				(yyval.atributos).pos = creaVarTemp();
				emite(EASIG, crArgEnt(0), crArgNul(), crArgPos((yyval.atributos).pos));
            }
#line 2020 "asin.c" /* yacc.c:1646  */
    break;

  case 64:
#line 520 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EIGUAL; }
#line 2026 "asin.c" /* yacc.c:1646  */
    break;

  case 65:
#line 521 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = ESUM; }
#line 2032 "asin.c" /* yacc.c:1646  */
    break;

  case 66:
#line 522 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EDIF; }
#line 2038 "asin.c" /* yacc.c:1646  */
    break;

  case 67:
#line 523 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EMULT; }
#line 2044 "asin.c" /* yacc.c:1646  */
    break;

  case 68:
#line 524 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EDIVI; }
#line 2050 "asin.c" /* yacc.c:1646  */
    break;

  case 69:
#line 529 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EMAY; }
#line 2056 "asin.c" /* yacc.c:1646  */
    break;

  case 70:
#line 530 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EMEN; }
#line 2062 "asin.c" /* yacc.c:1646  */
    break;

  case 71:
#line 531 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EMAYEQ; }
#line 2068 "asin.c" /* yacc.c:1646  */
    break;

  case 72:
#line 532 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EMENEQ; }
#line 2074 "asin.c" /* yacc.c:1646  */
    break;

  case 73:
#line 535 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = ESUM; }
#line 2080 "asin.c" /* yacc.c:1646  */
    break;

  case 74:
#line 536 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EDIF; }
#line 2086 "asin.c" /* yacc.c:1646  */
    break;

  case 75:
#line 540 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EMULT; }
#line 2092 "asin.c" /* yacc.c:1646  */
    break;

  case 76:
#line 541 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) = EDIVI; }
#line 2098 "asin.c" /* yacc.c:1646  */
    break;

  case 77:
#line 542 "./src/asin.y" /* yacc.c:1646  */
    {(yyval.op) =  RESTO; }
#line 2104 "asin.c" /* yacc.c:1646  */
    break;

  case 78:
#line 545 "./src/asin.y" /* yacc.c:1646  */
    { (yyval.op) = ESUM; }
#line 2110 "asin.c" /* yacc.c:1646  */
    break;

  case 79:
#line 546 "./src/asin.y" /* yacc.c:1646  */
    { (yyval.op) = EDIF; }
#line 2116 "asin.c" /* yacc.c:1646  */
    break;

  case 80:
#line 547 "./src/asin.y" /* yacc.c:1646  */
    { (yyval.op) = EDIST; }
#line 2122 "asin.c" /* yacc.c:1646  */
    break;


#line 2126 "asin.c" /* yacc.c:1646  */
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
#line 551 "./src/asin.y" /* yacc.c:1906  */


