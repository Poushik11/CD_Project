
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "project.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <string.h>
    #include <time.h>
    #include <math.h>
    #include "project.h"

    #define YYDEBUG 0

    int getIndex(char *id, char mode);      /* Returns index from symbol table */
    nodeType *id(char *vName, char mode);   /* Identifier type node */
    nodeType *cond(double dValue);          /* Constant double type node */
    nodeType *cons(char *sValue);           /* Constant string type node */
    nodeType *opr(int oper, int nops, ...); /* Operator type node */
    void freeNode(nodeType *p);             /* Free the node */
    double ex(nodeType *p);                 /* Execute graph */
    int yylex(void);

    void yyerror(char *);
    double sym[SYMSIZE];        /* Symbol table */
    char vars[SYMSIZE][IDLEN];  /* Variable table: for mapping variables to symbol table */
    unsigned int seed;


/* Line 189 of yacc.c  */
#line 100 "project.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     VARIABLE = 259,
     STRING = 260,
     WHILE = 261,
     FOR = 262,
     IF = 263,
     THEN = 264,
     PRINT = 265,
     ASSIGN = 266,
     EXIT = 267,
     RANDOM = 268,
     PI = 269,
     SCAN = 270,
     LOG = 271,
     EXP = 272,
     SQRT = 273,
     FLOOR = 274,
     CEIL = 275,
     ABS = 276,
     SIN = 277,
     ASIN = 278,
     COS = 279,
     ACOS = 280,
     TAN = 281,
     ATAN = 282,
     IFX = 283,
     ELSE = 284,
     OR = 285,
     AND = 286,
     NE = 287,
     LE = 288,
     GE = 289,
     NOT = 290,
     UMINUS = 291
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 27 "project.y"

    double dValue;
    char *sValue;
    char *vName;
    nodeType *nPtr;



