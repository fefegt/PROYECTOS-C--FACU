#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int num1, num2, num3;

printf("Ingrese primer numero:");
scanf("%i", &num1);
printf("Ingrese segundo numero:");
scanf("%i", &num2);	
printf("Ingrese tercer numero:");
scanf("%i", &num3);

if((num1>num2)&&(num2>num3)){
	printf("Los numeros estan en orden ascendente.");
}
else{
	printf("Los numeros no estan en orden ascendente.");
}	
	
	return 0;
}
