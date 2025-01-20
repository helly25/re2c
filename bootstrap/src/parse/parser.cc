/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         RE2C_STYPE
/* Substitute the variable and function names.  */
#define yyparse         re2c_parse
#define yylex           re2c_lex
#define yyerror         re2c_error
#define yydebug         re2c_debug
#define yynerrs         re2c_nerrs

/* First part of user prologue.  */
#line 10 "../src/parse/parser.ypp"


#pragma GCC diagnostic push
#include "src/util/nowarn_in_bison.h"

#include "src/msg/msg.h"
#include "src/options/opt.h"
#include "src/parse/input.h"
#include "src/parse/parser.h"
#include "src/regexp/rule.h"

using namespace re2c;

extern "C" {
    static void yyerror(Input& input, Ast&, Opt&, AstGrams&, const char* s);
    static int yylex(YYSTYPE* yylval, Input& input, Ast& ast, Opt&, AstGrams&);
}


#line 97 "src/parse/parser.cc"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_CJUMP = 3,                /* TOKEN_CJUMP  */
  YYSYMBOL_TOKEN_CNEXT = 4,                /* TOKEN_CNEXT  */
  YYSYMBOL_TOKEN_CLIST = 5,                /* TOKEN_CLIST  */
  YYSYMBOL_TOKEN_CEXIT = 6,                /* TOKEN_CEXIT  */
  YYSYMBOL_TOKEN_CZERO = 7,                /* TOKEN_CZERO  */
  YYSYMBOL_TOKEN_CLOSESIZE = 8,            /* TOKEN_CLOSESIZE  */
  YYSYMBOL_TOKEN_CODE = 9,                 /* TOKEN_CODE  */
  YYSYMBOL_TOKEN_CONF = 10,                /* TOKEN_CONF  */
  YYSYMBOL_TOKEN_ID = 11,                  /* TOKEN_ID  */
  YYSYMBOL_TOKEN_FID = 12,                 /* TOKEN_FID  */
  YYSYMBOL_TOKEN_FID_END = 13,             /* TOKEN_FID_END  */
  YYSYMBOL_TOKEN_LINE_INFO = 14,           /* TOKEN_LINE_INFO  */
  YYSYMBOL_TOKEN_REGEXP = 15,              /* TOKEN_REGEXP  */
  YYSYMBOL_TOKEN_BLOCK = 16,               /* TOKEN_BLOCK  */
  YYSYMBOL_TOKEN_ENTRY = 17,               /* TOKEN_ENTRY  */
  YYSYMBOL_TOKEN_ERROR = 18,               /* TOKEN_ERROR  */
  YYSYMBOL_19_ = 19,                       /* '/'  */
  YYSYMBOL_20_ = 20,                       /* '='  */
  YYSYMBOL_21_ = 21,                       /* ';'  */
  YYSYMBOL_22_ = 22,                       /* '*'  */
  YYSYMBOL_23_ = 23,                       /* '$'  */
  YYSYMBOL_24_ = 24,                       /* '|'  */
  YYSYMBOL_25_ = 25,                       /* '\\'  */
  YYSYMBOL_26_ = 26,                       /* '+'  */
  YYSYMBOL_27_ = 27,                       /* '?'  */
  YYSYMBOL_28_ = 28,                       /* '('  */
  YYSYMBOL_29_ = 29,                       /* ')'  */
  YYSYMBOL_30_ = 30,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_spec = 32,                      /* spec  */
  YYSYMBOL_def = 33,                       /* def  */
  YYSYMBOL_name = 34,                      /* name  */
  YYSYMBOL_enddef = 35,                    /* enddef  */
  YYSYMBOL_rule = 36,                      /* rule  */
  YYSYMBOL_ccode = 37,                     /* ccode  */
  YYSYMBOL_trailexpr = 38,                 /* trailexpr  */
  YYSYMBOL_expr = 39,                      /* expr  */
  YYSYMBOL_diff = 40,                      /* diff  */
  YYSYMBOL_term = 41,                      /* term  */
  YYSYMBOL_factor = 42,                    /* factor  */
  YYSYMBOL_closes = 43,                    /* closes  */
  YYSYMBOL_close = 44,                     /* close  */
  YYSYMBOL_primary = 45                    /* primary  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined RE2C_STYPE_IS_TRIVIAL && RE2C_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   68

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  46
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  69

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   273


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    30,     2,     2,    23,     2,     2,     2,
      28,    29,    22,    26,     2,     2,     2,    19,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    21,
       2,    20,     2,    27,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    25,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    24,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18
};

#if RE2C_DEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    78,    78,    79,    83,    87,    88,    89,    93,    96,
     102,   103,   106,   106,   109,   112,   115,   118,   121,   127,
     133,   139,   145,   151,   158,   159,   164,   169,   170,   176,
     177,   181,   182,   186,   188,   192,   193,   206,   212,   213,
     217,   218,   219,   223,   224,   233,   234
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if RE2C_DEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_CJUMP",
  "TOKEN_CNEXT", "TOKEN_CLIST", "TOKEN_CEXIT", "TOKEN_CZERO",
  "TOKEN_CLOSESIZE", "TOKEN_CODE", "TOKEN_CONF", "TOKEN_ID", "TOKEN_FID",
  "TOKEN_FID_END", "TOKEN_LINE_INFO", "TOKEN_REGEXP", "TOKEN_BLOCK",
  "TOKEN_ENTRY", "TOKEN_ERROR", "'/'", "'='", "';'", "'*'", "'$'", "'|'",
  "'\\\\'", "'+'", "'?'", "'('", "')'", "'!'", "$accept", "spec", "def",
  "name", "enddef", "rule", "ccode", "trailexpr", "expr", "diff", "term",
  "factor", "closes", "close", "primary", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-22)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -22,     0,   -22,    24,     9,    51,   -22,   -11,   -22,   -22,
     -22,   -22,    10,    31,    49,    15,   -22,    -7,   -22,    50,
      25,    -5,   -22,    -7,     5,   -22,    51,    51,    51,    51,
     -22,   -22,    52,   -22,   -22,   -22,   -22,   -22,   -22,    -7,
      27,    29,   -22,    -7,    -7,    -7,   -22,   -22,   -22,   -22,
     -22,    11,   -22,   -22,   -22,   -22,   -22,   -22,    33,   -22,
     -22,   -22,   -22,   -22,    12,    -5,   -22,   -22,   -22
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     4,    44,    11,     7,
      43,     3,     0,     0,     0,     0,     5,     0,     6,     0,
      27,    29,    31,    33,    35,    44,     0,     0,     0,     0,
      22,    26,     0,    24,    23,    10,    17,    15,    16,     0,
       0,     0,    14,     0,     0,     0,    34,    37,    40,    41,
      42,    36,    38,    21,    19,    20,    18,    25,     0,    45,
      13,     9,    12,     8,    28,    30,    32,    39,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -22,   -22,   -22,   -22,   -22,   -22,    37,    64,   -14,   -10,
     -21,   -22,   -22,    17,   -22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    16,    17,    63,    18,    34,    19,    20,    21,
      22,    23,    51,    52,    24
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       2,    40,    46,    41,    25,     3,     4,     5,    10,    35,
       6,     7,     8,    47,     9,    10,    11,    12,    30,    36,
      45,    15,    13,    14,    66,    58,    25,    48,    15,    64,
      10,    49,    50,    48,    65,    25,    44,    49,    50,    10,
      37,    26,    60,    15,    43,    39,    27,    28,    61,    44,
      62,    44,    15,    44,    31,    32,    59,    44,    38,    42,
      33,    57,    68,    53,    54,    55,    56,    29,    67
};

static const yytype_int8 yycheck[] =
{
       0,    15,    23,    17,    11,     5,     6,     7,    15,    20,
      10,    11,    12,     8,    14,    15,    16,    17,     9,     9,
      25,    28,    22,    23,    45,    39,    11,    22,    28,    43,
      15,    26,    27,    22,    44,    11,    24,    26,    27,    15,
       9,    17,    13,    28,    19,    30,    22,    23,    19,    24,
      21,    24,    28,    24,     3,     4,    29,    24,     9,     9,
       9,     9,    29,    26,    27,    28,    29,     3,    51
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    32,     0,     5,     6,     7,    10,    11,    12,    14,
      15,    16,    17,    22,    23,    28,    33,    34,    36,    38,
      39,    40,    41,    42,    45,    11,    17,    22,    23,    38,
       9,     3,     4,     9,    37,    20,     9,     9,     9,    30,
      39,    39,     9,    19,    24,    25,    41,     8,    22,    26,
      27,    43,    44,    37,    37,    37,    37,     9,    39,    29,
      13,    19,    21,    35,    39,    40,    41,    44,    29
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    32,    32,    32,    32,    32,    33,    33,
      34,    34,    35,    35,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    37,    37,    37,    38,    38,    39,
      39,    40,    40,    41,    41,    42,    42,    42,    43,    43,
      44,    44,    44,    45,    45,    45,    45
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     3,     3,
       2,     1,     1,     1,     2,     2,     2,     2,     3,     3,
       3,     3,     2,     2,     1,     2,     1,     1,     3,     1,
       3,     1,     3,     1,     2,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     3,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = RE2C_EMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == RE2C_EMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (input, ast, opts, grams, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use RE2C_error or RE2C_UNDEF. */
