#include <stdio.h>
#include <stdlib.h>

float media(float num1, float num2);

int main(int argc, char *argv){

float num1, num2;
printf("Ingrese el primer numero:");
scanf("%f", &num1);
printf("Ingrese el segundo numero:");
fflush(stdin);
scanf("%f", &num2);
printf("La media es:%.2f", media(num1, num2));

	return 0;
}
float media(float num1, float num2)
{
return (num1+num2)/2;	
}
