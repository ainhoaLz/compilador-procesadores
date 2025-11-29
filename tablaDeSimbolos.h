#ifndef FFF_TABLA_DE_SIMBOLOS_H
#define FFF_TABLA_DE_SIMBOLOS_H

#include <stdbool.h>
#include "literal.h"

typedef struct celda {
	char * nombre;
	LiteralT valor;
	struct celda * sig;
} Celda;

typedef Celda * TablaDeSimbolos;

TablaDeSimbolos nuevaTablaDeSimbolos(void);
bool insertaSimbolo(TablaDeSimbolos *, char *, LiteralT);
void imprimeTablaDeSimbolos(TablaDeSimbolos);
bool actualizarValor(TablaDeSimbolos *ptc, char *nombre, LiteralT nuevoValor);
LiteralT* buscarSimbolo(TablaDeSimbolos *ptc, char *nombre);

#endif
