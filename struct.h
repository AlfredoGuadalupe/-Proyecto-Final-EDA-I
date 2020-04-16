#ifndef STRUCT_H
#define STRUCT_H

#include <stdio.h>

typedef struct _Persona pers;

struct _Persona
{
    char *nombre[10];
    char *apellidopat[10];
    char *apellidomat[10];
    char *rh;
    int dianac;
    int mesnac;
    int anionac;
    int diaact;
    int mesact;
    int anioact;
    char *tipsang;
    
};

typedef struct _Pila pila;

struct _Pila
{
    pers *valores;
};

typedef pila *PILA;


#endif
