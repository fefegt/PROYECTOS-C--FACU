#include <stdio.h>
#include <stdlib.h>

void numero(int num1);

int main(int argc, char *argv[]) {

int n1; 

printf("Ingrese un numero:");
scanf("%i", &n1);
numero(n1);	
	
	return 0;
}

void numero(int num1){

int i, j, anteriores, posteriores;

anteriores=num1;
posteriores=num1;

for(i=0;i<5;i++){
anteriores-=1;
printf("Los cinco numeros anteriores son:%i \n",i);	
}for(j=0;j>5;j++){
posteriores++;
printf("Los cinco numeros posteriores son:%i \n",j);	
}
	
}
