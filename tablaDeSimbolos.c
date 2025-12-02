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
    while (c != NULL && strcmp(pnombre, c->nombre.name))
        c = c->sig;
    if (c != NULL)
        printf("Ya existe una constante llamada %s\n", pnombre);
    else {
        if ((c = (Celda *) malloc(sizeof(Celda))) == NULL) {
            printf("No hay memoria para una celda de la tabla de simbolos");
            exit(1);
        }
        c->nombre.name = pnombre;
        c->nombre.tipo = v.tipoDelValor;
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
        printf("Nombre\tTipo\n");
        while (aux != NULL){
            printf("%s\t\t", aux->nombre.name);
            escribeTipo(aux->nombre);
            aux = aux ->sig;
            printf("\n");
        }
    }
}

void escribeTipo(infoVariable l){
    switch (l.tipo) {
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
}

infoVariable* buscarSimbolo(TablaDeSimbolos * ptc, char *nombre) {
    Celda *c = *ptc;
    while (c != NULL && strcmp(c->nombre.name, nombre) != 0) {
        c = c->sig;
    }
    if(strcmp(c->nombre.name, nombre) == 0){
        return &(c->nombre);
    }
    return NULL;
}
