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
#line 32 "policy_parse.y" /* yacc.c:339  */

#include <sys/types.h>
#include <assert.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>

#include <sepol/policydb/expand.h>
#include <sepol/policydb/policydb.h>
#include <sepol/policydb/services.h>
#include <sepol/policydb/conditional.h>
#include <sepol/policydb/flask.h>
#include <sepol/policydb/hierarchy.h>
#include <sepol/policydb/polcaps.h>
#include "queue.h"
#include "checkpolicy.h"
#include "module_compiler.h"
#include "policy_define.h"

extern policydb_t *policydbp;
extern unsigned int pass;

extern char yytext[];
extern int yylex(void);
extern int yywarn(const char *msg);
extern int yyerror(const char *msg);

typedef int (* require_func_t)(int pass);


#line 103 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    PATH = 258,
    QPATH = 259,
    FILENAME = 260,
    CLONE = 261,
    COMMON = 262,
    CLASS = 263,
    CONSTRAIN = 264,
    VALIDATETRANS = 265,
    INHERITS = 266,
    SID = 267,
    ROLE = 268,
    ROLEATTRIBUTE = 269,
    ATTRIBUTE_ROLE = 270,
    ROLES = 271,
    TYPEALIAS = 272,
    TYPEATTRIBUTE = 273,
    TYPEBOUNDS = 274,
    TYPE = 275,
    TYPES = 276,
    ALIAS = 277,
    ATTRIBUTE = 278,
    EXPANDATTRIBUTE = 279,
    BOOL = 280,
    TUNABLE = 281,
    IF = 282,
    ELSE = 283,
    TYPE_TRANSITION = 284,
    TYPE_MEMBER = 285,
    TYPE_CHANGE = 286,
    ROLE_TRANSITION = 287,
    RANGE_TRANSITION = 288,
    SENSITIVITY = 289,
    DOMINANCE = 290,
    DOM = 291,
    DOMBY = 292,
    INCOMP = 293,
    CATEGORY = 294,
    LEVEL = 295,
    RANGE = 296,
    MLSCONSTRAIN = 297,
    MLSVALIDATETRANS = 298,
    USER = 299,
    NEVERALLOW = 300,
    ALLOW = 301,
    AUDITALLOW = 302,
    AUDITDENY = 303,
    DONTAUDIT = 304,
    ALLOWXPERM = 305,
    AUDITALLOWXPERM = 306,
    DONTAUDITXPERM = 307,
    NEVERALLOWXPERM = 308,
    SOURCE = 309,
    TARGET = 310,
    SAMEUSER = 311,
    FSCON = 312,
    PORTCON = 313,
    NETIFCON = 314,
    NODECON = 315,
    IBPKEYCON = 316,
    IBENDPORTCON = 317,
    PIRQCON = 318,
    IOMEMCON = 319,
    IOPORTCON = 320,
    PCIDEVICECON = 321,
    DEVICETREECON = 322,
    FSUSEXATTR = 323,
    FSUSETASK = 324,
    FSUSETRANS = 325,
    GENFSCON = 326,
    U1 = 327,
    U2 = 328,
    U3 = 329,
    R1 = 330,
    R2 = 331,
    R3 = 332,
    T1 = 333,
    T2 = 334,
    T3 = 335,
    L1 = 336,
    L2 = 337,
    H1 = 338,
    H2 = 339,
    NOT = 340,
    AND = 341,
    OR = 342,
    XOR = 343,
    CTRUE = 344,
    CFALSE = 345,
    IDENTIFIER = 346,
    NUMBER = 347,
    EQUALS = 348,
    NOTEQUAL = 349,
    IPV4_ADDR = 350,
    IPV6_ADDR = 351,
    MODULE = 352,
    VERSION_IDENTIFIER = 353,
    REQUIRE = 354,
    OPTIONAL = 355,
    POLICYCAP = 356,
    PERMISSIVE = 357,
    FILESYSTEM = 358,
    DEFAULT_USER = 359,
    DEFAULT_ROLE = 360,
    DEFAULT_TYPE = 361,
    DEFAULT_RANGE = 362,
    LOW_HIGH = 363,
    LOW = 364,
    HIGH = 365
  };
#endif
/* Tokens.  */
#define PATH 258
#define QPATH 259
#define FILENAME 260
#define CLONE 261
#define COMMON 262
#define CLASS 263
#define CONSTRAIN 264
#define VALIDATETRANS 265
#define INHERITS 266
#define SID 267
#define ROLE 268
#define ROLEATTRIBUTE 269
#define ATTRIBUTE_ROLE 270
#define ROLES 271
#define TYPEALIAS 272
#define TYPEATTRIBUTE 273
#define TYPEBOUNDS 274
#define TYPE 275
#define TYPES 276
#define ALIAS 277
#define ATTRIBUTE 278
#define EXPANDATTRIBUTE 279
#define BOOL 280
#define TUNABLE 281
#define IF 282
#define ELSE 283
#define TYPE_TRANSITION 284
#define TYPE_MEMBER 285
#define TYPE_CHANGE 286
#define ROLE_TRANSITION 287
#define RANGE_TRANSITION 288
#define SENSITIVITY 289
#define DOMINANCE 290
#define DOM 291
#define DOMBY 292
#define INCOMP 293
#define CATEGORY 294
#define LEVEL 295
#define RANGE 296
#define MLSCONSTRAIN 297
#define MLSVALIDATETRANS 298
#define USER 299
#define NEVERALLOW 300
#define ALLOW 301
#define AUDITALLOW 302
#define AUDITDENY 303
#define DONTAUDIT 304
#define ALLOWXPERM 305
#define AUDITALLOWXPERM 306
#define DONTAUDITXPERM 307
#define NEVERALLOWXPERM 308
#define SOURCE 309
#define TARGET 310
#define SAMEUSER 311
#define FSCON 312
#define PORTCON 313
#define NETIFCON 314
#define NODECON 315
#define IBPKEYCON 316
#define IBENDPORTCON 317
#define PIRQCON 318
#define IOMEMCON 319
#define IOPORTCON 320
#define PCIDEVICECON 321
#define DEVICETREECON 322
#define FSUSEXATTR 323
#define FSUSETASK 324
#define FSUSETRANS 325
#define GENFSCON 326
#define U1 327
#define U2 328
#define U3 329
#define R1 330
#define R2 331
#define R3 332
#define T1 333
#define T2 334
#define T3 335
#define L1 336
#define L2 337
#define H1 338
#define H2 339
#define NOT 340
#define AND 341
#define OR 342
#define XOR 343
#define CTRUE 344
#define CFALSE 345
#define IDENTIFIER 346
#define NUMBER 347
#define EQUALS 348
#define NOTEQUAL 349
#define IPV4_ADDR 350
#define IPV6_ADDR 351
#define MODULE 352
#define VERSION_IDENTIFIER 353
#define REQUIRE 354
#define OPTIONAL 355
#define POLICYCAP 356
#define PERMISSIVE 357
#define FILESYSTEM 358
#define DEFAULT_USER 359
#define DEFAULT_ROLE 360
#define DEFAULT_TYPE 361
#define DEFAULT_RANGE 362
#define LOW_HIGH 363
#define LOW 364
#define HIGH 365

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 69 "policy_parse.y" /* yacc.c:355  */

	unsigned int val;
	uint64_t val64;
	uintptr_t valptr;
	void *ptr;
        require_func_t require_func;

