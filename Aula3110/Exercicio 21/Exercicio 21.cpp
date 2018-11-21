// Exercicio 21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
int Numero()
{
	int numero;
	printf("Favor digitar um numero\n");
	scanf_s("%i", &numero);
	return numero;

}

void somapar()
{
	int n, i, par, soma=0;
	n = Numero();
	for (i = 0; i <= n; i++)
	{
		par = i % 2;
		if(par==0)
		{
			soma = soma + i;
		}
	}
	printf("O resultado da soma eh: %i", soma);
}

int main()
{
	somapar();
	system("pause");
    return 0;
}

