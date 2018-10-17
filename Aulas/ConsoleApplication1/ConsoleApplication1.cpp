// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

char caractere;
float soma(float a, float b) {
	float resultsoma = a + b;
	return resultsoma;
}
float multi(float a, float b) {
	float resultm = a * b;
	return resultm;

}
float div(float a, float b) {
	float resultdiv = a / b;
	return resultdiv;

}
float sub(float a, float b) {
	float resultsub = a - b;
	return resultsub;
}

int main()
{
	float a, b;

	printf_s("Digite o primeiro valor");
	scanf_s("%f", &a);
	printf_s("Digite o segundo valor");
	scanf_s("%f", &b);
	soma(a, b);
	div(a, b);
	sub(a, b);
	multi(a, b);
	printf_s("O valor da soma é:%f\n ", soma(a, b));
	printf_s("O valor da subtração é:%f\n ", sub(a, b));
	printf_s("O valor da divisão é: %f\n", div(a, b));
	printf_s("O valor da multiplicação é: %f\n", multi(a, b));

	system("pause");
	return 0;
}