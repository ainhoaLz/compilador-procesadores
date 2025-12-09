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
#line 2 "parser.y"

    #include <stdio.h>
    #include <string.h>
    #include "nombresDeTipos.h"
	#include "literal.h"
	#include "listaId.h"
	#include "tablaDeSimbolos.h"
	#include "tablaDeCuadruplas.h"
	#include "listaEnteros.h"

    int yylex(); // Usamos la funcion que se crea gracias a flex
    void yyerror(char *); // Prototipo de una funcion necesaria
    extern FILE* yyin;
    TablaDeSimbolos ts;
    TablaCuadruplas tc;
    int tempCont;
    #define YYDEBUG 1

#line 90 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_constTK = 3,                    /* constTK  */
  YYSYMBOL_fconstTK = 4,                   /* fconstTK  */
  YYSYMBOL_igualTK = 5,                    /* igualTK  */
  YYSYMBOL_separadorTK = 6,                /* separadorTK  */
  YYSYMBOL_dosPuntosTK = 7,                /* dosPuntosTK  */
  YYSYMBOL_aperturaParentesisTK = 8,       /* aperturaParentesisTK  */
  YYSYMBOL_cierreParentesisTK = 9,         /* cierreParentesisTK  */
  YYSYMBOL_aperturaArrayTK = 10,           /* aperturaArrayTK  */
  YYSYMBOL_cierreArrayTK = 11,             /* cierreArrayTK  */
  YYSYMBOL_aperturaComentarioTK = 12,      /* aperturaComentarioTK  */
  YYSYMBOL_cierreComentarioTK = 13,        /* cierreComentarioTK  */
  YYSYMBOL_sumaYrestaTK = 14,              /* sumaYrestaTK  */
  YYSYMBOL_negacionTK = 15,                /* negacionTK  */
  YYSYMBOL_deTK = 16,                      /* deTK  */
  YYSYMBOL_puntoYcomaTK = 17,              /* puntoYcomaTK  */
  YYSYMBOL_comparacionTK = 18,             /* comparacionTK  */
  YYSYMBOL_divisionYmultiplicacionTK = 19, /* divisionYmultiplicacionTK  */
  YYSYMBOL_tipoTK = 20,                    /* tipoTK  */
  YYSYMBOL_ftipoTK = 21,                   /* ftipoTK  */
  YYSYMBOL_referenciaTK = 22,              /* referenciaTK  */
  YYSYMBOL_devolverTK = 23,                /* devolverTK  */
  YYSYMBOL_continuarTK = 24,               /* continuarTK  */
  YYSYMBOL_subrangoTK = 25,                /* subrangoTK  */
  YYSYMBOL_yTK = 26,                       /* yTK  */
  YYSYMBOL_oTK = 27,                       /* oTK  */
  YYSYMBOL_hastaTK = 28,                   /* hastaTK  */
  YYSYMBOL_tablaTK = 29,                   /* tablaTK  */
  YYSYMBOL_varTK = 30,                     /* varTK  */
  YYSYMBOL_finVarTK = 31,                  /* finVarTK  */
  YYSYMBOL_mientrasTK = 32,                /* mientrasTK  */
  YYSYMBOL_condicionMientrasTK = 33,       /* condicionMientrasTK  */
  YYSYMBOL_finMientrasTK = 34,             /* finMientrasTK  */
  YYSYMBOL_literalTuplaTK = 35,            /* literalTuplaTK  */
  YYSYMBOL_finLiteralTuplaTK = 36,         /* finLiteralTuplaTK  */
  YYSYMBOL_algoritmoTK = 37,               /* algoritmoTK  */
  YYSYMBOL_falgoritmoTK = 38,              /* falgoritmoTK  */
  YYSYMBOL_accionTK = 39,                  /* accionTK  */
  YYSYMBOL_faccionTK = 40,                 /* faccionTK  */
  YYSYMBOL_funcionTK = 41,                 /* funcionTK  */
  YYSYMBOL_ffuncionTK = 42,                /* ffuncionTK  */
  YYSYMBOL_entradaTK = 43,                 /* entradaTK  */
  YYSYMBOL_salidaTK = 44,                  /* salidaTK  */
  YYSYMBOL_entradaSalidaTK = 45,           /* entradaSalidaTK  */
  YYSYMBOL_asignacionTK = 46,              /* asignacionTK  */
  YYSYMBOL_condicionSiTK = 47,             /* condicionSiTK  */
  YYSYMBOL_finCondicionSiTK = 48,          /* finCondicionSiTK  */
  YYSYMBOL_condicionEntoncesTK = 49,       /* condicionEntoncesTK  */
  YYSYMBOL_condicionParaTK = 50,           /* condicionParaTK  */
  YYSYMBOL_finCondicionParaTK = 51,        /* finCondicionParaTK  */
  YYSYMBOL_condicionSiNoTK = 52,           /* condicionSiNoTK  */
  YYSYMBOL_tipoVarTK = 53,                 /* tipoVarTK  */
  YYSYMBOL_identificadoresTK = 54,         /* identificadoresTK  */
  YYSYMBOL_nombreConstanteTK = 55,         /* nombreConstanteTK  */
  YYSYMBOL_puntoTK = 56,                   /* puntoTK  */
  YYSYMBOL_literalTK = 57,                 /* literalTK  */
  YYSYMBOL_verdaderoTK = 58,               /* verdaderoTK  */
  YYSYMBOL_falsoTK = 59,                   /* falsoTK  */
  YYSYMBOL_precondicionTK = 60,            /* precondicionTK  */
  YYSYMBOL_postcondicionTK = 61,           /* postcondicionTK  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_desc_algoritmo = 63,            /* desc_algoritmo  */
  YYSYMBOL_cabecera_alg = 64,              /* cabecera_alg  */
  YYSYMBOL_comentario = 65,                /* comentario  */
  YYSYMBOL_bloque_alg = 66,                /* bloque_alg  */
  YYSYMBOL_decl_globales = 67,             /* decl_globales  */
  YYSYMBOL_decl_a_f = 68,                  /* decl_a_f  */
  YYSYMBOL_bloque = 69,                    /* bloque  */
  YYSYMBOL_declaraciones = 70,             /* declaraciones  */
  YYSYMBOL_expresion = 71,                 /* expresion  */
  YYSYMBOL_M = 72,                         /* M  */
  YYSYMBOL_operando = 73,                  /* operando  */
  YYSYMBOL_accion_d = 74,                  /* accion_d  */
  YYSYMBOL_funcion_d = 75,                 /* funcion_d  */
  YYSYMBOL_a_cabecera = 76,                /* a_cabecera  */
  YYSYMBOL_f_cabecera = 77,                /* f_cabecera  */
  YYSYMBOL_d_par_form = 78,                /* d_par_form  */
  YYSYMBOL_d_p_form = 79,                  /* d_p_form  */
  YYSYMBOL_declaracion_tipo = 80,          /* declaracion_tipo  */
  YYSYMBOL_lista_de_tipo = 81,             /* lista_de_tipo  */
  YYSYMBOL_d_tipo = 82,                    /* d_tipo  */
  YYSYMBOL_lista_campos = 83,              /* lista_campos  */
  YYSYMBOL_decl_ent = 84,                  /* decl_ent  */
  YYSYMBOL_decl_sal = 85,                  /* decl_sal  */
  YYSYMBOL_lista_d_var = 86,               /* lista_d_var  */
  YYSYMBOL_lista_id = 87,                  /* lista_id  */
  YYSYMBOL_decl_ent_sal = 88,              /* decl_ent_sal  */
  YYSYMBOL_instrucciones = 89,             /* instrucciones  */
  YYSYMBOL_instruccion = 90,               /* instruccion  */
  YYSYMBOL_asignacion = 91,                /* asignacion  */
  YYSYMBOL_alternativa = 92,               /* alternativa  */
  YYSYMBOL_lista_opciones = 93,            /* lista_opciones  */
  YYSYMBOL_iteracion = 94,                 /* iteracion  */
  YYSYMBOL_it_cota_exp = 95,               /* it_cota_exp  */
  YYSYMBOL_it_cota_fija = 96,              /* it_cota_fija  */
  YYSYMBOL_accion_ll = 97,                 /* accion_ll  */
  YYSYMBOL_funcion_ll = 98,                /* funcion_ll  */
  YYSYMBOL_l_ll = 99,                      /* l_ll  */
  YYSYMBOL_declaracionConstantesV = 100,   /* declaracionConstantesV  */
  YYSYMBOL_listaDeclConstantesV = 101,     /* listaDeclConstantesV  */
  YYSYMBOL_declaracionDeConstanteV = 102,  /* declaracionDeConstanteV  */
  YYSYMBOL_declaracionVariablesV = 103,    /* declaracionVariablesV  */
  YYSYMBOL_listaDeclVariablesV = 104,      /* listaDeclVariablesV  */
  YYSYMBOL_declaracionDeVariablesV = 105   /* declaracionDeVariablesV  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   293

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  220

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   111,   111,   113,   115,   116,   117,   119,   121,   122,
     123,   125,   126,   127,   129,   131,   132,   133,   134,   136,
     174,   212,   218,   224,   225,   231,   237,   242,   247,   252,
     253,   254,   260,   262,   266,   274,   275,   276,   278,   280,
     282,   284,   286,   287,   289,   290,   291,   293,   295,   296,
     298,   299,   300,   301,   302,   303,   305,   306,   308,   310,
     312,   313,   315,   319,   326,   327,   328,   330,   331,   333,
     334,   335,   336,   337,   338,   340,   349,   351,   352,   354,
     355,   357,   359,   361,   363,   365,   366,   368,   372,   375,
     379,   383,   387,   390,   393,   395
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
  "\"end of file\"", "error", "\"invalid token\"", "constTK", "fconstTK",
  "igualTK", "separadorTK", "dosPuntosTK", "aperturaParentesisTK",
  "cierreParentesisTK", "aperturaArrayTK", "cierreArrayTK",
  "aperturaComentarioTK", "cierreComentarioTK", "sumaYrestaTK",
  "negacionTK", "deTK", "puntoYcomaTK", "comparacionTK",
  "divisionYmultiplicacionTK", "tipoTK", "ftipoTK", "referenciaTK",
  "devolverTK", "continuarTK", "subrangoTK", "yTK", "oTK", "hastaTK",
  "tablaTK", "varTK", "finVarTK", "mientrasTK", "condicionMientrasTK",
  "finMientrasTK", "literalTuplaTK", "finLiteralTuplaTK", "algoritmoTK",
  "falgoritmoTK", "accionTK", "faccionTK", "funcionTK", "ffuncionTK",
  "entradaTK", "salidaTK", "entradaSalidaTK", "asignacionTK",
  "condicionSiTK", "finCondicionSiTK", "condicionEntoncesTK",
  "condicionParaTK", "finCondicionParaTK", "condicionSiNoTK", "tipoVarTK",
  "identificadoresTK", "nombreConstanteTK", "puntoTK", "literalTK",
  "verdaderoTK", "falsoTK", "precondicionTK", "postcondicionTK", "$accept",
  "desc_algoritmo", "cabecera_alg", "comentario", "bloque_alg",
  "decl_globales", "decl_a_f", "bloque", "declaraciones", "expresion", "M",
  "operando", "accion_d", "funcion_d", "a_cabecera", "f_cabecera",
  "d_par_form", "d_p_form", "declaracion_tipo", "lista_de_tipo", "d_tipo",
  "lista_campos", "decl_ent", "decl_sal", "lista_d_var", "lista_id",
  "decl_ent_sal", "instrucciones", "instruccion", "asignacion",
  "alternativa", "lista_opciones", "iteracion", "it_cota_exp",
  "it_cota_fija", "accion_ll", "funcion_ll", "l_ll",
  "declaracionConstantesV", "listaDeclConstantesV",
  "declaracionDeConstanteV", "declaracionVariablesV",
  "listaDeclVariablesV", "declaracionDeVariablesV", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-108)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-53)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,    -7,    71,    42,  -108,    31,    21,    29,    18,   -29,
      31,    31,    82,     5,  -108,    92,    85,    54,    86,    12,
     128,    18,    18,    18,    79,    96,    46,   -29,   -29,  -108,
    -108,    94,  -108,    21,    11,  -108,   151,   157,    22,  -108,
     102,   112,  -108,  -108,  -108,  -108,     3,     3,   113,   161,
      -2,  -108,   148,  -108,  -108,  -108,  -108,  -108,  -108,  -108,
    -108,  -108,   162,    18,   166,    18,    54,    54,   133,  -108,
      12,  -108,  -108,  -108,  -108,     3,     3,     3,    11,   169,
     131,  -108,    35,  -108,  -108,  -108,   196,    19,   171,  -108,
      54,   130,    54,  -108,  -108,   176,   182,   154,    91,   150,
       3,     3,  -108,     3,   140,   128,    59,   163,    54,   188,
    -108,   195,  -108,  -108,  -108,   211,    23,   245,  -108,     3,
     197,   177,     3,     3,     3,     3,     3,     3,  -108,  -108,
      29,  -108,  -108,  -108,  -108,   128,   128,     3,   213,   208,
     230,   245,  -108,   214,  -108,    54,    54,    54,   217,   219,
    -108,    77,     3,    11,  -108,   228,    11,  -108,   225,    87,
      23,   262,    40,   245,     3,     3,  -108,   194,   191,   181,
       3,  -108,  -108,   238,   244,   253,   251,    59,   239,   129,
     252,     3,   258,  -108,  -108,  -108,  -108,     3,   222,     3,
    -108,    11,    11,    11,  -108,  -108,    11,  -108,    54,   247,
     131,   127,  -108,   179,  -108,  -108,  -108,   260,  -108,   263,
    -108,   128,   128,  -108,    11,   191,   227,  -108,  -108,  -108
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,    10,     0,    49,    18,    13,
      10,    10,     0,     0,    88,     0,     0,    94,     0,     0,
      74,    18,    18,    18,     0,     0,     0,    13,    13,     8,
       9,     0,    87,     0,     0,    47,    63,     0,     0,    92,
       0,     0,     5,     6,     7,    69,     0,     0,     0,    34,
       0,    14,    68,    70,    71,    72,    80,    79,    73,    15,
      16,    17,     0,    18,     0,    18,    61,    61,    64,    66,
       0,    11,    12,    90,    89,     0,     0,     0,     0,     0,
      57,    55,    34,    22,    27,    28,     0,    21,     0,    32,
       0,     0,    94,    91,     2,     0,    34,     0,     0,     0,
       0,     0,    37,     0,     0,    74,    43,     0,    94,     0,
      58,     0,    59,    65,     3,     0,    23,    26,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,    33,
      49,    62,    95,    93,     4,    74,    74,     0,    86,     0,
       0,    75,    34,    35,    67,     0,     0,     0,     0,     0,
      38,     0,     0,     0,    31,     0,     0,    50,     0,    30,
      19,    29,    20,    53,     0,     0,    48,     0,    78,     0,
       0,    83,    36,     0,     0,     0,     0,    43,     0,     0,
       0,     0,     0,    84,    24,    25,    81,     0,     0,     0,
      85,     0,     0,     0,    40,    42,     0,    39,    61,     0,
      57,     0,    76,     0,    44,    45,    46,     0,    60,     0,
      56,    74,    74,    41,     0,    78,     0,    51,    77,    82
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,  -108,   212,  -108,   119,   111,   -49,   100,   -45,
     155,   -20,  -108,  -108,  -108,  -108,   106,  -108,    88,   156,
     -65,    93,  -108,   223,   -61,   -63,  -108,  -100,  -108,  -108,
    -108,    70,  -108,  -108,  -108,  -108,  -108,  -107,    90,   254,
    -108,  -108,   -85,    16
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    44,    18,     9,    26,    19,    20,    86,
     164,    87,    27,    28,    63,    65,   148,   149,    21,    16,
      88,   121,    68,    69,   110,    37,    70,    51,    52,    53,
      54,   188,    55,    56,    57,    58,    89,   139,    22,    13,
      14,    23,    38,    39
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    97,    98,   111,   111,   144,   112,   133,   101,    32,
      24,    75,    25,   118,   107,   158,   109,    76,    77,    75,
     102,     6,    33,   151,    41,    76,    77,   131,   123,   101,
     115,   116,   117,    78,     6,   167,   168,     1,     7,    92,
      79,   102,   126,   122,   103,   123,    80,     3,    17,   128,
     129,     7,   -52,    93,   104,   138,   140,    96,   141,     5,
      83,    84,    85,   190,    81,    82,   128,   129,    83,    84,
      85,     4,    42,    43,   155,   104,    12,   138,   159,   160,
     161,   162,   163,    15,   143,    50,   178,    31,   180,    66,
      67,   182,   169,    10,    92,    11,   123,    34,    10,    10,
      11,    11,   145,   146,   147,   124,    35,   179,    36,   125,
     126,   215,   216,   128,   129,    50,    50,   128,   129,   184,
     185,    59,    60,    61,    40,   138,   204,   205,   206,    29,
      30,   207,   123,    62,   123,   111,   199,   208,    71,    72,
     136,   124,   201,   124,   203,   125,   126,   125,   126,   217,
      64,    73,    45,   128,   129,   128,   129,    90,    94,   123,
      46,   173,   174,   175,    91,   105,    95,    99,   124,   100,
     106,   197,   125,   126,   108,    47,   211,    67,    48,   119,
     128,   129,    49,   132,   123,   120,   123,   135,   130,   134,
     122,    50,    50,   124,   142,   124,   137,   125,   126,   125,
     126,   123,   153,   150,   156,   128,   129,   128,   129,   189,
     124,   152,   212,   157,   125,   126,   123,   171,   123,   170,
     154,   127,   128,   129,   101,   124,   176,   124,   186,   125,
     126,   125,   126,   123,   183,   123,   177,   128,   129,   128,
     129,   172,   124,   187,   124,   191,   125,   126,   125,   126,
     123,   192,   123,   181,   128,   129,   128,   129,   209,   124,
     193,   124,   196,   125,   126,   125,   126,   123,   194,   198,
     202,   128,   129,   128,   129,   200,   124,   213,   219,   214,
     -53,   126,   114,   195,   165,   218,   166,    74,   128,   129,
       0,   113,     0,   210
};

static const yytype_int16 yycheck[] =
{
      20,    46,    47,    66,    67,   105,    67,    92,    10,     4,
      39,     8,    41,    78,    63,   122,    65,    14,    15,     8,
      22,     3,    17,   108,    12,    14,    15,    90,     5,    10,
      75,    76,    77,    22,     3,   135,   136,    37,    20,    17,
      29,    22,    19,     8,    46,     5,    35,    54,    30,    26,
      27,    20,    17,    31,    56,   100,   101,    54,   103,    17,
      57,    58,    59,   170,    53,    54,    26,    27,    57,    58,
      59,     0,    60,    61,   119,    56,    55,   122,   123,   124,
     125,   126,   127,    54,   104,   105,     9,     5,   153,    43,
      44,   156,   137,     5,    17,     5,     5,     5,    10,    11,
      10,    11,    43,    44,    45,    14,    21,   152,    54,    18,
      19,   211,   212,    26,    27,   135,   136,    26,    27,   164,
     165,    21,    22,    23,    38,   170,   191,   192,   193,    10,
      11,   196,     5,    54,     5,   198,   181,   198,    27,    28,
      49,    14,   187,    14,   189,    18,    19,    18,    19,   214,
      54,    57,    24,    26,    27,    26,    27,     6,    56,     5,
      32,   145,   146,   147,     7,    17,    54,    54,    14,     8,
       8,    42,    18,    19,     8,    47,    49,    44,    50,    10,
      26,    27,    54,    53,     5,    54,     5,    33,    17,    13,
       8,   211,   212,    14,    54,    14,    46,    18,    19,    18,
      19,     5,     7,    40,     7,    26,    27,    26,    27,    28,
      14,    23,    33,    36,    18,    19,     5,     9,     5,     6,
       9,    25,    26,    27,    10,    14,     9,    14,    34,    18,
      19,    18,    19,     5,     9,     5,    17,    26,    27,    26,
      27,    11,    14,    52,    14,     7,    18,    19,    18,    19,
       5,     7,     5,    25,    26,    27,    26,    27,    11,    14,
       7,    14,    23,    18,    19,    18,    19,     5,    17,    17,
      48,    26,    27,    26,    27,    17,    14,    17,    51,    16,
      18,    19,    70,   177,   129,   215,   130,    33,    26,    27,
      -1,    68,    -1,   200
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    37,    63,    54,     0,    17,     3,    20,    64,    67,
      80,   100,    55,   101,   102,    54,    81,    30,    66,    69,
      70,    80,   100,   103,    39,    41,    68,    74,    75,    67,
      67,     5,     4,    17,     5,    21,    54,    87,   104,   105,
      38,    12,    60,    61,    65,    24,    32,    47,    50,    54,
      73,    89,    90,    91,    92,    94,    95,    96,    97,    70,
      70,    70,    54,    76,    54,    77,    43,    44,    84,    85,
      88,    68,    68,    57,   101,     8,    14,    15,    22,    29,
      35,    53,    54,    57,    58,    59,    71,    73,    82,    98,
       6,     7,    17,    31,    56,    54,    54,    71,    71,    54,
       8,    10,    22,    46,    56,    17,     8,    69,     8,    69,
      86,    87,    86,    85,    65,    71,    71,    71,    82,    10,
      54,    83,     8,     5,    14,    18,    19,    25,    26,    27,
      17,    87,    53,   104,    13,    33,    49,    46,    71,    99,
      71,    71,    54,    73,    89,    43,    44,    45,    78,    79,
      40,   104,    23,     7,     9,    71,     7,    36,    99,    71,
      71,    71,    71,    71,    72,    72,    81,    89,    89,    71,
       6,     9,    11,   105,   105,   105,     9,    17,     9,    71,
      82,    25,    82,     9,    71,    71,    34,    52,    93,    28,
      99,     7,     7,     7,    17,    78,    23,    42,    17,    71,
      17,    71,    48,    71,    82,    82,    82,    82,    86,    11,
      83,    49,    33,    17,    16,    89,    89,    82,    93,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    65,    65,    65,    66,    67,    67,
      67,    68,    68,    68,    69,    70,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    73,    73,    73,    73,    74,    75,
      76,    77,    78,    78,    79,    79,    79,    80,    81,    81,
      82,    82,    82,    82,    82,    82,    83,    83,    84,    85,
      86,    86,    87,    87,    88,    88,    88,    89,    89,    90,
      90,    90,    90,    90,    90,    91,    92,    93,    93,    94,
      94,    95,    96,    97,    98,    99,    99,   100,   101,   101,
     102,   103,   104,   104,   104,   105
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     3,     1,     1,     2,     2,     2,
       0,     2,     2,     0,     2,     2,     2,     2,     0,     3,
       3,     1,     1,     2,     4,     4,     2,     1,     1,     3,
       3,     3,     1,     0,     1,     3,     4,     2,     4,     6,
       5,     7,     3,     0,     4,     4,     4,     3,     5,     0,
       3,     8,     1,     3,     2,     1,     5,     0,     2,     2,
       5,     0,     3,     1,     1,     2,     1,     3,     1,     1,
       1,     1,     1,     1,     0,     3,     6,     5,     0,     1,
       1,     5,     9,     4,     4,     3,     1,     3,     1,     3,
       3,     3,     1,     3,     0,     3
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
  case 2: /* desc_algoritmo: algoritmoTK identificadoresTK puntoYcomaTK cabecera_alg bloque_alg falgoritmoTK puntoTK  */
