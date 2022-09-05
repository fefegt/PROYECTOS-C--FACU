#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
int varones, mujeres, totalalums, totalapagar;

printf("Ingrese cantidad de alumnos varones:");
scanf("%i", &varones);
printf("Ingrese cantidad de alumnas:");
fflush(stdin);
scanf("%i", &mujeres);

totalalums=varones+mujeres;

if(totalalums>35){
	printf("CURSO NUMEROSO");
}	
else{
	totalapagar=totalalums*55;
	printf("Para realizar la salida con todos los alumnos cada uno debera pagar: %i", totalapagar);
}	
	return 0;
}
