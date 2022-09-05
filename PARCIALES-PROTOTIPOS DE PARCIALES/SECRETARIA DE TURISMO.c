#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

void menu(int *dia,char *centro,int *Viacceso,int *cantturistas,int *i, int *vdia,int *vviacceso,int *vcantturistas,char *vcentro);
void cargarvector(int *vdia,int *vviacceso,int *vcantturistas,char *vcentro,int i, int x, int j, int e, int k, int w);

void main() 
{
	char centro;
	int dia;
	int Viacceso;
	int cantturistas;
	int inicio;
	int i=0;
	
	int vdia[50];
	int vviacceso[50];
	int vcantturistas[50];
    char vcentro[50];
		

		printf("SECRETARIA DE TURISMO\n");
	printf("---------------------\n");
	printf("1-Ingrese datos\n");
	printf("2-Mostrar resultados\n");
	printf("3-Salir\n");
	scanf("%d", &inicio);
	
	switch(inicio)
	{
		case 1:
			printf("CALCULO\n");
			printf("--------");
			printf("Ingrese dia:");
			fflush(stdin);
			scanf("%d", &dia);
			printf("Ingrese codigo del centro turistico:");
			fflush(stdin);
			scanf("%c", &centro);
			printf("Ingrese via de acceso:");
			fflush(stdin);
			scanf("%d", &Viacceso);
			printf("Ingrese cantidad de turistas que ingresaron:");
			fflush(stdin);
			scanf("%d", &cantturistas);
			
			//cargarvector(vdia, vviacceso, vcantturistas, vcentro, i,cantturistas,centro,dia,Viacceso);
			
			i++;
			getch();
			system("CLS");
			break;
		
		case 2:
		    mostrar_resultados(vdia, vviacceso, vcantturistas, vcentro, i);
		    getch();
		    break;
	}
}


void cargarvector(int *vdia,int *vviacceso,int *vcantturistas,char *vcentro,int i, int x, int j, int e, int k, int w)
{
	*(vdia+j)=x;
	*(vviacceso+j)=e;
	*(vcantturistas+j)=k;
	*(vcentro+j)=w;
}


void mostrarresultados(int *vdia,int  *vviacceso,int  *vcantturistas,char  *vcentro,int  *i)
{
	int quincena1;
	int quincena2;
	char centroelegido;
	int j;
	
	int contauto=0;
	
	quincena1=0;
	quincena2=0;
	
	
	printf("Ingrese centro para mostrar resultado:");
	fflush(stdin);
	scanf("%c", &centroelegido);
	
	for(j=0;j<*i;j++)
	{
		if(*(vcentro+j)==centroelegido)
			{
				if(*(vdia+j)>=15)
				{
					quincena2=quincena2+*(vdia+j);
				}
				else
				{
					quincena1=quincena1+*(vdia+j);
				}
				if(*(vviacceso+j)==1)
				{
					contauto=contauto+*(vviacceso+j);
				}
			}	
	}
	
	printf("Los turistas que ingresaron en la quincena 1 son:%d", quincena1);
	printf("Los turistas que ingresaron en la quincena 2 son:%d", quincena2);
	printf("Los turistas que ingresaron por auto son:%d", contauto);
	
}


