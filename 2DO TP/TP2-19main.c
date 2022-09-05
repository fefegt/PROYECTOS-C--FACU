#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
int num1, num2, num3, num4, entrepiy3pi,numerosingresados, menor;
const int pi=3.14;

do
{
printf("Ingrese el primer numero:");
scanf("%i", &num1);
menor=num1;
printf("Ingrese el segundo numero:");
fflush(stdin);
scanf("%i", &num2);
menor=num2;
printf("Ingrese el tercer numero:");
fflush(stdin);
menor=num3;
scanf("%i", &num3);
printf("Ingrese el cuarto numero:");
fflush(stdin);
menor=num4;
scanf("%i", &num4);
}while((num1!=0)&&(num2!=0)&&(num3!=0)&&(num3!=0)&&(num4!=0));

numerosingresados=num1+num2+num3+num4;

if((numerosingresados<=pi)&&(numerosingresados<=pi*3)){
printf("Los numeros ingresados estan entre pi y 3pi");
}

	
	
	
	
	
	
	
	
	
	
	return 0;
}
