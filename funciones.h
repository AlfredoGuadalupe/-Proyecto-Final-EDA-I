#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"


void inicpila(PILA p);
void push(PILA p, pers dato,int tope);
pers pop(PILA p, int tope);
pers topep(PILA p, int tope);
int pilavacia(PILA p, int tope);
void mostrar(PILA p, int tope);
pers guardarpers(pers pers);
void mostpers(pers pers);
void rfc(pers pers);


#endif
