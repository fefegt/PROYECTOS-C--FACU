#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define tam 50

void cargarpresupuestomes(float *vpresupuestomes);
float operacionesgastos(float gastos,float *vpresupuestomes);
int menu(int res);

int main() 
{
  float gastos;
  int res=0;
  int i;
  int x=1;
  float vpresupuestomes[12];
  int j;
  
  res=menu(res);
  
  while(res!=4)
  {
  	switch(res)
	  {
	  	case 1:
	  			cargarpresupuestomes(vpresupuestomes);
	  	break;
	  	
	  	case 2:
	  			printf("Ingrese gastos a efectuar por un empleado:");
	  			scanf("%f", &gastos);
				operacionesgastos(gastos, vpresupuestomes);
		break;
		
		case 3:
				for(j=0;j<x;j++)
				{
				x++;
				printf("El presupuesto del mes %d es:%f", x, vpresupuestomes);
	        	}
	    break;    	
	  
	  	case 4:
	  		res=4;
	  		break;
	  }
  }
	return 0;
}


int menu(int res)
{
	res=0;	
	printf("FINANZAS\n");
	printf("--------\n");
	printf("1-Ingresar presupuesto de cada mes\n");
	printf("2-Ingresar gastos a efectuar por los empleados\n");
	printf("3-Mostrar el presupuesto que quedo sin utilizar\n");
	printf("4-Salir\n");
	scanf("%d", &res);
}

void cargarpresupuestomes(float *vpresupuestomes)
{
	int j;
	
	for(j=0;j<12;j++)
	{
		printf("Ingrese presupuesto del mes %d:", j+1);
		scanf("%f", &*(vpresupuestomes+j));
		
	}
}

float operacionesgastos(float gastos,float *vpresupuestomes)
{
	int j;
	int m=1;
	float gastoactualizado=0;
	
	for(j=0;j<12;j++)
	{
		m++;
		if(vpresupuestomes[j]>gastos)
		{
			printf("Gasto Aprobado.");
			gastoactualizado=vpresupuestomes[j]-gastos;
			printf("El mes en el que se hizo el gasto es el mes %d, el gasto fue de %f y el presupuesto restante actualizado es de %f", m, gastos, (vpresupuestomes[j]));
		}
		
		else
		{
			printf("Gasto Rechazado.");
		}
	}
}