#line 111 "parser.y"
                                                                                                        {}
#line 1354 "parser.tab.c"
    break;

  case 3: /* cabecera_alg: decl_globales decl_a_f decl_ent_sal comentario  */
#line 113 "parser.y"
                                                             {}
#line 1360 "parser.tab.c"
    break;

  case 4: /* comentario: aperturaComentarioTK identificadoresTK cierreComentarioTK  */
#line 115 "parser.y"
                                                                      {}
#line 1366 "parser.tab.c"
    break;

  case 5: /* comentario: precondicionTK  */
#line 116 "parser.y"
                     {}
#line 1372 "parser.tab.c"
    break;

  case 6: /* comentario: postcondicionTK  */
#line 117 "parser.y"
                       {}
#line 1378 "parser.tab.c"
    break;

  case 7: /* bloque_alg: bloque comentario  */
#line 119 "parser.y"
                              {}
#line 1384 "parser.tab.c"
    break;

  case 8: /* decl_globales: declaracion_tipo decl_globales  */
#line 121 "parser.y"
                                              {}
#line 1390 "parser.tab.c"
    break;

  case 9: /* decl_globales: declaracionConstantesV decl_globales  */
#line 122 "parser.y"
                                           {}
#line 1396 "parser.tab.c"
    break;

  case 10: /* decl_globales: %empty  */
