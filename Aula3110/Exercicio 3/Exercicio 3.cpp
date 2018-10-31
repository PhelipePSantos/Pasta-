// Exercicio 3.cpp : Defines the entry point for the console application.
// Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre-a expressa em anos, meses e dias.

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int dias, ano, meses;
	printf("Favor digitar sua idade em dias:\n");
	scanf_s("%i", &dias);
	meses = dias / 30;
	ano = dias / 365;
	meses = meses%12;
	dias = dias % 30;
	printf("Voce tem %i", ano); 
	printf(" anos, %i", meses);
	printf(" meses e %i", dias);
	printf(" dias.");
	system("pause");


    return 0;
}

