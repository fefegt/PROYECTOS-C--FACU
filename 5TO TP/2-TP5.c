#include <stdio.h>
#include <stdlib.h>

void promedio(int *n1,int *n2,int *n3,float *pro);

int main() 
{
  int nota1, nota2, nota3;
  float pr;
  
  printf("Ingrese la 1era nota de 3 del alumno:");
  scanf("%d", &nota1);
  printf("Ingrese la 2da nota de 3 del alumno:");
  scanf("%d", &nota2);
  printf("Ingrese la 3era nota de 3 del alumno:");
  scanf("%d", &nota3);
  
  promedio(&nota1, &nota2, &nota3, &pr);
  
  if(pr>=4)
  {
  	printf("El alumno esta aprobado");
  }
  else
  {
  	printf("El alumno esta desaprobado");
  }


}

promedio(int *n1,int *n2,int *n3,float *pro)
{
    *pro=(*n1+*n2+*n3)/3;
    
    return pro;
}
