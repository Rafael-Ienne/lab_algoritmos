#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2, diferencaFinal = 0;
	
	printf("...EXIBIR DIFEREN�A ENTRE 2 VALORES... \n");
	printf("\n");
	printf("Digite um valor inteiro: ");
	scanf("%i", &valor1);
	printf("Digite outro valor inteiro: ");
	scanf("%i", &valor2);
	
	if (valor1 > valor2) {
		diferencaFinal = valor1 - valor2;
	} else {
		diferencaFinal = valor2 - valor1;
	}
	
	printf("\n");
	printf("Diferen�a entre os dois valores informados anteriormente: %i \n", diferencaFinal);
	
	system("pause");
	
	return 0;
}
