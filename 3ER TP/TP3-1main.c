#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int calculo(int base, int exponente);


int main(int argc, char *argv[]) 
{
int base, exponente, resultado;

printf("Ingrese base:");
scanf("%i", &base);
printf("Ingrese exponente:");
fflush(stdin);
scanf("%i", &exponente);

resultado=calculo(base, exponente);
printf("El resultado es:%i", resultado);	
		
	return 0;
}
int calculo(int base, int exponente)
{
int i, acumulador;
acumulador=base;
for(i=1;i< exponente;i++){
acumulador*=base;
}
return acumulador;	
}
