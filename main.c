#include <stdio.h>
#include <stdlib.h>
#include "funciones.c"

char alfabeto[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char vocales[5]={'A','E','I','O','U'};

int main() 
{
	int a=0;
	PILA pil;
	pers pers;
	guardarpers(pers);
	inicpila(pil);
	return 0;
}
