#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, option = 0, idades[8], somaIdades = 0, quantPares = 0, somaPares = 0, quantMaiores = 0, somaMaiores = 0, tamanho = 0, idade = 0;
	
	for(i = 0; i < 8; i++){
		idades[i] = 0;
	}
	
	do {
		
		printf("\n");
		printf("..:: IDADES ::.. \n");
		printf("1. Zerar \n");
		printf("2. Carregar  \n");
		printf("3. Imprimir \n");
		printf("4. Somar \n");
		printf("5. Pares \n");
		printf("6. Contar pares \n");
		printf("7. Somar pares \n");
		printf("8. Menores idade \n");
		printf("9. Contar maiores idade \n");
		printf("10. Somar maiores idade \n");
		printf("11. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &option);
		printf("\n");
		
		if(option == 1){
			
			for(i = 0; i < 8; i++){
				idades[i] = 0;
			}
			
			tamanho = 0;
			
			printf("Idades zeradas! \n");
			
		} else if(option == 2){
			
			tamanho = 0;
			
			while(tamanho < 8){
				printf("Informe uma idade: ");
				scanf("%i", &idade);
				
				if(idade <= 0){
					printf("Idades nulas ou negativas não são permitidas. Tente novamente \n");
				} else {
					idades[tamanho] = idade;
					tamanho++;
				}
			}
			
			printf("\n");
			
			printf("Idades carregadas! \n");
			
		} else if(option == 3){
			
			if(tamanho == 0){
				printf("O vetor está vazio \n");
			} else {
				for(i = 0; i < 8; i++){
					printf("%i \n", idades[i]);
				}
			}
			
		} else if(option == 4){
			
			somaIdades = 0;
			
			for(i = 0; i < 8; i++){
				somaIdades += idades[i];	
			}
			
			printf("A soma das idades é: %i \n", somaIdades);
			
		} else if(option == 5){
			
			if(tamanho == 0){
				printf("O vetor está vazio \n");
			} else {
				printf("Idades pares existentes no vetor: \n");
			
				for(i = 0; i < 8; i++){
					if(idades[i] % 2 == 0){
						printf("%i \n", idades[i]);
					}
				}
			}
			
		} else if(option == 6){
		 	
		 	quantPares = 0;
		 	
		 	if(tamanho == 0){
				printf("O vetor esta vazio \n");
			} else {
				for(i = 0; i < 8; i++){
					if(idades[i] % 2 == 0){
						quantPares += 1;
					}
				}
				
				printf("Quantidade total de idades pares no vetor: %i \n", quantPares);
			}
		 	
		} else if(option == 7){
			
		 	somaPares = 0;
		 	
		 	if(tamanho == 0){
				printf("O vetor esta vazio \n");
			} else {
				
				for(i = 0; i < 8; i++){
					if(idades[i] % 2 == 0){
						somaPares += idades[i];
					}
				}
				
				printf("Soma total das idades pares no vetor: %i \n", somaPares);
			}
		 	
		} else if(option == 8){
			
			if(tamanho == 0){
				printf("O vetor está vazio \n");
			} else {
				printf("Idades menores que 18: \n");
		 	
			 	for(i = 0; i < 8; i++){
					if(idades[i] < 18){
						printf("%i \n", idades[i]);
					}
				}
			}
		 	
		} else if(option == 9){
		 	
		 	quantMaiores = 0;
		 	
		 	if(tamanho == 0){
				printf("O vetor está vazio \n");
			} else {
				
				for(i = 0; i < 8; i++){
					if(idades[i] >= 18){
						quantMaiores += 1;
					}
				}
				
				printf("Quantidade de idades maiores ou iguais a 18 anos: %i \n", quantMaiores);
			}
			
		} else if(option == 10){
			
			somaMaiores = 0;
			
			if(tamanho == 0){
				printf("O vetor está vazio \n");
			} else {
				
				for(i = 0; i < 8; i++){
					if(idades[i] >= 18){
						somaMaiores += idades[i];
					}
				}
				
				printf("Soma das idades maiores ou iguais a 18 anos: %i \n", somaMaiores);
			}
			
		} else if(option == 11){
			
			printf("Encerrando a execução do programa... \n");
			
		} else {
			printf("Valor inválido. Tente novamente. \n");
		}

	} while(option != 11);
	
	system("pause");
	
	return 0;
}
