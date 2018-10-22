// Aula2210.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int maior(int a, int b, int c, int d){
	int mai;
	if (a >=b && a>=c && a>=d) {
		mai = a;
	}
	if (b >= a && b>=c && b>=d) {
		mai = b;
	}
	if (c >= a && c>=b && c>=d) {
		mai = c;
	}
	if (d >= a && d>=b && d>=c) {
		mai = d;
	}
	return mai;
}


int main()
{	

	int a, b, c, d;
	printf_s("Digite o primeiro valor");
	scanf_s("%i", &a);
	printf_s("Digite o segundo valor");
	scanf_s("%i", &b);
	printf_s("Digite o terceiro valor");
	scanf_s("%i", &c);
	printf_s("Digite o quarto valor");
	scanf_s("%i", &d);
	maior(a, b, c, d);
	printf_s("O maior numero eh :%i\n ", maior(a, b , c , d));
	system("pause");
    return 0;
}

