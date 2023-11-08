#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int valor1 = 0, valor2 = 0, valor3 = 0, i = 0;
	
	printf("IMPRIMIR 3 CONTAGENS DECRESCENTE \n");
	
	printf("\n");
	
	printf("Informe um valor inteiro: ");
	scanf("%i", &valor1);
	printf("Informe outro valor inteiro: ");
	scanf("%i", &valor2);
	printf("Informe outro valor inteiro: ");
	scanf("%i", &valor3);
	printf("\n");
	
	if(valor1 <= 0 || valor2 <= 0 || valor3 <= 0){
		printf("Valores nulos ou negativos não são permitidos \n");
	} else {
		printf("Impressão contagem do valor %i: \n", valor1);
		for(i = valor1; i >= 1; i--){
			printf("%i \n", i);
		}
		
		printf("\n");
		
		printf("Impressão contagem do valor %i: \n", valor2);
		for(i = valor2; i >= 1; i--){
			printf("%i \n", i);
		}
		
		printf("\n");
		
		printf("Impressão contagem do valor %i: \n", valor3);
		for(i = valor3; i >= 1; i--){
			printf("%i \n", i);
		}
	}
	
	system("pause");
	
	return 0;
}
