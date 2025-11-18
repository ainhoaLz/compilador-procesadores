#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tablaDeSimbolos.h"


tablaDeSimbolos nuevaTablaDeSimbolos() {
    return (Celda *) NULL;
}

bool insertaSimbolo(tablaDeSimbolos * ptc, char * pnombre, LiteralT v){
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
    if (tc = NULL)
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

bool buscarSimbolo(TablaDeSimbolos tc, char *pnombre) {
    Celda *c = tc;
    while (c != NULL) {
        if (strcmp(c->nombre, pnombre) == 0) {
            return true;
        }
        c = c->sig;
    }
    return false;
}
