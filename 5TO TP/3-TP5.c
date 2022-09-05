#include <stdio.h>
#include <stdlib.h>

void carga(int *vec);

int main() 
{
int vector[5];	
int i;
	
carga(&vector);

 for(i=0;i<5;i++)
  {
	printf("El indice %d contiene el numero:%d\n",i, vector[i]);
  }	
}

void carga(int *vec)
{
	int i, numero;
	for(i=0;i<5;i++)
	{
		printf("Cargue un numero para el indice %d:", i);
		fflush(stdin);
		scanf("%d", &numero);
		*(vec+i)=numero;
	}
}
