#ifndef FFF_TABLA_DE_CUADRUPLAS_H
#define FFF_TABLA_DE_CUADRUPLAS_H

#include <stdbool.h>
#include "literal.h"

// typedef struct Operando {
//     LiteralT tipo;
//
// }

typedef struct Cuadrupla {
    char *op;
    LiteralT *arg1;
    LiteralT *arg2;
    char *res;
    struct Cuadrupla *sig;
} Cuadrupla;

typedef Cuadrupla* TablaCuadruplas;

TablaCuadruplas nuevaTablaDeCuadruplas(void);
Cuadrupla* nuevaCuadrupla(char *op, LiteralT *arg1, LiteralT *arg2, char *res);
void agregarCuadrupla(TablaCuadruplas *l, Cuadrupla *c);
void imprimeCuadruplas(TablaCuadruplas l);

#endif
