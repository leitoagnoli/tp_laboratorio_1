/*
 ============================================================================
 Name        : tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);


	int opcion;
	char seguir = 's';
	float primerNumero;
	float segundoNumero;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivicion;
	float resultadoMultiplicar;
	float resultadoFactorialUno;
	float resultadoFactorialDos;
	int flagOperador1 = 0;

	do {

		printf("\n1 -Ingresar 1er operando ");
		printf("\n2 -Ingresar 2do operando  ");
		printf("\n3 -Calcular todas las operaciones ");
		printf("\n4 -Informar resultados ");
		printf("\n5 -salir");

		printf("\n elija una opcion :");
		scanf("%d", &opcion);

		switch (opcion) {

		case 1:
			primerNumero = IngreseFlotante("ingrese el primer operando: ");
			flagOperador1 = 1;
			break;
		case 2:
			if (flagOperador1 == 1) {
				segundoNumero = IngreseFlotante(
						"ingrese el segundo operando: ");

			} else {
				printf(
						"No se puede ingresar el segundo operando sin el primero\n");
			}

			break;
		case 3:
			if (flagOperador1 == 1) {
				resultadoSuma = Sumar(primerNumero, segundoNumero);
				resultadoResta = Restar(primerNumero, segundoNumero);
				resultadoDivicion = Divicion(primerNumero, segundoNumero);
				resultadoMultiplicar = Multiplicacion(primerNumero,	segundoNumero);
				resultadoFactorialUno = CalcularFactorial(primerNumero);
				resultadoFactorialDos = CalcularFactorial(segundoNumero);
			} else {
				printf(
						"error. No se puede calcular si no ingresa los operadores");
			}
			break;
		case 4:
			if (flagOperador1 == 1) {
				printf("\n la suma de los numeros es %.2f", resultadoSuma);
				printf("\n la resta de los numeros es %.2f", resultadoResta);
				printf("\n el resultado es %.2f", resultadoMultiplicar);
				printf("\n el factorial del primer numero es %.2f",resultadoFactorialUno);
				printf("\n el factorial del segundo numero es %.2f",resultadoFactorialDos);
				printf("\n el resultado de la divicion es %.2f",resultadoDivicion);
			} else {
				printf(
						"ERROR, para mostrar los resultados ingrese los operadores");
			}
			break;
		case 5:

			printf(
					"Esta seguro que desea salir?(En caso de querer seguir presione s)\n");
			fflush(stdin);
			scanf("%c", &seguir);
			break;

		}

	} while (seguir == 's');

	return EXIT_SUCCESS;
}

