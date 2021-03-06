/*
 * utn.h
 *
 *  Created on: 15 may. 2021
 *      Author: ledes
 */

#ifndef UTN_H_
#define UTN_H_

int utn_getCadena(char pAux[], int limit, int retry, char msg[], char msgError[]);

int getCadena(char pAux[], int limit);

int isChar(char str[]);

int utn_getFlotante(float pFloat[], int retry, char msg[], char msgError[], float min, float max);

int getFloat(float pAux[]);

int isFloat(char pAux[]);

int utn_getEntero(int pEntero[], int retry, char msg[], char msgError[], int min, int max);

int getInt(int pAux[]);

int isInt(char pAux[]);

int strLwr(char str[]);

int normalizeStr(char str[]);



#endif /* UTN_H_ */
