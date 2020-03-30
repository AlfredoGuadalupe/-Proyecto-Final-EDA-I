#ifndef STRUCT_H
#define STRUCT_H

#include <stdio.h>

typedef struct _Persona pers;

struct _Persona
{
    char *nombre;
    char *apellido;
    char *segnombre;
    char *rh;
    int dianac;
    int mesnac;
    int añonac;
    int diaact;
    int mesact;
    int añoact;
    char *tipsang;
    
};

typedef struct _Pila pila;

struct _Pila
{
    pers *valores;
};

typedef pila * PILA;


#endif
