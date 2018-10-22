// Switch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

float recebervalores()
{
	float valor = 0;
	printf("\nDigite um valor REAL:\n");
	scanf_s("%f", &valor);
	return valor;
}

float media(float a, float b, float c, float d)
{
	float media;
	media = (a + b + c + d) / 4;
	return media;
}

void maiorvalor(float a, float b, float c, float d)
{
	float mediadois = media(a, b, c, d);

	if (a > mediadois)
	{
		printf("%.2f ", a);
	}
	if (b > mediadois)
	{
		printf("%.2f ", b);
	}
	if (c > mediadois)
	{
		printf("%.2f ", c);
	}
	if (d > mediadois)
	{
		printf("%.2f ", d);
	}
}


void InformarParOuImpar(int a)
{
	if ((a % 2 == 0))
		printf("Par\n");
	else
	{
		printf("impar\n");
	}
}
int main()
{

	float valorum = recebervalores();
	float valordois = recebervalores();
	float valortres = recebervalores();
	float valorquatro = recebervalores();

	float m = media(valorum, valordois, valortres, valorquatro);

	printf("\n\n");

	maiorvalor(valorum, valordois, valortres, valorquatro);

	printf("\n\n");

	InformarParOuImpar(valorum);

	printf("\nO valor da media:%.2f\n", m);




	system("pause");
	return 0;

}


