#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int lado1, lado2, lado3;


printf("A continuacion se le solicitara que ingrese cada lado del triangulo en cm para determiar que a que tipo corresponde \n");
printf("Ingrese primer lado del triangulo:");	
scanf("%i", &lado1);
printf("Ingrese segundo lado del triangulo:");
fflush(stdin);
scanf("%i", &lado2);
printf("Ingrese tercel lado del triangulo:");
fflush(stdin);
scanf("%i", &lado3);

if((lado1==lado2)&&(lado1==lado3)){
	printf("El triangulo es Equilatero");
}	
else if((lado1==lado2)&&(lado2!=lado3)){
	printf("El triangulo es Isosceles");
}	
else{
	printf("El triangulo es Escaleno");
}	
	
	return 0;
}
