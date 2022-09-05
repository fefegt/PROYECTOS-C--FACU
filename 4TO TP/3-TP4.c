
#include <stdio.h>

int main()
{
int v[10];
int i;
int suma=0;
int resta=0;
float div=0;
int mult=0;
int longitud=sizeof v/sizeof v[0];
int aux;


for(i=0;i<10;i++)
 { 
	printf("Ingrese un numero para almacenar en el vector: \n");
		scanf("%d", &v[i]);
 }

for(i=0;i<10;i++)
 {
	printf("%d\t",v[i]);
 }

system("pause");
system("cls");

for(i=0;i<longitud;i++)
 {
	aux=v[i];
	suma=suma+aux;
	printf("La suma es:%d\t", suma);
 }
 
 system("pause");
 
for(i=0;i<longitud;i++)
 {
	aux=v[1];
	resta=resta-aux;
	printf("La resta es:%d\t");
 } 
}
