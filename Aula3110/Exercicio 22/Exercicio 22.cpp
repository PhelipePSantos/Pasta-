// Exercicio 22.cpp : Defines the entry point for the console application.
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

void matriz()
{
	int i, j , mat[3][3];
	for (i = 0; i < 3; i++) 
	{
		for (j=0; j<3; j++)
		{
			mat[i][j] = Numero();
		}
	}
	printf("Matriz\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j<3; j++)
		{
			printf("%i ", mat[i][j]);
		}
		printf("\n");
	}
	printf("Matriz Transposta\n");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i<3; i++)
		{
			printf("%i ", mat[i][j]);
		}
		printf("\n");
	}


}

int main()
{
	matriz();
	system("pause");
	return 0;
}


