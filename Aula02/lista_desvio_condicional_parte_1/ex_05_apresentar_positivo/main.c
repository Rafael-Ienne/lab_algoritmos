#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("...APRESENTAR POSITIVO... \n");
	printf("\n");
	
	int valor1 = 0, valorFinal = 0;
	
	printf("Digite um valor: ");
	scanf("%i", &valor1);
	printf("\n");
	
	if(valor1 > 0) {
		printf("%i \n", valor1);
	} else{
		valorFinal = valor1 * -1;
		printf("%i \n", valorFinal);
	}
	
	system("pause");
	
	return 0;
}
