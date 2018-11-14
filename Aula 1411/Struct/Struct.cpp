// Struct.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

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

void imprimir(carro mercedao)
{
	printf("Dados do Carro\n");
	printf("Modelo: %s\n", mercedao.modelo);
	printf("Marca: %s\n", mercedao.marca);
	printf("Ano de Fabricação: %i\n", mercedao.anofab);
	printf("Cor: %s\n", mercedao.cor);
	printf("Placa: %s\n", mercedao.placa);
}
int main()
{
	struct carro mercedao;
	printf("Digite o modelo do carro:\n");
	gets_s(mercedao.modelo);
	printf("Digite a marca do Carro\n");
	gets_s(mercedao.marca);
	printf("Digite o anofabricacao do carro:\n");
	scanf_s("%i", &mercedao.anofab);
	printf("Digite a cor do carro:\n");
	gets_s(mercedao.cor);
	printf("Digite a placa do carro:");
	gets_s(mercedao.placa);
	imprimir(mercedao);
	system("pause");
	return 0;
}

