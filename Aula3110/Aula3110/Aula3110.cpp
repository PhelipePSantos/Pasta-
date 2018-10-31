// Aula3110.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <math.h>

int NumeroInteiro()
{
	float numero;
	printf("Favor digitar um valor inteiro:\n");
	scanf_s("%f", &numero);
	return numero;

	
}


int main()
{
	float x1, x2, y1, y2, d, sub1, sub2;
	x1 = NumeroInteiro();
	y1 = NumeroInteiro();
	x2 = NumeroInteiro();
	y2 = NumeroInteiro();

	sub1 = x2 - x1;
	sub2 = y2 - y1;

	d = sub1*sub1 + sub2*sub2;



    return 0;
}

