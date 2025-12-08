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
    printf("Op\t\tArg1\t\tArg2\t\tRes\n");
    while(l != NULL){
        printf("%s\t\t",l->op);
        if(l->arg1.name != NULL){
            printf("%s/",l->arg1.name);
        }
        escribeTipo(l->arg1);
        if(l->arg2.name != NULL){
            printf("%s/",l->arg2.name);
        }
        escribeTipo(l->arg2);
        printf("%s/",l->res.name);
        escribeTipo(l->res);
        printf("\n");
        l = l->sig;
    }
}

void asignarCuadrupla(){
    //guardar la respuesta como solo guardamos dos operandos a lo mejor el
}

int siguienteCuadrupla(TablaCuadruplas *tc){
    return tc->sig;
} 

void backpatch(TablaCuadruplas *tc, ListaEnteros lista, int destino){
    char stringDestino[30];
    sprintf(stringDestino, "%d", destino); 
    ListaEnteros actual = lista;
    while(actual!=NULL){
        int indice = actual->valor;
        Cuadrupla *c = tc;
        int pos = 0;
        while (c != NULL && pos<indice){
            c = c->sig;
            pos++;
        } 
        if(c!= NULL){
            c->res.name = strdup(stringDestino);
        } 
    } 
    actual = actual->sig;
} 