#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int main() 
{
	
	int vector[100];
	int pares=0;
	int i, e;
	int range_min=0;
	int range_max=100;
	int j;
	int r;
	
	for ( j = 0; j < 100; j++)
    {
        r = ((double)rand() / RAND_MAX) * (range_max - range_min) + range_min;
    }
	
	for(i=0;i<100;i++)
	{
	vector[i]=r;
	
	printf("%d\n", vector[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
