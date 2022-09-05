#include <stdio.h>
#include <stdlib.h>

int cobrohora(int categoria, int horastrabajadas);
int cobroantiguedad(int antiguedad);

int main(int argc, char *argv[]) {

char categoria;
int antiguedad;
int horastrabajadas;
int sueldototal;

printf("Ingrese horas trabajadas:");
scanf("%i", &horastrabajadas);
printf("Ingrese antiguedad:");
scanf("%i", &antiguedad);
printf("Ingrese categoria(1,2,3,4):");
scanf("%i", &categoria);

cobrohora(categoria, horastrabajadas);


printf("El cobro por hora es:%i\n", cobrohora(categoria, horastrabajadas));
printf("El sueldo por antiguedad es:%i\n", cobroantiguedad(antiguedad));
	
sueldototal=cobrohora(categoria, horastrabajadas)*cobroantiguedad(antiguedad);

printf("El sueldo del emplreado es:%i\n", sueldototal);
if(sueldototal>10000){
	printf("El sueldo del empleado es mayor a 10.000 pesos\n");
}	
	
	
	
	return 0;
}

int cobrohora (int categoria, int horastrabajadas){


int sueldo;

const int CAT1= 10;
	const int CAT2 = 20;
	const int CAT3 = 25;
	const int CAT4 = 30;

switch(categoria){
	case 1:
		sueldo=horastrabajadas*CAT1;
	break;
	case 2:
		sueldo=horastrabajadas*CAT2;
	break;
	case 3:
		sueldo=horastrabajadas*CAT3;
	break;
	case 4:
		sueldo=horastrabajadas*CAT4;
	break;
}
return sueldo;
}
int cobroantiguedad(int antiguedad){

int sueldoantiguedad=antiguedad*50;

return sueldoantiguedad;	
}
