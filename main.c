#include <stdio.h>
#include <stdlib.h>
#include "funciones.c"

int main() 
{
	pers pers;
	printf("Ingresa los datos de la persona: (nombre completo iniciando por apellidos, el segundo nombre no es necesario)\n ");
	setbuf(stdin, NULL);
	scanf("%s %s %s",&pers.apellidopat, &pers.apellidomat, &pers.nombre);
	printf("Tipo de sangre y rh (positivo o negativo) ejemplo: O +\n");
	setbuf(stdin, NULL);
	scanf("%c %c",&pers.tipsang, &pers.rh);
	printf("Fecha de nacimiento empezando por el dia (DD MM AAAA), ejemplo: 22 01 2001\n");
	scanf("%d %d %d",&pers.dianac, &pers.mesnac, &pers.anionac);
	printf("Fecha actual empezando por el dia (DD MM AAAA), ejemplo: 22 04 2020\n");
	scanf("%d %d %d",&pers.diaact, &pers.mesact, &pers.anioact);
	return 0;
}
