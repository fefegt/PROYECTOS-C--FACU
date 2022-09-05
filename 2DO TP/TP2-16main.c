#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int nota, contnotas, respuesta;
float promedionotas;


contnotas=0;

printf("Desea agregar una nota?SI=1 NO=0: \n");
scanf("%i", &respuesta);
if(respuesta=1){
printf("Ingrese nota:");
scanf("%i", &nota);	

while(nota!=0){
printf("Desea agregar otra nota?SI=1 NO=0:");
scanf("%i", &respuesta);
if(respuesta=1){
	contnotas++;
printf("Ingrese nota:");	
scanf("%i", &nota);
}
}
}
promedionotas=nota/contnotas;
printf("El promedio de las notas es: %f", promedionotas);
}


