#include <stdio.h>
#include <stdlib.h>

int main() 
{
 int matriz[3][3];
 int maximo;
 int i, k=1, e;
 int conti;
 
 for(i=1;i<=3;i++)
 {
 	printf("Ingrese numero %i de 3 correspondiente a la fila %i:\n", i, k);
 	scanf("%d", &matriz[i]);
 	conti++;
 	if(conti=3)
	 {
	 	k++;
	 }
 }
 
 	printf("El 2do numero ingresado de la fila 3 es:%d\n", matriz[k][i]);
 












	return 0;
}
