%{
    #include <stdio.h>
    #include "nombresDeTipos.h"
	#include "literal.h"
    int yylex(); // Usamos la funcion que se crea gracias a flex
    void yyerror(char *); // Prototipo de una funcion necesaria
    extern FILE* yyin;
    #define YYDEBUG 1
%}

%token constTK
%token fconstTK
%token igualTK
%token separadorTK
%token dosPuntosTK
%token aperturaParentesisTK
%token cierreParentesisTK
%token aperturaArrayTK
%token cierreArrayTK
%token aperturaComentarioTK
%token cierreComentarioTK
%token sumaYrestaTK
%token negacionTK
%token deTK
%token puntoYcomaTK
%token comparacionTK
%token divisionYmultiplicacionTK
%token tipoTK
%token ftipoTK
%token referenciaTK
%token devolverTK
%token continuarTK
%token subrangoTK
%token yTK
%token oTK
%token hastaTK
%token tablaTK
%token varTK
%token finVarTK
%token mientrasTK
%token condicionMientrasTK
%token finMientrasTK
%token literalTuplaTK
%token finLiteralTuplaTK
%token algoritmoTK
%token falgoritmoTK
%token accionTK
%token faccionTK
%token funcionTK
%token ffuncionTK
%token entradaTK
%token salidaTK
%token entradaSalidaTK
%token asignacionTK
%token condicionSiTK
%token finCondicionSiTK
%token condicionEntoncesTK
%token condicionParaTK
%token finCondicionParaTK
%token condicionSiNoTK
%token tipoVarTK
%token <cadena> identificadoresTK
%token <cadena> nombreConstanteTK
%token puntoTK
%token <literal> literalTK
%token verdaderoTK
%token falsoTK
%token precondicionTK
%token postcondicionTK

%left puntoYcomaTK
%left yTK oTK
%left igualTK
%left  cierreArrayTK cierreComentarioTK cierreParentesisTK
%nonassoc aperturaArrayTK aperturaComentarioTK aperturaParentesisTK
%left divisionYmultiplicacionTK
%left sumaYrestaTK subrangoTK
%nonassoc comparacionTK
%left puntoTK referenciaTK
%left negacionTK

%union{
	char* cadena;
	LiteralT literal;
	int entero;
}

%%

desc_algoritmo: algoritmoTK identificadoresTK puntoYcomaTK cabecera_alg bloque_alg falgoritmoTK puntoTK {};

cabecera_alg: decl_globales decl_a_f decl_ent_sal comentario {};

comentario: aperturaComentarioTK identificadoresTK cierreComentarioTK {}
    | precondicionTK {}
    |  postcondicionTK {};

bloque_alg: bloque comentario {};

decl_globales: declaracion_tipo decl_globales {}
    | declaracionConstantesV decl_globales {}
    | /*vacio*/{};

decl_a_f: accion_d decl_a_f {}
    | funcion_d decl_a_f {}
    | /*vacio*/{};

bloque: declaraciones instrucciones {};

declaraciones: declaracion_tipo declaraciones {}
    | declaracionConstantesV declaraciones {}
    | declaracionVariablesV declaraciones {}
    | /*vacio*/{};

expresion: expresion sumaYrestaTK expresion {}
    | expresion divisionYmultiplicacionTK expresion {}
    | operando {}
    | literalTK {}
    | sumaYrestaTK expresion {}
    | expresion yTK expresion {}
    | expresion oTK expresion {}
    | negacionTK expresion {}
    | verdaderoTK {}
    | falsoTK {}
    | expresion comparacionTK expresion {}
    | expresion igualTK expresion {}
    | aperturaParentesisTK expresion cierreParentesisTK {}
    | funcion_ll {};


operando: identificadoresTK {}
    | operando puntoTK operando {}
    | operando aperturaArrayTK expresion cierreArrayTK {}
    | operando referenciaTK {};

accion_d: accionTK a_cabecera bloque faccionTK {};

