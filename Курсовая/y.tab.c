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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "dom.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int line, collumn;
int yylex();
char yywrap() {
    return 1;
}
extern FILE *yyin, *yyout;
FILE *Kurs_in;
void yyerror(char *s) {
printf("error:%s in line %d and column %d\n", s, line, collumn);
}

/* Sensors */
int senshallaway = 1;
int senslivingroom = 2;
int sensbedroom = 3;
int senskitchen = 3;
int sensbathroom = 0;
int senspantry = 2;
int magnestconnected = 1;
int wlivingroomm = 1;
int wbedroomm = 0;
int sensgas = 1;
int sensbathlvl=0;
int waterleakage = 0; /* датчик утечки воды */

int lvlbath = 0;

/* Device status */
int shallaway = 0;
int slivingroom = 0;
int sbedroom = 0;
int skitchen = 0;
int sbathroom = 0;
int spantry = 0;
int livingroomwindow = 0;
int bedroomwindow = 0;
int kitchenhood = 0;
int massagesent = 0;
int mixertap = 0; /* кран в ванной */
int globysl = 0;
int livingroomheater = 0;


#line 119 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    HALLAWAY = 258,                /* HALLAWAY  */
    LIVINGROOM = 259,              /* LIVINGROOM  */
    BEDROOM = 260,                 /* BEDROOM  */
    KITCHEN = 261,                 /* KITCHEN  */
    BATHROOM = 262,                /* BATHROOM  */
    PANTRY = 263,                  /* PANTRY  */
    LIGHT = 264,                   /* LIGHT  */
    WINDOW = 265,                  /* WINDOW  */
    DOOR = 266,                    /* DOOR  */
    HOOD = 267,                    /* HOOD  */
    MASSAGE = 268,                 /* MASSAGE  */
    MIXERTAP = 269,                /* MIXERTAP  */
    DMAGNETS = 270,                /* DMAGNETS  */
    LIVINGROOMWINDOW = 271,        /* LIVINGROOMWINDOW  */
    BEDROOMWINDOW = 272,           /* BEDROOMWINDOW  */
    WLIVINGROOMM = 273,            /* WLIVINGROOMM  */
    WBEDROOMM = 274,               /* WBEDROOMM  */
    MOVE = 275,                    /* MOVE  */
    GAS = 276,                     /* GAS  */
    WATER = 277,                   /* WATER  */
    LVLBATH = 278,                 /* LVLBATH  */
    VALUE = 279,                   /* VALUE  */
    IF = 280,                      /* IF  */
    ON = 281,                      /* ON  */
    AND = 282,                     /* AND  */
    OR = 283,                      /* OR  */
    OFF = 284,                     /* OFF  */
    CLOSE = 285,                   /* CLOSE  */
    OPEN = 286,                    /* OPEN  */
    SENT = 287                     /* SENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define HALLAWAY 258
#define LIVINGROOM 259
#define BEDROOM 260
#define KITCHEN 261
#define BATHROOM 262
#define PANTRY 263
#define LIGHT 264
#define WINDOW 265
#define DOOR 266
#define HOOD 267
#define MASSAGE 268
#define MIXERTAP 269
#define DMAGNETS 270
#define LIVINGROOMWINDOW 271
#define BEDROOMWINDOW 272
#define WLIVINGROOMM 273
#define WBEDROOMM 274
#define MOVE 275
#define GAS 276
#define WATER 277
#define LVLBATH 278
#define VALUE 279
#define IF 280
#define ON 281
#define AND 282
#define OR 283
#define OFF 284
#define CLOSE 285
#define OPEN 286
#define SENT 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_HALLAWAY = 3,                   /* HALLAWAY  */
  YYSYMBOL_LIVINGROOM = 4,                 /* LIVINGROOM  */
  YYSYMBOL_BEDROOM = 5,                    /* BEDROOM  */
  YYSYMBOL_KITCHEN = 6,                    /* KITCHEN  */
  YYSYMBOL_BATHROOM = 7,                   /* BATHROOM  */
  YYSYMBOL_PANTRY = 8,                     /* PANTRY  */
  YYSYMBOL_LIGHT = 9,                      /* LIGHT  */
  YYSYMBOL_WINDOW = 10,                    /* WINDOW  */
  YYSYMBOL_DOOR = 11,                      /* DOOR  */
  YYSYMBOL_HOOD = 12,                      /* HOOD  */
  YYSYMBOL_MASSAGE = 13,                   /* MASSAGE  */
  YYSYMBOL_MIXERTAP = 14,                  /* MIXERTAP  */
  YYSYMBOL_DMAGNETS = 15,                  /* DMAGNETS  */
  YYSYMBOL_LIVINGROOMWINDOW = 16,          /* LIVINGROOMWINDOW  */
  YYSYMBOL_BEDROOMWINDOW = 17,             /* BEDROOMWINDOW  */
  YYSYMBOL_WLIVINGROOMM = 18,              /* WLIVINGROOMM  */
  YYSYMBOL_WBEDROOMM = 19,                 /* WBEDROOMM  */
  YYSYMBOL_MOVE = 20,                      /* MOVE  */
  YYSYMBOL_GAS = 21,                       /* GAS  */
  YYSYMBOL_WATER = 22,                     /* WATER  */
  YYSYMBOL_LVLBATH = 23,                   /* LVLBATH  */
  YYSYMBOL_VALUE = 24,                     /* VALUE  */
  YYSYMBOL_IF = 25,                        /* IF  */
  YYSYMBOL_ON = 26,                        /* ON  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_OR = 28,                        /* OR  */
  YYSYMBOL_OFF = 29,                       /* OFF  */
  YYSYMBOL_CLOSE = 30,                     /* CLOSE  */
  YYSYMBOL_OPEN = 31,                      /* OPEN  */
  YYSYMBOL_SENT = 32,                      /* SENT  */
  YYSYMBOL_33_ = 33,                       /* '('  */
  YYSYMBOL_34_ = 34,                       /* ')'  */
  YYSYMBOL_35_ = 35,                       /* '{'  */
  YYSYMBOL_36_ = 36,                       /* '}'  */
  YYSYMBOL_37_ = 37,                       /* '='  */
  YYSYMBOL_38_ = 38,                       /* '<'  */
  YYSYMBOL_39_ = 39,                       /* '>'  */
  YYSYMBOL_40_ = 40,                       /* '&'  */
  YYSYMBOL_41_ = 41,                       /* '|'  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_commands = 43,                  /* commands  */
  YYSYMBOL_command = 44,                   /* command  */
  YYSYMBOL_actions = 45,                   /* actions  */
  YYSYMBOL_andaction = 46,                 /* andaction  */
  YYSYMBOL_action = 47,                    /* action  */
  YYSYMBOL_packysl = 48,                   /* packysl  */
  YYSYMBOL_andysl = 49,                    /* andysl  */
  YYSYMBOL_orysl = 50,                     /* orysl  */
  YYSYMBOL_ysl = 51,                       /* ysl  */
  YYSYMBOL_device = 52,                    /* device  */
  YYSYMBOL_sensor = 53,                    /* sensor  */
  YYSYMBOL_room = 54,                      /* room  */
  YYSYMBOL_switch = 55                     /* switch  */
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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

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
#define YYLAST   49

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  45
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  64

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


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
       2,     2,     2,     2,     2,     2,     2,     2,    40,     2,
      33,    34,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      38,    37,    39,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    35,    41,    36,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    56,    56,    59,    62,    65,    67,    70,    74,   143,
     145,   147,   148,   151,   154,   157,   192,   220,   231,   233,
     235,   237,   239,   241,   243,   245,   248,   250,   252,   254,
     256,   258,   260,   263,   265,   267,   269,   271,   273,   276,
     278,   280,   282,   284,   287,   290
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "HALLAWAY",
  "LIVINGROOM", "BEDROOM", "KITCHEN", "BATHROOM", "PANTRY", "LIGHT",
  "WINDOW", "DOOR", "HOOD", "MASSAGE", "MIXERTAP", "DMAGNETS",
  "LIVINGROOMWINDOW", "BEDROOMWINDOW", "WLIVINGROOMM", "WBEDROOMM", "MOVE",
  "GAS", "WATER", "LVLBATH", "VALUE", "IF", "ON", "AND", "OR", "OFF",
  "CLOSE", "OPEN", "SENT", "'('", "')'", "'{'", "'}'", "'='", "'<'", "'>'",
  "'&'", "'|'", "$accept", "commands", "command", "actions", "andaction",
  "action", "packysl", "andysl", "orysl", "ysl", "device", "sensor",
  "room", "switch", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-27)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -27,     0,   -27,   -24,   -27,    -2,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -22,   -26,    27,   -13,    -2,    -2,    -2,
      -2,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     3,
      27,   -27,   -27,   -27,   -27,    20,    21,    22,   -12,    16,
      -6,   -27,   -27,   -27,   -27,    27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,    10,   -27,    -3,   -27,   -27,
     -27,   -27,   -27,   -27
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,     3,    12,    27,    28,    29,    26,
      30,    31,    32,     0,    11,     0,     0,    12,    12,    12,
      12,    10,     9,    33,    34,    35,    36,    37,    38,     0,
       0,    13,    14,    44,    45,     0,     0,     0,     0,     6,
       0,    16,    15,    17,     4,     0,     5,    18,    20,    19,
      23,    24,    25,    21,    22,     0,     7,     0,    39,    40,
      41,    42,    43,     8
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -27,   -27,   -27,     4,   -27,   -27,    19,   -27,   -27,   -27,
     -27,   -27,    33,   -27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     4,    38,    46,    39,    13,    21,    22,    14,
      55,    15,    40,    63
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       2,    17,    18,    47,    48,    49,    50,    51,    52,     5,
      53,    54,    16,     6,    19,    20,     7,     8,     9,    10,
      11,    12,    30,    58,    44,     3,    59,    60,    61,    62,
      23,    24,    25,    26,    27,    28,    31,    32,    33,    34,
      35,    36,    37,    45,    41,    42,    43,    57,    29,    56
};

