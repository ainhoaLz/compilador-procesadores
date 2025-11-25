
 //Archivo: scanner.l
 //Scanner que a partir de un programa te devuelve los tokens de ese programa.
 //Autor: Leyre Leiza, Ainhoa Lara
 //Fecha: 13/10/25
 //Version: 0.0.1

 //PARTE 1: ZONA DE DECLARACIONES
 //PARTE 1.1: Constantes manifiestas y codigo necesario para el .c que genera flex

%{
	// Headers standard necesarios
	#include <stdio.h> //Para poder escribir en el terminal
	#include <stdlib.h> //Para usar exit()
	#include <strings.h> //Para trabajar con cadenas de caracteres
	#include "listaId.h"
	#include "nombresDeTipos.h"
	#include "literal.h"
	#include "parser.tab.h"

	void errorEnScanner(char*, char*); //prototipo necesario para compilar

%}

 // PARTE 1.2: Zona de definiciones regulares
falsoDR	(?i:falso)
fconstDR (?i:fconst)
literalCaracterDR	\".\"
literalEnteroDR	[0-9]+
literalRealDR	{literalEnteroDR}[rR]
puntoYcomaDR	;
verdaderoDR	(?i:verdadero)
comparacionDR <|<=|>|>=|<>
sumaYrestaDR \+|\-
divisionYmultiplicacionDR (?i:mod)|(?i:div)|\*
comillasDR \"
comillaSimplesDR \'
precondicionDR \{[Pp]rec:[^}]*\}
postcondicionDR \{[Pp]ost:[^}]*\}
dospuntosDR \:
tipoDR (?i:tipo)
ftipoDR (?i:ftipo)
referenciaDR (?i:ref)
devolverDR (?i:dev)
continuarDR (?i:continuar)
subrangoDR \.\.
yDR (?i:y)
oDR (?i:o)
negacionDR (?i:no)
hastaDR (?i:hasta)
deDR (?i:de)
tablaDR (?i:tabla)
varDR (?i:var)
finVarDR (?i:fvar)
whileDR (?i:mientras)
doDR (?i:hacer)
fWhileDR (?i:fmientras)
tuplaDR (?i:tupla)
finTuplaDR (?i:ftupla)
algoritmoDR (?i:algoritmo)
finAlgoritmoDR (?i:falgoritmo)
accionDR (?i:accion)
finAccionDR (?i:faccion)
funcionDR (?i:funcion)
finFuncionDR (?i:ffuncion)
entradaDR (?i:ent)
salidaDR (?i:sal)
entradaSalidaDR (?i:e\/s)
asignacionDR	\:\=
ifDR (?i:si)
finIfDR (?i:fsi)
forDR (?i:para)
finForDR (?i:fpara)
entoncesDR	\-\>
elseIfDR	\[\]
enteroDR (?i:entero)
booleanoDR (?i:booleano)
realDR (?i:real)
cadenaDR (?i:cadena)
caracterDR (?i:caracter)
puntoDR \.

%%

 //PARTE 2: Reglas

(?i:const)	{
	return constTK;
}
{falsoDR}	{
	yylval.literal.tipoDelValor = BOOLEANO;
	yylval.literal.valor.valorBooleano = FALSO;
	return literalTK;
}
{fconstDR}	{
	return fconstTK;
}
=	{
	return igualTK;
}
,	{
	return separadorTK;
}
:	{
	return dosPuntosTK;
}
{puntoDR}  {
	return puntoTK;
}
	/*{comillasDR} {
		return comillasTK;
	}
	{comillaSimplesDR} {
		return comillaSimpleTK;
	}*/
