#include <stdio.h>
#include <stdlib.h>


int negativo(int numero);

int main(int argc, char *argv[]){

int num1;

printf("Ingrese un numero:");
scanf("%i", &num1);
if(negativo(num1)==1){
printf("negativo");
}
else{
	printf("positivo");
}
	return 0;
}


int negativo(int numero)
{
if(numero<0){
return 1;	
}
else{
return 0;	
}	
}