static const yytype_int8 yycheck[] =
{
       0,    27,    28,     9,    10,    11,    12,    13,    14,    33,
      16,    17,    34,    15,    40,    41,    18,    19,    20,    21,
      22,    23,    35,    26,    36,    25,    29,    30,    31,    32,
       3,     4,     5,     6,     7,     8,    17,    18,    19,    20,
      37,    38,    39,    27,    24,    24,    24,    37,    15,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    43,     0,    25,    44,    33,    15,    18,    19,    20,
      21,    22,    23,    48,    51,    53,    34,    27,    28,    40,
      41,    49,    50,     3,     4,     5,     6,     7,     8,    54,
      35,    48,    48,    48,    48,    37,    38,    39,    45,    47,
      54,    24,    24,    24,    36,    27,    46,     9,    10,    11,
      12,    13,    14,    16,    17,    52,    45,    37,    26,    29,
      30,    31,    32,    55
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    43,    44,    45,    45,    46,    47,    48,
      48,    48,    48,    49,    50,    51,    51,    51,    52,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    53,    53,
      53,    53,    53,    54,    54,    54,    54,    54,    54,    55,
      55,    55,    55,    55,    49,    50
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     7,     2,     1,     2,     4,     2,
       2,     1,     0,     2,     2,     4,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
                 int yyrule)
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
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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

  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
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
  yychar = YYEMPTY;
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
  case 8: /* action: room device '=' switch  */
