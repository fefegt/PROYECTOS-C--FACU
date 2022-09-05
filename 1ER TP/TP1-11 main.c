#include <stdio.h>
#include <math.h>


int main(int argc, char *argv[]) {

float tempc, temmpf, temmpk;

printf("Ingrese una temperatura en celsius para calcularla en kelvin y fahrenheit:");
scanf("%f", &tempc);

temmpf=(tempc*1.8)+32;
temmpk=tempc+273.15;

printf("La temperatura en fahrenheit es: %1.2f \n", temmpf);
printf("La temperatura en kelvin es: %1.2f \n", temmpk);

	return;
}
