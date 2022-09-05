#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Evaluacion(int *vx, int *vy, int i);
void cargaVector(int cordenadax, int cordenaday, int *vx, int *vy, int x);

int main() 
{
  int cordenadax=0;
  int cordenaday=0;
  int i;
  int res;
  int vx[50];
  int vy[50];
  
  printf("PROGRAMA ARQUERO ROBOT\n");
         printf("*****************\n\n\n");
         printf("1-Ingresar tiros de pelota al arco\n");
         printf("2-Evaluar habilidades del robot\n");
         printf("3-Salir\n");
  scanf("%d", &res);
  
	while(res!=3)
	{
	switch(res)
	{
	case 1:
	printf("Ingrese cordenadas x:");
  	fflush(stdin);
  	scanf("%d", &cordenadax);
  	printf("Ingrese cordenadas y:");
  	fflush(stdin);
  	scanf("%d", &cordenaday);	  
    
	cargaVector(cordenadax, cordenaday, vx, vy, i);
    
	i=i+1;
    getch();
    system("cls");
    break;
    
    case 2:
  	Evaluacion(vx, vy, i);
    break;  
	
	case 3:
	res=3;
    break;
	}
	}
}

void cargaVector(int cordenadax, int cordenaday, int *vx, int *vy, int x)
{
	*(vx+x)=cordenadax;	
	*(vy+x)=cordenaday;
}

void Evaluacion(int *vx, int *vy, int i)
	{
		int contafuera=0;
		int contgol=0;
		int x;
		
		for(x=0;x<i;x++)
		{
		
		printf("Cordenada de x e cordenda de y:\nX:%d\n%Y:%d", *(vx+x), *(vy+x));
		
		if ( *(vx+x) >=0 && *(vx+x)<=500 
					    && *(vy+x)>=0 && *(vy+x)<=250 ) {printf("GOL\n"); contgol=contgol+1;}
             		else {printf("AFUERA\n");contafuera=contafuera+1;}
		}
	printf("Cantidad de goles: %d\n", contgol);
	printf("Cantidad de pelotas afuera: %d\n", contafuera);

	}




