#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
int cantpesos;
float cantdolares;

printf("Ingrese una cantidad de pesos:");
scanf("%i", &cantpesos);

cantdolares=cantpesos/15.40;

printf("Usted va a recibir esta cantidad de dolares: %f", cantdolares);	

	return 0;
}
