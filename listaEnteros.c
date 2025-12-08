#include <stdio.h>
#include <stdlib.h>
#include "listaEnteros.h"

ListaEnteros nuevaListaEnteros(int valor){
    ListaEnteros nuevaLista = (ListaEnteros)malloc(sizeof(CeldaEntero));
    if(!nuevaLista){
        printf("No hay memoria para una celda de la lista de enteros");
        exit(1);
    } 
    nuevaLista->valor = valor;
    nuevaLista->sig = NULL;
    return nuevaLista;
} 
ListaEnteros juntarListas(ListaEnteros lista1, ListaEnteros lista2){
    if (!lista2) return lista1;
    if (!lista1) return lista2;
    ListaEnteros listaAux = lista1;
    while (listaAux->sig != NULL){
        listaAux = listaAux->sig;
    } 
    listaAux->sig = lista2;
    return lista1;
} 
int vaciarLista(ListaEnteros lista){
    return lista == NULL;
} 