#include "literal.h"
#include "nombresDeTipos.h" //Para poder usar nobres de tipo
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

LiteralT nuevoLiteralBooleano(ValorBooleanoT valor){
    LiteralT l;
    l.tipoDelValor = BOOLEANO;
    l.tieneValor = true;
    l.valor.valorBooleano = valor;
    return l;
}

LiteralT nuevoLiteralCadena(char * valor){
    LiteralT l;
    l.tipoDelValor = CADENA;
    l.tieneValor = true;
    if ((l.valor.valorCadena = strdup(valor)) == NULL){
        printf("\t\t Literal.c: No hasy memoria para crear la constante %s\n", valor);
        exit(1);
    }
    return l;
}

LiteralT nuevoLiteralCaracter(char valor){
    LiteralT l;
    l.tipoDelValor = CARACTER;
    l.tieneValor = true;
    l.valor.valorCaracter = valor;
    return l;
}

LiteralT nuevoLiteralEntero(int valor){
    LiteralT l;
    l.tipoDelValor = ENTERO;
    l.tieneValor = true;
    l.valor.valorEntero = valor;
    return l;
}

LiteralT nuevoLiteralReal(float valor){
    LiteralT l;
    l.tipoDelValor = REAL;
    l.tieneValor = true;
    l.valor.valorReal = valor;
    return l;
}

void escribeLiteral(LiteralT l){
    switch (l.tipoDelValor) {
        case BOOLEANO:
            printf("Booleano\t");
            if(l.tieneValor){
                printf("%s", l.valor.valorBooleano == VERDADERO ? "Verdadero" : "Falso");
            }
            break;
        case CADENA:
            printf("Cadena\t\t");
            if(l.tieneValor){
                printf("%s", l.valor.valorCadena);
            }
            break;
        case CARACTER:
            printf("Caracter\t");
            if(l.tieneValor){
                printf("%c", l.valor.valorCaracter);
            }
            break;
        case ENTERO:
            printf("Entero\t\t");
            if(l.tieneValor){
                printf("%d", l.valor.valorEntero);
            }
            break;
        case REAL:
            printf("Real\t\t");
            if(l.tieneValor){
                printf("%f", l.valor.valorReal);
            }
            break;
    }
    printf("\n");
}


LiteralT nuevoLiteralSinValor(NombreDeTipoT tipo){
    LiteralT l;
    l.tipoDelValor = tipo;
    l.tieneValor = false;
    return l;
}
