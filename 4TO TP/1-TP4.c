#include <stdio.h>
#include <math.h>

int main()
{
	int vect[50];
	int j=0;
	int i;
	int k;
	
	for(i=1; i<=100; i++)
	{
		if(fmod(i,2)==0)
		{
			vect[j]=i;
			j++;
		}
	}
	
	for(k=0; k<50; k++)
	{
		printf("Posicion %d, valor del vector: %d\n", k, vect[k]);
	}
	
	return 0;
}
