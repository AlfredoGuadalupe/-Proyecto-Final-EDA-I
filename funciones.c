#include "funciones.h"


void inicpila(PILA p)
{
    p->valores = (char *)malloc(50*sizeof(char));
}

void push(PILA p, char dato, int tope)
{
    p->valores[tope]=dato;
}

char pop(PILA p, int tope)
{
    char z = p->valores[tope -1];
    return z;
}

char tope(PILA p, int tope)
{
    return p->valores[tope-1];
}

void mostrar(PILA p, int tope)
{
    int i;
    for(i=tope-1; i >= 0; i--)
        printf("%c ", p->valores[i]);
    printf("\n");
}
