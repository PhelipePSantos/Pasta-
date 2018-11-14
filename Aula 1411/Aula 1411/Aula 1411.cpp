// Aula 1411.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
float Numero()
{
	float num;
	printf("Digite um numero inteiro\n");
	scanf_s("%f", &num);
	return num;
}
void Troca(float *p, float *q)
{
	int troca;
	troca = *p;
	*p = *q;
	*q = troca;
	printf("i = %f \n j = %f", *p, *q);
}

float main() {

	float *i, *j ,a ,b;
	a = Numero();
	b = Numero();
	i = &a;
	j = &b;
	Troca(i, j);
	system("pause");
}