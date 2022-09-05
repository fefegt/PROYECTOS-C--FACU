#include <stdio.h>
#include <stdlib.h>


int main() 
{
 int vector[10];
 int max;
 int min=vector[0];
 int i;
 
 for(i=0;i<=10;i++)
 {
 	printf("Ingrese el numero %d de 10:",i);
 	scanf("%d", &vector[i]);
 }
 
 //Encontrar valor maximo
 for(i=0;i<=10;i++)
 {
 	if(vector[0]<vector[i])
	 {
	 	max=vector[i];
	 }
 }
 
 //Encontrar valor minimo
 for(i=0;i<=10;i++)
 {
 	if(vector[i]<min)
	 {
	 	min=vector[i];
	 }
 }
 printf("El numero mas grande es:%d\n", max);
 printf("El numero mas chico es:%d\n", min);










}