#line 371 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 388 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1374

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  198
/* YYNRULES -- Number of rules.  */
#define YYNRULES  406
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  815

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   365

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
     116,   117,   120,     2,   115,   118,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   114,   113,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   111,     2,   112,   119,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   166,   166,   167,   169,   171,   174,   169,   178,   179,
     181,   184,   185,   187,   190,   192,   193,   195,   196,   198,
     201,   202,   204,   206,   208,   211,   212,   214,   215,   216,
     217,   218,   219,   220,   221,   223,   225,   228,   230,   233,
     235,   238,   240,   242,   244,   246,   248,   251,   252,   254,
     256,   257,   259,   261,   264,   266,   268,   271,   272,   274,
     275,   277,   279,   282,   283,   285,   287,   290,   291,   293,
     294,   296,   299,   302,   303,   305,   306,   307,   308,   309,
     310,   312,   313,   314,   315,   316,   317,   318,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     333,   336,   339,   341,   344,   347,   350,   353,   354,   356,
     359,   362,   364,   367,   370,   373,   375,   377,   380,   383,
     386,   389,   392,   395,   398,   402,   405,   407,   409,   411,
     414,   417,   420,   423,   427,   429,   431,   433,   436,   440,
     444,   448,   453,   455,   457,   459,   462,   464,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   477,   480,   483,
     486,   489,   492,   495,   498,   501,   504,   507,   510,   513,
     515,   517,   520,   523,   525,   528,   530,   533,   536,   537,
     539,   540,   542,   543,   545,   548,   551,   553,   556,   559,
     562,   565,   568,   571,   574,   574,   577,   577,   580,   580,
     583,   583,   586,   586,   589,   589,   592,   592,   595,   595,
     598,   598,   601,   604,   604,   607,   607,   610,   613,   613,
     616,   616,   619,   622,   625,   628,   631,   634,   638,   640,
     643,   645,   647,   649,   652,   653,   655,   658,   659,   661,
     662,   664,   667,   667,   669,   670,   672,   673,   674,   675,
     676,   678,   681,   683,   686,   688,   691,   694,   697,   698,
     700,   701,   703,   706,   708,   709,   711,   712,   714,   716,
     719,   720,   722,   723,   725,   727,   730,   731,   733,   734,
     736,   739,   740,   742,   743,   745,   748,   749,   751,   752,
     754,   756,   759,   760,   762,   763,   765,   767,   769,   772,
     773,   775,   776,   778,   780,   780,   782,   785,   788,   790,
     792,   794,   798,   800,   801,   803,   803,   804,   805,   807,
     810,   812,   813,   815,   817,   820,   822,   825,   826,   828,
     830,   832,   834,   836,   839,   842,   845,   845,   848,   851,
     854,   855,   856,   857,   858,   860,   861,   863,   866,   867,
     869,   871,   871,   873,   873,   873,   873,   875,   878,   880,
     883,   885,   888,   891,   894,   897,   900,   903,   908,   913,
     916,   918,   920,   922,   924,   925,   927,   928,   929,   930,
     931,   932,   934,   936,   937,   939,   940,   942,   945,   946,
     947,   948,   949,   950,   951,   952,   953,   955,   957,   961,
     960,   965,   967,   969,   972,   975,   976
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PATH", "QPATH", "FILENAME", "CLONE",
  "COMMON", "CLASS", "CONSTRAIN", "VALIDATETRANS", "INHERITS", "SID",
  "ROLE", "ROLEATTRIBUTE", "ATTRIBUTE_ROLE", "ROLES", "TYPEALIAS",
  "TYPEATTRIBUTE", "TYPEBOUNDS", "TYPE", "TYPES", "ALIAS", "ATTRIBUTE",
  "EXPANDATTRIBUTE", "BOOL", "TUNABLE", "IF", "ELSE", "TYPE_TRANSITION",
  "TYPE_MEMBER", "TYPE_CHANGE", "ROLE_TRANSITION", "RANGE_TRANSITION",
  "SENSITIVITY", "DOMINANCE", "DOM", "DOMBY", "INCOMP", "CATEGORY",
  "LEVEL", "RANGE", "MLSCONSTRAIN", "MLSVALIDATETRANS", "USER",
  "NEVERALLOW", "ALLOW", "AUDITALLOW", "AUDITDENY", "DONTAUDIT",
  "ALLOWXPERM", "AUDITALLOWXPERM", "DONTAUDITXPERM", "NEVERALLOWXPERM",
  "SOURCE", "TARGET", "SAMEUSER", "FSCON", "PORTCON", "NETIFCON",
  "NODECON", "IBPKEYCON", "IBENDPORTCON", "PIRQCON", "IOMEMCON",
  "IOPORTCON", "PCIDEVICECON", "DEVICETREECON", "FSUSEXATTR", "FSUSETASK",
  "FSUSETRANS", "GENFSCON", "U1", "U2", "U3", "R1", "R2", "R3", "T1", "T2",
  "T3", "L1", "L2", "H1", "H2", "NOT", "AND", "OR", "XOR", "CTRUE",
  "CFALSE", "IDENTIFIER", "NUMBER", "EQUALS", "NOTEQUAL", "IPV4_ADDR",
  "IPV6_ADDR", "MODULE", "VERSION_IDENTIFIER", "REQUIRE", "OPTIONAL",
  "POLICYCAP", "PERMISSIVE", "FILESYSTEM", "DEFAULT_USER", "DEFAULT_ROLE",
  "DEFAULT_TYPE", "DEFAULT_RANGE", "LOW_HIGH", "LOW", "HIGH", "'{'", "'}'",
  "';'", "':'", "','", "'('", "')'", "'-'", "'~'", "'*'", "$accept",
  "policy", "base_policy", "$@1", "$@2", "$@3", "classes", "class_def",
  "initial_sids", "initial_sid_def", "access_vectors", "opt_common_perms",
  "common_perms", "common_perms_def", "av_perms", "av_perms_def",
  "opt_default_rules", "default_rules", "default_user_def",
  "default_role_def", "default_type_def", "default_range_def", "opt_mls",
  "mls", "sensitivities", "sensitivity_def", "alias_def", "dominance",
  "opt_categories", "categories", "category_def", "levels", "level_def",
  "mlspolicy", "mlspolicy_decl", "mlsconstraint_def",
  "mlsvalidatetrans_def", "te_rbac", "te_rbac_decl", "rbac_decl",
  "te_decl", "attribute_def", "expandattribute_def", "type_def",
  "typealias_def", "typeattribute_def", "typebounds_def", "opt_attr_list",
  "bool_def", "tunable_def", "bool_val", "cond_stmt_def", "cond_else",
  "cond_expr", "cond_expr_prim", "cond_pol_list", "cond_rule_def",
  "cond_transition_def", "cond_te_avtab_def", "cond_allow_def",
  "cond_auditallow_def", "cond_auditdeny_def", "cond_dontaudit_def",
  "transition_def", "range_trans_def", "te_avtab_def", "allow_def",
  "auditallow_def", "auditdeny_def", "dontaudit_def", "neverallow_def",
  "xperm_allow_def", "xperm_auditallow_def", "xperm_dontaudit_def",
  "xperm_neverallow_def", "attribute_role_def", "role_type_def",
  "role_attr_def", "role_dominance", "role_trans_def", "role_allow_def",
  "roles", "role_def", "roleattribute_def", "opt_constraints",
  "constraints", "constraint_decl", "constraint_def", "validatetrans_def",
  "cexpr", "cexpr_prim", "$@4", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10",
  "$@11", "$@12", "$@13", "$@14", "$@15", "$@16", "op", "role_mls_op",
  "users", "user_def", "opt_mls_user", "initial_sid_contexts",
  "initial_sid_context_def", "opt_dev_contexts", "dev_contexts",
  "dev_context_def", "pirq_context_def", "iomem_context_def",
  "ioport_context_def", "pci_context_def", "dtree_context_def",
  "opt_fs_contexts", "fs_contexts", "fs_context_def", "net_contexts",
  "opt_port_contexts", "port_contexts", "port_context_def",
  "opt_ibpkey_contexts", "ibpkey_contexts", "ibpkey_context_def",
  "opt_ibendport_contexts", "ibendport_contexts", "ibendport_context_def",
  "opt_netif_contexts", "netif_contexts", "netif_context_def",
  "opt_node_contexts", "node_contexts", "node_context_def", "opt_fs_uses",
  "fs_uses", "fs_use_def", "opt_genfs_contexts", "genfs_contexts",
  "genfs_context_def", "$@17", "ipv4_addr_def", "xperms",
  "nested_xperm_set", "nested_xperm_list", "nested_xperm_element", "$@18",
  "xperm", "security_context_def", "opt_mls_range_def", "mls_range_def",
  "mls_level_def", "id_comma_list", "tilde", "asterisk", "names", "$@19",
  "tilde_push", "asterisk_push", "names_push", "identifier_list_push",
  "identifier_push", "identifier_list", "nested_id_set", "nested_id_list",
  "nested_id_element", "$@20", "identifier", "filesystem", "path",
  "filename", "number", "number64", "ipv6_addr", "policycap_def",
  "permissive_def", "module_policy", "module_def", "version_identifier",
  "avrules_block", "avrule_decls", "avrule_decl", "require_block",
  "require_list", "require_decl", "require_class", "require_decl_def",
  "require_id_list", "optional_block", "$@21", "optional_else",
  "optional_decl", "else_decl", "avrule_user_defs", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   123,   125,    59,    58,    44,    40,    41,    45,   126,
      42
};
# endif

#define YYPACT_NINF -719

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-719)))

