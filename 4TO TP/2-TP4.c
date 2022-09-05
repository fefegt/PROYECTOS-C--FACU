#include <stdio.h>
#include <stdlib.h>


int main() 
{
int v[10];
int v2[10];
int longitud=sizeof(v)/sizeof(v[10]);
int i;
int aux;
int x;

for(i=0;i<10;i++)
{
	printf("Ingrese valor %d del vector:");
	scanf("%d", &v[i]);
}

system("pause");

for(i=0;i<10;i++)
{
	printf("%d\t", v[i]);
}	
	
for(x=0;x<longitud/2;x++)
{
	aux=v[x];
	v[x]=v[longitud-x-1];
	v[longitud-x-1]=aux;
}	
printf("Despues de invertir\n");
for(i=0;i<longitud;i++)
{
	printf("%d\t", v[i]);
}	
	
	
	
	
	return 0;
}