#line 74 "dom.y"
                               {
            if (globysl==1) {
                if (yyvsp[-2]==DOOR) {
                    if (yyvsp[0]==OPEN) {
                        magnestconnected = 1;
                    }
                    if (yyvsp[0]==CLOSE) {    
                        magnestconnected = 0;
                    }
                }
                if (yyvsp[-2]==LIVINGROOMWINDOW) {
                    if (yyvsp[0]==OPEN) {
                        if (yyvsp[-3]==LIVINGROOM) { 
                            livingroomwindow = 1;
                        }
                    } else {
                        if (yyvsp[-3]==LIVINGROOM) { 
                            livingroomwindow = 0;
                        }
                    }
                } else if (yyvsp[-2]==BEDROOMWINDOW) {
                    if (yyvsp[0]==OPEN) {
                        if (yyvsp[-3]==BEDROOM) { 
                            bedroomwindow = 1;
                        }
                    } else {
                        if (yyvsp[-3]==BEDROOM) { 
                            bedroomwindow = 0;
                        }
                    }
                }
                if (yyvsp[-2]==LIGHT) {
                    if (yyvsp[0]==ON) {
                            if (yyvsp[-3]==HALLAWAY) {
                                shallaway=1;
                            } else if (yyvsp[-3]==LIVINGROOM) {
                                slivingroom=1;
                            } else if (yyvsp[-3]==BEDROOM) {
                                sbedroom = 1;
                            } else if (yyvsp[-3]==KITCHEN) {
                                skitchen = 1;
                            } else if (yyvsp[-3]==BATHROOM) {
                                sbathroom = 1;
                            } else if (yyvsp[-3]==PANTRY) {
                                spantry = 1;
                            }
                    }
                }
                if (yyvsp[-2]==KITCHEN) {
                    if (yyvsp[0]==ON) {
                        kitchenhood = 1;
                    }
                }
                if (yyvsp[-3]==BATHROOM) {
                    if (yyvsp[-2]==MASSAGE) {
                        if (yyvsp[0]==SENT){
                            massagesent = 1;
                        }
                    }
                    if (yyvsp[-2]==MIXERTAP) {
                        if (yyvsp[0]==ON) {
                            mixertap = 1;
                        }
                    }
                }
            }
        }
