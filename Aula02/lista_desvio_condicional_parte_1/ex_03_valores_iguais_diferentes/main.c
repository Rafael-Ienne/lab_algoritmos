#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2 = 0;
	
	printf("...VALORES IGUAIS//DIFERENTES... \n");
	printf("\n");
	
	printf("Digite um valor inteiro: ");
	scanf("%i", &valor1);
	printf("Digite outro valor inteiro: ");
	scanf("%i", &valor2);
	printf("\n");
	
	if (valor1 == valor2) {
		printf("Os valores informados são IGUAIS \n");
	} else {
		printf("Os valores informados são DIFERENTES \n");
	}
	
	system("pause");
	
	return 0;
}
