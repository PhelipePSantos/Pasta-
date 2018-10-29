// Aula2910 2.cpp : Defines the entry point for the console application.
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
	//int n1 = NumeroInteiro();
	//int n2 = NumeroInteiro();
	//int n3 = NumeroInteiro();
	//int n4 = NumeroInteiro();
	//int n5 = NumeroInteiro();
	int i = 0;
	int n1;
	int n2;
	int n3;
	int n4;
	int n5;
	int numero;
	while (i<5)
	{
		numero = NumeroInteiro();
		if (i == 0)
		{
			n1= numero;
		}
		else if (i == 1)
		{
			n2= numero;
		}
		else if (i == 2)
		{
			n3= numero;
		}
		else if (i == 3)
		{
			n4= numero;
		}
		else if (i == 4)
		{
			n5 = numero;
		}
		i++;
	}	

	if (n1 < n2 && n2 < n3 && n3 < n4 && n4 < n5)
	{
		printf_s("Os numeros estao em ordem crescente");
	}
	else {
		printf_s("os numeros nao estao em ordem crescente");
	}

	system("pause");
    return 0;

}


