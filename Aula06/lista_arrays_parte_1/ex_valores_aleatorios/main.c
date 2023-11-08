#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int option = 0, i = 0, valoresAleatorios[60], somaAleatorios = 0, quantImpar = 0, somaImpar = 0, quantRepetidos = 0, n = 0, tamanho = 0;
	
	for(i = 0; i < 60; i++){
		valoresAleatorios[i] = 0;
	}
	
	do {
		
		printf("\n");
		printf("VALORES ALEAT�RIOS \n");
		printf("1. Zerar \n");
		printf("2. Carregar aleat�rio \n");
		printf("3. Imprimir \n");
		printf("4. Somar \n");
		printf("5. Relat�rio valores �mpares \n");
		printf("6. Maiores que \n");
		printf("7. Quantos existem/repetidos \n");
		printf("8. Sair \n");
		printf("Digite a op��o: ");
		scanf("%i", &option);
		printf("\n");
		
		if(option == 1){
			
			for(i = 0; i < 60; i++){
				valoresAleatorios[i] = -1;
			}
			
			tamanho = 0;
			
			printf("Valores zerados! \n");
			
		} else if(option == 2){
			
			srand(time(NULL));
			
			for(i = 0; i < 60; i++){
				valoresAleatorios[i] = 1 + rand() % 60;
			}
			
			tamanho = 60;
			
			printf("Valores aleat�rios carregados! \n");
			
		} else if(option == 3){
			
			if(tamanho == 0){
				printf("O vetor est� zerado \n");
			} else {
				for(i = 0; i < 60; i++){
					printf("Valor %i: posi��o %i \n", valoresAleatorios[i], i);
				}
			}
			
		} else if(option == 4){
			
			somaAleatorios = 0;
			
			if(tamanho == 0){
				printf("O vetor est� zerado \n");
			} else {
				
				for(i = 0; i < 60; i++){
					somaAleatorios += valoresAleatorios[i];
				}
				
				printf("A soma dos valores �: %i \n", somaAleatorios);
			}
			
		} else if(option == 5){
			
			quantImpar = 0;
			somaImpar = 0;
			
			if(tamanho == 0){
				printf("O vetor est� zerado \n");
			} else {
				printf("Relat�rio valores �mpares \n");
			
				for(i = 0; i < 60; i++){
					if(valoresAleatorios[i] % 2 != 0){
						quantImpar += 1;
						somaImpar += valoresAleatorios[i];
					}
				}
				
				printf("Quantidade de valores �mpares: %i \n", quantImpar);
				printf("Soma de valores �mpares: %i \n", somaImpar);
			}
			
		} else if(option == 6){
			
			if(tamanho == 0){
				printf("O vetor est� zerado \n");
			} else {
				printf("Informe um valor inteiro entre 1 e 60: ");
			 	scanf("%i", &n);
			 	
			 	printf("\n");
			 	
			 	if(n >= 1 && n <= 60){
			 		printf("Valores no vetor maiores que %i: \n", n);
			 	
				 	for(i = 0; i < 60; i++){
				 		if(valoresAleatorios[i] > n){
				 			printf("%i \n", valoresAleatorios[i]);
						}
					}
				} else {
				 	printf("O valor informado n�o pertence ao intervalo especificado. Tente novamente \n");
				}
			}
		 	
		} else if(option == 7){
			
			quantRepetidos = 0;
			
			if(tamanho == 0){
				printf("O vetor est� zerado \n");
			} else {
				printf("Informe um valor inteiro entre 1 e 60: ");
			 	scanf("%i", &n);
			 	
			 	printf("\n");
			 	
			 	if(n >= 1 && n <= 60){
			 	
				 	for(i = 0; i < 60; i++){
				 		if(valoresAleatorios[i] == n){
				 			quantRepetidos += 1;
					    }
					}
					
					printf("Quantidade de vezes que o n�mero %i aparece no vetor: %i \n", n, quantRepetidos);
				} else {
					printf("O valor informado n�o pertence ao intervalo especificado. Tente novamente \n");
				}
		 	
			}
		 	
		} else if(option == 8){
		 	
		    printf("Encerrando a execu��o do programa... \n");
		 	
		} else {
			printf("Valor inv�lido. Tente novamente \n");
		}
		
	} while(option != 8);
	
	return 0;
}
