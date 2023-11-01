#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...PAR * 2, ÍMPAR - 3... \n");
	printf("\n");
	
	int valorInt = 0, resultadoOperacao = 0;
	
	printf("Digite um valor inteiro: ");
	scanf("%i", &valorInt);
	
	if (valorInt % 2 == 0) {
		resultadoOperacao = valorInt * 2;
	} else {
		resultadoOperacao = valorInt - 3;
	}
	
	printf("\n");
	printf("Resultado da operação: %i \n", resultadoOperacao);
	
	system("pause");
	
	return 0;
}
