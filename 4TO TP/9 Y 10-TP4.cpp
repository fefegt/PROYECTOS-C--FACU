#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int vec[20];
	int i;
	float promedio;
	int producto;
	
	for(i=1;i<=20;i++)
	{
	printf("Ingrese valor %d de 20:", i);
	scanf("%d", &vec[i]);
	}
	
	system("pause");
	
	for(i=1;i<=20;i++)
	{
		printf("%d\t", vec[i]);
	}
	
	promedio=vec[i]/20;
	printf("El promedio de los numeros ingresados es:%.2f\t", promedio);
	
	for(i=1;i<=20;i++)
	{
	 producto=vec[i]*vec[i];
	 printf("El producto de los numeros ingresados es:%i\n ", producto);	
	}
}
