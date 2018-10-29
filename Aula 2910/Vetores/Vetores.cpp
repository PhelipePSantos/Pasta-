// Vetores.cpp : Defines the entry point for the console application.
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
	int vet[4];
	int i = 0;
	int numero;
	while (i < 5)
	{
		numero = NumeroInteiro();
		vet[i] = numero;
		i++;
	}

	if (vet[0] < vet[1] && vet[1] < vet[2] && vet[2] < vet[3] && vet[3] < vet[4])
	{
		printf_s("Os numeros estao em ordem crescente");
	}
	else {
		printf_s("os numeros nao estao em ordem crescente");
	}
	system("pause");
	return 0;
}