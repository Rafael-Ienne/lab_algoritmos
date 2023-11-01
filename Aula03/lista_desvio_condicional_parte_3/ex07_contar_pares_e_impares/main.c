#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("CONTAR PARES E ÍMPARES \n");
	printf("\n");
	
	int valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0, valor5 = 0, quantPar = 0, quantImpar = 0;
	
	printf("Digite o primeiro valor inteiro: ");
	scanf("%i", &valor1);
	printf("Digite o segundo valor inteiro: ");
	scanf("%i", &valor2);
	printf("Digite o terceiro valor inteiro: ");
	scanf("%i", &valor3);
	printf("Digite o quarto valor inteiro: ");
	scanf("%i", &valor4);
	printf("Digite o quinto valor inteiro: ");
	scanf("%i", &valor5);
	printf("\n");
	
	if(valor1 % 2 == 0) {
		quantPar += 1;
	} else {
		quantImpar += 1;
	}
	
	if(valor2 % 2 == 0) {
		quantPar += 1;
	} else {
		quantImpar += 1;
	}
	
	if(valor3 % 2 == 0) {
		quantPar += 1;
	} else {
		quantImpar += 1;
	}
	
	if(valor4 % 2 == 0) {
		quantPar += 1;
	} else {
		quantImpar += 1;
	}
	
	if(valor5 % 2 == 0) {
		quantPar += 1;
	} else {
		quantImpar += 1;
	}
	
	printf("Quantidade de valores pares: %i \n", quantPar);
	printf("Quantidade de valores ímpares: %i \n", quantImpar);
	
	if (quantPar > quantImpar) {
        printf("O tipo de número mais fornecido foi PAR.\n");
    } else {
        printf("O tipo de número mais fornecido foi ÍMPAR.\n");
    } 
	
	system("pause");
	
	return 0;
}
