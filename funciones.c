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
	if(pers.dianac < 10)
	{
		if(pers.mesnac < 10)
		{
			printf("Fecha de nacimiento: 0%d 0%d %d\n",pers.dianac,pers.mesnac,pers.anionac);
		}
		else
		{
			printf("Fecha de nacimiento: 0%d %d %d\n",pers.dianac,pers.mesnac,pers.anionac);
		}
	}
	else
	{
		if(pers.mesnac < 10)
		{
			printf("Fecha de nacimiento: %d 0%d %d\n",pers.dianac,pers.mesnac,pers.anionac);
		}
		else
		{
			printf("Fecha de nacimiento: %d %d %d\n",pers.dianac,pers.mesnac,pers.anionac);
		}
	}
	if(pers.diaact < 10)
	{
		if(pers.mesact < 10)
		{
			printf("Fecha actual: 0%d 0%d %d\n\n",pers.diaact,pers.mesact,pers.anioact);
		}
		else
		{
			printf("Fecha actual: 0%d %d %d\n\n",pers.diaact,pers.mesact,pers.anioact);
		}
	}
	else
	{
		if(pers.mesact < 10)
		{
			printf("Fecha actual: %d 0%d %d\n\n",pers.diaact,pers.mesact,pers.anioact);
		}
		else
		{
			printf("Fecha actual: %d %d %d\n\n",pers.diaact,pers.mesact,pers.anioact);
		}
	}
}

void rfc(pers *pers)
{
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

void falta(pers *pers)
{
	short a=0;
	int diasMes[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(pers->anioact%4 == 0)
	{
		diasMes[1]=29;
	}
	if(pers->dianac < pers->diaact)
	{
		a=(diasMes[pers->mesact-1] - pers->diaact) + pers->dianac;
		printf("Faltan %d dia(s) y",a);
		if(pers->mesnac < pers->mesact)
		{
			a=(12 - pers->mesact) + pers->mesnac -1;
			printf(" %d meses para su cumpleanios",a);
		}
		else
		{
			a=pers->mesnac - pers->mesact -1;
			printf(" %d meses para su cumpleanios",a);
		}	
	}
	else
	{
		a=(pers->dianac - pers->diaact);
		printf("Faltan %d dia(s) y",a);
		if(pers->mesnac < pers->mesact)
		{
			a=(12 - pers->mesact) + pers->mesnac;
			printf(" %d meses para su cumpleanios",a);
		}
		else
		{
			a=pers->mesnac - pers->mesact;
			printf(" %d meses para su cumpleanios",a);
		}
	}
}

void edad(pers *pers)
{
		short a=0;
	int diasMes[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	if(pers->anioact%4 == 0)
	{
		diasMes[1]=29;
	}
	if(pers->dianac < pers->diaact)
	{
		a=;
		printf("%d",a);
		if()
		{
			a=;
			printf(" %d",a);
		}
		else
		{
			a=;
			printf(" %d",a);
		}	
	}
	else
	{
		a=(pers->dianac - pers->diaact);
		printf("%d",a);
		if(pers->mesnac < pers->mesact)
		{
			a=;
			printf(" %d",a);
		}
		else
		{
			a=;
			printf(" %d",a);
		}
	}
}
