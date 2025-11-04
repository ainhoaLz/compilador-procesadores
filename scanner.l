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
	#include "literal.h"

	void errorEnScanner(char*, char*); //prototipo necesario para compilar
	extern FILE *yyin;

%}

 // PARTE 1.2: Zona de definiciones regulares
falsoDR	(?i:falso)
fconstDR (?i:fconst)
literalCaracterDR	\".\"
literalEnteroDR	[+-]?[0-9]+
literalRealDR	{literalEnteroDR}[rR]
puntoYComaDR	;
verdaderoDR	(?i:verdadero)
comparacionDR <|<=|>|>=|<>
sumaYrestaDR \+|\-
divisionYmultiplicacionYpotenciaDR (?i:mod)|(?i:div)|\*|\^
comillasDR \"
comillaSimplesDR \'
precondicionDR (?i:Prec:)
postcondicionDR (?i:Post:)
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
	printf("(constTK, %s)\n", yytext);
}
{falsoDR}	{
	printf("(literalBooleanoTK, falso)\n");
}
{fconstDR}	{
	printf("(fconstTK, %s)\n", yytext);
}
=	{
	printf("(igualTK, %s)\n", yytext);
}
,	{
	printf("(separadorTK, %s)\n", yytext);
}
:	{
	printf("(dosPuntosTK, %s) \n", yytext);
}
{puntoTK}  {
	printf("(puntoTK, %s) \n", yytext);
}
{comillasDR} {
	printf("(comillasTK, %s) \n", yytext);
}
{comillaSimplesDR} {
	printf("(comillaSimpleTK, %s) \n", yytext);
}
"("	{
	printf("(aperturaParentesisTK, %s) \n", yytext);
}
")"	{
	printf("(cierreParentesisTK, %s) \n", yytext);
}
"["	{
	printf("(aperturaArrayTK, %s) \n", yytext);
}
"]"	{
	printf("(cierreArrayTK, %s) \n", yytext);
}
"{"	{
	printf("(aperturComentarioTK, %s) \n", yytext);
}
"}"	{
	printf("(cierreComentarioTK, %s) \n", yytext);
}
{sumaYrestaDR} {
	printf("(sumaYrestaTK, %s) \n", yytext);
}
{negacionDR} {
	printf("(negacionTK, %s) \n", yytext);
}
{deDR} {
	printf("(deTK, %s) \n", yytext);
}
'([^']|\/')*'	{
	printf("(literalCadenaTK, %s)\n", yytext);
}
{literalCaracterDR}	{
	yylval.literal.tipoDelValor = CARACTER;
	yylval.literal.valor.valorCaracter = yytext[1];
	return literalTK;
}
{literalEnteroDR}	{
	printf("(literalEnteroTK, %d)\n", atoi(yytext));
}
[+-]?[0-9]*(\.[0-9]+)?([eE][+-]?[0-9]+)?	{
	printf("(literalEnteroTK, %d)\n", (int)atof(yytext));
}
{literalRealDR}	{
	char * cadena;
	if ((cadena = strndup(yytext, strlen(yytext)-1)) == NULL)
		errorEnScanner("No hay memoria para strndup() al leer %s\n", yytext);
	else {
		printf("(literalRealTK, %f)\n", atof(cadena));
		free(cadena); //Para no sobrecargar la memoria
	}
}
{puntoYComaDR}	{
	printf("(puntoYComaTK, %s)\n", yytext);
}
{verdaderoDR}	{
	printf("(literalBooleanoTK, verdadero)\n");
}
{comparacionDR}	{
	printf("(comparacionTK, %s)\n", yytext);
}
{divisionYmultiplicacionYpotenciaDR} {
	printf("(divisionYmultiplicacionYpotenciaTK, %s) \n", yytext);
}
{precondicionDR} {
	printf("(precondicionTK, %s) \n", yytext);
}
{postcondicionDR} {
	printf("(postcondicionTK, %s) \n", yytext);
}
{tipoDR} {
	printf("(tipoTK, %s) \n", yytext);
}
{ftipoDR} {
	printf("(ftipoTK, %s) \n", yytext);
}
{referenciaDR} {
	printf("(referenciaTK, %s) \n", yytext);
}
{devolverDR} {
	printf("(devolverTK, %s) \n", yytext);
}
{continuarDR} {
	printf("(continuarTK, %s) \n", yytext);
}
{subrangoDR} {
	printf("(subrangoTK, %s) \n", yytext);
}
{yDR} {
	printf("(yTK, %s) \n", yytext);
}
{oDR} {
	printf("(oTK, %s) \n", yytext);
}
{hastaDR} {
	printf("(hastaTK, %s) \n", yytext);
}
{tablaDR} {
	printf("(tablaTK, %s) \n", yytext);
}
{varDR}	{
	printf("(varTK, %s)\n", yytext);
}
{finVarDR}	{
	printf("(finVarTK, %s)\n", yytext);
}
{whileDR}	{
	printf("(mientrasTK, %s)\n", yytext);
}
{doDR}	{
	printf("(condicionMientrasTK, %s)\n", yytext);
}
{fWhileDR}	{
	printf("(finMientrasTK, %s)\n", yytext);
}
{tuplaDR}	{
	printf("(literalTuplaTK, %s)\n", yytext);
}
{finTuplaDR}	{
	printf("(finLiteralTuplaTK, %s)\n", yytext);
}
{algoritmoDR}	{
	printf("(algoritmoTK, %s)\n", yytext);
}
{finAlgoritmoDR}	{
	printf("(falgoritmoTK, %s)\n", yytext);
}
{accionDR}	{
	printf("(accionTK, %s)\n", yytext);
}
{finAccionDR}	{
	printf("(faccionTK, %s)\n", yytext);
}
{funcionDR}	{
	printf("(funcionTK, %s)\n", yytext);
}
{finFuncionDR}	{
	printf("(ffuncionTK, %s)\n", yytext);
}
{entradaDR}	{
	printf("(entradaTK, %s)\n", yytext);
}
{salidaDR}	{
	printf("(salidaTK, %s)\n", yytext);
}
{entradaSalidaDR}	{
	printf("(entradaSalidaTK, %s)\n", yytext);
}
{asignacionDR}	{
	printf("(asignacionTK, %s)\n", yytext);
}
{ifDR}	{
	printf("(condicionSiTK, %s)\n", yytext);
}
{finIfDR}	{
	printf("(finCondicionSiTK, %s)\n", yytext);
}
{entoncesDR}	{
	printf("(condicionEntoncesTK, %s)\n", yytext);
}
{forDR}	{
	printf("(condicionParaTK, %s)\n", yytext);
}
{finForDR}	{
	printf("(finCondicionParaTK, %s)\n", yytext);
}
{elseIfDR}	{
	printf("(condicionSiNoTK, %s)\n", yytext);
}
{enteroDR}	{
	printf("(enteroTK, %s) \n", yytext);
}
{booleanoDR}	{
	printf("(booleanoTK, %s) \n", yytext);
}
{realDR}	{
	printf("(realTK, %s) \n", yytext);
}
{cadenaDR}	{
	printf("(cadenaTK, %s) \n", yytext);
}
{caracterDR}	{
	printf("(caracterTK, %s) \n", yytext);
}
[a-z][a-zA-Z0-9]*	{
	printf("(identificadoresTK, %s) \n", yytext);
}
[A-Z][A-Z_]*	{
	printf("(nombreConstanteTK, %s)\n", yytext);
}
.	{ //Permite que el resto de caracteres no hagan echo
}

%%

 //PARTE 3: CODIGO ADICIONAL

void errorEnScanner(char* definicionDelError, char * variable){
	printf("\n\n\n\t%s %s \n", definicionDelError, variable);
	exit(EXIT_FAILURE);
}
int main(int argc, char *argv[]){
	if(argc > 2){
		printf("Error. Demasiados argumentos. \n");
		return 1;
	}
	if(argc == 2){
		FILE *input = fopen(argv[1], "r");
		if(!input){
			printf("Error al abrir el archivo.\n");
		}

		yyin = input;
	}
	yylex();
	if(yyin != stdin){
		fclose(yyin);
	}

	return 0;
}


