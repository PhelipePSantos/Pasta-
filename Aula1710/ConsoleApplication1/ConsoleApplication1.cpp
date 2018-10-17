// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
//Condicionais if=se(Aqui vai a condição) {=sentão     }=fimse 
//== igual
//!= diferente
//< menor
//> maior
//<= menor ou igual
//>= maior ou igual
//&& "E"
//|| "OU"
//


int main()
{	
	int a = 5;
	if(true)
	{
		printf("Sempre vai imprimir essa frase\n");
	}

	if (false)
	{
		printf("Essa frase nunca sera impressa");
	}

	if (a == 3)
	{
		printf("A eh igual a 3");
	}

	if (a != 3)
	{
		printf("A eh diferente de 3");
	}

    return 0;
}

