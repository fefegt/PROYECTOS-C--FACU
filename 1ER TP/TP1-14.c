#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	char nombreproducto[25];
	float preciounidad, preciototal;
	int numerounidades;
	
	printf("Ingrese nombre del producto:");
	scanf("%s", &nombreproducto);
	printf("Ingrese precio por unidad:");
	fflush(stdin);
	scanf("%f", &preciounidad);
	printf("Ingrese numero de unidades compradas:");
	fflush(stdin);
	scanf("%i", &numerounidades);
	system("pause");
	
	preciototal=preciounidad*numerounidades;
	
	printf("El nombre del producto vendido es: %s \n", nombreproducto);
	printf("Elnumero de unidades vendidas es: %i \n", numerounidades);
	printf("El monto toal de la compra es: %1.2f \n", preciototal);
	
	
	return 0;
}
