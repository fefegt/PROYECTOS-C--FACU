#include <stdio.h>
#include <stdlib.h>

int salario(int valorhoraextra, int valorhoranormal, int horastrabajadas);

int main(int argc, char *argv[]) {
	
int valorhoranormal, valorhoraextra, horastrabajadas, res;

do{

printf("Ingrese horas trabajadas:");
scanf("%i", &horastrabajadas);
printf("El salario semanal que se debe pagar es:%i\n", salario(valorhoraextra, valorhoranormal, horastrabajadas));	
printf("Desea calcular otro salario?1=SI 0=NO:");
scanf("%i", &res);	
}while(res==1);
	system("cls");
	return 0;
}
int salario(int valorhoraextra, int valorhoranormal, int horastrabajadas){


int sueldo;
valorhoranormal=50;
valorhoraextra=75;

if(horastrabajadas<=35){
	sueldo=horastrabajadas*valorhoranormal;
}	
else{
	sueldo=horastrabajadas*valorhoraextra;
}
}
