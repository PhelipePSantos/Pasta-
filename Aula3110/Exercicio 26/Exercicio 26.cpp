// Exercicio 26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
int idade()
{
	int numero;
	printf("Favor digitar sua idade\n");
	scanf_s("%i", &numero);
	return numero;
}

void dias()
{
	int dia;
	dia = idade();
	dia = dia * 365;
	printf("Voce viveu %i dias", dia);
}
int main()
{
	dias();
	system("pause");
	return 0;
}

