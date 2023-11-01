#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("IDENTIFICAR MENOR/MAIOR, PERCORRER INTERVALO, CONTAR E SOMAR DIVISÍVEIS \n");
	printf("\n");
	
	int valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0, i = 0, maiorValor = 0, menorValor = 0, contador = 0, soma = 0, quantDivisiveis = 0;
	
	printf("Informe o primeiro valor inteiro: ");
	scanf("%i", &valor1);
	printf("Informe o segundo valor inteiro: ");
	scanf("%i", &valor2);
	printf("Informe o terceiro valor inteiro: ");
	scanf("%i", &valor3);
	printf("Informe o quarto valor inteiro: ");
	scanf("%i", &valor4);
	
	maiorValor = valor1;
	menorValor = valor1;
	
	if(valor2 > maiorValor){
		i = maiorValor;
		maiorValor = valor2;
		valor2 = i;
	}
	if(valor2 < menorValor){
		i = menorValor;
		menorValor = valor2;
		valor2 = i;
	}
	
	if(valor3 > maiorValor){
		i = maiorValor;
		maiorValor = valor3;
		valor3 = i;
	}
	if(valor3 < menorValor){
		i = menorValor;
		menorValor = valor3;
		valor3 = i;
	}
	
	if(valor4 < menorValor){
		i = menorValor;
		menorValor = valor4;
		valor4 = i;
	}
	if(valor4 > maiorValor){
		i = maiorValor;
		maiorValor = valor4;
		valor4 = i;
	}
	
	
	for(contador = menorValor; contador <= maiorValor; contador++){
		if(contador % valor3 == 0 && contador % valor4 == 0){
			quantDivisiveis += 1;
			soma += contador;
		}
	}
	
	printf("\n");
	printf("Maior valor informado: %i \n", maiorValor );
	printf("Menor valor informado: %i \n", menorValor );
	printf("Quantidade de valores divisíveis por %i e %i no intervalo [%i, %i]: %i \n",valor3, valor4, menorValor, maiorValor, quantDivisiveis);
	printf("Soma dos valores divisíveis por %i e %i no intervalo [%i, %i]: %i \n", valor3, valor4, menorValor, maiorValor, soma);
	
	system("pause");
	
	return 0;
}
