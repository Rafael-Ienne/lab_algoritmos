#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("SOMAR FATORIAIS ÍMPARES DE 1 A 20 \n");
	printf("\n");
	
	long long int fatorial = 0, soma = 0;
	int contador1 = 0, contador2 = 0, quantImpar = 0;
	
	for(contador1 = 1; contador1 <= 20; contador1++){
		fatorial = 1;
		if(contador1 % 2 != 0){
			for(contador2 = 1; contador2 <= contador1; contador2++){
				fatorial = fatorial * contador2;
			}
			soma += fatorial;
			quantImpar += 1;
		}
	}
	
	printf("Quantidade de valores ímpares no intervlo de 1 a 20: %i \n", quantImpar);
	printf("Soma dos fatoriais dos valores ímpares: %lld \n", soma);
	
	system("pause");
	
	return 0;
}