#line 123 "parser.y"
               {}
#line 1402 "parser.tab.c"
    break;

  case 11: /* decl_a_f: accion_d decl_a_f  */
#line 125 "parser.y"
                            {}
#line 1408 "parser.tab.c"
    break;

  case 12: /* decl_a_f: funcion_d decl_a_f  */
#line 126 "parser.y"
                         {}
#line 1414 "parser.tab.c"
    break;

  case 13: /* decl_a_f: %empty  */
#line 127 "parser.y"
               {}
#line 1420 "parser.tab.c"
    break;

  case 14: /* bloque: declaraciones instrucciones  */
#line 129 "parser.y"
                                    {}
#line 1426 "parser.tab.c"
    break;

  case 15: /* declaraciones: declaracion_tipo declaraciones  */
#line 131 "parser.y"
                                              {}
#line 1432 "parser.tab.c"
    break;

  case 16: /* declaraciones: declaracionConstantesV declaraciones  */
#line 132 "parser.y"
                                           {}
#line 1438 "parser.tab.c"
    break;

  case 17: /* declaraciones: declaracionVariablesV declaraciones  */
#line 133 "parser.y"
                                          {}
#line 1444 "parser.tab.c"
    break;

  case 18: /* declaraciones: %empty  */
#line 134 "parser.y"
               {}
