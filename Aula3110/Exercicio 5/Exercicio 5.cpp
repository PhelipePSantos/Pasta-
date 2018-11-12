// Exercicio 5.cpp : Defines the entry point for the console application.
//O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos(aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor seja de 28 % e os impostos de 45 % , escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor.

#include "stdafx.h"
#include <stdlib.h>
float Numero()
{
	float numero;
	printf("Favor digitar o valor de fabrica do carro:\n");
	scanf_s("%f", &numero);
	return numero;
}

float preco(float valor)
{
	float fab = valor;
	float dist = fab * 0.28;
	float imp = fab * 0.45;
	float total = fab + dist + imp;
	return total;
}


int main()
{
	float valor;
	valor = Numero();
	printf("O preco que o consumidor pagara eh: %.0f", preco(valor));
	system("pause");
    return 0;
}

