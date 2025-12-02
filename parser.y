
%{
    #include <stdio.h>
    #include <string.h>
    #include "nombresDeTipos.h"
	#include "literal.h"
	#include "listaId.h"
	#include "tablaDeSimbolos.h"
	#include "tablaDeCuadruplas.h"

    int yylex(); // Usamos la funcion que se crea gracias a flex
    void yyerror(char *); // Prototipo de una funcion necesaria
    extern FILE* yyin;
    TablaDeSimbolos ts;
    TablaCuadruplas tc;
    int tempCont;
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
%token <cadena> sumaYrestaTK
%token negacionTK
%token deTK
%token puntoYcomaTK
%token comparacionTK
%token <cadena> divisionYmultiplicacionTK
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
%token <cadena> asignacionTK
%token condicionSiTK
%token finCondicionSiTK
%token condicionEntoncesTK
%token condicionParaTK
%token finCondicionParaTK
%token condicionSiNoTK
%token <tipo> tipoVarTK //asi se recoge que la cadena de tipo, no hace falta añadir otro archivo
%token <cadena> identificadoresTK
%token <cadena> nombreConstanteTK
%token puntoTK
%token <literal> literalTK
%token verdaderoTK
%token falsoTK
%token precondicionTK
%token postcondicionTK

%left negacionTK
%left puntoTK referenciaTK
%nonassoc comparacionTK
%left sumaYrestaTK subrangoTK
%left divisionYmultiplicacionTK
%nonassoc aperturaArrayTK aperturaComentarioTK aperturaParentesisTK
%left  cierreArrayTK cierreComentarioTK cierreParentesisTK
%left igualTK
%left yTK oTK
%left puntoYcomaTK

%union{
	char* cadena;
	LiteralT literal;
	int entero;
	ListaId paraLid;
	NombreDeTipoT tipo;
	infoVariable info;
}

%type <paraLid> lista_id
%type <entero> listaDeclVariablesV
%type <entero> declaracionVariablesV
%type <entero> declaracionDeConstanteV
%type <info> expresion
%type <info> operando

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

expresion: expresion sumaYrestaTK expresion {
         infoVariable temp;
         if($1.tipo == ENTERO && $3.tipo == ENTERO){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = ENTERO;
             agregarCuadrupla(&tc, nuevaCuadrupla($2, $1, $3, temp));
             $$ = temp;
         }else if($1.tipo == ENTERO && $3.tipo == REAL){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = REAL;
             agregarCuadrupla(&tc, nuevaCuadrupla($2, $1, $3, temp));
             $$ = temp;
         }else if($1.tipo == REAL && $3.tipo == ENTERO){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = REAL;
             agregarCuadrupla(&tc, nuevaCuadrupla($2, $1, $3, temp));
             $$ = temp;
         }else if($1.tipo == REAL && $3.tipo == REAL){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = REAL;
             agregarCuadrupla(&tc, nuevaCuadrupla($2, $1, $3, temp));
             $$ = temp;
         }else{
             printf("ERROR las variables no son del mismo tipo\n");
         }
    }
    | expresion divisionYmultiplicacionTK expresion {
        infoVariable temp;
         if($1.tipo == ENTERO && $3.tipo == ENTERO){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = ENTERO;
             agregarCuadrupla(&tc, nuevaCuadrupla($2, $1, $3, temp));
             $$ = temp;
         }else if($1.tipo == ENTERO && $3.tipo == REAL){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = REAL;
             agregarCuadrupla(&tc, nuevaCuadrupla($2, $1, $3, temp));
             $$ = temp;
         }else if($1.tipo == REAL && $3.tipo == ENTERO){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = REAL;
             agregarCuadrupla(&tc, nuevaCuadrupla($2, $1, $3, temp));
             $$ = temp;
         }else if($1.tipo == REAL && $3.tipo == REAL){
             char name[10];
             sprintf(name, "t%d", tempCont++);
             temp.name = malloc(strlen(name) + 1);
             strcpy(temp.name, name);
             temp.tipo = REAL;
             agregarCuadrupla(&tc, nuevaCuadrupla($2, $1, $3, temp));
             $$ = temp;
         }else{
             printf("ERROR las variables no son del mismo tipo\n");
         }
    }
    | operando {
        $$ = $1;
    }
    | literalTK {
        infoVariable aux;
        aux.name = NULL;
        aux.tipo = $1.tipoDelValor;
        $$ = aux;
    }
    | sumaYrestaTK expresion {}
    | expresion yTK expresion {}
    | expresion oTK expresion {}
    | negacionTK expresion {}
    | verdaderoTK {}
    | falsoTK {}
    | expresion comparacionTK expresion {}
    | expresion igualTK expresion {}
    | aperturaParentesisTK expresion cierreParentesisTK {
        $$ = $2;
    }
    | funcion_ll {};

operando: identificadoresTK {
         infoVariable* lit = buscarSimbolo(&ts, $1);
         if(lit == NULL){
             printf("ERROR: el identificador no se encuentra en la tabla de simbolo\n");
         }else{
             $$ = *lit;
         }
    }
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

lista_id: identificadoresTK separadorTK lista_id {
        $$ = copiarLista(NULL, &($3));
        meteId(&($$), $1);
    }
    | identificadoresTK {
        $$ = nuevaListaCadenas();
        printf("COMPILADOR: Se ha creado la lista\n");
        meteId(&($$), $1);
        printf("COMPILADOR: no se llega a meter el id\n");
    };

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

asignacion: operando asignacionTK expresion {
    infoVariable empty; 
    memset(&empty, 0, sizeof(infoVariable));  // arg2 not used
    empty.tipo = NULO;
    empty.name = NULL;
    Cuadrupla *asig = nuevaCuadrupla($2, $3, empty, $1);
    agregarCuadrupla(&tc, asig);
};

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

declaracionConstantesV: constTK listaDeclConstantesV fconstTK {
        //printf("COMPILADOR: Se han añadido %d simbolos\n", $2);
    };

listaDeclConstantesV :  declaracionDeConstanteV {
       // $$ = 1;
    }
	| listaDeclConstantesV puntoYcomaTK listaDeclConstantesV {
       // $$ = $1 + $3;
	};

declaracionDeConstanteV : nombreConstanteTK igualTK literalTK {
        //insertaSimbolo(&ts, $1, $3, 1); //verdadero
    };

declaracionVariablesV: varTK listaDeclVariablesV finVarTK{
        printf("COMPILADOR: Se han añadido %d simbolos\n", $2);
    };

listaDeclVariablesV : declaracionDeVariablesV {
        $$ = 1;
    }
    | listaDeclVariablesV puntoYcomaTK listaDeclVariablesV {
        $$ = $1 + $3;
    }
    | /*vacio*/ {};

declaracionDeVariablesV: lista_id dosPuntosTK tipoVarTK {
        CeldaId c;
        while(!esNula(&($1))){
            c = *$1;
            LiteralT aux = nuevoLiteralSinValor($3);
            insertaSimbolo(&ts, c.nombre, aux); //no se le pasa el tipoVar si no el literal, el que tiene el valor y el tipo
            borrar(&($1));
        }
    };

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
