#ifndef LISTA_ENTEROS_H
#define LISTA_ENTEROS_H

typedef struct celdaEntero{
    int valor;
    struct celdaEntero* sig;
} CeldaEntero;

typedef CeldaEntero* ListaEnteros;
ListaEnteros nuevaListaEnteros(int valor);
ListaEnteros juntarListas(ListaEnteros lista1, ListaEnteros lista2);
int vaciarLista(ListaEnteros lista);

#endif