#line 1367 "y.tab.c"
    break;

  case 9: /* packysl: ysl orysl  */
#line 143 "dom.y"
                  {globysl=0; if ((yyvsp[-1]==1) || (yyvsp[0]==1)) {globysl=1;}}
#line 1373 "y.tab.c"
    break;

  case 10: /* packysl: ysl andysl  */
#line 145 "dom.y"
                   {globysl=0; if  ((yyvsp[-1]==1) && (yyvsp[0]==1)) {globysl=1;}}
#line 1379 "y.tab.c"
    break;

  case 11: /* packysl: ysl  */
#line 147 "dom.y"
            {globysl=0; if  (yyvsp[0]==1) {yyval=1; globysl=1;}}
#line 1385 "y.tab.c"
    break;

  case 13: /* andysl: AND packysl  */
#line 151 "dom.y"
                    {yyval=yyvsp[0];}
#line 1391 "y.tab.c"
    break;

  case 14: /* orysl: OR packysl  */
#line 154 "dom.y"
                   {yyval=yyvsp[0];}
#line 1397 "y.tab.c"
    break;

  case 15: /* ysl: sensor room '<' VALUE  */
#line 157 "dom.y"
                              {
            if (yyvsp[-3]==MOVE) {
                if (yyvsp[-2]==HALLAWAY) {
                    if (senshallaway < yyvsp[0]) { 
                        yyval=1;
                    }
                }
                else if (yyvsp[-2]==LIVINGROOM) {
                    if (senslivingroom < yyvsp[0]) {
                        yyval=1;
                    }
                }
                else if (yyvsp[-2]==BEDROOM) {
                    if (sensbedroom < yyvsp[0]) {
                        yyval=1;
                    }
                }
                else if (yyvsp[-2]==KITCHEN) {
                    if (senskitchen < yyvsp[0]) {
                        yyval=1;
                    }
                }
                else if (yyvsp[-2]==BATHROOM) {
                    if (sensbathroom < yyvsp[0]) {
                        yyval=1;
                    }
                }
                else if (yyvsp[-2]==PANTRY) {
                    if (senspantry < yyvsp[0]) {
                        yyval=1;
                    }
                }
            }
        }
