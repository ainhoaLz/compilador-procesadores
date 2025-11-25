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

bool insertaSimboloSinLiteral(TablaDeSimbolos * ptc, char * pnombre, char * v){
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
        LiteralT aux;
        //esto no sirve hay que cambiarlo pero para ver si lo demas funciona
        if(strcmp(v, "entero") == 0){
            aux = nuevoLiteralEntero(0);
        }else if(strcmp(v, "real") == 0){
            aux = nuevoLiteralReal(0.0);
        }else if(strcmp(v, "booleano") == 0){
            aux = nuevoLiteralBooleano(false);
        }else if(strcmp(v, "cadena") == 0){
            aux = nuevoLiteralCadena("");
        }else if(strcmp(v, "caracter") == 0){
            aux = nuevoLiteralCaracter('a');
        }
        c->nombre = pnombre;
        c->valor = aux;
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
