#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float promediotot, promedio1, promedio2, promedio3;
	
	printf("Ingrese primer valor ambiental:");
	scanf("%f", &promedio1);
	printf("Ingrese segundo valor ambiental:");
	fflush(stdin);
	scanf("%f", &promedio2);
	printf("Ingrese tercer valor ambiental:");
	fflush(stdin);
	scanf("%f", &promedio3);
	
	
	promediotot=(promedio1+promedio2+promedio3)/3;
	
	printf("El promedio de la temperatura ambiental es: %1.2f", promediotot);
	
	
	
	
	
	
	
	
	
	return 0;
}