#line 1450 "parser.tab.c"
    break;

  case 19: /* expresion: expresion sumaYrestaTK expresion  */
#line 136 "parser.y"
                                            {
         infoVariable temp;
         if((yyvsp[-2].info).tipo == ENTERO && (yyvsp[0].info).tipo == ENTERO){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = ENTERO;
             agregarCuadrupla(&tc, nuevaCuadrupla((yyvsp[-1].cadena), (yyvsp[-2].info), (yyvsp[0].info), temp));
             (yyval.info) = temp;
         }else if((yyvsp[-2].info).tipo == ENTERO && (yyvsp[0].info).tipo == REAL){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = REAL;
             agregarCuadrupla(&tc, nuevaCuadrupla((yyvsp[-1].cadena), (yyvsp[-2].info), (yyvsp[0].info), temp));
             (yyval.info) = temp;
         }else if((yyvsp[-2].info).tipo == REAL && (yyvsp[0].info).tipo == ENTERO){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = REAL;
             agregarCuadrupla(&tc, nuevaCuadrupla((yyvsp[-1].cadena), (yyvsp[-2].info), (yyvsp[0].info), temp));
             (yyval.info) = temp;
         }else if((yyvsp[-2].info).tipo == REAL && (yyvsp[0].info).tipo == REAL){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = REAL;
             agregarCuadrupla(&tc, nuevaCuadrupla((yyvsp[-1].cadena), (yyvsp[-2].info), (yyvsp[0].info), temp));
             (yyval.info) = temp;
         }else{
             printf("ERROR las variables no son del mismo tipo\n");
         }
    }
