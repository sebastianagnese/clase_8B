/*
 * UTN_AGN.c
 *
 *  Created on: 12 sep. 2019
 *      Author: alumno
 */
#include <stddef.h>
#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include "UTN_AGN.h"

int getInt(	int *pNumero,
			char *pMessage,
			char *pMessageError,
			int min,
			int max,
			int cantRetry)
{
	int retorno = -1;
	int buffer;
	do
	{
		//--- printeo del mensaje ---
		printf("%s",pMessage);
		__fpurge(stdin);

		//-- validación && comprobación (not necessarily in that order) --
		if(scanf("%d",&buffer)==1 && buffer >= min && buffer <= max)
		{
			*pNumero = buffer;
			retorno = 0;
			break;
		}
		else
		{
		printf("%s",pMessageError);
		cantRetry--;
		}
	}while(cantRetry >= 0);
	return retorno;
}

int IDKArrayInt(int *pArray , int limite, int valor)
{
	int retorno = -1;
	int i;

	// --- validación ---
	if(pArray != NULL && limite > 0)
	{
		// --- asignación de valor ---
		for(i=0;i<limite;i++)
		{
			pArray[i]=valor;
		}
		retorno = 0;
	}
	return retorno;
}

int mostrarArrayInt(int *pArray , int limite)
{
	int retorno = -1;
	int i;

	//--- Validacion ---
	if(pArray != NULL && limite > 0)
	{
		//--- printeo ---
		for(i=0;i<limite;i++)
		{
			printf("\n\t%i",pArray[i]);
		}
		retorno = 0;
	}
	return retorno;
}

int getArrayInt(int *pArray, int limite, char *pMensaje,
				char *pMensajeError, int minimo,
				int maximo, int reintentos)
{
	int retorno = -1;
	int buffer;
	int i=0;
	char respuesta;

	if(pArray != NULL && limite > 0)
	{
		do
		{

			if(	getInt(	&buffer, pMensaje, pMensajeError, minimo, maximo, reintentos) == 0)
			{
				pArray[i] = buffer;
				i++;
				if(i == limite)
				{
					break;
				}
			}

			printf("Continuar? (s/n) \n");
			__fpurge(stdin); // fflush(stdin) ON WINDOWS (and Code:blocks of course)
			scanf("%c",&respuesta);
		}while(respuesta != 'n');
		retorno = i;
	}
	return retorno;
}

int maxMinArrayInt(int* pArray, int limite,
				   int* minimo,int* maximo)
{
    int min=*minimo;
    int max=*maximo;
    int retorno = -1;
    int i;

    if(pArray != NULL && limite > 0){
    	retorno = 0;

		for (i=0; i<limite; i++)
		{
			if(i==0){
				min=pArray[i];
				max=pArray[i];
			}
			else
				{
				if (pArray[i]<min)
				{
					min=pArray[i];
				}
				if (pArray[i]>max)
				{
					max=pArray[i];
				}
			}
		}
    }
	*minimo = min;
	*maximo = max;

   return retorno;
}

int getArrayChar(int *pArray, int limite, char *pMensaje,
				 char *pMensajeError, int reintentos)
{
	int retorno = -1;
	int buffer;
	int i=0;

	buffer = i; // COMELA WARNING GATITO
	i = buffer; // SI, SI, FUCK U WARNING

	return retorno;
}