#define YYERRCODE RE2C_UNDEF


/* Enable debugging if requested.  */
#if RE2C_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, input, ast, opts, grams); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, re2c::Input& input, re2c::Ast& ast, re2c::Opt& opts, re2c::AstGrams& grams)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (input);
  YY_USE (ast);
  YY_USE (opts);
  YY_USE (grams);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, re2c::Input& input, re2c::Ast& ast, re2c::Opt& opts, re2c::AstGrams& grams)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, input, ast, opts, grams);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, re2c::Input& input, re2c::Ast& ast, re2c::Opt& opts, re2c::AstGrams& grams)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], input, ast, opts, grams);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, input, ast, opts, grams); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !RE2C_DEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !RE2C_DEBUG */


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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, re2c::Input& input, re2c::Ast& ast, re2c::Opt& opts, re2c::AstGrams& grams)
{
  YY_USE (yyvaluep);
  YY_USE (input);
  YY_USE (ast);
  YY_USE (opts);
  YY_USE (grams);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}






/*----------.
| yyparse.  |
`----------*/

int
yyparse (re2c::Input& input, re2c::Ast& ast, re2c::Opt& opts, re2c::AstGrams& grams)
{
/* Lookahead token kind.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

    /* Number of syntax errors so far.  */
    int yynerrs = 0;

    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = RE2C_EMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == RE2C_EMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex (&yylval, input, ast, opts, grams);
    }

  if (yychar <= RE2C_EOF)
    {
      yychar = RE2C_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == RE2C_error)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = RE2C_UNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = RE2C_EMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 3: /* spec: spec TOKEN_BLOCK  */