#line 1493 "parser.tab.c"
    break;

  case 20: /* expresion: expresion divisionYmultiplicacionTK expresion  */
#line 174 "parser.y"
                                                    {
        infoVariable temp;
         if((yyvsp[-2].info).tipo == ENTERO && (yyvsp[0].info).tipo == ENTERO){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = ENTERO;
             agregarCuadrupla(&tc, nuevaCuadrupla((yyvsp[-1].cadena), (yyvsp[-2].info), (yyvsp[0].info), temp));
             (yyval.info) = temp;
         }else if((yyvsp[-2].info).tipo == ENTERO && (yyvsp[0].info).tipo == REAL){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = REAL;
             agregarCuadrupla(&tc, nuevaCuadrupla((yyvsp[-1].cadena), (yyvsp[-2].info), (yyvsp[0].info), temp));
             (yyval.info) = temp;
         }else if((yyvsp[-2].info).tipo == REAL && (yyvsp[0].info).tipo == ENTERO){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = REAL;
             agregarCuadrupla(&tc, nuevaCuadrupla((yyvsp[-1].cadena), (yyvsp[-2].info), (yyvsp[0].info), temp));
             (yyval.info) = temp;
         }else if((yyvsp[-2].info).tipo == REAL && (yyvsp[0].info).tipo == REAL){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = REAL;
             agregarCuadrupla(&tc, nuevaCuadrupla((yyvsp[-1].cadena), (yyvsp[-2].info), (yyvsp[0].info), temp));
             (yyval.info) = temp;
         }else{
             printf("ERROR las variables no son del mismo tipo\n");
         }
    }
