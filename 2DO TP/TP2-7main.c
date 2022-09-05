#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int num;

printf("Ingrese numero para verificaar si es negativo, nulo o positivo:");
scanf("%i", &num);

if(num>0){
	printf("El numero es positivo");
}	
else if(num==0){
	printf("El numero es nulo");
}	
else{
	printf("El numero es negativo");
}	
	
	
	return 0;
}