#define YYTABLE_NINF -231

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -57,   -40,    82,  -719,    83,  -719,   574,  -719,   278,  -719,
     -40,   143,  -719,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   118,   -40,   -40,    62,   118,   118,   118,   118,   118,
     -17,   118,   118,   118,   118,   118,   118,   118,   118,   118,
      31,  -719,   -40,  -719,  -719,  -719,  -719,  -719,  -719,  -719,
    -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,
    -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,
    -719,  -719,  -719,  -719,  -719,  -719,   423,  -719,  -719,  -719,
      86,  -719,  -719,  -719,  -719,  -719,    23,  -719,   -40,  -719,
     213,  -719,    25,   -40,    26,   189,   -40,   -40,    12,   123,
      78,  -719,  -719,   192,  -719,   169,  -719,   156,   169,   169,
      62,    62,   236,  -719,  -719,   118,   118,   118,   118,   118,
     308,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     178,   220,   -40,   293,  -719,  -719,   574,  -719,  -719,   -40,
    -719,  -719,   337,   350,  -719,   118,   -40,   258,    39,  -719,
    -719,   118,   264,   259,   367,   274,   284,  -719,  -719,  -719,
      88,  -719,  -719,  -719,  -719,  -719,  -719,   326,  -719,   338,
     347,   170,   174,    62,    62,    62,    62,    62,  -719,   352,
     377,   382,   -31,   -11,   408,    18,  -719,   400,   194,   421,
     429,   438,   439,   445,   451,   456,   -40,  -719,  -719,  -719,
    -719,  -719,  -719,  -719,  -719,  -719,    22,  -719,   407,   -40,
    -719,   508,  -719,   435,   460,   255,   -40,   337,  -719,  -719,
     473,   457,  -719,  -719,   -40,  -719,  -719,  -719,  -719,   477,
    -719,   -40,  -719,  -719,  -719,   -40,  -719,  -719,  -719,   170,
     250,   262,  -719,  -719,    59,   118,   118,   118,   118,   482,
     118,   483,   455,   471,  -719,   372,  -719,  -719,   118,  -719,
     118,   118,   118,   118,   118,   118,   118,   118,   118,  -719,
    -719,  -719,  -719,   390,   118,  -719,   -40,   118,   118,   118,
     118,   568,   255,  -719,  -719,  -719,  -719,     0,  -719,  -719,
    -719,  -719,  -719,  -719,   118,   118,   118,   118,   118,   118,
     118,   580,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,
     -40,   -40,   -40,   -40,  -719,   -40,  -719,   -40,   -40,   308,
    -719,   118,   118,   118,   118,   118,   -40,   -40,   -40,   -40,
    -719,  -719,   -40,   570,   583,   -12,  -719,   287,   358,   370,
     472,   -40,   832,  -719,   410,  -719,  -719,  -719,  -719,  -719,
     -40,   -40,   118,   118,   118,   118,   118,   118,   118,   501,
    -719,    15,   500,   502,   503,   505,  -719,   457,    20,   515,
     516,   517,   521,   522,    91,    91,    91,    91,  -719,   -40,
     523,  -719,  -719,   526,  -719,  -719,   525,   527,   528,   529,
     530,   532,   309,   312,    16,   -40,  -719,   531,  -719,  -719,
    -719,  -719,  -719,  -719,   204,  -719,   575,   535,    44,   533,
     534,   537,   538,   539,   540,   541,  -719,  -719,  -719,   543,
    -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,
     243,   546,  -719,  -719,   243,  -719,   548,   549,   550,   598,
    -719,   574,  -719,  -719,  -719,  -719,  -719,  -719,   551,   552,
     553,   554,   555,   556,  -719,   557,   558,  -719,    68,  -719,
     -40,  -719,   -40,   609,   575,  -719,   -40,  -719,   118,   118,
     118,   118,   118,   118,   118,   119,  -719,  -719,   240,  -719,
     559,  -719,  -719,  -719,  -719,  -719,  -719,   -40,   560,  -719,
    -719,  -719,  -719,  -719,  -719,  -719,  -719,   118,   118,  -719,
     519,  -719,  -719,  -719,  -719,   165,    28,   -40,   362,  -719,
    -719,   185,   -40,   -40,   -40,   118,   118,   118,   118,  -719,
    -719,  -719,  -719,  -719,  -719,   118,   172,   638,  -719,  -719,
    -719,   562,   417,   118,   118,  -719,   490,  -719,  -719,  -719,
    -719,    24,   565,   566,   567,   569,   571,   579,   589,   172,
      27,   333,   345,  -719,   444,   444,   444,    27,   444,   444,
     444,   444,   444,    27,    27,    27,   172,   172,    57,  -719,
     -40,    61,  -719,  -719,  -719,   -40,   118,   172,  -719,  -719,
     581,  -719,  -719,  -719,  -719,  -719,  -719,  -719,   101,  -719,
    -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,
     610,  -719,  -719,   612,   617,  -719,  -719,   616,  -719,  -719,
     380,   614,   433,  -719,   -33,   172,   172,  -719,   -40,   589,
    -719,   409,   639,  -719,   406,   172,   153,  -719,  -719,   122,
     122,   122,   122,  -719,   122,   122,   122,   122,  -719,   122,
     122,  -719,   122,   122,   122,  -719,  -719,  -719,  -719,  -719,
    -719,  -719,  -719,   613,  -719,   586,   589,   -22,   -40,   -40,
     630,   409,  -719,  -719,  -719,   183,  -719,   408,  -719,  -719,
     209,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,
    -719,  -719,  -719,  -719,  -719,  -719,   -40,   -40,  -719,  -719,
     -40,   -40,   -40,   -22,   644,   630,  -719,  -719,  -719,   187,
    -719,   408,  -719,   590,   -40,   592,   593,   594,   536,   -40,
     316,   650,   644,  -719,  -719,  -719,  -719,   207,   -40,  -719,
    -719,  -719,  -719,  -719,  -719,    -5,   589,   589,   618,   589,
     589,   536,   651,   316,  -719,  -719,  -719,  -719,  -719,  -719,
     -40,   653,   650,  -719,  -719,  -719,   597,    66,  -719,    89,
     -40,  -719,   103,   114,   -40,   -40,   619,   652,   651,  -719,
    -719,   -40,   446,  -719,   653,  -719,  -719,   -40,  -719,  -719,
     -40,   589,  -719,  -719,   618,  -719,   589,  -719,  -719,  -719,
    -719,   589,   -40,  -719,   652,  -719,  -719,   -40,   621,   619,
    -719,  -719,   -40,  -719,   -40,   -40,   -40,   125,   589,  -719,
    -719,   -40,   -40,  -719,  -719,  -719,  -719,   589,  -719,   -40,
    -719,  -719,   -40,  -719,  -719
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     0,     2,     0,     3,     0,   357,     0,     1,
       0,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   403,     0,   381,   376,   377,    88,    89,    90,    91,
      92,    93,    94,    95,   378,    96,    97,    98,   148,   149,
     150,   151,   152,   153,   154,   155,   156,    81,    82,    87,
      83,    84,    85,    86,    99,   368,   406,   375,   379,   380,
       0,   363,   307,   370,   372,   371,     0,    10,     0,     9,
      16,    11,   108,     0,     0,     0,     0,     0,   108,     0,
       0,   329,   330,     0,   333,     0,   332,   331,     0,     0,
       0,     0,     0,   123,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   406,   374,   373,     0,   369,    13,     0,
      12,     5,     0,    15,    17,     0,     0,     0,     0,   327,
     166,     0,     0,     0,     0,   108,     0,   100,   354,   356,
       0,   351,   353,   335,   334,   111,   112,     0,   336,     0,
       0,   117,     0,     0,     0,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   388,   391,   389,
     390,   393,   394,   395,   396,   392,     0,   384,     0,     0,
     367,     0,   405,     0,     0,    26,     0,    14,    20,    18,
       0,   107,   168,   177,     0,    54,   104,   105,   106,     0,
     103,     0,   350,   352,   101,     0,   109,   110,   116,   118,
     119,   120,   121,   122,     0,     0,     0,     0,     0,     0,
       0,     0,   324,   326,   347,     0,   169,   174,     0,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   382,
     383,   385,   397,     0,     0,   399,     0,     0,     0,     0,
       0,    48,    25,    27,    28,    29,    30,     0,    21,   167,
     328,   102,   355,   337,     0,     0,     0,     0,     0,     0,
       0,   115,   125,   127,   128,   134,   135,   136,   137,   129,
       0,     0,     0,     0,   170,     0,   146,     0,     0,     0,
     175,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     387,   386,     0,   238,   402,     0,   348,     0,     0,     0,
       0,     0,     0,    47,     0,    50,    31,    32,    33,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,     0,     0,     0,   323,   325,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   398,     0,
       0,   404,   400,     0,    19,   349,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,     0,    73,    76,
      75,    77,    79,    78,     0,    51,    58,    23,     0,     0,
       0,     0,     0,     0,     0,     0,   126,   362,   143,     0,
     144,   145,   171,   147,   176,   161,   157,   158,   159,   160,
       0,     0,   309,   308,     0,   319,     0,     0,     0,     0,
     236,     0,    35,    36,    37,    38,    39,    40,     0,     0,
       0,     0,     0,     0,    53,     0,     0,    74,   179,   234,
       0,    55,     0,     0,    57,    59,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,   142,   318,     0,   313,
     317,   162,   311,   310,   163,   164,   165,     0,     0,    43,
      41,    42,    46,    44,    45,    52,   366,     0,     0,     6,
     178,   180,   182,   183,   235,     0,     0,     0,     0,    63,
      60,     0,     0,     0,     0,     0,     0,     0,     0,   114,
     312,   314,   315,   237,   401,     0,     0,     0,   181,    56,
      62,     0,     0,     0,     0,    64,    49,    67,    69,    70,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   212,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   190,
       0,   259,   239,    61,    66,     0,     0,     0,    68,   131,
       0,   132,   133,   138,   139,   140,   141,   316,     0,   231,
     232,   233,   228,   229,   230,   217,   213,   218,   215,   220,
     194,   196,   198,   200,     0,   202,   204,   206,   208,   210,
       0,     0,     0,   187,     0,     0,     0,   185,     0,     0,
     240,   293,   258,   260,     0,     0,     0,   130,   184,     0,
       0,     0,     0,   191,     0,     0,     0,     0,   192,     0,
       0,   193,     0,     0,     0,   222,   226,   223,   227,   224,
     225,   186,   188,   189,   241,     0,     0,     0,     0,     0,
     300,   292,   294,   261,    65,     0,    72,     0,   338,   339,
       0,   342,   214,   340,   219,   216,   221,   195,   197,   199,
     201,   203,   205,   207,   209,   211,     0,     0,   359,   358,
       0,     0,     0,     0,   265,   299,   301,   295,    71,     0,
     345,     0,   343,     0,     0,     0,     0,     0,     0,     0,
     243,   282,   264,   266,   302,   341,   346,     0,     0,   262,
     296,   297,   298,   360,   361,     0,     0,     0,     0,     0,
       0,     0,   271,   242,   244,   246,   247,   248,   249,   250,
       0,   287,   281,   283,   267,   344,   322,     0,   306,     0,
       0,   364,     0,     0,     0,     0,     0,   277,   270,   272,
     245,     0,     0,   263,   286,   288,   284,     0,   320,   304,
       0,     0,   268,   251,     0,   252,     0,   254,   256,   257,
     365,     0,     0,     7,   276,   278,   273,     0,     0,     0,
     289,   321,     0,   303,     0,     0,     0,     0,     0,   279,
     285,     0,     0,   305,   269,   253,   255,     0,   274,     0,
     290,   291,     0,   280,   275
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -719,  -719,  -719,  -719,  -719,  -719,  -719,   707,  -719,   629,
    -719,  -719,  -719,   577,  -719,   504,  -719,  -719,   440,   441,
     443,   447,  -719,  -719,  -719,   383,   -92,  -719,  -719,  -719,
     266,  -719,   218,  -719,   195,  -719,  -719,  -719,   331,  -283,
    -280,  -719,  -719,  -719,  -719,  -719,  -719,   -62,  -719,  -719,
     459,  -275,  -719,   -13,  -719,   317,  -719,  -719,  -719,  -719,
    -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,
    -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,
    -719,   413,  -178,  -719,  -719,  -719,   234,  -719,  -719,  -492,
    -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,  -719,
    -719,  -719,  -719,  -719,  -127,  -292,  -719,  -354,  -719,  -719,
     164,  -719,  -719,     3,  -719,  -719,  -719,  -719,  -719,  -719,
    -719,   115,  -719,  -719,  -719,    29,  -719,  -719,   -20,  -719,
    -719,   -44,  -719,  -719,     1,  -719,  -719,   -19,  -719,  -719,
      81,  -719,  -719,    49,  -719,  -718,   132,  -362,  -719,   269,
    -719,  -402,  -386,  -719,  -310,  -278,   -94,  -350,  -244,   798,
    -719,  -719,  -719,  -142,    54,  -183,  -341,   -45,  -719,   596,
    -719,    -1,    64,    19,   217,    41,   -15,  -570,  -719,  -719,
    -719,  -719,  -719,  -128,  -719,   685,  -240,  -719,   572,  -719,
    -719,  -719,  -271,  -719,  -719,  -719,  -719,   631
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,   215,   527,    11,    12,    90,    91,
     141,   142,   143,   144,   217,   218,   281,   282,   283,   284,
     285,   286,   342,   343,   344,   345,   152,   406,   463,   464,
     465,   508,   509,   536,   537,   538,   539,   397,   398,    44,
      45,    46,    47,    48,    49,    50,    51,   147,    52,    53,
     167,    54,   360,   112,   113,   244,   302,   303,   304,   305,
     306,   307,   308,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   185,   186,    73,   499,   500,   501,   502,   503,   568,
     569,   634,   635,   636,   637,   639,   640,   642,   643,   644,
     629,   631,   630,   632,   594,   595,   458,   133,   380,   571,
     572,   732,   733,   734,   735,   736,   737,   738,   739,   621,
     622,   623,   710,   711,   712,   713,   757,   758,   759,   783,
     784,   785,   741,   742,   743,   763,   764,   765,   660,   661,
     662,   694,   695,   696,   792,    84,   431,   432,   478,   479,
     548,   433,   654,   768,   251,   252,   148,   103,   104,   105,
     235,   670,   671,   672,   699,   673,   335,   106,   160,   161,
     231,   107,   690,   725,   419,   435,   752,   781,   402,    74,
       5,     6,    86,    75,    76,    77,    78,   206,   207,   208,
     209,   273,    79,   334,   382,    80,   383,   135
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,   255,   153,   154,   309,   365,   155,   257,   213,    87,
     408,   350,    92,    93,    94,    95,    96,    97,    98,    99,
     417,   108,   109,   114,   434,   434,   434,   434,   480,   417,
     196,   184,   483,   184,   151,   197,   156,   198,   151,   366,
       1,   131,   199,   459,   788,   200,   145,   201,   202,    85,
     151,     7,   221,   615,   616,   159,   203,   588,   163,   399,
       7,   204,   400,   589,   590,   591,   205,   401,   477,   688,
     801,   403,   482,   570,   613,   614,   480,   497,   498,     7,
       7,   689,     9,   248,   651,   626,     7,   138,   294,   295,
     296,    10,   149,   229,   120,   149,   149,   171,   172,   162,
     384,   439,   164,   250,   504,   297,   298,   299,   300,   114,
     114,   351,   132,   747,   399,   159,   477,   400,   619,   505,
     592,   593,   401,   652,   653,   511,   403,   146,   418,   454,
     256,   211,   424,   665,   269,     7,   137,   579,   214,   150,
     146,   530,   130,   615,   616,   149,   587,   110,   294,   295,
     296,    10,   223,     7,   224,    88,   467,     7,    40,   162,
     239,   240,   241,   242,   243,   297,   298,   299,   300,     7,
     617,   301,   114,   114,   114,   114,   114,   523,   111,     7,
       7,   249,   253,    81,   769,   550,   196,   615,   616,   100,
     257,   197,   789,   198,     7,   268,   158,   136,   199,   100,
     232,   200,   430,   201,   202,     7,   158,   771,   272,     7,
     101,   151,   203,   254,   628,   287,     7,   204,    40,   802,
     139,   774,   205,   290,   367,    88,   551,   552,   553,   100,
     292,   519,   776,   667,   293,   309,   157,   101,   102,   615,
     616,   101,   102,   807,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,     7,   566,   165,   166,
     173,   174,   175,   176,   177,   604,   666,   176,   177,   615,
     616,   610,   611,   612,   168,   336,     7,   529,   254,   668,
     668,   668,   668,     7,   668,   668,   668,   668,   567,   668,
     668,   238,   668,   668,   668,     7,   698,   540,   254,   715,
     254,   704,   455,   100,   705,   706,   707,   259,   260,   361,
     362,   363,   364,   488,   253,   460,   253,   149,   719,   745,
     701,   184,   173,   174,   175,   374,   375,   376,   377,   176,
     177,   378,    81,   210,   385,    81,   173,   132,   175,   748,
     394,   386,   387,   176,   177,   216,   596,   178,   173,   407,
     336,   430,   520,   597,   430,   176,   177,   139,   598,   277,
     278,   279,   280,   772,   773,   599,   775,   777,   778,   779,
      81,   222,   227,    82,   224,   787,    83,   226,   253,   727,
     728,   729,   730,   731,   793,   669,   669,   669,   669,   146,
     669,   669,   669,   669,   456,   669,   669,   230,   669,   669,
     669,   800,   507,   461,   533,   534,   803,   385,   804,   805,
     806,   808,   388,   389,   531,   810,   811,   448,   449,   450,
     451,   452,   453,   813,   390,   391,   814,   600,   601,   602,
     603,   605,   606,   607,   608,   609,    13,    14,    15,   234,
      16,    17,    18,    19,   341,   404,    20,    21,    22,    23,
      24,   236,    25,    26,    27,    28,    29,   791,    30,   336,
     237,   506,   645,   646,   647,   336,   245,   132,    31,    32,
      33,    34,    35,    36,    37,    38,    39,   657,   658,   659,
     228,   624,   224,   319,   700,   320,   253,   702,   674,   675,
     676,   246,   677,   678,   679,   680,   247,   681,   682,   254,
     683,   684,   685,   331,   385,   332,   532,   436,   437,   438,
     385,   541,   542,   543,   258,   649,   716,   650,   700,   664,
     271,   224,    40,    41,   274,    42,   392,   393,   497,   498,
     574,   575,   533,   534,   716,   261,    43,   592,   593,   723,
     724,    82,   780,   262,    13,    14,    15,   275,    16,    17,
      18,    19,   263,   264,    20,    21,    22,    23,    24,   265,
      25,    26,    27,    28,    29,   266,    30,   169,   170,   618,
     267,   276,   224,   317,   149,   132,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   318,   289,    13,    14,    15,
     291,    16,    17,    18,    19,   314,   316,    20,    21,    22,
      23,    24,   341,    25,    26,    27,    28,    29,   359,    30,
     379,   381,   416,   420,   462,   421,   422,   655,   423,    31,
      32,    33,    34,    35,    36,    37,    38,    39,   425,   426,
     427,    41,   395,    42,   428,   429,   440,   441,   442,   487,
     443,   444,   445,   446,   396,   447,   466,   468,   469,   507,
     570,   470,   471,   472,   473,   474,   476,   691,   692,   481,
     656,   484,   485,   486,   489,   490,   491,   492,   493,   494,
     495,   496,   524,    40,    41,   573,    42,   522,   581,   582,
     583,    81,   584,   633,   585,   703,   655,    43,  -230,   655,
     655,   655,   586,   638,   627,   641,   619,   687,   648,   615,
     686,   693,   709,   655,   718,   720,   721,   722,   726,   740,
     751,   767,   756,   762,   782,   780,    82,   746,    89,   140,
     219,   288,   346,   347,   655,   348,   535,   405,   457,   349,
     510,   578,   368,   475,   528,   620,   760,   663,   786,   761,
     799,   744,   697,   766,   714,   790,   770,   521,   655,   655,
     755,   655,   655,   655,   655,   717,   233,   708,   580,   795,
     655,   134,     0,     0,   212,     0,   253,   749,   750,   655,
     753,   754,     0,     0,     0,     0,     0,     0,   270,     0,
       0,   798,     0,     0,     0,     0,   655,     0,     0,     0,
       0,   655,     0,   655,   655,   655,   655,     0,     0,     0,
     655,   655,     0,     0,     0,     0,     0,     0,   655,     0,
       0,   655,   794,     0,     0,     0,     0,   796,     0,     0,
       0,     0,   797,   115,   116,   117,   118,   119,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,     0,   809,
       0,     0,     0,     0,     0,    13,    14,    15,   812,    16,
      17,    18,    19,     0,     0,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,    29,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   179,   180,   181,   182,   183,     0,   187,
     188,   189,   190,   191,   192,   193,   194,   195,     0,     0,
       0,     0,    41,   395,    42,     0,     0,     0,     0,     0,
       0,     0,     0,   220,     0,   396,     0,     0,     0,   225,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   310,   311,   312,   313,     0,   315,     0,
       0,     0,     0,     0,     0,     0,   321,     0,   322,   323,
     324,   325,   326,   327,   328,   329,   330,     0,     0,     0,
       0,     0,   333,     0,     0,   337,   338,   339,   340,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   352,   353,   354,   355,   356,   357,   358,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   369,
     370,   371,   372,   373,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     409,   410,   411,   412,   413,   414,   415,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   512,   513,   514,   515,
     516,   517,   518,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   525,   526,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   544,   545,   546,   547,     0,     0,     0,
       0,     0,     0,   549,     0,     0,     0,     0,     0,     0,
       0,   576,   577,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   625
};

