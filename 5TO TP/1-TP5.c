#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int num1, num2;
	int sumatoria;
	
	printf("Ingrese 1er numero de 2:\n");
	scanf("%d", &num1);
	printf("Ingrese 2do numero de 2:\n");
	scanf("%d", &num2);
	sumaNumeros(&num1, &num2, &sumatoria);

}


void sumaNumeros(int *numero1, int *numero2, int *suma)
{
	*suma=*numero1+*numero2;
	printf("El resultado de la suma es:%d", *suma);
}
