// Exercicio 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int NumeroInteiro()
{
	int numero;
	printf("Favor digitar um valor inteiro:\n");
	scanf_s("%i", &numero);
	return numero;
}



int main()
{
	int A, B, C, R, S, D;
	A = NumeroInteiro();
	B = NumeroInteiro();
	C = NumeroInteiro();
	R = A + B;
	R = R*R;
	S = B + C;
	S = S*S;
	D = (R + S) / 2;
	printf("O valor da conta eh %i\n", D);
	system("pause");


    return 0;
}

