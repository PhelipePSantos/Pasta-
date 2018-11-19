// Filas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>

typedef struct {
	int tam;
	int fim;
	int *vet;
	int inicio;
}tp_fila;

int fila_vazia(tp_fila *fila) {
	if (fila->fim == fila->inicio) {
		return 1;
	}
	else
		return 0;
}

void inserindo(tp_fila *fila) {
	int numero;

	fila->tam++;
	fila->vet = (int*)realloc(fila->vet, fila->tam * sizeof(int));

	printf("insira numero:");
	scanf_s("%i", &numero);

	fila->fim++;
	fila->vet[fila->fim] = numero;
}

void excluindo(tp_fila *fila) {
	if (!fila_vazia(fila)) {
		fila->inicio++;
		fila->vet[fila->inicio] = NULL;
	}
	else
		printf("fila vazia!\n");
}

int listar(tp_fila *fila) {
	int i;
	int n = fila->tam;

	if (!fila_vazia(fila)) {
		for (i = n - 1; i >= 0; i--) {
			if (fila->vet[i] != 0) {
				printf("%i\n", fila->vet[i]);
			}
		}
	}
	else
		printf("fila vazia!\n");
}

main() {
	tp_fila fila = { 0,-1,0 ,-1 };
	char verifica = 'a';

	while (verifica != 's') {
		printf("(i)nserir /(l)istar/ (e)xcluir /(s)air: ");
		fflush(stdin); scanf("%c", &verifica);

		switch (verifica) {
		case'i':
			inserindo(&fila);
			break;
		case'e':
			excluindo(&fila);
			break;
		case('l'):
			listar(&fila);
			break;
		default:
			return 0;
		}
	}

}