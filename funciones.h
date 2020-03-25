#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"


void inicpila(PILA p);
void push(PILA p, char dato,int tope);
char pop(PILA p, int tope);
char tope(PILA p, int tope);
int pilavacia(PILA p, int tope);
void mostrar(PILA p, int tope);

#endif
