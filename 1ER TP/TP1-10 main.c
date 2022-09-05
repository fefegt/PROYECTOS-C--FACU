#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	
	float cateto1, cateto2, hipotenusa;
	printf("Ingrese cateto 1:");
	scanf("%f", &cateto1);
	printf("Ingrese cateto 2:");
	fflush(stdin);
	scanf("%f", &cateto2);
	
	
    hipotenusa=sqrt(pow(cateto1,2) + pow(cateto2,2));
	printf("El valor de la hipotenusa es de: %1.2f", hipotenusa);
	
	return (hipotenusa);
}
