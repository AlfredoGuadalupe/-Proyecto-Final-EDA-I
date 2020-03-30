#include "funciones.h"


void inicpila(PILA p)
{
    p->valores = (pers *)malloc(50*sizeof(pers));
}

void push(PILA p, pers dato, int tope)
{
    p->valores[tope]=dato;
}

pers pop(PILA p, int tope)
{
    pers z = p->valores[tope -1];
    return z;
}

pers tope(PILA p, int tope)
{
    return p->valores[tope-1];
}

void mostrar(PILA p, int tope)
{
    int i;
    for(i=tope-1; i >= 0; i--)
        printf();
    printf("\n");
}
