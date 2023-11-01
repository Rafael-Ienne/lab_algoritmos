#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("ORDENAR \n");
	printf("\n");
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor1 = 0, valor2 = 0, valor3 = 0, i = 0;
	
	printf("Informe o primeiro valor inteiro: ");
	scanf("%i", &valor1);
	printf("Informe o segundo valor inteiro: ");
	scanf("%i", &valor2);
	printf("Informe o terceiro valor inteiro: ");
	scanf("%i", &valor3);
		
	if(valor1 > valor2) {
		i = valor1;
		valor1 = valor2;
		valor2 = i;
	}

	if(valor1 > valor3) {
		i = valor1;
		valor1 = valor3;
		valor3 = i;
	}
	
    if(valor2 > valor3) {
		i = valor2;
		valor2 = valor3;
		valor3 = i;
	}
	
	printf("\n");
	printf("A ordem crescente dos valores informados é: %i, %i, %i \n", valor1, valor2, valor3);
	
	system("pause");
	
	return 0;
}
