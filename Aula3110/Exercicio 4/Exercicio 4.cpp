// Exercicio 4.cpp : Defines the entry point for the console application.
// Fa�a um algoritmo que leia as 3 notas de um aluno e calcule a m�dia final deste aluno.Considerar que a m�dia � ponderada e que o peso das notas � : 2, 3 e 5, respectivamente.

#include "stdafx.h"
#include <stdlib.h>

float Numero()
{
	float numero;
	printf("Favor digitar sua nota:\n");
	scanf_s("%f", &numero);
	return numero;
}

float notas(float n1, float n2, float n3)
{
	n1 = n1 * 2;
	n2 = n2 * 3;
	n3 = n3 * 5;
	float media = (n1 + n2 + n3) / 10;
	return media;
}

int main()
{
	float n1, n2, n3;
	n1 = Numero();
	n2 = Numero();
	n3 = Numero();
	printf("Sua media eh: %f\n", notas(n1, n2, n3));
	system("pause");
    return 0;
}

