// Exercicio 7.cpp : Defines the entry point for the console application.
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


int main()
{
	int a, b, c, d;
	a = Numero();
	b = Numero();
	c = a % b;
	d = b % a;
	if(c==0)||d==0)
	{
		printf("Os numeros sao multiplos");
	}
	else
	{
		printf("Os numeros nao sao multiplos");
	}
	system("pause");

    return 0;
}