#line 1536 "parser.tab.c"
    break;

  case 21: /* expresion: operando  */
#line 212 "parser.y"
               {
        (yyval.info).name = (yyvsp[0].info).name;
        (yyval.info).tipo = (yyvsp[0].info).tipo;
        (yyval.info).listaTrue = (yyvsp[0].info).listaTrue;
        (yyval.info).listaFalse = (yyvsp[0].info).listaFalse; 
    }
#line 1547 "parser.tab.c"
    break;

  case 22: /* expresion: literalTK  */
#line 218 "parser.y"
                {
        infoVariable aux;
        aux.name = NULL;
        aux.tipo = (yyvsp[0].literal).tipoDelValor;
        (yyval.info) = aux;
    }
#line 1558 "parser.tab.c"
    break;

  case 23: /* expresion: sumaYrestaTK expresion  */
#line 224 "parser.y"
                             {}
#line 1564 "parser.tab.c"
    break;

  case 24: /* expresion: expresion yTK M expresion  */
#line 225 "parser.y"
                                {
        backpatch(&tc, (yyvsp[-3].info).listaTrue, (yyvsp[-1].entero));
        (yyval.info).listaTrue = (yyvsp[0].info).listaTrue;
        (yyval.info).listaFalse = juntarListas((yyvsp[-3].info).listaFalse, (yyvsp[0].info).listaFalse);
        (yyval.info).tipo = BOOLEANO;
    }
#line 1575 "parser.tab.c"
    break;

  case 25: /* expresion: expresion oTK M expresion  */
#line 231 "parser.y"
                                {
        backpatch(&tc, (yyvsp[-3].info).listaFalse, (yyvsp[-1].entero));
        (yyval.info).listaTrue = juntarListas((yyvsp[-3].info).listaTrue, (yyvsp[0].info).listaTrue);
        (yyval.info).listaFalse = (yyvsp[0].info).listaFalse;

    }
#line 1586 "parser.tab.c"
    break;

  case 26: /* expresion: negacionTK expresion  */
#line 237 "parser.y"
                           {
        (yyval.info).listaTrue = (yyvsp[0].info).listaFalse;
        (yyval.info).listaFalse = (yyvsp[0].info).listaTrue;
        (yyval.info).tipo = BOOLEANO;
    }
#line 1596 "parser.tab.c"
    break;

  case 27: /* expresion: verdaderoTK  */
#line 242 "parser.y"
                  {
        (yyval.info).listaTrue = nuevaListaEnteros(siguienteCuadrupla(&tc));
        (yyval.info).listaFalse = NULL;
        (yyval.info).tipo = BOOLEANO;
    }
#line 1606 "parser.tab.c"
    break;

  case 28: /* expresion: falsoTK  */
#line 247 "parser.y"
              {
        (yyval.info).listaFalse = nuevaListaEnteros(siguienteCuadrupla(&tc));
        (yyval.info).listaTrue = NULL;
        (yyval.info).tipo = BOOLEANO;
    }
#line 1616 "parser.tab.c"
    break;

  case 29: /* expresion: expresion comparacionTK expresion  */
#line 252 "parser.y"
                                        {}
#line 1622 "parser.tab.c"
    break;

  case 30: /* expresion: expresion igualTK expresion  */
#line 253 "parser.y"
                                  {}
#line 1628 "parser.tab.c"
    break;

  case 31: /* expresion: aperturaParentesisTK expresion cierreParentesisTK  */
#line 254 "parser.y"
                                                        {
        (yyval.info).name = (yyvsp[-1].info).name;
        (yyval.info).tipo = (yyvsp[-1].info).tipo;
        (yyval.info).listaTrue = (yyvsp[-1].info).listaTrue;
        (yyval.info).listaFalse = (yyvsp[-1].info).listaFalse;
    }
#line 1639 "parser.tab.c"
    break;

  case 32: /* expresion: funcion_ll  */
#line 260 "parser.y"
                 {}
#line 1645 "parser.tab.c"
    break;

  case 33: /* M: %empty  */
#line 262 "parser.y"
   {
    (yyval.entero) = siguienteCuadrupla(&tc);
}
#line 1653 "parser.tab.c"
    break;

  case 34: /* operando: identificadoresTK  */
#line 266 "parser.y"
                            {
         infoVariable* lit = buscarSimbolo(&ts, (yyvsp[0].cadena));
         if(lit == NULL){
             printf("ERROR: el identificador no se encuentra en la tabla de simbolo\n");
         }else{
             (yyval.info) = *lit;
         }
    }
#line 1666 "parser.tab.c"
    break;

  case 35: /* operando: operando puntoTK operando  */
#line 274 "parser.y"
                                {}
#line 1672 "parser.tab.c"
    break;

  case 36: /* operando: operando aperturaArrayTK expresion cierreArrayTK  */
#line 275 "parser.y"
                                                       {}
#line 1678 "parser.tab.c"
    break;

  case 37: /* operando: operando referenciaTK  */
#line 276 "parser.y"
                            {}
#line 1684 "parser.tab.c"
    break;

  case 38: /* accion_d: accionTK a_cabecera bloque faccionTK  */
#line 278 "parser.y"
                                               {}
#line 1690 "parser.tab.c"
    break;

  case 39: /* funcion_d: funcionTK f_cabecera bloque devolverTK expresion ffuncionTK  */
#line 280 "parser.y"
                                                                       {}
#line 1696 "parser.tab.c"
    break;

  case 40: /* a_cabecera: identificadoresTK aperturaParentesisTK d_par_form cierreParentesisTK puntoYcomaTK  */
#line 282 "parser.y"
                                                                                              {}
#line 1702 "parser.tab.c"
    break;

  case 41: /* f_cabecera: identificadoresTK aperturaParentesisTK listaDeclVariablesV cierreParentesisTK devolverTK d_tipo puntoYcomaTK  */
#line 284 "parser.y"
                                                                                                                         {}
