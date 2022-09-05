#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int nota;

printf("Igrese la nota del alumno:");
scanf("%i", &nota);

if((nota>=7)&&(nota<=10)){
	printf("APROBO");
}	
else{
	printf("NO APROBADO");
}	
	return 0;
}
