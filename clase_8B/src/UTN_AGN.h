/*
 * UTN_AGN.h
 *
 *  Created on: 12 sep. 2019
 *      Author: alumno
 */

#ifndef UTN_AGN_H_
#define UTN_AGN_H_

#include <stddef.h>
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>

int getInt(	int *pNumero, char *pMessage, char *pMessageError,
			int min, int max, int cantRetry);

int IDKArrayInt(int *pArray , int limite, int valor);

int mostrarArrayInt(int *pArray , int limite);

int getArrayInt(int *pArray, int limite, char *pMensaje,
				char *pMensajeError, int minimo,
				int maximo, int reintentos);

int maxMinArrayInt(int* pArray, int limite,
				   int* minimo,int* maximo);

int getArrayChar(int *pArray, int limite, char *pMensaje,
				 char *pMensajeError, int reintentos);

#endif /* UTN_AGN_H_ */
