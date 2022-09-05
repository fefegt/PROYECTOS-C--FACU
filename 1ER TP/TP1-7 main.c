#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
int importetotal, importetot80, importetot20, importetot15;

printf("Ingrese un importe en pesos:");
scanf("%i", &importetotal);

importetot80=(importetotal*80)/100;
importetot20=importetotal*20/100;
importetot15=importetotal*15/100;

printf("El 80 porciento del importe total es: %i \n", importetot80);
printf("El 20 porciento del importe total es: %i \n", importetot20);	
printf("El 15 porciento del importe total es: %i \n", importetot15);	
	
	return 0;
}
