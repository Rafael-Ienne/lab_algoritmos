#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("IDENTIFICAR MAIOR E MENOR VALOR DENTRE 5 DIFERENTES \n");
	printf("\n");
	
	int valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0, valor5 = 0, maiorValor = 0, menorValor = 0;
	
	printf("Informe o primeiro valor: ");
	scanf("%i", &valor1);
	printf("Informe o segundo valor: ");
	scanf("%i", &valor2);
	printf("Informe o terceiro valor: ");
	scanf("%i", &valor3);
	printf("Informe o quarto valor: ");
	scanf("%i", &valor4);
	printf("Informe o quinto valor: ");
	scanf("%i", &valor5);
	printf("\n");
	
	maiorValor = valor1;
	menorValor = valor1;
	
	if(valor2 > maiorValor) {
		maiorValor = valor2;
	}
	if(valor2 < menorValor) {
		menorValor = valor2;
	}
	
	if(valor3 > maiorValor) {
		maiorValor = valor3;
	}
	if(valor3 < menorValor) {
		menorValor = valor3;
	}
	
	if(valor4 > maiorValor) {
		maiorValor = valor4;
	}
	if(valor4 < menorValor) {
		menorValor = valor4;
	}
	
	if(valor5 > maiorValor) {
		maiorValor = valor5;
	}
	if(valor5 < menorValor) {
		menorValor = valor5;
	}	
	
	printf("MAIOR VALOR: %i \n", maiorValor);
	printf("MENOR VALOR: %i \n", menorValor);
	
	system("pause");
	
	return 0;
}