#line 1436 "y.tab.c"
    break;

  case 16: /* ysl: sensor room '=' VALUE  */
#line 192 "dom.y"
                              {
            if (yyvsp[-3]==WLIVINGROOMM) {
                if (wlivingroomm == 2 || wlivingroomm == 4 || wlivingroomm == 9) {
                        yyval=1;
                    }
            } else if (yyvsp[-3]==WBEDROOMM) {
                if (wbedroomm == 2 || wbedroomm == 4 || wbedroomm == 9) {
                        yyval=1;
                    }
                }
            if (yyvsp[-3]==WATER) {
                if (yyvsp[-2]==BATHROOM) {
                    if (yyvsp[0]==1) {
                        if (waterleakage == yyvsp[0]) {
                            yyval=1;
                        }
                    }
                }
            }
            if (yyvsp[-3]==LVLBATH) {
                if (yyvsp[-2]==BATHROOM) {
                    if (lvlbath = sensbathlvl) {
                        yyval=1;
                    }
                }
            }
        }
#line 1468 "y.tab.c"
    break;

  case 17: /* ysl: sensor room '>' VALUE  */
#line 220 "dom.y"
                              {
            if (yyvsp[-3]==GAS) {
                if (yyvsp[-2]==KITCHEN) {
                    if (sensgas > yyvsp[0]) {
                        yyval=1;
                    }
                }
            }
        }
#line 1482 "y.tab.c"
    break;

  case 44: /* andysl: '&' packysl  */
#line 287 "dom.y"
                    {yyval=yyvsp[0];}
#line 1488 "y.tab.c"
    break;

  case 45: /* orysl: '|' packysl  */
#line 290 "dom.y"
                    {yyval=yyvsp[0];}
#line 1494 "y.tab.c"
    break;


#line 1498 "y.tab.c"

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 292 "dom.y"

void readsensors(){
    fscanf(Kurs_in,"температура в гостинной = %d\n",&wlivingroomm);
    fscanf(Kurs_in,"температура в спальне = %d\n",&wbedroomm);
    fscanf(Kurs_in,"свет в прихожей =  %d\n",&senshallaway);
    fscanf(Kurs_in,"свет в гостинной =  %d\n",&senslivingroom);
    fscanf(Kurs_in,"свет в спальне =  %d\n",&sensbedroom);
    fscanf(Kurs_in,"свет на кухне =  %d\n",&senskitchen);
    fscanf(Kurs_in,"свет в ванной =  %d\n",&sensbathroom);
    fscanf(Kurs_in,"свет в кладовке =  %d\n",&senspantry);
    fscanf(Kurs_in,"Дверь в прихожую = %d\n",&magnestconnected);
    fscanf(Kurs_in,"Газ на кухне = %d\n",&kitchenhood);
    fscanf(Kurs_in,"Кран в ванной = %d\n",&waterleakage);
    fscanf(Kurs_in,"Вода в ванной = %d\n",&sensbathlvl);
    fscanf(Kurs_in,"---\n");
}

