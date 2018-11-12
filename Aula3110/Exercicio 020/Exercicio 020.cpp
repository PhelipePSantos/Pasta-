// Exercicio 20.cpp : Defines the entry point for the console application.
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
	int mat[3][3], i, j;
	for (i = 1; i < 4; i++)
	{
		for (j = 1; j < 4; j++)
		{
			mat[i][j] = Numero();
			if (mat[i][j]<0)
				mat[i][j] = mat[i][j] * -1;
		}
	}
	for (i = 1; i < 4; i++)
	{
		for (j = 1; j < 4; j++)
		{

			printf("%i  ", mat[i][j]);
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