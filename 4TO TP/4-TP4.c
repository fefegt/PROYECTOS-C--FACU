#include <stdio.h>
#include <stdlib.h>


int main() 
{
  int vec[10];
  int i;
  int min=vec[0];
  int pares;
  
  //Ingreso los 10 numeros 
  for(i=1;i<=10;i++)
  {
  	printf("Ingrese el %d numero:",i);
	scanf("%d", &vec[i]);
  }
  //ENCONTRAR VALOR MAS GRANDE
  for(i=1;i<=10;i++)
  {
	  if(vec[0]<vec[i])
	  {
	  	vec[0]=vec[i];
	  }
  }
  //ENCONTRAR VALOR MAS CHICO
  for(i=1;i<=10;i++)
  {
	 if (vec[i]<min)
            {min=vec[i];}
  }
  //ENCONTRAR NUMEROS PARES 
   for(i=1;i<=10;i++)
  {
	  if(vec[i]%2==0)
	  {
	  	pares++;
	  }
  }
printf("El numero mas grande del vector es:%d\n", vec[0]);
printf("El numero mas chico del vector es:%i\n", min);
printf("Hay %i numeros pares", pares); 





















	return 0;
}
