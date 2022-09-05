#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
int valor1, valor2, resultadocalculo;

printf("Ingrese primer valor:\n");
scanf("%i", &valor1);
printf("Ingrese segundo valor:\n");
fflush(stdin);
scanf("%i", &valor2);
system("pause");

resultadocalculo=(valor1+valor2)*(valor1-valor2);	
	
	printf("El resultado del calculo es: %i\n", resultadocalculo);
	return (resultadocalculo);
}
