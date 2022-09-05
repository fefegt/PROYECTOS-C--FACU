#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char *argv[]) {
	float radio, altura;
	float pi, volumen, area;
	
	pi=3.14;
	
	printf("Ingrese radio del cilindro en cm:");
	scanf("%f", &radio);
	printf("Ingrese la altura del cilindro en cm:");
	scanf("%f", &altura);
	
	 area=pi*(radio)*pow(radio, 2);
	 
	 printf("El area del cilindro es: %f ", area);
	 













	return 0;
}