#line 79 "../src/parse/parser.ypp"
                   {
    if (use_block(input, ast, opts, grams, ast.temp_blockname) != Ret::OK) YYABORT;
    ast.temp_blockname.clear();
}
#line 1184 "src/parse/parser.cc"
    break;

  case 4: /* spec: spec TOKEN_CONF  */
#line 83 "../src/parse/parser.ypp"
                  {
    // Handled here, as the main lexer should not get access to opts under construction.
    if (input.lex_conf(opts) != Ret::OK) YYABORT;
}
#line 1193 "src/parse/parser.cc"
    break;

  case 8: /* def: name expr enddef  */
#line 93 "../src/parse/parser.ypp"
                   {
    if (add_named_def(opts.symtab, (yyvsp[-2].cstr), (yyvsp[-1].regexp), input) != Ret::OK) YYABORT;
}
#line 1201 "src/parse/parser.cc"
    break;

  case 9: /* def: name expr '/'  */
#line 96 "../src/parse/parser.ypp"
                {
    input.error_at_tok("trailing contexts are not allowed in named definitions");
    YYABORT;
}
#line 1210 "src/parse/parser.cc"
    break;

  case 10: /* name: TOKEN_ID '='  */
#line 102 "../src/parse/parser.ypp"
               { (yyval.cstr) = (yyvsp[-1].cstr); }
#line 1216 "src/parse/parser.cc"
    break;

  case 14: /* rule: trailexpr TOKEN_CODE  */
#line 109 "../src/parse/parser.ypp"
                       {
    find_or_add_gram(grams, "").rules.push_back(AstRule((yyvsp[-1].regexp), (yyvsp[0].semact)));
}
#line 1224 "src/parse/parser.cc"
    break;

  case 15: /* rule: '*' TOKEN_CODE  */
#line 112 "../src/parse/parser.ypp"
                 {
    find_or_add_gram(grams, "").defs.push_back((yyvsp[0].semact));
}
#line 1232 "src/parse/parser.cc"
    break;

  case 16: /* rule: '$' TOKEN_CODE  */
#line 115 "../src/parse/parser.ypp"
                 {
    find_or_add_gram(grams, "").eofs.push_back((yyvsp[0].semact));
}
#line 1240 "src/parse/parser.cc"
    break;

  case 17: /* rule: TOKEN_ENTRY TOKEN_CODE  */
