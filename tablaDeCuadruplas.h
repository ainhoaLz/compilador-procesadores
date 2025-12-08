#ifndef FFF_TABLA_DE_CUADRUPLAS_H
#define FFF_TABLA_DE_CUADRUPLAS_H

#include <stdbool.h>
#include "literal.h"
#include "tablaDeSimbolos.h"
#include "listaEnteros.h" 


typedef struct Cuadrupla {
    char *op;
    infoVariable arg1;
    infoVariable arg2;
    infoVariable res;
    struct Cuadrupla *sig;
} Cuadrupla;

typedef Cuadrupla* TablaCuadruplas;

TablaCuadruplas nuevaTablaDeCuadruplas(void);
Cuadrupla* nuevaCuadrupla(char *op, infoVariable arg1, infoVariable arg2, infoVariable res);
void agregarCuadrupla(TablaCuadruplas *l, Cuadrupla *c);
void imprimeCuadruplas(TablaCuadruplas l);
int siguienteCuadrupla(TablaCuadruplas *tc);
void backpatch(TablaCuadruplas *tc, ListaEnteros lista, int destino);

#endif