static const yytype_int16 yycheck[] =
{
       1,   184,    96,    97,   244,   315,    98,   185,   136,    10,
     351,    11,    13,    14,    15,    16,    17,    18,    19,    20,
       5,    22,    23,    24,   374,   375,   376,   377,   430,     5,
       8,    13,   434,    13,    22,    13,    98,    15,    22,   317,
      97,    42,    20,   397,   762,    23,    21,    25,    26,     8,
      22,    91,   146,    86,    87,   100,    34,   549,   103,   342,
      91,    39,   342,    36,    37,    38,    44,   342,   430,    91,
     788,   342,   434,    12,   566,   567,   478,     9,    10,    91,
      91,   103,     0,   114,   117,   577,    91,    88,    29,    30,
      31,     8,    93,   155,   111,    96,    97,   110,   111,   100,
     112,   379,   103,   114,   458,    46,    47,    48,    49,   110,
     111,   111,    44,   118,   397,   160,   478,   397,    57,   460,
      93,    94,   397,   615,   616,   466,   397,   115,   113,   113,
     112,   132,   112,   625,   112,    91,   113,   113,   139,   113,
     115,   113,   111,    86,    87,   146,   548,    85,    29,    30,
      31,     8,   113,    91,   115,    12,   112,    91,    99,   160,
     173,   174,   175,   176,   177,    46,    47,    48,    49,    91,
     113,   112,   173,   174,   175,   176,   177,   487,   116,    91,
      91,   182,   183,    92,   118,    13,     8,    86,    87,   111,
     368,    13,   762,    15,    91,   196,   118,   111,    20,   111,
     112,    23,   111,    25,    26,    91,   118,   118,   209,    91,
     119,    22,    34,    91,   113,   216,    91,    39,    99,   789,
       7,   118,    44,   224,   318,    12,    54,    55,    56,   111,
     231,   112,   118,   111,   235,   475,   113,   119,   120,    86,
      87,   119,   120,   118,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    91,    85,    89,    90,
      86,    87,    88,    93,    94,   557,   113,    93,    94,    86,
      87,   563,   564,   565,   118,   276,    91,   112,    91,   629,
     630,   631,   632,    91,   634,   635,   636,   637,   116,   639,
     640,   117,   642,   643,   644,    91,   113,   112,    91,   112,
      91,   687,   394,   111,   690,   691,   692,   113,   114,   310,
     311,   312,   313,   441,   315,   111,   317,   318,   704,   112,
     111,    13,    86,    87,    88,   326,   327,   328,   329,    93,
      94,   332,    92,   113,   335,    92,    86,    44,    88,   725,
     341,    54,    55,    93,    94,     8,    13,   111,    86,   350,
     351,   111,   112,    20,   111,    93,    94,     7,    13,   104,
     105,   106,   107,   749,   750,    20,   752,   753,   754,   755,
      92,   113,   113,    95,   115,   761,    98,   113,   379,    63,
      64,    65,    66,    67,   770,   629,   630,   631,   632,   115,
     634,   635,   636,   637,   395,   639,   640,   113,   642,   643,
     644,   787,    40,   404,    42,    43,   792,   408,   794,   795,
     796,   797,    54,    55,   506,   801,   802,   108,   109,   110,
     108,   109,   110,   809,    54,    55,   812,   554,   555,   556,
     557,   558,   559,   560,   561,   562,    13,    14,    15,   113,
      17,    18,    19,    20,    34,    35,    23,    24,    25,    26,
      27,   113,    29,    30,    31,    32,    33,   767,    35,   460,
     113,   462,    82,    83,    84,   466,   114,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    68,    69,    70,
     113,   575,   115,   111,   667,   113,   487,   670,   630,   631,
     632,   114,   634,   635,   636,   637,   114,   639,   640,    91,
     642,   643,   644,   113,   505,   115,   507,   375,   376,   377,
     511,   512,   513,   514,   114,    82,   699,    84,   701,   113,
     113,   115,    99,   100,    16,   102,    54,    55,     9,    10,
     113,   114,    42,    43,   717,   114,   113,    93,    94,     3,
       4,    95,    96,   114,    13,    14,    15,   112,    17,    18,
      19,    20,   114,   114,    23,    24,    25,    26,    27,   114,
      29,    30,    31,    32,    33,   114,    35,   108,   109,   570,
     114,   111,   115,   118,   575,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   114,   113,    13,    14,    15,
     113,    17,    18,    19,    20,   113,   113,    23,    24,    25,
      26,    27,    34,    29,    30,    31,    32,    33,    28,    35,
      40,    28,   111,   113,    39,   113,   113,   618,   113,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   113,   113,
     113,   100,   101,   102,   113,   113,   113,   111,   113,    41,
     113,   113,   113,   113,   113,   113,   111,   114,   114,    40,
      12,   114,   114,   114,   114,   114,   113,   658,   659,   113,
     619,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   112,    99,   100,   113,   102,   118,   113,   113,
     113,    92,   113,    73,   113,   686,   687,   113,    76,   690,
     691,   692,   113,    76,   113,    79,    57,   656,    84,    86,
     114,    71,    58,   704,   114,   113,   113,   113,   709,    59,
      92,   114,    61,    60,    62,    96,    95,   718,    11,    90,
     143,   217,   282,   282,   725,   282,   508,   344,   397,   282,
     464,   536,   319,   416,   500,   571,   733,   622,   758,   740,
     784,   712,   661,   742,   695,   764,   747,   478,   749,   750,
     731,   752,   753,   754,   755,   701,   160,   693,   541,   774,
     761,    76,    -1,    -1,   133,    -1,   767,   726,   727,   770,
     729,   730,    -1,    -1,    -1,    -1,    -1,    -1,   206,    -1,
      -1,   782,    -1,    -1,    -1,    -1,   787,    -1,    -1,    -1,
      -1,   792,    -1,   794,   795,   796,   797,    -1,    -1,    -1,
     801,   802,    -1,    -1,    -1,    -1,    -1,    -1,   809,    -1,
      -1,   812,   771,    -1,    -1,    -1,    -1,   776,    -1,    -1,
      -1,    -1,   781,    25,    26,    27,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,   798,
      -1,    -1,    -1,    -1,    -1,    13,    14,    15,   807,    17,
      18,    19,    20,    -1,    -1,    23,    24,    25,    26,    27,
      -1,    29,    30,    31,    32,    33,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,   129,    -1,    -1,
      -1,    -1,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   145,    -1,   113,    -1,    -1,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   245,   246,   247,   248,    -1,   250,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   258,    -1,   260,   261,
     262,   263,   264,   265,   266,   267,   268,    -1,    -1,    -1,
      -1,    -1,   274,    -1,    -1,   277,   278,   279,   280,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   294,   295,   296,   297,   298,   299,   300,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   321,
     322,   323,   324,   325,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     352,   353,   354,   355,   356,   357,   358,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   468,   469,   470,   471,
     472,   473,   474,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   497,   498,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   515,   516,   517,   518,    -1,    -1,    -1,
      -1,    -1,    -1,   525,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   533,   534,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   576
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    97,   122,   123,   124,   301,   302,    91,   292,     0,
       8,   127,   128,    13,    14,    15,    17,    18,    19,    20,
      23,    24,    25,    26,    27,    29,    30,    31,    32,    33,
      35,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      99,   100,   102,   113,   160,   161,   162,   163,   164,   165,
     166,   167,   169,   170,   172,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   204,   300,   304,   305,   306,   307,   313,
     316,    92,    95,    98,   266,   296,   303,   292,    12,   128,
     129,   130,   292,   292,   292,   292,   292,   292,   292,   292,
     111,   119,   120,   278,   279,   280,   288,   292,   292,   292,
      85,   116,   174,   175,   292,   280,   280,   280,   280,   280,
     111,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     111,   292,    44,   228,   306,   318,   111,   113,   292,     7,
     130,   131,   132,   133,   134,    21,   115,   168,   277,   292,
     113,    22,   147,   277,   277,   147,   168,   113,   118,   288,
     289,   290,   292,   288,   292,    89,    90,   171,   118,   171,
     171,   174,   174,    86,    87,    88,    93,    94,   111,   280,
     280,   280,   280,   280,    13,   202,   203,   280,   280,   280,
     280,   280,   280,   280,   280,   280,     8,    13,    15,    20,
      23,    25,    26,    34,    39,    44,   308,   309,   310,   311,
     113,   292,   318,   304,   292,   125,     8,   135,   136,   134,
     280,   277,   113,   113,   115,   280,   113,   113,   113,   168,
     113,   291,   112,   290,   113,   281,   113,   113,   117,   174,
     174,   174,   174,   174,   176,   114,   114,   114,   114,   292,
     114,   275,   276,   292,    91,   286,   112,   203,   114,   113,
     114,   114,   114,   114,   114,   114,   114,   114,   292,   112,
     309,   113,   292,   312,    16,   112,   111,   104,   105,   106,
     107,   137,   138,   139,   140,   141,   142,   292,   136,   113,
     292,   113,   292,   292,    29,    30,    31,    46,    47,    48,
      49,   112,   177,   178,   179,   180,   181,   182,   183,   307,
     280,   280,   280,   280,   113,   280,   113,   118,   114,   111,
     113,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   113,   115,   280,   314,   287,   292,   280,   280,   280,
     280,    34,   143,   144,   145,   146,   139,   140,   141,   142,
      11,   111,   280,   280,   280,   280,   280,   280,   280,    28,
     173,   292,   292,   292,   292,   275,   276,   277,   202,   280,
     280,   280,   280,   280,   292,   292,   292,   292,   292,    40,
     229,    28,   315,   317,   112,   292,    54,    55,    54,    55,
      54,    55,    54,    55,   292,   101,   113,   158,   159,   160,
     161,   172,   299,   313,    35,   146,   148,   292,   287,   280,
     280,   280,   280,   280,   280,   280,   111,     5,   113,   295,
     113,   113,   113,   113,   112,   113,   113,   113,   113,   113,
     111,   267,   268,   272,   278,   296,   267,   267,   267,   276,
     113,   111,   113,   113,   113,   113,   113,   113,   108,   109,
     110,   108,   109,   110,   113,   147,   292,   159,   227,   228,
     111,   292,    39,   149,   150,   151,   111,   112,   114,   114,
     114,   114,   114,   114,   114,   176,   113,   268,   269,   270,
     272,   113,   268,   272,   113,   113,   113,    41,   304,   113,
     113,   113,   113,   113,   113,   113,   113,     9,    10,   205,
     206,   207,   208,   209,   228,   287,   292,    40,   152,   153,
     151,   287,   280,   280,   280,   280,   280,   280,   280,   112,
     112,   270,   118,   275,   112,   280,   280,   126,   207,   112,
     113,   147,   292,    42,    43,   153,   154,   155,   156,   157,
     112,   292,   292,   292,   280,   280,   280,   280,   271,   280,
      13,    54,    55,    56,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    85,   116,   210,   211,
      12,   230,   231,   113,   113,   114,   280,   280,   155,   113,
     295,   113,   113,   113,   113,   113,   113,   272,   210,    36,
      37,    38,    93,    94,   225,   226,    13,    20,    13,    20,
     225,   225,   225,   225,   226,   225,   225,   225,   225,   225,
     226,   226,   226,   210,   210,    86,    87,   113,   292,    57,
     231,   240,   241,   242,   277,   280,   210,   113,   113,   221,
     223,   222,   224,    73,   212,   213,   214,   215,    76,   216,
     217,    79,   218,   219,   220,    82,    83,    84,    84,    82,
      84,   117,   210,   210,   273,   292,   296,    68,    69,    70,
     259,   260,   261,   242,   113,   210,   113,   111,   278,   279,
     282,   283,   284,   286,   284,   284,   284,   284,   284,   284,
     284,   284,   284,   284,   284,   284,   114,   296,    91,   103,
     293,   292,   292,    71,   262,   263,   264,   261,   113,   285,
     286,   111,   286,   292,   273,   273,   273,   273,   293,    58,
     243,   244,   245,   246,   264,   112,   286,   285,   114,   273,
     113,   113,   113,     3,     4,   294,   292,    63,    64,    65,
      66,    67,   232,   233,   234,   235,   236,   237,   238,   239,
      59,   253,   254,   255,   246,   112,   292,   118,   273,   296,
     296,    92,   297,   296,   296,   294,    61,   247,   248,   249,
     234,   292,    60,   256,   257,   258,   255,   114,   274,   118,
     292,   118,   273,   273,   118,   273,   118,   273,   273,   273,
      96,   298,    62,   250,   251,   252,   249,   273,   266,   298,
     258,   275,   265,   273,   296,   297,   296,   296,   292,   252,
     273,   266,   298,   273,   273,   273,   273,   118,   273,   296,
     273,   273,   296,   273,   273
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   121,   122,   122,   124,   125,   126,   123,   127,   127,
     128,   129,   129,   130,   131,   132,   132,   133,   133,   134,
     135,   135,   136,   136,   136,   137,   137,   138,   138,   138,
     138,   138,   138,   138,   138,   139,   139,   140,   140,   141,
     141,   142,   142,   142,   142,   142,   142,   143,   143,   144,
     145,   145,   146,   146,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   152,   152,   153,   153,   154,   154,   155,
     155,   156,   157,   158,   158,   159,   159,   159,   159,   159,
     159,   160,   160,   160,   160,   160,   160,   160,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     162,   163,   164,   164,   165,   166,   167,   168,   168,   169,
     170,   171,   171,   172,   173,   173,   174,   174,   174,   174,
     174,   174,   174,   174,   175,   176,   176,   177,   177,   177,
     178,   178,   178,   178,   179,   179,   179,   179,   180,   181,
     182,   183,   184,   184,   184,   184,   185,   185,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   200,   201,   202,   202,   203,   203,   204,   205,   205,
     206,   206,   207,   207,   208,   209,   210,   210,   210,   210,
     210,   211,   211,   211,   212,   211,   213,   211,   214,   211,
     215,   211,   216,   211,   217,   211,   218,   211,   219,   211,
     220,   211,   211,   221,   211,   222,   211,   211,   223,   211,
     224,   211,   211,   211,   211,   211,   211,   211,   225,   225,
     226,   226,   226,   226,   227,   227,   228,   229,   229,   230,
     230,   231,   232,   232,   233,   233,   234,   234,   234,   234,
     234,   235,   236,   236,   237,   237,   238,   239,   240,   240,
     241,   241,   242,   243,   244,   244,   245,   245,   246,   246,
     247,   247,   248,   248,   249,   249,   250,   250,   251,   251,
     252,   253,   253,   254,   254,   255,   256,   256,   257,   257,
     258,   258,   259,   259,   260,   260,   261,   261,   261,   262,
     262,   263,   263,   264,   265,   264,   264,   266,   267,   267,
     267,   267,   268,   269,   269,   271,   270,   270,   270,   272,
     273,   274,   274,   275,   275,   276,   276,   277,   277,   278,
     279,   280,   280,   280,   280,   280,   281,   280,   282,   283,
     284,   284,   284,   284,   284,   285,   285,   286,   287,   287,
     288,   289,   289,   290,   291,   290,   290,   292,   293,   293,
     294,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   303,   303,   304,   305,   305,   306,   306,   306,   306,
     306,   306,   307,   308,   308,   309,   309,   310,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   312,   312,   314,
     313,   315,   315,   316,   317,   318,   318
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     0,     0,    19,     1,     2,
       2,     1,     2,     2,     2,     1,     0,     1,     2,     5,
       1,     2,     5,     4,     7,     1,     0,     1,     1,     1,
       1,     2,     2,     2,     2,     4,     4,     4,     4,     4,
       4,     5,     5,     5,     5,     5,     5,     1,     0,     5,
       1,     2,     4,     3,     2,     2,     4,     1,     0,     1,
       2,     4,     3,     1,     2,     5,     3,     1,     2,     1,
       1,     5,     4,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     5,     4,     4,     4,     4,     2,     0,     4,
       4,     1,     1,     6,     4,     0,     3,     2,     3,     3,
       3,     3,     3,     1,     1,     2,     0,     1,     1,     1,
       8,     7,     7,     7,     1,     1,     1,     1,     7,     7,
       7,     7,     8,     7,     7,     7,     5,     7,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     7,     7,
       7,     7,     8,     8,     8,     8,     3,     5,     4,     4,
       5,     7,     4,     1,     2,     3,     5,     4,     1,     0,
       1,     2,     1,     1,     5,     4,     3,     2,     3,     3,
       1,     3,     3,     3,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     1,     0,     4,     0,     4,     2,     0,     4,
       0,     4,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     6,     4,     0,     1,
       2,     3,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     3,     3,     5,     3,     5,     3,     3,     1,     0,
       1,     2,     5,     3,     1,     0,     1,     2,     4,     6,
       1,     0,     1,     2,     4,     6,     1,     0,     1,     2,
       4,     1,     0,     1,     2,     4,     1,     0,     1,     2,
       4,     4,     1,     0,     1,     2,     4,     4,     4,     1,
       0,     1,     2,     6,     0,     7,     4,     1,     1,     1,
       2,     2,     3,     1,     2,     0,     4,     1,     1,     1,
       6,     2,     0,     3,     1,     3,     1,     1,     3,     1,
       1,     1,     1,     1,     2,     2,     0,     4,     1,     1,
       1,     3,     1,     2,     4,     1,     2,     1,     1,     2,
       3,     1,     2,     1,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     2,     4,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     4,     2,     1,     2,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       6,     4,     0,     1,     1,     2,     0
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
        case 4:
#line 169 "policy_parse.y" /* yacc.c:1646  */
    { if (define_policy(pass, 0) == -1) return -1; }
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 171 "policy_parse.y" /* yacc.c:1646  */
    { if (pass == 1) { if (policydb_index_classes(policydbp)) return -1; }
                            else if (pass == 2) { if (policydb_index_others(NULL, policydbp, 0)) return -1; }}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 174 "policy_parse.y" /* yacc.c:1646  */
    { if (pass == 1) { if (policydb_index_bools(policydbp)) return -1;}
			   else if (pass == 2) { if (policydb_index_others(NULL, policydbp, 0)) return -1;}}
#line 2231 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 182 "policy_parse.y" /* yacc.c:1646  */
    {if (define_class()) return -1;}
#line 2237 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 188 "policy_parse.y" /* yacc.c:1646  */
    {if (define_initial_sid()) return -1;}
#line 2243 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 199 "policy_parse.y" /* yacc.c:1646  */
    {if (define_common_perms()) return -1;}
#line 2249 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 205 "policy_parse.y" /* yacc.c:1646  */
    {if (define_av_perms(FALSE)) return -1;}
#line 2255 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 207 "policy_parse.y" /* yacc.c:1646  */
    {if (define_av_perms(TRUE)) return -1;}
#line 2261 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 209 "policy_parse.y" /* yacc.c:1646  */
    {if (define_av_perms(TRUE)) return -1;}
#line 2267 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 224 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_user(DEFAULT_SOURCE)) return -1; }
#line 2273 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 226 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_user(DEFAULT_TARGET)) return -1; }
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 229 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_role(DEFAULT_SOURCE)) return -1; }
#line 2285 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 231 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_role(DEFAULT_TARGET)) return -1; }
#line 2291 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 234 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_type(DEFAULT_SOURCE)) return -1; }
#line 2297 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 236 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_type(DEFAULT_TARGET)) return -1; }
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 239 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_range(DEFAULT_SOURCE_LOW)) return -1; }
#line 2309 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 241 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_range(DEFAULT_SOURCE_HIGH)) return -1; }
#line 2315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 243 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_range(DEFAULT_SOURCE_LOW_HIGH)) return -1; }
#line 2321 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 245 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_range(DEFAULT_TARGET_LOW)) return -1; }
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 247 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_range(DEFAULT_TARGET_HIGH)) return -1; }
#line 2333 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 249 "policy_parse.y" /* yacc.c:1646  */
    {if (define_default_range(DEFAULT_TARGET_LOW_HIGH)) return -1; }
