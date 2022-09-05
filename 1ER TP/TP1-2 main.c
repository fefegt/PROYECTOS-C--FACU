#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
int (num1);
int (num2);
int (num3);
int resultado;

printf("Ingrese primer numero: \n");
scanf("%i", &num1);
printf("Ingrese segundo numero: \n");
fflush (stdin);
scanf("%i", &num2);
printf("Ingrese tercer numero: \n");
fflush (stdin);
scanf("%i", &num3);

resultado= num1+num2+num3;

printf("La suma de los tres numeros es:%i", resultado);	
	
	return 0;
}
