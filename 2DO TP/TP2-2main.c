#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int num1, num2, resultado;

printf("Ingrese primer numero: \n");
scanf("%i", &num1);
printf("Ingrese segundo numero: \n");
scanf("%i", &num2);

if(num1>num2){
	resultado=num1-num2;
}	
else{
	resultado=num1*num2;
}
	
printf("El resultado es:%i",resultado);
	return 0;
}