/* Line 214 of yacc.c  */
#line 181 "project.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 193 "project.tab.c"

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
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   715

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  6
/* YYNRULES -- Number of rules.  */
#define YYNRULES  52
/* YYNRULES -- Number of states.  */
#define YYNSTATES  144

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    42,     2,     2,
      48,    50,    40,    38,    49,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    46,
      34,    32,    33,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    35,    36,    37,
      43,    45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    11,    14,    17,    22,
      26,    30,    34,    39,    52,    57,    64,    68,    70,    73,
      75,    77,    79,    86,    91,    98,   103,   108,   113,   118,
     123,   128,   133,   138,   143,   148,   153,   156,   160,   164,
     168,   172,   176,   180,   184,   188,   192,   196,   200,   204,
     208,   212,   215
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    -1,    -1,    55,    56,    -1,    46,
      -1,    58,    46,    -1,    12,    46,    -1,     4,    11,    58,
      46,    -1,    10,    58,    46,    -1,    10,     5,    46,    -1,
      15,     4,    46,    -1,     6,    58,     9,    56,    -1,     7,
       4,    47,    48,    58,    49,    58,    49,    58,    50,     9,
      56,    -1,     8,    58,     9,    56,    -1,     8,    58,     9,
      56,    29,    56,    -1,    51,    57,    52,    -1,    56,    -1,
      57,    56,    -1,     3,    -1,     4,    -1,    14,    -1,    13,
      48,    58,    49,    58,    50,    -1,    16,    48,    58,    50,
      -1,    16,    48,    58,    49,    58,    50,    -1,    17,    48,
      58,    50,    -1,    18,    48,    58,    50,    -1,    19,    48,
      58,    50,    -1,    20,    48,    58,    50,    -1,    21,    48,
      58,    50,    -1,    22,    48,    58,    50,    -1,    23,    48,
      58,    50,    -1,    24,    48,    58,    50,    -1,    25,    48,
      58,    50,    -1,    26,    48,    58,    50,    -1,    27,    48,
      58,    50,    -1,    39,    58,    -1,    58,    44,    58,    -1,
      58,    38,    58,    -1,    58,    39,    58,    -1,    58,    40,
      58,    -1,    58,    41,    58,    -1,    58,    42,    58,    -1,
      58,    34,    58,    -1,    58,    33,    58,    -1,    58,    37,
      58,    -1,    58,    36,    58,    -1,    58,    32,    58,    -1,
      58,    35,    58,    -1,    58,    31,    58,    -1,    58,    30,
      58,    -1,    43,    58,    -1,    48,    58,    50,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    52,    52,    55,    56,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    73,    74,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VARIABLE", "STRING", "WHILE",
  "FOR", "IF", "THEN", "PRINT", "ASSIGN", "EXIT", "RANDOM", "PI", "SCAN",
  "LOG", "EXP", "SQRT", "FLOOR", "CEIL", "ABS", "SIN", "ASIN", "COS",
  "ACOS", "TAN", "ATAN", "IFX", "ELSE", "OR", "AND", "'='", "'>'", "'<'",
  "NE", "LE", "GE", "'+'", "'-'", "'*'", "'/'", "'%'", "NOT", "'^'",
  "UMINUS", "';'", "':'", "'('", "','", "')'", "'{'", "'}'", "$accept",
  "program", "function", "statement", "statement_list", "expression", 0
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
     285,   286,    61,    62,    60,   287,   288,   289,    43,    45,
      42,    47,    37,   290,    94,   291,    59,    58,    40,    44,
      41,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    57,    57,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     4,     3,
       3,     3,     4,    12,     4,     6,     3,     1,     2,     1,
       1,     1,     6,     4,     6,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,    19,    20,     0,     0,     0,     0,
       0,     0,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     5,     0,
       0,     4,     0,     0,    20,     0,     0,     0,     0,     0,
       7,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    51,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,    10,
       9,     0,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    16,    18,    50,    49,
      47,    44,    43,    48,    46,    45,    38,    39,    40,    41,
      42,    37,     8,    12,     0,    14,     0,     0,    23,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       0,     0,     0,     0,     0,    15,    22,    24,     0,     0,
       0,     0,     0,    13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,    31,    59,    32
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -27
static const yytype_int16 yypact[] =
{
     -27,     1,   128,   -27,   -27,     7,   210,    18,   210,   177,
     -20,   -12,   -27,    45,     3,     5,    23,    25,    26,    27,
      31,    35,    37,    54,    55,    56,   210,   210,   -27,   210,
     128,   -27,   635,   210,   -27,   229,    29,   245,    60,   652,
     -27,   210,    61,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   -27,    65,   260,   -27,    74,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   -27,   669,   128,    64,   128,   -27,
     -27,   575,   -27,   -25,   281,   302,   323,   344,   365,   386,
     407,   428,   449,   470,   491,   -27,   -27,   -27,   124,   124,
     -10,   -10,   -10,   -10,   -10,   -10,    28,    28,    65,    65,
      65,   -27,   -27,   -27,   210,    85,   210,   210,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
     595,   128,   512,   533,   210,   -27,   -27,   -27,   615,   210,
     554,   106,   128,   -27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -27,   -27,   -27,   -26,   -27,    -6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      35,     3,    37,    39,    58,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    33,    73,
      55,    56,    36,    57,   117,   118,    40,    75,    68,    69,
      70,    71,    72,    97,    73,    81,    41,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    42,
     113,    43,   115,    44,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    70,    71,
      72,    45,    73,    46,    47,    48,    77,     4,     5,    49,
       6,     7,     8,    50,     9,    51,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    52,    53,    54,   135,    79,    82,   130,    73,
     132,   133,   114,    26,   131,   142,   143,    27,     0,     0,
      28,     0,    29,     0,     0,    30,    96,     0,   138,     0,
       0,     4,     5,   140,     6,     7,     8,     0,     9,     0,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    26,    73,     0,
       0,    27,     0,     0,    28,     0,    29,     0,     0,    30,
       4,    34,    38,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     4,    34,     0,    26,     0,     0,     0,
      27,     0,     0,    11,    12,    29,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,    27,    78,     0,     0,     0,    29,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,    73,     0,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,    73,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,    73,     0,     0,     0,     0,     0,
      95,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,    73,     0,     0,     0,     0,
       0,   119,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,     0,     0,     0,
       0,     0,   120,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,    73,     0,     0,
       0,     0,     0,   121,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,    73,     0,
       0,     0,     0,     0,   122,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,    73,
       0,     0,     0,     0,     0,   123,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,     0,
      73,     0,     0,     0,     0,     0,   124,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
       0,    73,     0,     0,     0,     0,     0,   125,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,     0,    73,     0,     0,     0,     0,     0,   126,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,    73,     0,     0,     0,     0,     0,   127,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,     0,    73,     0,     0,     0,     0,     0,
     128,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,    73,     0,     0,     0,     0,
       0,   129,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,     0,     0,     0,
       0,     0,   136,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,    73,     0,     0,
       0,     0,     0,   137,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,     0,    73,     0,
       0,     0,     0,     0,   141,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,    73,
       0,     0,     0,     0,   116,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,    73,
       0,     0,     0,     0,   134,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,    73,
       0,     0,     0,     0,   139,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,     0,    73,
       0,    74,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,     0,    73,     0,    80,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,     0,    73,     0,   112
};

