/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    constTK = 258,
    fconstTK = 259,
    igualTK = 260,
    separadorTK = 261,
    dosPuntosTK = 262,
    aperturaParentesisTK = 263,
    cierreParentesisTK = 264,
    aperturaArrayTK = 265,
    cierreArrayTK = 266,
    aperturaComentarioTK = 267,
    cierreComentarioTK = 268,
    sumaYrestaTK = 269,
    negacionTK = 270,
    deTK = 271,
    puntoYcomaTK = 272,
    comparacionTK = 273,
    divisionYmultiplicacionTK = 274,
    tipoTK = 275,
    ftipoTK = 276,
    referenciaTK = 277,
    devolverTK = 278,
    continuarTK = 279,
    subrangoTK = 280,
    yTK = 281,
    oTK = 282,
    hastaTK = 283,
    tablaTK = 284,
    varTK = 285,
    finVarTK = 286,
    mientrasTK = 287,
    condicionMientrasTK = 288,
    finMientrasTK = 289,
    literalTuplaTK = 290,
    finLiteralTuplaTK = 291,
    algoritmoTK = 292,
    falgoritmoTK = 293,
    accionTK = 294,
    faccionTK = 295,
    funcionTK = 296,
    ffuncionTK = 297,
    entradaTK = 298,
    salidaTK = 299,
    entradaSalidaTK = 300,
    asignacionTK = 301,
    condicionSiTK = 302,
    finCondicionSiTK = 303,
    condicionEntoncesTK = 304,
    condicionParaTK = 305,
    finCondicionParaTK = 306,
    condicionSiNoTK = 307,
    tipoVarTK = 308,
    identificadoresTK = 309,
    nombreConstanteTK = 310,
    puntoTK = 311,
    literalTK = 312,
    verdaderoTK = 313,
    falsoTK = 314,
    precondicionTK = 315,
    postcondicionTK = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 91 "parser.y"

	char* cadena;
	LiteralT literal;
	int entero;
	ListaId paraLid;
	NombreDeTipoT tipo;
	infoVariable info;

#line 128 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
