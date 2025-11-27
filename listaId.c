#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "listaId.h"


ListaId nuevaListaCadenas() {
    return (CeldaId *) NULL;
}

bool meteId(ListaId * ptc, char * pnombre){
    CeldaId * c;
    c = *ptc;
    while (c != NULL && strcmp(pnombre, c->nombre))
        c = c->sig;
    if (c != NULL)
        printf("Ya existe una constante llamada %s\n", pnombre);
    else {
        if ((c = (CeldaId *) malloc(sizeof(CeldaId))) == NULL) {
            printf("No hay memoria para una celda de la tabla de simbolos");
            exit(1);
        }
        c->nombre = pnombre;
        c->sig = *ptc;
        *ptc = c;
    }
}

ListaId copiarLista(ListaId * nueva, ListaId * antigua) {
    CeldaId *c = *antigua;
    ListaId nuevaLista = NULL;
    while (c != NULL) {
        CeldaId *nuevoNodo = (CeldaId *) malloc(sizeof(CeldaId));
        if (nuevoNodo == NULL) {
            printf("No hay memoria para una nueva celda\n");
            exit(1);
        }
        nuevoNodo->nombre = c->nombre;
        nuevoNodo->sig = nuevaLista;
        nuevaLista = nuevoNodo;
        c = c->sig;
    }
    return nuevaLista;
}

bool esNula(ListaId * ptc){
    return (*ptc == NULL);
}

void borrar(ListaId * ptc) {
    if (esNula(ptc)) {
        return;
    } else {
        CeldaId *aux = *ptc;
        if (aux->sig == NULL) {
            free(aux);
            *ptc = NULL;
        } else {
            *ptc = (*ptc)->sig;
            free(aux);
        }
    }
}