static const yytype_int16 yycheck[] =
{
       6,     0,     8,     9,    30,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    11,    44,
      26,    27,     4,    29,    49,    50,    46,    33,    38,    39,
      40,    41,    42,    59,    44,    41,    48,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     4,
      76,    48,    78,    48,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    40,    41,
      42,    48,    44,    48,    48,    48,    47,     3,     4,    48,
       6,     7,     8,    48,    10,    48,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    48,    48,    48,   131,    46,    46,   114,    44,
     116,   117,    48,    39,    29,     9,   142,    43,    -1,    -1,
      46,    -1,    48,    -1,    -1,    51,    52,    -1,   134,    -1,
      -1,     3,     4,   139,     6,     7,     8,    -1,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    39,    44,    -1,
      -1,    43,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    39,    -1,    -1,    -1,
      43,    -1,    -1,    13,    14,    48,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,     9,    -1,    -1,    -1,    48,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    44,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      50,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    50,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      -1,    -1,    -1,    -1,    -1,    50,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    50,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    44,    -1,    -1,    -1,    -1,    -1,    50,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      50,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    44,    -1,    -1,    -1,    -1,
      -1,    50,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    -1,    -1,    -1,
      -1,    -1,    50,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    -1,    -1,
      -1,    -1,    -1,    50,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    -1,
      -1,    -1,    -1,    -1,    50,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      -1,    -1,    -1,    -1,    49,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      -1,    -1,    -1,    -1,    49,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      -1,    -1,    -1,    -1,    49,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      -1,    46,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    -1,    46,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    44,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    55,     0,     3,     4,     6,     7,     8,    10,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    39,    43,    46,    48,
      51,    56,    58,    11,     4,    58,     4,    58,     5,    58,
      46,    48,     4,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    58,    58,    58,    56,    57,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    44,    46,    58,     9,    47,     9,    46,
      46,    58,    46,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    50,    52,    56,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,    58,    46,    56,    48,    56,    49,    49,    50,    50,
      50,    50,    50,    50,    50,    50,    50,    50,    50,    50,
      58,    29,    58,    58,    49,    56,    50,    50,    58,    49,
      58,    50,     9,    56
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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

/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
        case 2:

/* Line 1455 of yacc.c  */
#line 52 "project.y"
    { exit(0); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 56 "project.y"
    { ex((yyvsp[(2) - (2)].nPtr)); freeNode((yyvsp[(2) - (2)].nPtr)); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 59 "project.y"
    { (yyval.nPtr) = opr(';', 2, NULL, NULL); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 60 "project.y"
    { (yyval.nPtr) = (yyvsp[(1) - (2)].nPtr); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 61 "project.y"
    { exit(0); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 62 "project.y"
    { (yyval.nPtr) = opr(ASSIGN, 2, id((yyvsp[(1) - (4)].vName), SET), (yyvsp[(3) - (4)].nPtr)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 63 "project.y"
    { (yyval.nPtr) = opr(PRINT, 1, (yyvsp[(2) - (3)].nPtr)); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 64 "project.y"
    { (yyval.nPtr) = opr(PRINT, 1, cons((yyvsp[(2) - (3)].sValue))); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 65 "project.y"
    { (yyval.nPtr) = opr(SCAN, 1, id((yyvsp[(2) - (3)].vName), GET)); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 66 "project.y"
    { (yyval.nPtr) = opr(WHILE, 2, (yyvsp[(2) - (4)].nPtr), (yyvsp[(4) - (4)].nPtr)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 67 "project.y"
    { (yyval.nPtr) = opr(FOR, 5, id((yyvsp[(2) - (12)].vName), GET), (yyvsp[(5) - (12)].nPtr), (yyvsp[(7) - (12)].nPtr), (yyvsp[(9) - (12)].nPtr), (yyvsp[(12) - (12)].nPtr)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 68 "project.y"
    { (yyval.nPtr) = opr(IF, 2, (yyvsp[(2) - (4)].nPtr), (yyvsp[(4) - (4)].nPtr)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 69 "project.y"
    { (yyval.nPtr) = opr(IF, 3, (yyvsp[(2) - (6)].nPtr), (yyvsp[(4) - (6)].nPtr), (yyvsp[(6) - (6)].nPtr)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 70 "project.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 73 "project.y"
    { (yyval.nPtr) = (yyvsp[(1) - (1)].nPtr); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 74 "project.y"
    { (yyval.nPtr) = opr(';', 2, (yyvsp[(1) - (2)].nPtr), (yyvsp[(2) - (2)].nPtr)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 77 "project.y"
    { (yyval.nPtr) = cond((yyvsp[(1) - (1)].dValue)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 78 "project.y"
    { (yyval.nPtr) = id((yyvsp[(1) - (1)].vName), GET); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 79 "project.y"
    { (yyval.nPtr) = opr(PI, 0); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 80 "project.y"
    { (yyval.nPtr) = opr(RANDOM, 2, (yyvsp[(3) - (6)].nPtr), (yyvsp[(5) - (6)].nPtr)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 81 "project.y"
    { (yyval.nPtr) = opr(LOG, 1, (yyvsp[(3) - (4)].nPtr)); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 82 "project.y"
    { (yyval.nPtr) = opr(LOG, 2, (yyvsp[(3) - (6)].nPtr), (yyvsp[(5) - (6)].nPtr)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 83 "project.y"
    { (yyval.nPtr) = opr(EXP, 1, (yyvsp[(3) - (4)].nPtr)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 84 "project.y"
    { (yyval.nPtr) = opr(SQRT, 1, (yyvsp[(3) - (4)].nPtr)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 85 "project.y"
    { (yyval.nPtr) = opr(FLOOR, 1, (yyvsp[(3) - (4)].nPtr)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 86 "project.y"
    { (yyval.nPtr) = opr(CEIL, 1, (yyvsp[(3) - (4)].nPtr)); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 87 "project.y"
    { (yyval.nPtr) = opr(ABS, 1, (yyvsp[(3) - (4)].nPtr)); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 88 "project.y"
    { (yyval.nPtr) = opr(SIN, 1, (yyvsp[(3) - (4)].nPtr)); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 89 "project.y"
    { (yyval.nPtr) = opr(ASIN, 1, (yyvsp[(3) - (4)].nPtr)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 90 "project.y"
    { (yyval.nPtr) = opr(COS, 1, (yyvsp[(3) - (4)].nPtr)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 91 "project.y"
    { (yyval.nPtr) = opr(ACOS, 1, (yyvsp[(3) - (4)].nPtr)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 92 "project.y"
    { (yyval.nPtr) = opr(TAN, 1, (yyvsp[(3) - (4)].nPtr)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 93 "project.y"
    { (yyval.nPtr) = opr(ATAN, 1, (yyvsp[(3) - (4)].nPtr)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 94 "project.y"
    { (yyval.nPtr) = opr(UMINUS, 1, (yyvsp[(2) - (2)].nPtr)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 95 "project.y"
    { (yyval.nPtr) = opr('^', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 96 "project.y"
    { (yyval.nPtr) = opr('+', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 97 "project.y"
    { (yyval.nPtr) = opr('-', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 98 "project.y"
    { (yyval.nPtr) = opr('*', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 99 "project.y"
    { (yyval.nPtr) = opr('/', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 100 "project.y"
    { (yyval.nPtr) = opr('%', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 101 "project.y"
    { (yyval.nPtr) = opr('<', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 102 "project.y"
    { (yyval.nPtr) = opr('>', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 103 "project.y"
    { (yyval.nPtr) = opr(GE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 104 "project.y"
    { (yyval.nPtr) = opr(LE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 105 "project.y"
    { (yyval.nPtr) = opr('=', 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 106 "project.y"
    { (yyval.nPtr) = opr(NE, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 107 "project.y"
    { (yyval.nPtr) = opr(AND, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 108 "project.y"
    { (yyval.nPtr) = opr(OR, 2, (yyvsp[(1) - (3)].nPtr), (yyvsp[(3) - (3)].nPtr)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 109 "project.y"
    { (yyval.nPtr) = opr(NOT, 1, (yyvsp[(2) - (2)].nPtr)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 110 "project.y"
    { (yyval.nPtr) = (yyvsp[(2) - (3)].nPtr); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1959 "project.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 112 "project.y"


int getIndex(char *id, char mode)
{
    /* Returns the variable index from symbol table */
    switch (mode) {
        case GET:       /* Return index of variable from symbol table */
        {
            for (int i = 0; i < SYMSIZE; i++) {
                if (!strcmp(vars[i], "-1")) return -1;
                else if (!strcmp(id, vars[i])) return i;    /* ID found */
            }
            return -1;
        }
        case SET:       /* Sets the index of variable from symbol table and then returns the index */
        {
            for (int i = 0; i < SYMSIZE; i++) {
                if (!strcmp(id, vars[i])) return i;     /* ID already exists */
                else if (!strcmp(vars[i], "-1")) {
                    strcpy(vars[i], id);
                    return i;
                }
            }
            return -1;
        }
    }
}

nodeType *id(char *vName, char mode) {
    int sIndex = getIndex(vName, mode);
    if (sIndex == -1 && mode == GET) {
        yyerror("variable not initialized");
        exit(1);
    }
    else if (sIndex == -1 && mode == SET) {
        yyerror("failed to initialize variable");
        exit(1);
    }

    nodeType *p;
     
    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeId;
    p->id.i = sIndex;

    return p;
}

nodeType *cond(double dValue) {
    nodeType *p;
     
    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.type = typeNum;
    p->con.dValue = dValue;

    return p;
}

nodeType *cons(char *sValue) {
    nodeType *p;
     
    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeCon;
    p->con.type = typeStr;
    p->con.sValue = strdup(sValue);

    return p;
}

nodeType *opr(int oper, int nops, ...) {
    va_list ap;
    nodeType *p;
     
    /* allocate node */
    if ((p = malloc(sizeof(nodeType))) == NULL)
        yyerror("out of memory");
    if ((p->opr.op = malloc(nops * sizeof(nodeType *))) == NULL)
        yyerror("out of memory");

    /* copy information */
    p->type = typeOpr;
    p->opr.oper = oper;
    p->opr.nops = nops;
    
    va_start(ap, nops);
    for (int i = 0; i < nops; i++) 
        p->opr.op[i] = va_arg(ap, nodeType *);
    va_end(ap);

    return p;
}

void freeNode(nodeType *p) {
    if (!p) return;
    if (p->type == typeOpr) {
        for (int i = 0; i < p->opr.nops; i++)
            freeNode(p->opr.op[i]);
        free(p->opr.op);
    }
    free(p);
}

double ex(nodeType *p) {
    if (!p) return 0;

    switch (p->type) {
        case typeCon: return p->con.dValue;
        case typeId: return sym[p->id.i];
        case typeOpr:
            switch (p->opr.oper) {
                case WHILE:
                    while (ex(p->opr.op[0]))
                        ex(p->opr.op[1]);
                    return 0;
                case FOR:
                {                    
                    sym[p->opr.op[0]->id.i] = ex(p->opr.op[1]);     /* start */
                    double end = ex(p->opr.op[2]), step = ex(p->opr.op[3]);
                    while (FOR_CONDITION(sym[p->opr.op[0]->id.i], end, step)) {
                        ex(p->opr.op[4]);
                        sym[p->opr.op[0]->id.i] += step;
                    }
                    return 0;
                }
                case IF:
                    if (ex(p->opr.op[0]))
                        ex(p->opr.op[1]);
                    else if (p->opr.nops > 2)
                        ex(p->opr.op[2]);
                    return 0;
                case PRINT:
                    if (p->opr.op[0]->type == typeCon && p->opr.op[0]->con.type == typeStr) {
                        char *sValue = p->opr.op[0]->con.sValue;
                        int i, slen = strlen(sValue);
                        for (i = 0; i < slen-1; i++) {
                            if (sValue[i] == '\\' && sValue[i+1] == 'n') {
                                printf("\n");
                                i++;
                            }
                            else if (sValue[i] == '\\' && sValue[i+1] == 't') {
                                printf("\t");
                                i++;
                            }
                            else printf("%c", sValue[i]);
                        }
                        if (i == slen-1) printf("%c", sValue[i]);
                        return 0;
                    }
                    else {
                        double dValue = ex(p->opr.op[0]);
                        if (dValue == floor(dValue)) printf("%d", (int)dValue);
                        else if (dValue - floor(dValue) < 1e-6) printf("%e", dValue);
                        else printf("%lf", dValue);
                        return 0;
                    }
                case SCAN:
                {
                    double dValue;
                    printf(">>> ");
                    scanf("%lf", &dValue);
                    return sym[p->opr.op[0]->id.i] = dValue;
                }
                case RANDOM:
                {
                    double lower = ex(p->opr.op[0]), upper = ex(p->opr.op[1]);
                    srand(seed += 912);
                    if (upper - lower < 1)
                        return ((double)rand() * (upper - lower)) / (double)RAND_MAX + lower;
                    else 
                        return ((double)rand() / RAND_MAX) + (rand() % ((int)upper - (int)lower)) + lower;
                }
                case LOG:
                {
                    if (p->opr.nops == 1) return log(ex(p->opr.op[0]));
                    else return log(ex(p->opr.op[0])) / log(ex(p->opr.op[1]));
                }
                case EXP:
                {
                    return exp(ex(p->opr.op[0]));
                }
                case SQRT:
                {
                    return sqrt(ex(p->opr.op[0]));
                }
                case FLOOR: return floor(ex(p->opr.op[0]));
                case CEIL: return ceil(ex(p->opr.op[0]));
                case ABS: return fabs(ex(p->opr.op[0]));
                case ';':
                    ex(p->opr.op[0]);
                    return ex(p->opr.op[1]);
                case ASSIGN: return sym[p->opr.op[0]->id.i] = ex(p->opr.op[1]);
                case UMINUS: return -ex(p->opr.op[0]);
                case '^': return pow(ex(p->opr.op[0]), ex(p->opr.op[1]));
                case '+': return ex(p->opr.op[0]) + ex(p->opr.op[1]);
                case '-': return ex(p->opr.op[0]) - ex(p->opr.op[1]);
                case '*': return ex(p->opr.op[0]) * ex(p->opr.op[1]);
                case '/': return ex(p->opr.op[0]) / ex(p->opr.op[1]);
                case '%': return (int)ex(p->opr.op[0]) % (int)ex(p->opr.op[1]);
                case '>': return ex(p->opr.op[0]) > ex(p->opr.op[1]);
                case '<': return ex(p->opr.op[0]) < ex(p->opr.op[1]);
                case GE: return ex(p->opr.op[0]) >= ex(p->opr.op[1]);
                case LE: return ex(p->opr.op[0]) <= ex(p->opr.op[1]);
                case '=': return ex(p->opr.op[0]) == ex(p->opr.op[1]);
                case NE: return ex(p->opr.op[0]) != ex(p->opr.op[1]);
                case AND: return (int)ex(p->opr.op[0]) && (int)ex(p->opr.op[1]);
                case OR: return (int)ex(p->opr.op[0]) || (int)ex(p->opr.op[1]);
                case NOT: return !(int)ex(p->opr.op[0]);
            }
    }
    return 0;
}

int main(int argc, char **argv) {
    #if YYDEBUG
        yydebug = 1;
    #endif

    seed = time(NULL);

    /* Initialize variable table */
    for (int i = 0; i < SYMSIZE; i++) strcpy(vars[i], "-1");

    if (argc < 2)
        yyparse();
    else {
        freopen(argv[1], "r", stdin);
        yyparse();
    }

    return 0;
}
