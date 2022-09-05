#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int nota, legajo;
	
	printf("Ingrese el legajo del alumno: \n");
	scanf("%i", &legajo);
	printf("Ingrese la nota del alumno: \n");
	fflush(stdin);
	scanf("%i", &nota);
	
	if(nota>=6){
		printf("La nota es superior a 6 \n");
	}
	else{
		printf("La nota es menor a 6 \n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
