/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
    constTK = 258,                 /* constTK  */
    fconstTK = 259,                /* fconstTK  */
    igualTK = 260,                 /* igualTK  */
    separadorTK = 261,             /* separadorTK  */
    dosPuntosTK = 262,             /* dosPuntosTK  */
    aperturaParentesisTK = 263,    /* aperturaParentesisTK  */
    cierreParentesisTK = 264,      /* cierreParentesisTK  */
    aperturaArrayTK = 265,         /* aperturaArrayTK  */
    cierreArrayTK = 266,           /* cierreArrayTK  */
    aperturaComentarioTK = 267,    /* aperturaComentarioTK  */
    cierreComentarioTK = 268,      /* cierreComentarioTK  */
    sumaYrestaTK = 269,            /* sumaYrestaTK  */
    negacionTK = 270,              /* negacionTK  */
    deTK = 271,                    /* deTK  */
    puntoYcomaTK = 272,            /* puntoYcomaTK  */
    comparacionTK = 273,           /* comparacionTK  */
    divisionYmultiplicacionTK = 274, /* divisionYmultiplicacionTK  */
    tipoTK = 275,                  /* tipoTK  */
    ftipoTK = 276,                 /* ftipoTK  */
    referenciaTK = 277,            /* referenciaTK  */
    devolverTK = 278,              /* devolverTK  */
    continuarTK = 279,             /* continuarTK  */
    subrangoTK = 280,              /* subrangoTK  */
    yTK = 281,                     /* yTK  */
    oTK = 282,                     /* oTK  */
    hastaTK = 283,                 /* hastaTK  */
    tablaTK = 284,                 /* tablaTK  */
    varTK = 285,                   /* varTK  */
    finVarTK = 286,                /* finVarTK  */
    mientrasTK = 287,              /* mientrasTK  */
    condicionMientrasTK = 288,     /* condicionMientrasTK  */
    finMientrasTK = 289,           /* finMientrasTK  */
    literalTuplaTK = 290,          /* literalTuplaTK  */
    finLiteralTuplaTK = 291,       /* finLiteralTuplaTK  */
    algoritmoTK = 292,             /* algoritmoTK  */
    falgoritmoTK = 293,            /* falgoritmoTK  */
    accionTK = 294,                /* accionTK  */
    faccionTK = 295,               /* faccionTK  */
    funcionTK = 296,               /* funcionTK  */
    ffuncionTK = 297,              /* ffuncionTK  */
    entradaTK = 298,               /* entradaTK  */
    salidaTK = 299,                /* salidaTK  */
    entradaSalidaTK = 300,         /* entradaSalidaTK  */
    asignacionTK = 301,            /* asignacionTK  */
    condicionSiTK = 302,           /* condicionSiTK  */
    finCondicionSiTK = 303,        /* finCondicionSiTK  */
    condicionEntoncesTK = 304,     /* condicionEntoncesTK  */
    condicionParaTK = 305,         /* condicionParaTK  */
    finCondicionParaTK = 306,      /* finCondicionParaTK  */
    condicionSiNoTK = 307,         /* condicionSiNoTK  */
    tipoVarTK = 308,               /* tipoVarTK  */
    identificadoresTK = 309,       /* identificadoresTK  */
    nombreConstanteTK = 310,       /* nombreConstanteTK  */
    puntoTK = 311,                 /* puntoTK  */
    literalTK = 312,               /* literalTK  */
    verdaderoTK = 313,             /* verdaderoTK  */
    falsoTK = 314,                 /* falsoTK  */
    precondicionTK = 315,          /* precondicionTK  */
    postcondicionTK = 316          /* postcondicionTK  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 92 "parser.y"

	char* cadena;
	LiteralT literal;
	int entero;
	ListaId paraLid;
	NombreDeTipoT tipo;
	infoVariable info;

#line 134 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
