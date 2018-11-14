// Struct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>

struct carro
{
	char modelo[20];
	char marca[20];
	int anofab;
	char cor[20];
	char placa[7];
};
struct funcionario
{
	char nome[50];
	int cpf;
	int dia;
	int mes;
	int ano;
	int salario;
};

void imprimir(carro b)
{
	printf("Dados do Carro\n");
	printf("Modelo: %s\n", b.modelo);
	printf("Marca: %s\n", b.marca);
	printf("Ano de Fabricação: %i\n", b.anofab);
	printf("Cor: %s\n", b.cor);
	printf("Placa: %s\n", b.placa);
}
int main()
{
	struct carro c;
	printf("Digite o modelo do carro:\n");
	gets_s(c.modelo);
	printf("Digite a marca do Carro\n");
	gets_s(c.marca);
	printf("Digite a placa do carro:\n");
	gets_s(c.placa);
	printf("Digite a cor do carro:\n");
	gets_s(c.cor);
	printf("Digite o anofabricacao do carro:\n");
	scanf_s("%i", &c.anofab);
	imprimir(c);
	system("pause");
	return 0;
}