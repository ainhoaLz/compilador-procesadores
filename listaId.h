#ifndef LISTA_ID_H
#define LISTA_ID_H

#include <stdbool.h>

typedef struct celdaId {
	char * nombre;
	struct celdaId * sig;
} CeldaId;

typedef CeldaId * ListaId;

ListaId nuevaListaCadenas(void);
bool meteId(ListaId *, char *);
ListaId copiarLista(ListaId *, ListaId *);
bool esNula(ListaId *);
void borrar(ListaId *);

#endif
