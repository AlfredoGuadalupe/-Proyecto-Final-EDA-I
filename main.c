#include <stdio.h>
#include <stdlib.h>
#include "funciones.c"



int main() 
{
	int a=0;
	PILA pil;
	pers pers;
	guardarpers(&pers);
	inicpila(&pil);
	push(&pil,pers,a);
	a++;
	mostrar(&pil,a);
	rfc(&pers);
	return 0;
}
