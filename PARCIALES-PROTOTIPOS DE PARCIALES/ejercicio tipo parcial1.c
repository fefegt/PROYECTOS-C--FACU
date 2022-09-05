#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define tam 50

char buscarbarrio(int x);
void cargavectores(int parada, char cbarrio, char *vcbarrio, int *vparada, int i );
void informeresultados(int *vparada, int *vcbarrio, int i);

int main() 
{
	int res;
	char cbarrio;
	int parada=0;
	int inicio=0;
	int i=0;
	char vcbarrio[tam];
	int vparada[tam];
	
	while (inicio!=3)
	{
		printf("MINISTERIO DE TRANSPORTE-GENERAL RODRIGEUZ\n");
				printf("##########################################\n");
				printf("Ingrese una opcion para continuar:\n");
				printf("1-Ingresar datos de paraadas de la linea de colectivos\n");
				printf("2-Consultas de la informacion sobre la linea de colectivos\n");
				printf("3-Salir\n");
				scanf("%d", &res);
		
		
		switch(res)
		{
			case 1:
				system("cls");
				printf("Ingrese numero de parada de colectivo:");
				fflush(stdin);
				scanf("%d", &parada);
				
			    cbarrio=buscarbarrio(parada);
				
				i++;
				getch();
				cargavectores(parada, cbarrio, vcbarrio, vparada, i);
				system("cls");
				break;
				
			case 2:
				informeresultados(vparada,vcbarrio,i);
				system("cls");
				break;
				
			case 3:
				inicio=3;
				system("cls");
				break;
		}	
	
	}
	return 0;
}



void cargavectores(int parada, char cbarrio, char *vcbarrio, int *vparada, int i )
{
	*(vparada+i)=parada;
	*(vcbarrio+i)=cbarrio;
}

char buscarbarrio(int parada)
{
	switch(parada)
	{
		case 1: 
		case 2:
		case 3: return 'l'; break;
		case 4:
		case 5: return 'f'; break;
		case 6:
		case 7: return 'c'; break;
		case 8:
		case 9:
		case 10: return 'p'; break;
			
	}
}


void informeresultados(int *vparada, int *vcbarrio, int i)
	{
		int j, paradasL=0, paradasF=0, paradasC=0, paradasP=0, paradas=0;
		
		char barrio, barrioparadaI, barrioparadaF;
		
		for(j=0;j<i;j++)
		{
			paradas++;
			
			printf("Numero de parada:%d\t Barrio:%c\n", *(vparada+j), *(vcbarrio+j));
		
		switch(*(vcbarrio+j))		
		{
			case 'l':
					paradasL=paradasL+1;
					break;
			case 'f':
					paradasF=paradasF+1;
					break;
			case 'c':
					paradasC=paradasC+1;
					break;
			case 'p':
					paradasP=paradasP+1;
					break;
		}
		
		
		if(j==0)
		{
			barrioparadaI=*(vparada+j);
		}
			if(j==i-1)
			{
				barrioparadaF=*(vparada+j);			
			}
		
		}
		
printf("Cantidad de paradas por barrio Liniers %d\t Flores %d\t Caballito %d\t Palermo %d\n", paradasL, paradasF, paradasC, paradasP);		

if (paradas==paradasL || paradas==paradasF || paradas==paradasC || paradas== paradasP) 
{
        printf("Todas las paradas son del mismo barrio\n");
}
        
		else  
		{
				printf("No todas las paradas son del mismo barrio");
		}
        
        
        if (barrioparadaI==barrioparadaF) 
		{
        printf("La línea de colectivo empieza y termina en el mismo barrio %c\n", barrioparadaI);
		}
		 
		 else 
			{
		 		printf("La línea de colectivo no empieza y termina en el mismo barrio\n");
			}
        system("pause");		
		
		
		
	}




