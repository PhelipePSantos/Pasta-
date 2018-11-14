// ConsoleApplication1.cpp : Defines the entry point for the console application.
// Recursividade

#include "stdafx.h"
#include <stdlib.h>
int Numero()
{
	int num;
	printf("Digite um numero inteiro\n");
	scanf_s("%i", &num);
	return num;
}

int soma(int n)
{
	if (n == 0)
		return 0;
	else
		return n + soma(n - 1);
}

int main()
{
	int num = Numero();
	int result = soma(num);
	printf("Resultado: %i", result);
	system("pause");
    return 0;
}

