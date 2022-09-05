#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main() 
{
	int vector[10];
	int i;
	int max;
	
	carga(vector);
    EncontrarMax(vector, &max);
    
	
	printf("El valor maximo es:%d", max);

}

void carga(int *vec)
{
  int e;

  for(e=0;e<10;e++)
  {
	printf("Ingrese numero %d de 10:", e+1);
	scanf("%d", vec+e);
	
  }


}

 void EncontrarMax(int *v, int*max)
 {
   	int x;
     *max=*v;
     for(x=0;x<10;x++)
     {  if (*(v+x) > *max) *max=*(v+x);
      }  
	
	
	
 }
