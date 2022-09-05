#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>



int main(int argc, char *argv[]) {
	int num1, num2, num3, resnum1doble, resnum1triple, resnum1mitad, resnum2doble, resnum2triple, resnum2mitad, resnum3doble, resnum3triple, resnum3mitad;
	
	printf("Ingrese primer numero: \n");
	scanf("%i", &num1);
	system("pause");
	
	resnum1doble=num1*2;
	resnum1triple=num1*3;
	resnum1mitad=num1/2;
	
	
	printf("El doble del primer numero es: %i \n", resnum1doble);
	printf("El triple del primer numero es: %i \n", resnum1triple);
	printf("La mitad del primer numero es: %i \n", resnum1mitad);
	
	printf("Ingrese segundo numero: \n");
	scanf("%i", &num2);
	system("pause");
	
	resnum2doble=num2*2;
	resnum2triple=num2*3;
	resnum2mitad=num2/2;
	
	
	printf("El doble del segundo numero es: %i \n", resnum2doble);
	printf("El triple del segundo numero es: %i \n", resnum2triple);
	printf("La mitad del segundo numero es: %i \n", resnum2mitad);
	
	printf("Ingrese tercer numero: \n");
	scanf("%i", &num3);
	system("pause");
	
	resnum3doble=num3*2;
	resnum3triple=num3*3;
	resnum3mitad=num3/2;
	
	
	printf("El doble del tercer numero es: %i \n", resnum3doble);
	printf("El triple del tercer numero es: %i \n", resnum3triple);
	printf("La mitad del tercer numero es: %i \n", resnum3mitad);
	system("pause");
	
	return;
}
