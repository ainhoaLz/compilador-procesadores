#ifndef FFF_TABLA_DE_SIMBOLOS_H
#define FFF_TABLA_DE_SIMBOLOS_H

#include <stdbool.h>
#include "literal.h"


typedef struct infoVariable {
    char * name;
    NombreDeTipoT tipo;
} infoVariable;

typedef struct celda {
	infoVariable nombre;
	struct celda * sig;
} Celda;

typedef Celda * TablaDeSimbolos;

TablaDeSimbolos nuevaTablaDeSimbolos(void);
bool insertaSimbolo(TablaDeSimbolos *, char *, LiteralT);
void imprimeTablaDeSimbolos(TablaDeSimbolos);
infoVariable* buscarSimbolo(TablaDeSimbolos *ptc, char *nombre);
void escribeTipo(infoVariable l);

#endif
