// Aula2210.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int maior(int a, int b, int c, int d){
	int mai =a;
	if (mai < b) {
		mai = b;
	}

	if (mai < c) {
		mai = c;
	}
	if (mai < d ) {
		mai = d;
	}
	return mai;
}


int main()
{	

	int a, b, c, d;
	printf_s("Digite o primeiro valor\n");
	scanf_s("%i", &a);
	printf_s("Digite o segundo valor\n");
	scanf_s("%i", &b);
	printf_s("Digite o terceiro valor\n");
	scanf_s("%i", &c);
	printf_s("Digite o quarto valor\n");
	scanf_s("%i", &d);
	maior(a, b, c, d);
	printf_s("O maior numero eh : %i\n ", maior(a, b , c , d));
	system("pause");
    return 0;
}