#line 2339 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 260 "policy_parse.y" /* yacc.c:1646  */
    {if (define_sens()) return -1;}
#line 2345 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 262 "policy_parse.y" /* yacc.c:1646  */
    {if (define_sens()) return -1;}
#line 2351 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 267 "policy_parse.y" /* yacc.c:1646  */
    {if (define_dominance()) return -1;}
#line 2357 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 269 "policy_parse.y" /* yacc.c:1646  */
    {if (define_dominance()) return -1;}
#line 2363 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 278 "policy_parse.y" /* yacc.c:1646  */
    {if (define_category()) return -1;}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 280 "policy_parse.y" /* yacc.c:1646  */
    {if (define_category()) return -1;}
#line 2375 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 286 "policy_parse.y" /* yacc.c:1646  */
    {if (define_level()) return -1;}
#line 2381 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 288 "policy_parse.y" /* yacc.c:1646  */
    {if (define_level()) return -1;}
#line 2387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 297 "policy_parse.y" /* yacc.c:1646  */
    { if (define_constraint((constraint_expr_t*)(yyvsp[-1].valptr))) return -1; }
#line 2393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 300 "policy_parse.y" /* yacc.c:1646  */
    { if (define_validatetrans((constraint_expr_t*)(yyvsp[-1].valptr))) return -1; }
