#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
int puntoriginal, factor, puntajealcanzado;

printf("Ingrese puntaje original:");
scanf("%i", &puntoriginal);

if((puntoriginal>0)&&(puntoriginal<=5)){
factor=6;
puntajealcanzado=puntoriginal*factor;	
}
else if((puntoriginal>=6)&&(puntoriginal<=8)){
factor=9;
puntajealcanzado=puntoriginal*factor;	
}	
else if((puntoriginal>=9)&&(puntoriginal<=10)){
factor=10;
puntajealcanzado=puntoriginal*factor;
}
else if(puntoriginal=0){
factor=0;
puntajealcanzado=puntoriginal*factor;
}		
printf("El puntaje alcanzado es:%i", puntajealcanzado);
	
return 0;
}
