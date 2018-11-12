// Exercicio 19.cpp : Defines the entry point for the console application.
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
	int mat[3][3], i, j, num;
	num = printf("Favor digitar o numero que multiplicara a matriz\n");
	scanf_s("%i", &num);
	for (i = 1; i < 4; i++) 
	{
		for (j = 1; j < 4; j++)
		{
			mat[i][j] = Numero();
			mat[i][j] = mat[i][j] * num;
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
	system("pause");

    return 0;
}

