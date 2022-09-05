#include <stdio.h>
#include <stdlib.h>


int main() 
{
float vector[20]={-20,40,60,80,-5,10,40,21,22,10,-11,12,13,14,15,16,17,18,19,-21};
float proposi;
float pronega;
int contposi;
int contnega;
int i;
int acumnega, acumposi;
	
 for(i=0;i<=20;i++)
 {
 	if(vector[i]>0)
	 {
	 	contposi++;
	 	acumposi=acumposi+vector[i];
	 }
	 else{
	 	contnega++;
	 	acumnega=acumnega+vector[i];
	 }
 }	
pronega=acumnega/contnega;
proposi=acumposi/contposi;


printf("El promedio de numeros positivos es:%.2f\n", proposi);
printf("El promedio de numeros negativos es:%.2f", pronega);	
	
	
	
	
	

}