#line 2399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 334 "policy_parse.y" /* yacc.c:1646  */
    { if (define_attrib()) return -1;}
#line 2405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 337 "policy_parse.y" /* yacc.c:1646  */
    { if (expand_attrib()) return -1;}
#line 2411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 340 "policy_parse.y" /* yacc.c:1646  */
    {if (define_type(1)) return -1;}
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 342 "policy_parse.y" /* yacc.c:1646  */
    {if (define_type(0)) return -1;}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 345 "policy_parse.y" /* yacc.c:1646  */
    {if (define_typealias()) return -1;}
#line 2429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 348 "policy_parse.y" /* yacc.c:1646  */
    {if (define_typeattribute()) return -1;}
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 351 "policy_parse.y" /* yacc.c:1646  */
    {if (define_typebounds()) return -1;}
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 357 "policy_parse.y" /* yacc.c:1646  */
    { if (define_bool_tunable(0)) return -1; }
#line 2447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 360 "policy_parse.y" /* yacc.c:1646  */
    { if (define_bool_tunable(1)) return -1; }
#line 2453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 363 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("T",0)) return -1; }
#line 2459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 365 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("F",0)) return -1; }
#line 2465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 368 "policy_parse.y" /* yacc.c:1646  */
    { if (pass == 2) { if (define_conditional((cond_expr_t*)(yyvsp[-4].ptr), (avrule_t*)(yyvsp[-2].ptr), (avrule_t*)(yyvsp[0].ptr)) < 0) return -1;  }}
