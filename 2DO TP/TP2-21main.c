#include <stdio.h>
//21-EN UN CAMPEONATO INTER-COLEGIAL SE DESEA CONOCER LA CATEGOR?A A LA QUE 
//CORRESPONDE CADA PARTICIPANTE.
//SE INGRESA EL NOMBRE Y LA EDAD DE CADA UNO DE ELLOS
//EL PROGRAMA TERMINA CUANDO EL NOMBRE ES IGUAL A "ZZZ".
//? CATEGOR?A INFANTIL, PARA LOS MENORES DE 11 A?OS
//? CATEGOR?A PUBER, ENTRE LOS 11 Y LOS 14 A?OS
//? CATEGOR?A JUVENIL, PARA LOS MAYORES DE 14 A?OS
//INFORMAR NOMBRE Y CATEGOR?A.

int main(){
	int edad;
	char nombre[10];
	
	printf("Ingresar nombre: \n");
	scanf("%s", &nombre);
	
	while(strcmp(nombre,"zzz") != 0){
		
		printf("Ingresar edad: \n");
		scanf("%i", &edad);
		if(edad < 11){
			printf("Categoria infantil \n");
		}else if((edad >= 11)&&(edad <=14)) {
			printf("categoria puber \n");
	    }else{
	    	printf("categoria juvenil \n");
		}
	
		printf("Ingresar nombre: o zzz para salir \n");
		scanf("%s", &nombre);
	}
	
	printf("fin programa");
	return 0;
}
