#include "funciones.h"


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

void guardarpers(pers *pers)
{
	printf("Ingresa los datos de la persona: (nombre completo iniciando por apellidos, el segundo nombre no es necesario)\n ");
	scanf("%s %s %s",&pers->apellidopat, &pers->apellidomat, &pers->nombre);
	setbuf(stdin, NULL);
	printf("Tipo de sangre y rh (positivo o negativo) ejemplo: O +\n");
	setbuf(stdin, NULL);
	scanf("%c %c",&pers->tipsang, &pers->rh);
	printf("Fecha de nacimiento empezando por el dia (DD MM AAAA), ejemplo: 22 01 2001\n");
	scanf("%d %d %d",&pers->dianac, &pers->mesnac, &pers->anionac);
	printf("Fecha actual empezando por el dia (DD MM AAAA), ejemplo: 22 04 2020\n");
	scanf("%d %d %d",&pers->diaact, &pers->mesact, &pers->anioact);
	printf("\n");
}

void mostpers(pers pers)
{
	printf("Nombre: %s %s %s\n",pers.nombre,pers.apellidopat,pers.apellidomat);
	printf("Tipo de sangre: %c %c\n",pers.tipsang,pers.rh);
	printf("Fecha de nacimiento: %d %d %d\n",pers.dianac,pers.mesnac,pers.anionac);
	printf("Fecha actual: %d %d %d\n\n",pers.diaact,pers.mesact,pers.anioact);
}

void rfc(pers *pers)
{
	short diasMes[11]={31,28,};
	char cons[21]={'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Y','Z'};
	char vocales[5]={'A','E','I','O','U'};
	printf("SU RFC ES: %c",pers->apellidopat[0]);
	int contadorCONS, contadorPalabra, contadorvoc, cont=0,s;
	for (contadorPalabra=0 ; contadorPalabra < pers->apellidopat[contadorPalabra] ;contadorPalabra++)
		for (contadorvoc=0 ; contadorvoc<5 ;contadorvoc++)
			if (vocales[contadorvoc] == pers->apellidopat[contadorPalabra] && cont==0){
				printf("%c",pers->apellidopat[contadorPalabra]);
				cont++;
			}
	for (contadorPalabra=0 ; contadorPalabra<pers->apellidomat[contadorPalabra] ;contadorPalabra++)
		for (contadorCONS=0 ; contadorCONS<26 ;contadorCONS++)
			if (cons[contadorCONS] == pers->apellidomat[contadorPalabra] && cont==1){
				printf("%c",pers->apellidomat[contadorPalabra]);
				cont++;
				contadorCONS = 26;
			}
	printf("%c",pers->nombre[0]);
	s = pers->anionac%100;
	if(s < 10)
		printf("0%d",s);
	else
		printf("%d",s);
	if(pers->mesnac < 10)
		printf("0%d",pers->mesnac);
	else
		printf("%d",pers->mesnac);
	if(pers->dianac < 10)
		printf("0%d",pers->dianac);
	else
		printf("%d",pers->dianac);
	printf("\n");
}
