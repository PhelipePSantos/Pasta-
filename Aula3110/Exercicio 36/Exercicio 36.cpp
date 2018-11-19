// Exercicio 36.cpp : Defines the entry point for the console application.
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
void tabuada()
{ 
	int n, tab, i;
	n = Numero();
	for (i = 0; i <= 20; i++)
	{
		tab = n*i;
		printf("%i x %i = %i \n", n, i, tab);
	}

}
int main()
{
	tabuada();
	system("pause");
    return 0;
}

