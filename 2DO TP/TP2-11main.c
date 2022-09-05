#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
int horastrabajadas, cat1, cat, cat2, cat3, cat4, aniostrabajados, valorhora, sueldo;

printf("Ingrese antiguedad del empleado en años:");
scanf("%i", &aniostrabajados);
printf("Ingrese categoria del empleado:");
fflush(stdin);
scanf("%i", &cat);
printf("Ingrese horas trabajadas:");
fflush(stdin);
scanf("%i", &horastrabajadas);

switch(cat){
	case 'cat1':
		valorhora=horastrabajadas*100;
	break;
	case 'cat2':
		valorhora=horastrabajadas*200;
	break;
	case 'cat3':
		valorhora=horastrabajadas*250;
	break;
	case 'cat4':
		valorhora=horastrabajadas*300;
	break;
}	
sueldo=valorhora+(aniostrabajados*650);

if(sueldo>20000){
printf("El sueldo del empleado es mayor a 20000 pesos");
}
printf("El sueldo del empleado es: %i", sueldo);	
	
	return 0;
}