#line 118 "../src/parse/parser.ypp"
                         {
    find_or_add_gram(grams, "").entry.push_back((yyvsp[0].semact));
}
#line 1248 "src/parse/parser.cc"
    break;

  case 18: /* rule: TOKEN_CLIST trailexpr ccode  */
#line 121 "../src/parse/parser.ypp"
                              {
    for (const std::string& cond : ast.temp_condlist) {
        find_or_add_gram(grams, cond).rules.push_back(AstRule((yyvsp[-1].regexp), (yyvsp[0].semact)));
    }
    ast.temp_condlist.clear();
}
#line 1259 "src/parse/parser.cc"
    break;

  case 19: /* rule: TOKEN_CLIST '*' ccode  */
#line 127 "../src/parse/parser.ypp"
                        {
    for (const std::string& cond : ast.temp_condlist) {
        find_or_add_gram(grams, cond).defs.push_back((yyvsp[0].semact));
    }
    ast.temp_condlist.clear();
}
#line 1270 "src/parse/parser.cc"
    break;

  case 20: /* rule: TOKEN_CLIST '$' ccode  */
#line 133 "../src/parse/parser.ypp"
                        {
    for (const std::string& cond : ast.temp_condlist) {
        find_or_add_gram(grams, cond).eofs.push_back((yyvsp[0].semact));
    }
    ast.temp_condlist.clear();
}
#line 1281 "src/parse/parser.cc"
    break;

  case 21: /* rule: TOKEN_CLIST TOKEN_ENTRY ccode  */
#line 139 "../src/parse/parser.ypp"
                                {
    for (const std::string& cond : ast.temp_condlist) {
        find_or_add_gram(grams, cond).entry.push_back((yyvsp[0].semact));
    }
    ast.temp_condlist.clear();
}
#line 1292 "src/parse/parser.cc"
    break;

  case 22: /* rule: TOKEN_CEXIT TOKEN_CODE  */
#line 145 "../src/parse/parser.ypp"
                         {
    for (const std::string& cond : ast.temp_condlist) {
        find_or_add_gram(grams, cond).exit.push_back((yyvsp[0].semact));
    }
    ast.temp_condlist.clear();
}
#line 1303 "src/parse/parser.cc"
    break;

  case 23: /* rule: TOKEN_CZERO ccode  */
#line 151 "../src/parse/parser.ypp"
                    {
    const AstNode* r = ast.nil(input.tok_loc());
    find_or_add_gram(grams, ZERO_COND).rules.push_back(AstRule(r, (yyvsp[0].semact)));
    ast.temp_condlist.clear();
}
#line 1313 "src/parse/parser.cc"
    break;

  case 25: /* ccode: TOKEN_CNEXT TOKEN_CODE  */
#line 159 "../src/parse/parser.ypp"
                         {
    (yyval.semact) = (yyvsp[0].semact);
    // parser needs to to update condition, but for the rest of the code actions are immutable
    const_cast<SemAct*>((yyval.semact))->cond = (yyvsp[-1].cstr); 
}
#line 1323 "src/parse/parser.cc"
    break;

  case 26: /* ccode: TOKEN_CJUMP  */
#line 164 "../src/parse/parser.ypp"
              {
    (yyval.semact) = ast.sem_act(input.tok_loc(), nullptr, (yyvsp[0].cstr), true);
}
#line 1331 "src/parse/parser.cc"
    break;

  case 27: /* trailexpr: expr  */
#line 169 "../src/parse/parser.ypp"
       { (yyval.regexp) = ast.cap((yyvsp[0].regexp), CAPTURE_IF_NOT_INVERTED); }
#line 1337 "src/parse/parser.cc"
    break;

  case 28: /* trailexpr: expr '/' expr  */
#line 170 "../src/parse/parser.ypp"
                {
    (yyval.regexp) = ast.cat(ast.cap((yyvsp[-2].regexp), CAPTURE_IF_NOT_INVERTED),
                 ast.cat(ast.tag(input.tok_loc(), nullptr, false), (yyvsp[0].regexp)));
}
#line 1346 "src/parse/parser.cc"
    break;

  case 30: /* expr: expr '|' diff  */
#line 177 "../src/parse/parser.ypp"
                { (yyval.regexp) = ast.alt((yyvsp[-2].regexp), (yyvsp[0].regexp)); }
#line 1352 "src/parse/parser.cc"
    break;

  case 32: /* diff: diff '\\' term  */