#line 1708 "parser.tab.c"
    break;

  case 42: /* d_par_form: d_p_form puntoYcomaTK d_par_form  */
#line 286 "parser.y"
                                             {}
#line 1714 "parser.tab.c"
    break;

  case 43: /* d_par_form: %empty  */
#line 287 "parser.y"
               {}
#line 1720 "parser.tab.c"
    break;

  case 44: /* d_p_form: entradaTK declaracionDeVariablesV dosPuntosTK d_tipo  */
#line 289 "parser.y"
                                                               {}
#line 1726 "parser.tab.c"
    break;

  case 45: /* d_p_form: salidaTK declaracionDeVariablesV dosPuntosTK d_tipo  */
#line 290 "parser.y"
                                                          {}
#line 1732 "parser.tab.c"
    break;

  case 46: /* d_p_form: entradaSalidaTK declaracionDeVariablesV dosPuntosTK d_tipo  */
#line 291 "parser.y"
                                                                 {}
#line 1738 "parser.tab.c"
    break;

  case 47: /* declaracion_tipo: tipoTK lista_de_tipo ftipoTK  */
#line 293 "parser.y"
                                               {}
#line 1744 "parser.tab.c"
    break;

  case 48: /* lista_de_tipo: identificadoresTK igualTK d_tipo puntoYcomaTK lista_de_tipo  */
#line 295 "parser.y"
                                                                           {}
#line 1750 "parser.tab.c"
    break;

  case 49: /* lista_de_tipo: %empty  */
#line 296 "parser.y"
               {}
#line 1756 "parser.tab.c"
    break;

  case 50: /* d_tipo: literalTuplaTK lista_campos finLiteralTuplaTK  */
#line 298 "parser.y"
                                                      {}
#line 1762 "parser.tab.c"
    break;

  case 51: /* d_tipo: tablaTK aperturaArrayTK expresion subrangoTK expresion cierreArrayTK deTK d_tipo  */
#line 299 "parser.y"
                                                                                       {}
#line 1768 "parser.tab.c"
    break;

  case 52: /* d_tipo: identificadoresTK  */
#line 300 "parser.y"
                        {}
#line 1774 "parser.tab.c"
    break;

  case 53: /* d_tipo: expresion subrangoTK expresion  */
#line 301 "parser.y"
                                     {}
#line 1780 "parser.tab.c"
    break;

  case 54: /* d_tipo: referenciaTK d_tipo  */
#line 302 "parser.y"
                          {}
#line 1786 "parser.tab.c"
    break;

  case 55: /* d_tipo: tipoVarTK  */
#line 303 "parser.y"
                {}
#line 1792 "parser.tab.c"
    break;

  case 56: /* lista_campos: identificadoresTK dosPuntosTK d_tipo puntoYcomaTK lista_campos  */
#line 305 "parser.y"
                                                                             {}
#line 1798 "parser.tab.c"
    break;

  case 57: /* lista_campos: %empty  */
#line 306 "parser.y"
               {}
#line 1804 "parser.tab.c"
    break;

  case 58: /* decl_ent: entradaTK lista_d_var  */
#line 308 "parser.y"
                                {}
#line 1810 "parser.tab.c"
    break;

  case 59: /* decl_sal: salidaTK lista_d_var  */
#line 310 "parser.y"
                              {}
#line 1816 "parser.tab.c"
    break;

  case 60: /* lista_d_var: lista_id dosPuntosTK d_tipo puntoYcomaTK lista_d_var  */
#line 312 "parser.y"
                                                                  {}
#line 1822 "parser.tab.c"
    break;

  case 61: /* lista_d_var: %empty  */
#line 313 "parser.y"
                {}
#line 1828 "parser.tab.c"
    break;

  case 62: /* lista_id: identificadoresTK separadorTK lista_id  */
#line 315 "parser.y"
                                                 {
        (yyval.paraLid) = copiarLista(NULL, &((yyvsp[0].paraLid)));
        meteId(&((yyval.paraLid)), (yyvsp[-2].cadena));
    }
#line 1837 "parser.tab.c"
    break;

  case 63: /* lista_id: identificadoresTK  */
#line 319 "parser.y"
                        {
        (yyval.paraLid) = nuevaListaCadenas();
        printf("COMPILADOR: Se ha creado la lista\n");
        meteId(&((yyval.paraLid)), (yyvsp[0].cadena));
        printf("COMPILADOR: no se llega a meter el id\n");
    }
#line 1848 "parser.tab.c"
    break;

  case 64: /* decl_ent_sal: decl_ent  */
#line 326 "parser.y"
                       {}
#line 1854 "parser.tab.c"
    break;

  case 65: /* decl_ent_sal: decl_ent decl_sal  */
#line 327 "parser.y"
                        {}
#line 1860 "parser.tab.c"
    break;

  case 66: /* decl_ent_sal: decl_sal  */
#line 328 "parser.y"
               {}
#line 1866 "parser.tab.c"
    break;

  case 67: /* instrucciones: instruccion puntoYcomaTK instrucciones  */
#line 330 "parser.y"
                                                      {}
#line 1872 "parser.tab.c"
    break;

  case 68: /* instrucciones: instruccion  */
#line 331 "parser.y"
                  {}
#line 1878 "parser.tab.c"
    break;

  case 69: /* instruccion: continuarTK  */
#line 333 "parser.y"
                         {}
#line 1884 "parser.tab.c"
    break;

  case 70: /* instruccion: asignacion  */
#line 334 "parser.y"
                 {}
#line 1890 "parser.tab.c"
    break;

  case 71: /* instruccion: alternativa  */
#line 335 "parser.y"
                  {}
#line 1896 "parser.tab.c"
    break;

  case 72: /* instruccion: iteracion  */
#line 336 "parser.y"
                {}
#line 1902 "parser.tab.c"
    break;

  case 73: /* instruccion: accion_ll  */
#line 337 "parser.y"
                {}
#line 1908 "parser.tab.c"
    break;

  case 74: /* instruccion: %empty  */