"("	{
	return aperturaParentesisTK;
}
")"	{
	return cierreParentesisTK;
}
"["	{
	return aperturaArrayTK;
}
"]"	{
	return cierreArrayTK;
}
"{"	{
	return aperturaComentarioTK;
}
"}"	{
	return cierreComentarioTK;
}
{sumaYrestaDR} {
	return sumaYrestaTK;
}
{negacionDR} {
	return negacionTK;
}
{deDR} {
	return deTK;
}
'([^']|\/')*'	{
	yylval.literal.tipoDelValor = CADENA;
	if ((yylval.literal.valor.valorCadena = strdup(yytext)) == NULL )
		errorEnScanner("No hay memoria para strdup() al leer %s\n", yytext);
	else
		return literalTK;
}
{literalCaracterDR}	{
	yylval.literal.tipoDelValor = CARACTER;
	yylval.literal.valor.valorCaracter = yytext[1];
	return literalTK;
}
{literalEnteroDR}	{
	yylval.literal.tipoDelValor = ENTERO;
	yylval.literal.valor.valorEntero = atoi(yytext);
	return literalTK;
}
[0-9]*(\.[0-9]+)?([eE][0-9]+)?	{
	yylval.literal.tipoDelValor = REAL;
	yylval.literal.valor.valorReal = atof(yytext);
	return literalTK;
}
{literalRealDR}	{
	char * cadena;
	yylval.literal.tipoDelValor = REAL;
	if ((cadena = strndup(yytext, strlen(yytext)-1)) == NULL)
		errorEnScanner("No hay memoria para strndup() al leer %s\n", yytext);
	else {
		yylval.literal.valor.valorReal = atof(cadena);
		free(cadena);
	}
	return literalTK;
}
{puntoYcomaDR}	{
	return puntoYcomaTK;
}
{verdaderoDR}	{
	yylval.literal.tipoDelValor = BOOLEANO;
	yylval.literal.valor.valorBooleano = VERDADERO;
	return literalTK;
}
{comparacionDR}	{
	return comparacionTK;
}
{divisionYmultiplicacionDR} {
	return divisionYmultiplicacionTK;
}
{precondicionDR} {
    return precondicionTK;
}
{postcondicionDR} {
    return postcondicionTK;
}
{tipoDR} {
	return tipoTK;
}
{ftipoDR} {
	return ftipoTK;
}
{referenciaDR} {
	return referenciaTK;
}
{devolverDR} {
	return devolverTK;
}
{continuarDR} {
	return continuarTK;
}
{subrangoDR} {
	return subrangoTK;
}
{yDR} {
	return yTK;
}
{oDR} {
	return oTK;
}
{hastaDR} {
	return hastaTK;
}
{tablaDR} {
	return tablaTK;
}
{varDR}	{
	return varTK;
}
{finVarDR}	{
	return finVarTK;
}
{whileDR}	{
	return mientrasTK;
}
{doDR}	{
	return condicionMientrasTK;
}
{fWhileDR}	{
	return finMientrasTK;
}
{tuplaDR}	{
	return literalTuplaTK;
}
{finTuplaDR}	{
	return finLiteralTuplaTK;
}
{algoritmoDR}	{
	return algoritmoTK;
}
{finAlgoritmoDR}	{
	return falgoritmoTK;
}
{accionDR}	{
	return accionTK;
}
{finAccionDR}	{
	return faccionTK;
}
{funcionDR}	{
	return funcionTK;
}
{finFuncionDR}	{
	return ffuncionTK;
}
{entradaDR}	{
	return entradaTK;
}
{salidaDR}	{
	return salidaTK;
}
{entradaSalidaDR}	{
	return entradaSalidaTK;
}
{asignacionDR}	{
	return asignacionTK;
}
{ifDR}	{
	return condicionSiTK;
}
{finIfDR}	{
	return finCondicionSiTK;
}
{entoncesDR}	{
	return condicionEntoncesTK;
}
{forDR}	{
	return condicionParaTK;
}
{finForDR}	{
	return finCondicionParaTK;
}
{elseIfDR}	{
	return condicionSiNoTK;
}
{enteroDR}	{
    yylval.cadena = strdup(yytext);
	return tipoVarTK;
}
{booleanoDR}	{
    yylval.cadena = strdup(yytext);
	return tipoVarTK;
}
{realDR}	{
    yylval.cadena = strdup(yytext);
	return tipoVarTK;
}
{cadenaDR}	{
    yylval.cadena = strdup(yytext);
	return tipoVarTK;
}
{caracterDR}	{
    yylval.cadena = strdup(yytext);
	return tipoVarTK;
}
[a-z][a-zA-Z0-9]*	{
    yylval.cadena = strdup(yytext);
	return identificadoresTK;
}
[A-Z][A-Z_]*	{
    yylval.cadena = strdup(yytext);
	return nombreConstanteTK;
}
.	{ //Permite que el resto de caracteres no hagan echo
}

%%

 //PARTE 3: CODIGO ADICIONAL

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}


int yywrap(){
	return(1);
}
