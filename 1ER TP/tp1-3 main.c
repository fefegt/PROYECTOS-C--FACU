#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int variableA,variableB,resultadoSUMA,resultadoRESTA,resultadoMULTI,resultadoDIV,variablesinvertidas,resultadoDIVINVERTIDA, resultadoRESTAINVER;
	
	printf("Ingrese primer variable:");
	scanf("%i", &variableA);
	printf("Ingrese segunda variable:");
	fflush(stdin);
	scanf("%i", &variableB);
	
	resultadoSUMA= (variableA+variableB);
	resultadoRESTA= (variableA-variableB);
	resultadoMULTI= (variableA*variableB);
	resultadoDIV= (variableA/variableB);
	
	printf("El resultado de la suma de las variables es: %i \n", resultadoSUMA);
	printf("El resultado de la resta de las varaibles es: %i \n", resultadoRESTA);
	printf("El resultado de la multiplicacion de las variables es: %i \n", resultadoMULTI);
	printf("El resultado de ladivision de las variables es: %i \n", resultadoDIV);
	
	variablesinvertidas=variableA;
	variableB=variableA;
	variableB=variablesinvertidas;
	
	resultadoDIVINVERTIDA=variableB/variableA;
	resultadoRESTAINVER=variableB-variableA;
	
		printf("El resultado de la suma de las variables invertidas es: %i \n", resultadoSUMA);
	printf("El resultado de la resta de las varaibles invertidas es: %i \n", resultadoRESTAINVER);
	printf("El resultado de la multiplicacion de las variables invertidas es: %i \n", resultadoMULTI);
	printf("El resultado de la division de las variables invertidas es: %i \n", resultadoDIVINVERTIDA);
		
	
	return 0;
}
