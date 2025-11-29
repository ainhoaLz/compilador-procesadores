#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaDeCuadruplas.h"

TablaCuadruplas nuevaTablaDeCuadruplas() {
    return (Cuadrupla *) NULL;
}

Cuadrupla* nuevaCuadrupla(char *op, LiteralT *arg1, LiteralT *arg2, char *res){
    Cuadrupla *c = malloc(sizeof(Cuadrupla));
    c->op = strdup(op);
    c->arg1 = arg1;
    c->arg2 = arg2;
    c->res = res ? strdup(res) : NULL;
    c->sig = NULL;
    return c;
}

void agregarCuadrupla(TablaCuadruplas *l, Cuadrupla *c){
    if(*l == NULL){
        *l = c;
    } else {
        Cuadrupla *aux = *l;
        while(aux->sig != NULL) aux = aux->sig;
        aux->sig = c;
    }
}

void imprimeCuadruplas(TablaCuadruplas l){
    printf("Op\tArg1\tArg2\tRes\n");
    while(l != NULL){
        printf("%s\t%d\t%d\t%s\n",
               l->op,
               l->arg1->tipoDelValor,
               l->arg2->tipoDelValor,
               l->res ? l->res : "-");
        l = l->sig;
    }
}
