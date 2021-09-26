/*
 * biblioteca.c
 *
 *  Created on: 23 sept 2021
 *      Author: Leonel
 */
#include <stdio.h>
#include <stdlib.h>




float IngreseFlotante(char mensaje[]){
	float numeroIngresado;

	printf("%s", mensaje);
	scanf("%f",&numeroIngresado);



	return numeroIngresado;

}



float Sumar(float numeroUno, float numeroDos) {
	float resultado;


	resultado = numeroUno + numeroDos;

	return resultado;
}
float Restar(float numeroUno, float numeroDos) {
	float resultado;

	resultado = numeroUno - numeroDos;

	return resultado;}

float Divicion(float numeroUno, float numeroDos) {
	float resultado;
	if (numeroDos != 0) {
		resultado =  numeroUno / numeroDos;
	}

	else {

		printf("error divicion por cero");
		resultado = 0;
	}

	return resultado;
}
float Multiplicacion(float numeroUno, float numeroDos) {
	float resultado;

	resultado =numeroUno * numeroDos;

	return resultado;
}
float CalcularFactorial(float numeroUno) {
	float resultado;


	if (numeroUno<=0 ) {
		resultado = 1;
	}

	else {
		resultado = numeroUno * CalcularFactorial(numeroUno - 1);

	}

	return resultado;

}
