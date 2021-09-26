/*
 * biblioteca.h
 *
 *  Created on: 23 sept 2021
 *      Author: Leonel
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_




/**
 * \fn float IngreseFlotante(char[])
 * \brief recibe un numero flotante y muestra el mensaje al usuario
 * \param mensaje que se le envia al usuario
 * \return retorna el numero ingresado
 */
float IngreseFlotante(char mensaje[]);

/**
 * \fn float Sumar(float, float)
 * \brief recibe dos numeros y los suma
 * \param numeroUno recibe un numero flotante
 * \param numeroDos recibe un numero flotante
 * \return retorna el resultado de la funcion
 */
float Sumar(float numeroUno, float numeroDos);

/**
 * \fn float Restar(float, float)
 * \brief recibe dos numeros y los resta
 * \param numeroUno recibe un numero flotante
 * \param numeroDos recibe un numero flotante
 * \return retorna el resultado de la funcion
 */
float Restar(float numeroUno, float numeroDos);

/**
 * \fn float Divicion(float, float)
 * \brief recibe dos numeros y los divide
 * \param numeroUno recibe un numero flotante
 * \param numeroDos recibe un numero flotante
 * \return retorna el resultado de la funcion
 */
float Divicion(float numeroUno, float numeroDos);
/**
 * \fn float Multiplicacion(float, float)
 * \brief recibe dos numeros y los multiplica
 * \param numeroUno recibe un numero flotante
 * \param numeroDos recibe un numero flotante
 * \return retorna el resultado de la funcion
 */
float Multiplicacion(float numeroUno, float numeroDos);
/**
 * \fn float CalcularFactorial(float)
 * \brief rebine un numero y realiza la operacion de factorial
 * \param numero recibe un numero flotante
 * \return retorna el resultado de la funcion
 */
float CalcularFactorial(float numero);

#endif /* BIBLIOTECA_H_ */
