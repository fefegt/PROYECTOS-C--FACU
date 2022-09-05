#include <stdio.h>
#include <stdlib.h>


int calculararea(int);
void mostrar(int area);

int main(int argc, char *argv[]) {
int base1, altura1, base2, altura2,area1,area2,areaTotal;

printf("Ingrese base y altura del primer sub-area");
scanf("%i %i", &base1, &altura1);
printf("Ingrese base y altura del segundo sub-area");
fflush(stdin);
scanf("%i %i", &base2, &altura2);

area1=calculararea(area1);
area2=calculararea(area2);

mostrar(area);
printf("El area total de la figura es:", mostrar)	
	
return 0;
}
int calculararea(int area1, int area2, int area);


