#include <stdio.h>
#include <stdlib.h>

int edades(int edad1, int edad2);

int main(int argc, char *argv[]) {

int edad1, edad2;

printf("Ingrese la primera edad:");
scanf("%i", &edad1);
printf("Ingrese la segunda edad:");
scanf("%i", &edad2);

edades(edad1, edad2);

}
int edades(int edad1, int edad2){
int diferencia;

if(edad1>edad2){
	printf("Edad 1 es mayor\n");
    diferencia=edad1-edad2;
	printf("Le falta %i para llegar a la mayor", diferencia);
}	


else
{
printf("Edad 2 es mayor\n");
diferencia=edad2-edad1;
printf("Le falta %i para llegar a la mayor", diferencia);
}

}
