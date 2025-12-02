#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaDeCuadruplas.h"

TablaCuadruplas nuevaTablaDeCuadruplas() {
    return (Cuadrupla *) NULL;
}

Cuadrupla* nuevaCuadrupla(char *op, infoVariable arg1, infoVariable arg2, infoVariable res){
    Cuadrupla *c = malloc(sizeof(Cuadrupla));
    c->op = strdup(op);
    c->arg1 = arg1;
    c->arg2 = arg2;
    c->res = res;
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
    printf("El contenido de la tabla de cuadruplas es:\n");
    printf("Op\tArg1\tArg2\tRes\n");
    while(l != NULL){
        printf("%s\t",l->op);
        escribeTipo(l->arg1);
        escribeTipo(l->arg2);
        printf("%s/",l->res.name);
        escribeTipo(l->res);
        printf("\n");
        l = l->sig;
    }
}
/*
void escribeNombreTipo(NombreDeTipoT l){
    switch (l) {
        case BOOLEANO:
            printf("Booleano\t");
            break;
        case CADENA:
            printf("Cadena\t");
            break;
        case CARACTER:
            printf("Caracter\t");
            break;
        case ENTERO:
            printf("Entero\t");
            break;
        case REAL:
            printf("Real\t");
            break;
    }
}*/

void asignarCuadrupla(){
    //guardar la respuesta como solo guardamos dos operandos a lo mejor el
}