void printresoners() {
        if (shallaway==1) {
            fprintf(yyout, "Свет в прихожей включен\n");
        } else {
           fprintf(yyout, "Свет в прихожей выключен\n");
        }
        if (slivingroom==1) {
            fprintf(yyout, "Свет в гостинной включен\n");
        } else {
            fprintf(yyout, "Свет в гостинной выключен\n");
        }
        if (sbedroom==1) {
            fprintf(yyout, "Свет в спальне включен\n");
        } else {
            fprintf(yyout, "Свет в спальне выключен\n");
        }
        if (skitchen==1) {
            fprintf(yyout, "Свет на кухне включен\n");
        } else {
            fprintf(yyout, "Свет на кухне выключен\n");
        }
        if (sbathroom==1) {
            fprintf(yyout, "Свет в ванной включен\n");
        } else {
            fprintf(yyout, "Свет в ванной выключен\n");
        }
        if (spantry==1) {
            fprintf(yyout, "Свет в кладовке включен\n");
        } else {
            fprintf(yyout, "Свет в кладовке выключен\n");
        }
        if (magnestconnected == 1) {
            fprintf(yyout, "Дверь в прихожую закрыта\n");
        } else {
            fprintf(yyout, "Дверь в прихожую открыта\n");
        }
        if (livingroomwindow == 1) {
            fprintf(yyout, "Окно в гостинной открыто\n");
        } else {
            fprintf(yyout, "Окно в гостинной закрыто\n");
        } 
        if (bedroomwindow == 1) {
            fprintf(yyout, "Окно в спальне открыто\n");
        } else {
            fprintf(yyout, "Окно в спальне закрыто\n");
        }
        if (kitchenhood == 0 && sensgas == 0) {
            fprintf(yyout, "Газ и вытяжка отключены \n");
        } else if (kitchenhood == 0 && sensgas == 1) {
            fprintf(yyout, "Газ обнаружен, вытяжка отключена\n");
        } else if (kitchenhood == 1 && sensgas == 0) {
            fprintf(yyout, "Газа нет, вытяжка включена\n");
        } else if (kitchenhood == 1 && sensgas == 1) {
            fprintf(yyout, "Газ и вытяжка включены\n");
        }
        if (lvlbath == sensbathlvl && mixertap == 1) {
            fprintf(yyout, "Ванна полная, кран отключается\n");
        } else if (lvlbath == sensbathlvl && mixertap == 0) {
        }
        if (lvlbath < sensbathlvl && mixertap == 1) {
            fprintf(yyout, "Ванна наполняется\n");
        } else if (lvlbath < sensbathlvl && mixertap == 0) {
            fprintf(yyout, "Сейчас ванна будет наполняться\n");
        }
        if (lvlbath > sensbathlvl && mixertap == 1) {
            fprintf(yyout, "Ванна полная но кран включен, выключаем.\n");
        } else if (lvlbath > sensbathlvl && mixertap == 1) {
            fprintf(yyout, "Ванна полная кран выключен\n");
        }
        if (waterleakage == 0 && massagesent == 0) {
            fprintf(yyout, "Утечки воды нет\n");
        } else if (waterleakage == 1 && massagesent == 0) {
            fprintf(yyout, "Утечка есть, сообщение о ней сейчас будет отправленно\n");
            massagesent = 1;
        } else if (waterleakage == 0 && massagesent == 1) {
            fprintf(yyout, "Утечки нет, но сообщение случайно отправилось\n");
            massagesent = 0;
        } else if (waterleakage == 1 && massagesent == 1) {
            fprintf(yyout, "Утечка есть, сообщение уже отправленно\n");
        }
        fprintf(yyout, "---конец отчета----\n");
}

int main() {
    Kurs_in = fopen("dom_in.txt", "r");
    if (Kurs_in==NULL) {
        printf("Не могу открыть файл\n");
    }
    yyin = fopen("dom_sc.txt", "r");
    yyout = fopen("dom_out.txt", "w");
    
    while (!feof(Kurs_in)) {
        rewind(yyin);
        readsensors();
        yyparse();
        printresoners();

    }
    fclose(Kurs_in);
    fclose(yyin);
    fclose(yyout);
    return 0;
}

