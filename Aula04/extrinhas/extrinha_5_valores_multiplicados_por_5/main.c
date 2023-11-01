#include <stdio.h>
#include <stdlib.h>

/* Solicitar 5 valores inteiros, multiplicar por 3
 * e apresentar o resultado da multiplicação.
 */

int main(int argc, char *argv[]) {
	int cont = 1;
	int x, r = 0;
	
	while (cont <= 5) {
		printf("\n");
		printf("Digite um valor inteiro: ");
		scanf("%i", &x);
		
		r = x * 3;
		printf("O valor %i * 3 e: %i. \n", x, r);
		
		cont = cont + 1;
	}
	
	system("pause");
	return 0;
}
