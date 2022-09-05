#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char telefono[20];
	int edad;
	char nombre[10];
	char apellido[10];
	
	printf("Ingrese el nombre de la persona:\n");
	scanf ("%s", &nombre);
	printf("Ingrese el apellido de la persona:\n");
	fflush(stdin);
	scanf ("%s", &apellido);
	printf("Ingrese el telefono de la persona:\n");
    fflush(stdin);
    scanf("%s", &telefono);
    printf("Ingrese la edad de la persona: \n");
    fflush(stdin);	
	scanf("%i", &edad);
	printf("El apellido de la persona es: %s \n", apellido);
	printf("El nombre de la persona es: %s \n", nombre);
	printf("El telefono de la persona es: %s \n", telefono);
    printf("La edad de la persona es: %i", edad);
	return 0;
}
