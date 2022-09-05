#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
float num1, num2, resultado;
char respuesta;

printf("Ingrese primer numero:");
scanf("%f", &num1);
printf("Ingrese segundo numero:");
fflush(stdin);
scanf("%f", &num2);
printf("Que operacion desea realizazr entre estos numeros? S=Suma, R=Resta, D=Division, M=Multiplicacion \n");
fflush(stdin);
scanf("%s", &respuesta);


switch(respuesta)
{
	case 'S':
		resultado=num1+num2;
	break;
	case'R':
		resultado=num1-num2;
	break;
	case'D':
		resultado=num1/num2;
	break;
	case'M':
		resultado=num1*num2;
	break;
	Default:
		printf("Falta ingresar operacion deseada");
}
printf("El resultado de la operacion es: %1.2f", resultado);	
	return 0;
}
