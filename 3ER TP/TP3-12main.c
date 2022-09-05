#include <stdio.h>
#include <stdlib.h>

int resultado(int num1);

int main(int argc, char *argv[]) {

int num1;

printf("Ingrese un numero:");
scanf("%i", &num1);

resultado(num1);
}
int resultado(int num1){
	if(num1==0){
		printf("El numero es par");
	}
else{
	printf("El numero es impar");
}
}


