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

int fatorial(int n)
{
	if (n == 0)
		return 1;
	return n * fatorial(n - 1);
}

int main()
{
	int num = Numero();
	int result = fatorial(num);
	printf("Resultado: %i", result);
	system("pause");
	return 0;
}
