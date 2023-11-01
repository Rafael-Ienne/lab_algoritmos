#include <stdio.h>
#include <stdlib.h>

/* Marçal, J. 
 * Solicitar N valores inteiros, multiplicar por 3
 * e apresentar o resultado da multiplicação.
 */

int main(int argc, char *argv[]) {
	int cont = 1;
	int x, r = 0;
	
	while (cont == 1) {
		printf("\n");
		printf("Digite um valor inteiro: ");
		scanf("%i", &x);
		
		r = x * 3;
		printf("O valor %i * 3 e: %i. \n", x, r);
	
		printf("\n");
		printf("Deseja continuar?\n");
		printf("1 - Sim \n");
		printf("2 - Nao \n");
		scanf("%i", &cont);
	}
	
	return 0;
}

