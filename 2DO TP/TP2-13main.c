#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int alumnos, edad, estatura, cantalumnosmasde10, cantalumnos140;
float edadpromedio, estaturapromedio;

for(alumnos=1;alumnos<=6;alumnos++){
	printf("Ingrese edad del alumno: \n");
	fflush(stdin);
	scanf("%i", &edad);
	printf("Ingrese estatura del alumno: \n");
	fflush(stdin);
	scanf("%i", &estatura);
	
if(edad>10){
	cantalumnosmasde10++;
}	
if(estatura>1.40){
cantalumnos140++;	
}
}
edadpromedio=edad/alumnos;
estaturapromedio=estatura/alumnos;

printf("La edad promedio es: %.2f \n", edadpromedio);
printf("La estatura promedio es: %.2f \n", estaturapromedio);
printf("La cantidad de alumnos mayores de 10 anios es:%i \n", cantalumnosmasde10);
printf("La cantidad de alumnos que miden mas de 1.40 mts es:%i \n", cantalumnos140);		
	return 0;
}