#line 2471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 371 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr); }
#line 2477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 373 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 2483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 376 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[-1].ptr);}
#line 2489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 378 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_NOT, (yyvsp[0].ptr), 0);
			  if ((yyval.ptr) == 0) return -1; }
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 381 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_AND, (yyvsp[-2].ptr), (yyvsp[0].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 384 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_OR, (yyvsp[-2].ptr), (yyvsp[0].ptr));
			  if ((yyval.ptr) == 0) return   -1; }
#line 2510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 387 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_XOR, (yyvsp[-2].ptr), (yyvsp[0].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 390 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_EQ, (yyvsp[-2].ptr), (yyvsp[0].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 393 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_NEQ, (yyvsp[-2].ptr), (yyvsp[0].ptr));
			  if ((yyval.ptr) == 0) return  -1; }
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 396 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 399 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_expr(COND_BOOL,0, 0);
			  if ((yyval.ptr) == COND_ERR) return   -1; }
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 403 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_pol_list((avrule_t *)(yyvsp[-1].ptr), (avrule_t *)(yyvsp[0].ptr)); }
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 405 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 408 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 410 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 412 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = NULL; }
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 415 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_filename_trans() ;
                          if ((yyval.ptr) == COND_ERR) return -1;}
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 418 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_compute_type(AVRULE_TRANSITION) ;
                          if ((yyval.ptr) == COND_ERR) return -1;}
#line 2588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 421 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_compute_type(AVRULE_MEMBER) ;
                          if ((yyval.ptr) ==  COND_ERR) return -1;}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 424 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_compute_type(AVRULE_CHANGE) ;
                          if ((yyval.ptr) == COND_ERR) return -1;}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 428 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 430 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 432 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 434 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 437 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_ALLOWED) ;
                          if ((yyval.ptr) == COND_ERR) return -1; }
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 441 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_AUDITALLOW) ;
                          if ((yyval.ptr) == COND_ERR) return -1; }
#line 2640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 445 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_AUDITDENY) ;
                          if ((yyval.ptr) == COND_ERR) return -1; }
#line 2647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 449 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = define_cond_te_avtab(AVRULE_DONTAUDIT);
                          if ((yyval.ptr) == COND_ERR) return -1; }
#line 2654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 454 "policy_parse.y" /* yacc.c:1646  */
    {if (define_filename_trans()) return -1; }
#line 2660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 456 "policy_parse.y" /* yacc.c:1646  */
    {if (define_compute_type(AVRULE_TRANSITION)) return -1;}
#line 2666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 458 "policy_parse.y" /* yacc.c:1646  */
    {if (define_compute_type(AVRULE_MEMBER)) return -1;}
#line 2672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 460 "policy_parse.y" /* yacc.c:1646  */
    {if (define_compute_type(AVRULE_CHANGE)) return -1;}
#line 2678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 463 "policy_parse.y" /* yacc.c:1646  */
    { if (define_range_trans(0)) return -1; }
#line 2684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 465 "policy_parse.y" /* yacc.c:1646  */
    { if (define_range_trans(1)) return -1; }
#line 2690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 478 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab(AVRULE_ALLOWED)) return -1; }
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 481 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab(AVRULE_AUDITALLOW)) return -1; }
#line 2702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 484 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab(AVRULE_AUDITDENY)) return -1; }
#line 2708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 487 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab(AVRULE_DONTAUDIT)) return -1; }
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 490 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab(AVRULE_NEVERALLOW)) return -1; }
#line 2720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 493 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab_extended_perms(AVRULE_XPERMS_ALLOWED)) return -1; }
#line 2726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 496 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab_extended_perms(AVRULE_XPERMS_AUDITALLOW)) return -1; }
#line 2732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 499 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab_extended_perms(AVRULE_XPERMS_DONTAUDIT)) return -1; }
#line 2738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 502 "policy_parse.y" /* yacc.c:1646  */
    {if (define_te_avtab_extended_perms(AVRULE_XPERMS_NEVERALLOW)) return -1; }
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 505 "policy_parse.y" /* yacc.c:1646  */
    {if (define_attrib_role()) return -1; }
#line 2750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 508 "policy_parse.y" /* yacc.c:1646  */
    {if (define_role_types()) return -1;}
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 511 "policy_parse.y" /* yacc.c:1646  */
    {if (define_role_attr()) return -1;}
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 516 "policy_parse.y" /* yacc.c:1646  */
    {if (define_role_trans(0)) return -1; }
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 518 "policy_parse.y" /* yacc.c:1646  */
    {if (define_role_trans(1)) return -1;}
#line 2774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 521 "policy_parse.y" /* yacc.c:1646  */
    {if (define_role_allow()) return -1; }
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 524 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = (yyvsp[0].ptr); }
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 526 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.ptr) = merge_roles_dom((role_datum_t*)(yyvsp[-1].ptr), (role_datum_t*)(yyvsp[0].ptr)); if ((yyval.ptr) == 0) return -1;}
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 529 "policy_parse.y" /* yacc.c:1646  */
    {(yyval.ptr) = define_role_dom(NULL); if ((yyval.ptr) == 0) return -1;}
#line 2798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 531 "policy_parse.y" /* yacc.c:1646  */
    {(yyval.ptr) = define_role_dom((role_datum_t*)(yyvsp[-1].ptr)); if ((yyval.ptr) == 0) return -1;}
#line 2804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 534 "policy_parse.y" /* yacc.c:1646  */
    {if (define_roleattribute()) return -1;}
#line 2810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 546 "policy_parse.y" /* yacc.c:1646  */
    { if (define_constraint((constraint_expr_t*)(yyvsp[-1].valptr))) return -1; }
#line 2816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 549 "policy_parse.y" /* yacc.c:1646  */
    { if (define_validatetrans((constraint_expr_t*)(yyvsp[-1].valptr))) return -1; }
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 552 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = (yyvsp[-1].valptr); }
#line 2828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 554 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NOT, (yyvsp[0].valptr), 0);
			  if ((yyval.valptr) == 0) return -1; }
#line 2835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 557 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_AND, (yyvsp[-2].valptr), (yyvsp[0].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 560 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_OR, (yyvsp[-2].valptr), (yyvsp[0].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 563 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = (yyvsp[0].valptr); }
#line 2855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 566 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_USER, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 569 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_ROLE, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 572 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_TYPE, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 574 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 575 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_USER, (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 577 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 578 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_USER | CEXPR_TARGET), (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 580 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 581 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_USER | CEXPR_XTARGET), (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 583 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 584 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_ROLE, (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 586 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 587 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_ROLE | CEXPR_TARGET), (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 589 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 590 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_ROLE | CEXPR_XTARGET), (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 592 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 593 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_TYPE, (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 595 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 596 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_TYPE | CEXPR_TARGET), (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 598 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 2986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 599 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_TYPE | CEXPR_XTARGET), (yyvsp[-2].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 2993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 602 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_USER, CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
#line 3000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 604 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 3006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 605 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_ROLE, CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
#line 3013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 607 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 3019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 608 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_ROLE | CEXPR_TARGET), CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
#line 3026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 611 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_ROLE, (yyvsp[0].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 613 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 614 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, CEXPR_TYPE, CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
#line 3046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 616 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(1)) return -1; }
#line 3052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 617 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_NAMES, (CEXPR_TYPE | CEXPR_TARGET), CEXPR_EQ);
			  if ((yyval.valptr) == 0) return -1; }