funcion_d: funcionTK f_cabecera bloque devolverTK expresion ffuncionTK {};

a_cabecera: identificadoresTK aperturaParentesisTK d_par_form cierreParentesisTK puntoYcomaTK {};

f_cabecera: identificadoresTK aperturaParentesisTK listaDeclVariablesV cierreParentesisTK devolverTK d_tipo puntoYcomaTK {};

d_par_form: d_p_form puntoYcomaTK d_par_form {}
    | /*vacio*/{};

d_p_form: entradaTK declaracionDeVariablesV dosPuntosTK d_tipo {}
    | salidaTK declaracionDeVariablesV dosPuntosTK d_tipo {}
    | entradaSalidaTK declaracionDeVariablesV dosPuntosTK d_tipo {};

declaracion_tipo: tipoTK lista_de_tipo ftipoTK {};

lista_de_tipo: identificadoresTK igualTK d_tipo puntoYcomaTK lista_de_tipo {}
    | /*vacio*/{};

d_tipo: literalTuplaTK lista_campos finLiteralTuplaTK {}
    | tablaTK aperturaArrayTK expresion subrangoTK expresion cierreArrayTK deTK d_tipo {}
    | identificadoresTK {}
    | expresion subrangoTK expresion {}
    | referenciaTK d_tipo {}
    | tipoVarTK {};

lista_campos: identificadoresTK dosPuntosTK d_tipo puntoYcomaTK lista_campos {}
    |/*vacio*/ {};

decl_ent: entradaTK lista_d_var {};

decl_sal: salidaTK lista_d_var{};

lista_d_var: lista_id dosPuntosTK d_tipo puntoYcomaTK lista_d_var {}
    | /*vacio*/ {};

lista_id: identificadoresTK separadorTK lista_id {}
    | identificadoresTK {};

decl_ent_sal: decl_ent {}
    | decl_ent decl_sal {}
    | decl_sal {};

instrucciones: instruccion puntoYcomaTK instrucciones {}
    | instruccion {};

instruccion: continuarTK {}
    | asignacion {}
    | alternativa {}
    | iteracion {}
    | accion_ll {}
    | /*vacio*/ {};

asignacion: operando asignacionTK expresion {};

alternativa: condicionSiTK expresion condicionEntoncesTK instrucciones lista_opciones finCondicionSiTK {};

lista_opciones: condicionSiNoTK expresion condicionEntoncesTK instrucciones lista_opciones {}
    |/*vacio*/ {};

iteracion: it_cota_fija {}
    | it_cota_exp {};

it_cota_exp: mientrasTK expresion condicionMientrasTK instrucciones finMientrasTK {};

it_cota_fija: condicionParaTK identificadoresTK asignacionTK expresion hastaTK expresion condicionMientrasTK instrucciones finCondicionParaTK {};

accion_ll: identificadoresTK aperturaParentesisTK l_ll cierreParentesisTK {};

funcion_ll: identificadoresTK aperturaParentesisTK l_ll cierreParentesisTK{};

l_ll: expresion separadorTK l_ll {}
    | expresion {};

declaracionConstantesV: constTK listaDeclConstantesV fconstTK {};

listaDeclConstantesV :  declaracionDeConstanteV {}
	| listaDeclConstantesV puntoYcomaTK listaDeclConstantesV {};

declaracionDeConstanteV : nombreConstanteTK igualTK literalTK {};

declaracionVariablesV: varTK listaDeclVariablesV finVarTK{};

listaDeclVariablesV : declaracionDeVariablesV {}
    | listaDeclVariablesV puntoYcomaTK listaDeclVariablesV {}
    | /*vacio*/ {};

declaracionDeVariablesV: lista_id dosPuntosTK tipoVarTK {};

%%
int main(int argc, char **argv){
	#if defined YYDEBUG
	yydebug=1;
	#endif
	++argv, --argc;
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	yyparse();
}

void yyerror(char * s){
	printf("\tBISON: ERROR, %s\n", s);
}
