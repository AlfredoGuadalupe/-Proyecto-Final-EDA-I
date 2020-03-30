#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <stdio.h>
#include <stdlib.h>
#include "struct.h"


void inicpila(PILA p);
void push(PILA p, pers dato,int tope);
pers pop(PILA p, int tope);
pers tope(PILA p, int tope);
int pilavacia(PILA p, int tope);
void mostrar(PILA p, int tope);
pers guardarpers(char *nombre, char *apellido, char *segnombre, char *rh, 
int dianac, int mesnac, int anionac, int diaact, int mesact, int anioact, char *tipsang);

#endif