#line 3059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 620 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L1L2, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 623 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L1H2, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 626 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_H1L2, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 629 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_H1H2, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 632 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L1H1, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 635 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = define_cexpr(CEXPR_ATTR, CEXPR_L2H2, (yyvsp[-1].valptr));
			  if ((yyval.valptr) == 0) return -1; }
#line 3101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 639 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = CEXPR_EQ; }
#line 3107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 641 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = CEXPR_NEQ; }
#line 3113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 644 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = (yyvsp[0].valptr); }
#line 3119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 646 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = CEXPR_DOM; }
#line 3125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 648 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = CEXPR_DOMBY; }
#line 3131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 650 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.valptr) = CEXPR_INCOMP; }
#line 3137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 656 "policy_parse.y" /* yacc.c:1646  */
    {if (define_user()) return -1;}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 665 "policy_parse.y" /* yacc.c:1646  */
    {if (define_initial_sid_context()) return -1;}
#line 3149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 679 "policy_parse.y" /* yacc.c:1646  */
    {if (define_pirq_context((yyvsp[-1].val))) return -1;}
#line 3155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 682 "policy_parse.y" /* yacc.c:1646  */
    {if (define_iomem_context((yyvsp[-1].val64),(yyvsp[-1].val64))) return -1;}
#line 3161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 684 "policy_parse.y" /* yacc.c:1646  */
    {if (define_iomem_context((yyvsp[-3].val64),(yyvsp[-1].val64))) return -1;}
#line 3167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 687 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ioport_context((yyvsp[-1].val),(yyvsp[-1].val))) return -1;}
#line 3173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 689 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ioport_context((yyvsp[-3].val),(yyvsp[-1].val))) return -1;}
#line 3179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 692 "policy_parse.y" /* yacc.c:1646  */
    {if (define_pcidevice_context((yyvsp[-1].val))) return -1;}
#line 3185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 695 "policy_parse.y" /* yacc.c:1646  */
    {if (define_devicetree_context()) return -1;}
#line 3191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 704 "policy_parse.y" /* yacc.c:1646  */
    {if (define_fs_context((yyvsp[-3].val),(yyvsp[-2].val))) return -1;}
#line 3197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 715 "policy_parse.y" /* yacc.c:1646  */
    {if (define_port_context((yyvsp[-1].val),(yyvsp[-1].val))) return -1;}
#line 3203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 717 "policy_parse.y" /* yacc.c:1646  */
    {if (define_port_context((yyvsp[-3].val),(yyvsp[-1].val))) return -1;}
#line 3209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 726 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ibpkey_context((yyvsp[-1].val),(yyvsp[-1].val))) return -1;}
#line 3215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 728 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ibpkey_context((yyvsp[-3].val),(yyvsp[-1].val))) return -1;}
#line 3221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 737 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ibendport_context((yyvsp[-1].val))) return -1;}
#line 3227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 746 "policy_parse.y" /* yacc.c:1646  */
    {if (define_netif_context()) return -1;}
#line 3233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 290:
#line 755 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ipv4_node_context()) return -1;}
#line 3239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 291:
#line 757 "policy_parse.y" /* yacc.c:1646  */
    {if (define_ipv6_node_context()) return -1;}
#line 3245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 766 "policy_parse.y" /* yacc.c:1646  */
    {if (define_fs_use(SECURITY_FS_USE_XATTR)) return -1;}
#line 3251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 297:
#line 768 "policy_parse.y" /* yacc.c:1646  */
    {if (define_fs_use(SECURITY_FS_USE_TASK)) return -1;}
#line 3257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 298:
#line 770 "policy_parse.y" /* yacc.c:1646  */
    {if (define_fs_use(SECURITY_FS_USE_TRANS)) return -1;}
#line 3263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 303:
#line 779 "policy_parse.y" /* yacc.c:1646  */
    {if (define_genfs_context(1)) return -1;}
#line 3269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 304:
#line 780 "policy_parse.y" /* yacc.c:1646  */
    {insert_id("-", 0);}
#line 3275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 305:
#line 781 "policy_parse.y" /* yacc.c:1646  */
    {if (define_genfs_context(1)) return -1;}
#line 3281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 306:
#line 783 "policy_parse.y" /* yacc.c:1646  */
    {if (define_genfs_context(0)) return -1;}
#line 3287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 786 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 789 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(0)) return -1; }
#line 3299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 309:
#line 791 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(0)) return -1; }
#line 3305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 310:
#line 793 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("~", 0)) return -1; }
#line 3311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 311:
#line 795 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("~", 0)) return -1;
			  if (insert_separator(0)) return -1; }
#line 3318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 315:
#line 803 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("-", 0)) return -1; }
#line 3324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 319:
#line 808 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 323:
#line 816 "policy_parse.y" /* yacc.c:1646  */
    {if (insert_separator(0)) return -1;}
#line 3336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 324:
#line 818 "policy_parse.y" /* yacc.c:1646  */
    {if (insert_separator(0)) return -1;}
#line 3342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 325:
#line 821 "policy_parse.y" /* yacc.c:1646  */
    {if (insert_separator(0)) return -1;}
#line 3348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 326:
#line 823 "policy_parse.y" /* yacc.c:1646  */
    {if (insert_separator(0)) return -1;}
#line 3354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 331:
#line 833 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(0)) return -1; }
#line 3360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 332:
#line 835 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(0)) return -1; }
#line 3366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 333:
#line 837 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("*", 0)) return -1; 
			  if (insert_separator(0)) return -1; }
#line 3373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 334:
#line 840 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("~", 0)) return -1;
			  if (insert_separator(0)) return -1; }
#line 3380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 335:
#line 843 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("~", 0)) return -1; 
			  if (insert_separator(0)) return -1; }
#line 3387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 336:
#line 845 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("-", 0)) return -1; }
#line 3393 "y.tab.c" /* yacc.c:1646  */
    break;

  case 337:
#line 846 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_separator(0)) return -1; }
#line 3399 "y.tab.c" /* yacc.c:1646  */
    break;

  case 338:
#line 849 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("~", 1)) return -1; }
#line 3405 "y.tab.c" /* yacc.c:1646  */
    break;

  case 339:
#line 852 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("*", 1)) return -1; }
#line 3411 "y.tab.c" /* yacc.c:1646  */
    break;

  case 347:
#line 864 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext, 1)) return -1; }
#line 3417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 354:
#line 873 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id("-", 0)) return -1; }
#line 3423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 876 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3429 "y.tab.c" /* yacc.c:1646  */
    break;

  case 358:
#line 879 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 359:
#line 881 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 884 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3447 "y.tab.c" /* yacc.c:1646  */
    break;

  case 361:
#line 886 "policy_parse.y" /* yacc.c:1646  */
    { yytext[strlen(yytext) - 1] = '\0'; if (insert_id(yytext + 1,0)) return -1; }
#line 3453 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 889 "policy_parse.y" /* yacc.c:1646  */
    { yytext[strlen(yytext) - 1] = '\0'; if (insert_id(yytext + 1,0)) return -1; }
#line 3459 "y.tab.c" /* yacc.c:1646  */
    break;

  case 363:
#line 892 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.val) = strtoul(yytext,NULL,0); }
#line 3465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 895 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.val64) = strtoull(yytext,NULL,0); }
#line 3471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 365:
#line 898 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 366:
#line 901 "policy_parse.y" /* yacc.c:1646  */
    {if (define_polcap()) return -1;}
#line 3483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 367:
#line 904 "policy_parse.y" /* yacc.c:1646  */
    {if (define_permissive()) return -1;}
#line 3489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 368:
#line 909 "policy_parse.y" /* yacc.c:1646  */
    { if (end_avrule_block(pass) == -1) return -1;
                          if (policydb_index_others(NULL, policydbp, 0)) return -1;
                        }
#line 3497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 369:
#line 914 "policy_parse.y" /* yacc.c:1646  */
    { if (define_policy(pass, 1) == -1) return -1; }
#line 3503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 370:
#line 917 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 371:
#line 919 "policy_parse.y" /* yacc.c:1646  */
    { if (insert_id(yytext,0)) return -1; }
#line 3515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 387:
#line 943 "policy_parse.y" /* yacc.c:1646  */
    { if (require_class(pass)) return -1; }
#line 3521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 388:
#line 945 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_role; }
#line 3527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 389:
#line 946 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_type; }
#line 3533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 390:
#line 947 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_attribute; }
#line 3539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 391:
#line 948 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_attribute_role; }
#line 3545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 392:
#line 949 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_user; }
#line 3551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 393:
#line 950 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_bool; }
#line 3557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 394:
#line 951 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_tunable; }
#line 3563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 395:
#line 952 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_sens; }
#line 3569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 396:
#line 953 "policy_parse.y" /* yacc.c:1646  */
    { (yyval.require_func) = require_cat; }
#line 3575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 397:
#line 956 "policy_parse.y" /* yacc.c:1646  */
    { if ((yyvsp[-1].require_func) (pass)) return -1; }
#line 3581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 398:
#line 958 "policy_parse.y" /* yacc.c:1646  */
    { if ((yyvsp[-3].require_func) (pass)) return -1; }
#line 3587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 399:
#line 961 "policy_parse.y" /* yacc.c:1646  */
    { if (end_avrule_block(pass) == -1) return -1; }
#line 3593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 400:
#line 963 "policy_parse.y" /* yacc.c:1646  */
    { if (end_optional(pass) == -1) return -1; }
#line 3599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 401:
#line 966 "policy_parse.y" /* yacc.c:1646  */
    { if (end_avrule_block(pass) == -1) return -1; }
#line 3605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 403:
#line 970 "policy_parse.y" /* yacc.c:1646  */
    { if (begin_optional(pass) == -1) return -1; }
#line 3611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 404:
#line 973 "policy_parse.y" /* yacc.c:1646  */
    { if (begin_optional_else(pass) == -1) return -1; }
#line 3617 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3621 "y.tab.c" /* yacc.c:1646  */
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
