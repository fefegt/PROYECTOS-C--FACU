#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define tam 50

void informecostos(int *vectorpasajes,int *vectorpack,char *vectordestino,int i);
void calculoviaje(char destino,int cantpasajes,int pack,int *vectorpasajes, int *vectorpack, char *vectordestino, int i);

int main() 
{
	int res;
	int inicio;
	char destino;
	int cantpasajes;
	int pack;
	int i=0;
	
	int vcantpasajes[tam];
	int vpack[tam];
	char vdestino[tam];
	
	
	while(inicio!=3)
	{
	
	printf("NAVIERA\n");
	printf("--------\n");
	printf("1-Ingresar Solicitudes de pasajes\n");
	printf("2-Informar costos del viaje\n");
	printf("3-Salir\n");
	scanf("%d", &res);
    
    switch(res)
	{
		case 1:
			printf("Ingrese Destino (F=Fin de Año R=Rio M=Montevideo):");
			fflush(stdin);
			scanf("%c", &destino);
			printf("Ingrese cantidad de pasajes:");
			fflush(stdin);
			scanf("%d", &cantpasajes);
			printf("Incluir pack de bebidas? 1=Si 0=No:");
			fflush(stdin);
			scanf("%d", &pack);
			
			calculoviaje(destino, cantpasajes, pack, vcantpasajes, vpack, vdestino, i);
		     
		    i++;
			getch();
			system("cls"); 
			break;		
  		case 2:
		    informecostos(vcantpasajes, vpack, vdestino, i);
			break;	
			
		case 3:
			
		    inicio=3;
			break;	
	}

    }

	return 0;
}

void calculoviaje(char destino,int cantpasajes,int pack,int *vectorpasajes, int *vectorpack, char *vectordestino, int i)
{
	*(vectordestino+i)=destino;
	*(vectorpasajes+i)=cantpasajes;
	*(vectorpack+i)=pack;
}



void informecostos(int *vectorpasajes,int *vectorpack,char *vectordestino,int i)
{
	int j;
	char F=*(vectordestino+i);
	char M=*(vectordestino+i);
	char R=*(vectordestino+i);
	
	
	int costopasajeroF=2240;   //Crucero Fin de Año
	int costopasajeroR=908;   //Rio de Janeiro
	int costopasajeroM=1240; //Montevideo
	int costopack=300;      //bebidas
	int costofinal;
	int packadicional;
	int costopasaje;
	int cantturistasF=0;   //Crucero
 	int cantturistasR=0;  //Rio
	int cantturistasM=0; //Montevideo
	
	
	
	for(j=0;j<i;j++)
	{
		if(*(vectordestino+i)==F)
		{
			if(*(vectorpack+i)==1)
			{
				printf("CONTRATO PACK DE BEBIDAS ADICIONAL\n");
				system("pause");
			}
			packadicional=*(vectorpack+j)*costopack;
			costopasaje=*(vectorpasajes+j)*costopasajeroF;
			printf("El destino elegido es:CRUCERO FIN DE AÑO\n");
			printf("La cantidad de pasajes solicitados es de:%d\n", *(vectorpasajes+j));
		    costofinal=packadicional+costopasaje;
		    printf("El costo final del viaje es de:%d\n", costofinal);
		    system("pause");
		    system("cls");
		    cantturistasF++;
			
		}
		
		else if(*(vectordestino+i)==R)
		{
			 if(*(vectorpack+i)==1)
			{
				printf("CONTRATO PACK DE BEBIDAS ADICIONAL\n");
				system("pause");
			}
			
			packadicional=*(vectorpack+j)*costopack;
			costopasaje=*(vectorpasajes+j)*costopasajeroF;
			printf("El destino elegido es:RIO DE JANEIRO\n");
			printf("La cantidad de pasajes solicitados es de:%d\n", *(vectorpasajes+j));
		    costofinal=packadicional+costopasaje;
		    printf("El costo final del viaje es de:%i \n", costofinal);
			system("pause");
			system("cls");
			
			cantturistasR++;	
					
		}
	
		else if(*(vectordestino+i)==M)
		{
			if(*(vectorpack+i)==1)
			{
				printf("CONTRATO PACK DE BEBIDAS ADICIONAL\n");
				system("pause");
			}
			packadicional=*(vectorpack+j)*costopack;
			costopasaje=*(vectorpasajes+j)*costopasajeroF;
			printf("El destino elegido es:MONTEVIDEO\n");
			printf("La cantidad de pasajes solicitados es de:%d\n", *(vectorpasajes+j));
		    costofinal=packadicional+costopasaje;
		    printf("El costo final del viaje es de:%i\n", costofinal);
            system("pause");		
            system("cls");
			cantturistasM++;		
		}
	
	}
	
	printf("La cantidad total de turistas que eligieron Crucero Fin de Año:%d\n", cantturistasF);
	printf("La cantidad total de turistas que eligieron Rio de Janeiro:%d\n", cantturistasR);
	printf("La cantidad total de turistas que eligieron Montevideo:%d\n", cantturistasM);
	
	system("pause");
	system("cls");
}

