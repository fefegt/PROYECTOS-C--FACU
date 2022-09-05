#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define tam 50


//int menu()
//{
  //  int res;
    //     printf("PROGRAMA CALCULO DE TURISTAS\n");
      //   printf("*****************\n\n\n");
        // printf("1-Cargar datos\n");
         //printf("2-Mostrar resultados\n");
         //rintf("3-Salir\n");
         //scanf("%i",res);
         //return res;
//}       








void cargadatos(int hora,int minutos,int kmhora,int camion, int *vhora, int *vminutos, int *vkmhora, int *vcamion, int i);
void reporte(int *vhora,int *vminutos,int *vkmhora,int *vcamion, int i);

main() {
	
	//int vmenu;
	int res=0;
	int hora, minutos, kmhora, camion;
	int inicio=0;
	
	int vhora[tam];
	int vminutos[tam];
	int vkmhora[tam];
	int vcamion[tam];
	int i=0;
	
	while(inicio!=3)
	{
	printf("CONTROL DE VELOCIDADES\n");
	printf("-----------------------\n");
	printf("1-Ingresar y guardar datos de simulacion\n");
	printf("2-Emitir reportes\n");
	printf("3-Salir\n");
	scanf("%d", &res);
	
		
		switch(res)
		{
      		case 1:
			  printf("Ingrese hora:");
			  scanf("%d", &hora);
			  printf("Ingrese minutos:");
			  scanf("%d", &minutos);
			  printf("Ingrese km/h:");
			  scanf("%d", &kmhora);
			  printf("Ingrese codigo numerico camion:");
			  scanf("%d", &camion);
			  
			  cargadatos(hora, minutos, kmhora, camion, vhora, vminutos, vkmhora, vcamion, i);
			  
			  i++;
			  getch();
			  system("cls"); 	
		      
			  break;
		      
		    case 2:
		      reporte(vhora, vminutos, vkmhora, vcamion, i);
		      break;
		      
		    case 3:
		    	inicio=3;
		    	break;
		}
	//vmenu=menu();		
    }
	
}

void cargadatos(int hora,int minutos,int kmhora,int camion, int *vhora, int *vminutos, int *vkmhora, int *vcamion, int i)
{
	*(vhora+i)=hora;
	*(vminutos+i)=minutos;
	*(vkmhora+i)=kmhora;
	*(vcamion+i)=camion;
	
}


void reporte(int *vhora,int *vminutos,int *vkmhora,int *vcamion, int i)
{
     int max=0;
     int j;
     
     
	 for(j=0;j<i;j++)
	 {
	 	if(*(vcamion+j)==2)
		 {
			if(*(vkmhora+j)>max)
			 {
			 	max=*(vkmhora+j);
			 }		 	
			 printf("|%d|\t |%d|\t |%d|\t |%d|\t", *(vhora+j), *(vminutos+j), *(vkmhora+j), *(vcamion+j));
		 	system("cls");
		 }
	 }
     printf("DATOS DEL CAMION 2\n");
		 	printf("-------------------\n");
		 	printf("La velocidad maxima fue de %dkm/hora\n", max);
            system("cls");


}

