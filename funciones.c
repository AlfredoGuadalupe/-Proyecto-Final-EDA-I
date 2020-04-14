#include "funciones.h"
;

void inicpila(PILA p)
{
    p->valores = (pers*)malloc(50*sizeof(pers));
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

pers topep(PILA p, int tope)
{
    return p->valores[tope-1];
}

void mostrar(PILA p, int tope)
{
    int i;
    for(i=tope-1; i >= 0; i--){
    	mostpers(topep(p,tope));
	}
    printf("\n");
}

void guardarpers(pers pers)
{
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
}

void mostpers(pers pers)
{
	printf("%s\n",pers.nombre);
	printf("%s\n",pers.apellidopat);
	printf("%s\n",pers.apellidomat);
	printf("%c\n",pers.tipsang);
	printf("%c\n",pers.rh);
	printf("%d\n",pers.dianac);
	printf("%d\n",pers.mesnac);
	printf("%d\n",pers.anionac);
	printf("%d\n",pers.diaact);
	printf("%d\n",pers.mesact);
	printf("%d\n",pers.anioact);
}

void curp(pers pers)
{
	int contadorAlfabeto, contadorPalabra, i = 0;
	for (contadorPalabra=0 ; contadorPalabra<[contadorPalabra] ;contadorPalabra++)
		for (contadorAlfabeto=0 ; contadorAlfabeto<26 ;contadorAlfabeto++)
			if (alfabeto[contadorAlfabeto] == [contadorPalabra]){
				pers.Curp= [contadorPalabra];
				contadorAlfabeto = 26;
			}
	printf("\n");
}
