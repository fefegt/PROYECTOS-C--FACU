#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
	char vector1[20];
	char vector2[20];
	int i, y;
	
	
	for(i=0;i<20;i++)
	{
	printf("Ingrese contenido para el primer vector:");
	scanf("%s", vector1[i]);
    }
    
	for(y=0;y<20;y++)
	{
		printf("Ingrese contenido para el segundo vector:");
		scanf("%s", vector2[y]);
	}
	
	for(i=0;i<20;i++)
	{
	printf("Contenido del vector1 antes de copiar:%s", vector1[i]);
    }
	for(y=0;y<20;y++)
	{
	printf("Contenido del vector 2 antes de copiar:%s", vector2[y]);
    }
	
	CopiarVector(&vector1[i], &vector2[y]);
	
	
	
}

char CopiarVector(char v1, char v2)
{
	int e, k;
	
	char strcpy(char v2[k], char v1[e]);
	
	char copia1=copia1+v1[e];
	char copia2=copia2+v2[k];
	
	for(e=0;e<20;e++)
	{
	printf("Contenido del vector1 despues de copiar:%s", *v1[e]);
    }
	for(k=0;k<20;k++)
	{
	printf("Contenido dedl vector2 despues de copiar:%s", *v2[k]);
    }
    
    return copia1, copia2;
	
}
