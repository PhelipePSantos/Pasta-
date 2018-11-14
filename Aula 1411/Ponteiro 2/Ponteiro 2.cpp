// Ponteiro 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
void maximominimo(int*v, int*maximo, int*minimo)
{	
	int vet[4];
	int *maximo = vet[0];
	int *minimo = vet[0];
	for (int i = 0; i < 4; i++)
	{
		if (*maximo < vet[i])
		{
			*maximo = vet[i];
		}
		if (*minimo > vet[i])
		{
			*minimo = vet[i];
		}
	}
}

int main()
{
	int vet[4] = { 5,9,3,7 };
	int maior, menor;
	maximominimo(&vet[4], &maior, &menor);
    return 0;
	system("pause");
}

