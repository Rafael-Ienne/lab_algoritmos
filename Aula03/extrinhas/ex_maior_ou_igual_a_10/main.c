#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Verifica se um valor inteiro é par e maior
 * que 10. O programa faz uso dos conceitos 
 * de tabela verdade.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int val = 0;

	printf("...PROCESSAMENTO...\n");
	printf("...O programa verifica se um número é positivo e maior que 10...\n");
	printf("\n");
	
	printf("Digite um numero inteiro qualquer: ");
	scanf("%i", &val);
	
	if(val > 10) {
		printf("O valor %i e positivo e maior que 10. \n", val);
	} else {
		printf("O valor %i não é positivo ou maior que 10. \n", val);
	}
	
	system("pause");
	return 0;
}