#line 182 "../src/parse/parser.ypp"
                 { (yyval.regexp) = ast.diff((yyvsp[-2].regexp), (yyvsp[0].regexp)); }
#line 1358 "src/parse/parser.cc"
    break;

  case 34: /* term: factor term  */
#line 188 "../src/parse/parser.ypp"
              { (yyval.regexp) = ast.cat((yyvsp[-1].regexp), (yyvsp[0].regexp)); }
#line 1364 "src/parse/parser.cc"
    break;

  case 36: /* factor: primary closes  */
#line 193 "../src/parse/parser.ypp"
                 {
    switch((yyvsp[0].op)) {
    case '*':
        (yyval.regexp) = ast.iter((yyvsp[-1].regexp), 0, Ast::MANY);
        break;
    case '+':
        (yyval.regexp) = ast.iter((yyvsp[-1].regexp), 1, Ast::MANY);
        break;
    case '?':
        (yyval.regexp) = ast.iter((yyvsp[-1].regexp), 0, 1);
        break;
    }
}
#line 1382 "src/parse/parser.cc"
    break;

  case 37: /* factor: primary TOKEN_CLOSESIZE  */
#line 206 "../src/parse/parser.ypp"
                          {
    (yyval.regexp) = ast.iter((yyvsp[-1].regexp), (yyvsp[0].bounds).min, (yyvsp[0].bounds).max);
}
#line 1390 "src/parse/parser.cc"
    break;

  case 39: /* closes: closes close  */
#line 213 "../src/parse/parser.ypp"
               { (yyval.op) = ((yyvsp[-1].op) == (yyvsp[0].op)) ? (yyvsp[-1].op) : '*'; }
#line 1396 "src/parse/parser.cc"
    break;

  case 40: /* close: '*'  */
#line 217 "../src/parse/parser.ypp"
      { (yyval.op) = '*'; }
#line 1402 "src/parse/parser.cc"
    break;

  case 41: /* close: '+'  */
#line 218 "../src/parse/parser.ypp"
      { (yyval.op) = '+'; }
#line 1408 "src/parse/parser.cc"
    break;

  case 42: /* close: '?'  */
#line 219 "../src/parse/parser.ypp"
      { (yyval.op) = '?'; }
#line 1414 "src/parse/parser.cc"
    break;

  case 44: /* primary: TOKEN_ID  */
#line 224 "../src/parse/parser.ypp"
           {
    (yyval.regexp) = find_def(opts.symtab, (yyvsp[0].cstr));
    if ((yyval.regexp) == nullptr) {
        input.error_at_tok("undefined symbol '%s'", (yyvsp[0].cstr));
        YYABORT;
    } else if (Ast::needs_wrap((yyval.regexp))) {
        (yyval.regexp) = ast.cap((yyval.regexp), NO_CAPTURE);
    }
}
#line 1428 "src/parse/parser.cc"
    break;

  case 45: /* primary: '(' expr ')'  */
#line 233 "../src/parse/parser.ypp"
                   { (yyval.regexp) = ast.cap((yyvsp[-1].regexp), CAPTURE_IF_NOT_INVERTED); }
#line 1434 "src/parse/parser.cc"
    break;

  case 46: /* primary: '(' '!' expr ')'  */
#line 234 "../src/parse/parser.ypp"
                   { (yyval.regexp) = ast.cap((yyvsp[-1].regexp), CAPTURE_IF_INVERTED); }
#line 1440 "src/parse/parser.cc"
    break;


#line 1444 "src/parse/parser.cc"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == RE2C_EMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (input, ast, opts, grams, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= RE2C_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == RE2C_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, input, ast, opts, grams);
          yychar = RE2C_EMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, input, ast, opts, grams);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (input, ast, opts, grams, YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != RE2C_EMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, input, ast, opts, grams);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, input, ast, opts, grams);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 237 "../src/parse/parser.ypp"


#pragma GCC diagnostic pop

extern "C" {
    static void yyerror(Input& input, Ast&, Opt&, AstGrams&, const char* s) {
        input.error_at_cur("%s", s);
    }

    static int yylex(YYSTYPE* yylval, Input& input, Ast& ast, Opt&, AstGrams&) {
        int token;
        return input.lex_block(yylval, ast, token) == Ret::OK ? token : TOKEN_ERROR;
    }
}

namespace re2c {

Ret parse(Input& input, Ast& ast, Opt& opts, AstGrams& grams) {
    return yyparse(input, ast, opts, grams) == 0 ? Ret::OK : Ret::FAIL;
}

} // namespace re2c