#line 338 "parser.y"
                {}
#line 1914 "parser.tab.c"
    break;

  case 75: /* asignacion: operando asignacionTK expresion  */
#line 340 "parser.y"
                                            {
    infoVariable empty; 
    memset(&empty, 0, sizeof(infoVariable));  // arg2 not used
    empty.tipo = NULO;
    empty.name = NULL;
    Cuadrupla *asig = nuevaCuadrupla((yyvsp[-1].cadena), (yyvsp[0].info), empty, (yyvsp[-2].info));
    agregarCuadrupla(&tc, asig);
}
#line 1927 "parser.tab.c"
    break;

  case 76: /* alternativa: condicionSiTK expresion condicionEntoncesTK instrucciones lista_opciones finCondicionSiTK  */
#line 349 "parser.y"
                                                                                                       {}
#line 1933 "parser.tab.c"
    break;

  case 77: /* lista_opciones: condicionSiNoTK expresion condicionEntoncesTK instrucciones lista_opciones  */
#line 351 "parser.y"
                                                                                           {}
#line 1939 "parser.tab.c"
    break;

  case 78: /* lista_opciones: %empty  */
#line 352 "parser.y"
               {}
#line 1945 "parser.tab.c"
    break;

  case 79: /* iteracion: it_cota_fija  */
#line 354 "parser.y"
                        {}
#line 1951 "parser.tab.c"
    break;

  case 80: /* iteracion: it_cota_exp  */
#line 355 "parser.y"
                  {}
#line 1957 "parser.tab.c"
    break;

  case 81: /* it_cota_exp: mientrasTK expresion condicionMientrasTK instrucciones finMientrasTK  */
#line 357 "parser.y"
                                                                                  {}
#line 1963 "parser.tab.c"
    break;

  case 82: /* it_cota_fija: condicionParaTK identificadoresTK asignacionTK expresion hastaTK expresion condicionMientrasTK instrucciones finCondicionParaTK  */
#line 359 "parser.y"
                                                                                                                                              {}
#line 1969 "parser.tab.c"
    break;

  case 83: /* accion_ll: identificadoresTK aperturaParentesisTK l_ll cierreParentesisTK  */
#line 361 "parser.y"
                                                                          {}
#line 1975 "parser.tab.c"
    break;

  case 84: /* funcion_ll: identificadoresTK aperturaParentesisTK l_ll cierreParentesisTK  */
#line 363 "parser.y"
                                                                          {}
#line 1981 "parser.tab.c"
    break;

  case 85: /* l_ll: expresion separadorTK l_ll  */
#line 365 "parser.y"
                                 {}
#line 1987 "parser.tab.c"
    break;

  case 86: /* l_ll: expresion  */
#line 366 "parser.y"
                {}
#line 1993 "parser.tab.c"
    break;

  case 87: /* declaracionConstantesV: constTK listaDeclConstantesV fconstTK  */
#line 368 "parser.y"
                                                              {
        //printf("COMPILADOR: Se han añadido %d simbolos\n", $2);
    }
#line 2001 "parser.tab.c"
    break;

  case 88: /* listaDeclConstantesV: declaracionDeConstanteV  */
#line 372 "parser.y"
                                                {
       // $$ = 1;
    }
#line 2009 "parser.tab.c"
    break;

  case 89: /* listaDeclConstantesV: listaDeclConstantesV puntoYcomaTK listaDeclConstantesV  */
#line 375 "parser.y"
                                                                 {
       // $$ = $1 + $3;
	}
#line 2017 "parser.tab.c"
    break;

  case 90: /* declaracionDeConstanteV: nombreConstanteTK igualTK literalTK  */
#line 379 "parser.y"
                                                              {
        //insertaSimbolo(&ts, $1, $3, 1); //verdadero
    }
#line 2025 "parser.tab.c"
    break;

  case 91: /* declaracionVariablesV: varTK listaDeclVariablesV finVarTK  */
#line 383 "parser.y"
                                                         {
        printf("COMPILADOR: Se han añadido %d simbolos\n", (yyvsp[-1].entero));
    }
#line 2033 "parser.tab.c"
    break;

  case 92: /* listaDeclVariablesV: declaracionDeVariablesV  */
#line 387 "parser.y"
                                              {
        (yyval.entero) = 1;
    }
#line 2041 "parser.tab.c"
    break;

  case 93: /* listaDeclVariablesV: listaDeclVariablesV puntoYcomaTK listaDeclVariablesV  */
#line 390 "parser.y"
                                                           {
        (yyval.entero) = (yyvsp[-2].entero) + (yyvsp[0].entero);
    }
#line 2049 "parser.tab.c"
    break;

  case 94: /* listaDeclVariablesV: %empty  */
#line 393 "parser.y"
                {}
#line 2055 "parser.tab.c"
    break;

  case 95: /* declaracionDeVariablesV: lista_id dosPuntosTK tipoVarTK  */
#line 395 "parser.y"
                                                        {
        CeldaId c;
        while(!esNula(&((yyvsp[-2].paraLid)))){
            c = *(yyvsp[-2].paraLid);
            LiteralT aux = nuevoLiteralSinValor((yyvsp[0].tipo));
            insertaSimbolo(&ts, c.nombre, aux); //no se le pasa el tipoVar si no el literal, el que tiene el valor y el tipo
            borrar(&((yyvsp[-2].paraLid)));
        }
    }
#line 2069 "parser.tab.c"
    break;


#line 2073 "parser.tab.c"

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

#line 405 "parser.y"

int main(int argc, char **argv){
	#if defined YYDEBUG
	yydebug=1;
	#endif
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	ts = nuevaTablaDeSimbolos();
	tc = nuevaTablaDeCuadruplas();
	tempCont = 0;
	yyparse();
	imprimeTablaDeSimbolos(ts);
	imprimeCuadruplas(tc);
}

void yyerror(char * s){
	printf("\tBISON: ERROR, %s\n", s);
}
