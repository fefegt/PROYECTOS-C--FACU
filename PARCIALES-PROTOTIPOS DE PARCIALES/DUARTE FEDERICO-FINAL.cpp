#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define tam 50

void cargavector(int poder1, int poder2, char ganador,  int  *vpoder1, int  *vpoder2, char *vganador,  int j);
void armarresultados( int  *vx, int  *vy, char *vz, int i);

main()
{
      int res=0;
	  int opc=0; 
	  int i=0; 
	  int poder1; 
	  int poder2; 
	  int vpoder1[tam]={0};
	  int vpoder2[tam]={0};
      char ganador;  
	  char vganador[tam]={'z'};
    
      
      while(res!=3)
      {
         printf("BATALLAMONS\n");
         printf("-----------\n");
         printf("1-Cargar datos de un enfrentamiento\n");
         printf("2-Calcular resultados del videojuego\n");
         printf("3-Salir\n");
         scanf("%d", &opc);
         
		 switch(opc)
         {
             case 1:
                  printf("BATALLAMONS:\n");
                  printf("-------\n\n");
                  printf("Ingresar nivel de poder monstruo de protagonista: \n");
                  fflush(stdin);
                  scanf("%d",&poder1);
                  printf("Ingresar nivel de poder monstruo rival: \n");
                  fflush(stdin);
                  scanf("%d",&poder2);
                
              	
              	
              	 if (poder1>=poder2) 
				   { 
				   	ganador='h';
				   }
				   
              	 else 
				   {
				   	ganador='r';
				   }
              	 
              	  
              	 printf ("Ganador del enfrentamiento %c\n", ganador);
              	 
				   
                 cargavector(poder1, poder2, ganador,  vpoder1, vpoder2, vganador,  i);
                 	
				  i++;           
                  getch();
                  system("cls");
             break;
             
             case 2:
                  
                  armarresultados(vpoder1, vpoder2, vganador, i);
                  
                  break;
             case 3:
                  res=3;
                  break;
         
        }
	  }
}


void cargavector(int poder1, int poder2, char ganador, int  *vpoder1, int  *vpoder2, char *vganador,  int j)
{
   *(vpoder1+j)=poder1;
   *(vpoder2+j)=poder2;
   *(vganador+j)=ganador;
 
}
void armarresultados(int *vx, int *vy, char *vz, int i)
{ 
	int j, cont1=0, cont2=0,  max, bandera=1;
  	float acu1=0, acu2=0;
  
  	for(j=0;j<i; j++)
     {
     	
     	    	acu1=acu1+*(vx+j);
     	    	acu2=acu2+*(vy+j);
     	    	
            if (*(vz+j)=='h')    
			{
			 cont1=cont1+1;
			}
            
			else 
				   {
				   cont2=cont2+1;
				   }
			   
			   
			
			if (bandera==1)
			{
			 bandera=0;
			  max=*(vx+j);
			}
			
			else if (*(vx+j) > max)  
			{
			 max=*(vx+j);
			}
			
			
			
			if (*(vy+j)>max)  
			{
			 max=*(vy+j);
			}
			  
			
		}  
                   
               
            if (cont1>cont2 && cont1>0) printf("Ganador del videojuego: Hechicera. Promedio poder %.2f: \n", acu1/(cont1+cont2));
            
			if (cont2>cont1 && cont2>0) printf("Ganador del videojuego: Rival. Promedio poder %.2f: \n", acu2/(cont1+cont2));
            
			if (bandera==0 )			
			printf("Máximo poder %d\n", max);
           
          
}           
