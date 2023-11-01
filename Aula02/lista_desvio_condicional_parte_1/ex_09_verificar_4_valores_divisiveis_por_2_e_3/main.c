#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...VERIFICAR 4 VALORES DIVISÍVEIS POR 2 E 3... \n");
	printf("\n");
	
	int valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0;

	printf("Informe o primeiro valor: ");
	scanf("%i", &valor1);
	
	printf("Informe o segundo valor: ");
	scanf("%i", &valor2);
	
	printf("Informe o terceiro valor: ");
	scanf("%i", &valor3);
	
	printf("Informe o quarto valor: ");
	scanf("%i", &valor4);
	printf("\n");
	
	printf("Valores que são divisíveis por 2 e 3: \n");
	
	if (valor1 % 2 == 0 && valor1 % 3 == 0) {
    	printf("%.2i \n", valor1);
    }
    if (valor2 % 2 == 0 && valor2 % 3 == 0) {
        printf("%.2i \n", valor2);
    }
    if (valor3 % 2 == 0 && valor3 % 3 == 0) {
        printf("%.2i \n", valor3);
    }
    if (valor4 % 2 == 0 && valor4 % 3 == 0) {
        printf("%.2i \n", valor4);
    }
    
    system("pause");
	
	return 0;
}
