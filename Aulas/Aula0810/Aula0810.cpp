// Aula0810.cpp : Defines the entry point for the console application.
//comentario curto


/*
Comentario longo
(mais de uma linha)
*/


#include "stdafx.h" // inclusao de biblioteca
// C ANSI
#include<stdio.h>
#include<stdlib.h>

//Variaveis
int a; //inteiro
float b; // real (ponto flutuante)
double c; // real (maior precisao)
bool d; // booleano (verdadeiro/falso) (true/false)


int main()
{
	//variavel local
	//(visivel somente nesta função, a partir dessa linha)
	int e;


	printf("Hello world! MITO 17\n");
	printf("Sao Caetano Gigante azulao do universo\n");
	printf("Manchester\t\tUnheineken\n"),// \t Faz o texto ter o espaço de um tab

	printf("\n");
	
	// como imprimir valores
	printf("%i", 99);
	printf("%f\n", 100.01);

	//texto (string) e valores juntos
	printf("Aqui vai o valor %i, total da soma. \n", 98 + 5);



	printf("%i + %i = %i\n", 500, 600, 500 + 600);

	printf("Por algum acaso esqueci o valor daqui: %i\n");


	a = 150;
	e = 275;

	int f = a + e;

	printf("O resultado da soma eh: %i\n", f);

	//Leitura SCANF / SCANF_S
	scanf_s("%i", &f),

	printf("\nVoce digitou %i\n", f);

	printf("Digite um valor real(float");
	scanf_s("%f", &b);

	printf("\nVoce digitou %f\n", b);








	system("pause");
    return 0;
}


