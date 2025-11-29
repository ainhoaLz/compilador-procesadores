#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaDeSimbolos.h"

TablaDeSimbolos nuevaTablaDeSimbolos() {
    return (Celda *) NULL;
}

bool insertaSimbolo(TablaDeSimbolos * ptc, char * pnombre, LiteralT v){
    Celda * c;
    c = *ptc;
    while (c != NULL && strcmp(pnombre, c->nombre))
        c = c->sig;
    if (c != NULL)
        printf("Ya existe una constante llamada %s\n", pnombre);
    else {
        if ((c = (Celda *) malloc(sizeof(Celda))) == NULL) {
            printf("No hay memoria para una celda de la tabla de simbolos");
            exit(1);
        }
        c->nombre = pnombre;
        c->valor = v;
        c->sig = *ptc;
        *ptc = c;
    }
}

void imprimeTablaDeSimbolos(TablaDeSimbolos tc){
    Celda * aux = tc;
    if (tc == NULL)
        printf("La tabla de simbolos está vacía\n");
    else {
        printf("El contenido de la tabla de simbolos es.\n");
        printf("Nombre\t\tTipo\t\tValor\n");
        while (aux != NULL){
            printf("%s\t\t", aux->nombre);
            escribeLiteral(aux->valor);
            aux = aux ->sig;
        }
    }
}

bool actualizarValor(TablaDeSimbolos *ptc, char *nombre, LiteralT nuevoValor){
    Celda *c = *ptc;

    while (c != NULL && strcmp(c->nombre, nombre) != 0){
        c = c->sig;
    }

    if (c == NULL) {
        printf("Error: no existe la variable %s\n", nombre);
        return false;
    }

    c->valor = nuevoValor;
    c->valor.tieneValor = true;
    return true;
}

LiteralT* buscarSimbolo(TablaDeSimbolos * ptc, char *nombre) {
    Celda *c = *ptc;
    while (c != NULL && strcmp(c->nombre, nombre) != 0) {
        c = c->sig;
    }
    if(strcmp(c->nombre, nombre) == 0){
        return &(c->valor);
    }
    return NULL;
}
