// Aula 2910.cpp : Defines the entry point for the console application.
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
	int numeroum = NumeroInteiro();
	int numerodois = NumeroInteiro();
	//do
	//{
		//printf("numero: %i\n", numeroum);
		//numeroum++;
	//} while (numeroum < numerodois);
	while (numeroum < numerodois - 1)
	{	
		numeroum++;
		printf("%i\t",numeroum);
		
	}
	system("pause");
    return 0;
}

