#ifndef STRUCT_H
#define STRUCT_H

#include <stdio.h>

typedef struct _Persona pers;

struct _Persona
{
    char *nombre;
    char *rh;
    int fechanac;
    char *tipsang;
    
};

typedef struct _Pila pila;

struct _Pila
{
    char *valores;
};

typedef pila * PILA;


#endif
