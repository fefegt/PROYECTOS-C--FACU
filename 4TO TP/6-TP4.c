#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int vector[5];
	int notasmas=0;
	int i;
	
 for(i=1;i<=5;i++)
 {
 	printf("Ingrese %d nota de 5:", i);
 	scanf("%d", &vector[i]);
 }
 for(i=1;i<=5;i++)
 {
 	if(vector[i]>6)
	 {
	 	notasmas++;
	 }
 }
 printf("Hay %i notas mayor que 6.", notasmas);	
 	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
