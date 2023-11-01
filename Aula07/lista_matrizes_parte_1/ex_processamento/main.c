#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int valores[250][4], n = 0, x = 0, y = 0, r = 0, maiorValor = 0, posMaiorX = 0, posMaiorY = 0, menorValor = 0, posMenorX = 0, posMenorY = 0, valoresRepetidos[250][4], quantRepeticoes = 0;
	int quantPar = 0, quantImpar = 0, somaPar= 0, somaImpar = 0, maiorPar = 0, menorPar = 0, maiorImpar = 0, menorImpar = 0, maiorSoma = 0, tamanho = 0;
	float mediaPar = 0.0, mediaImpar = 0.0;
	
	for(x = 0; x < 250; x++){
		for(y = 0; y < 4; y++){
			valores[x][y] = -1;
		}
	}
	
	do{
		printf("\n");
		printf("PROCESSAMENTO \n");
		printf("1. Carregar aleatório  \n");
		printf("2. Imprimir todos   \n");
		printf("3. Maior valor   \n");
		printf("4. Menor valor \n");
		printf("5. Posição e número de repetições \n");
		printf("6. Pares \n");
		printf("7. Relatório pares x ímpares \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &r);
		printf("\n");
		
		if(r == 1){
			
			srand(time(NULL));
			
			for(x = 0; x < 250; x++){
				for(y = 0; y < 4; y++){
					valores[x][y] = rand() % 5001;
					tamanho++;
				}
			}
			
			printf("Valores aleatórios carregados \n");
			
		} else if(r == 2){
			
			if(tamanho == 0){
				printf("A matriz esta vazia \n");
			} else {
				for(x = 0; x < 250; x++){
					for(y = 0; y < 4; y++){
						printf("[%i][%i]: %i\t", x, y, valores[x][y]);
					}
					printf("\n");
				}
			}
			
		} else if(r == 3){
			
			if(tamanho == 0){
				printf("A matriz está vazia. Preencha ela primeiro para realizar essa operação \n");
			} else {
				maiorValor = valores[0][0];
				posMaiorX = 0;
				posMaiorY = 0;
				
				for(x = 0; x < 250; x++){
					for(y = 0; y < 4; y++){
						if(valores[x][y] > maiorValor){
							maiorValor = valores[x][y];
							posMaiorX = x;
							posMaiorY = y;
						}
					}
				}
				
				printf("Maior valor da matriz: %i \n", maiorValor);
				printf("Posição do maior valor: [%i][%i] \n", posMaiorX, posMaiorY);
			}
		
			printf("\n");
			
		} else if(r == 4){
			
			if(tamanho == 0){
				printf("A matriz está vazia. Preencha ela primeiro para realizar essa operação \n");
			} else { 
				menorValor = valores[0][0];
				posMenorX = 0;
				posMenorY = 0;
				
				for(x = 0; x < 250; x++){
					for(y = 0; y < 4; y++){
						if(valores[x][y] < menorValor){
							menorValor = valores[x][y];
							posMenorX = x;
							posMenorY = y;
						}
					}
				}
				
				printf("Menor valor da matriz: %i \n", menorValor);
				printf("Posição do menor valor: [%i][%i] \n", posMenorX, posMenorY);
			}
			
			printf("\n");
			
		} else if(r == 5){
			
			if(tamanho == 0){
				printf("A matriz está vazia. Preencha ela primeiro para realizar essa operação \n");
			} else {
				quantRepeticoes = 0;
			
				for(x = 0; x < 250; x++){
					for(y = 0; y < 4; y++){
						valoresRepetidos[x][y] = -1;
					}
				}
				
				printf("Informe um valor inteiro: ");
				scanf("%i", &n);
				
				for(x = 0; x < 250; x++){
					for(y = 0; y < 4; y++){
						if(valores[x][y] == n){
							valoresRepetidos[x][y] = valores[x][y];
							quantRepeticoes += 1;
						}
					}
				}
				
				if(quantRepeticoes == 0){
					printf("O valor informado não aparece na matriz \n", n);
				} else {
					
					printf("Quantidade de vezes que o valor %i aparece: %i \n", n, quantRepeticoes);
					printf("Posições em que o número %i aparece: \n", n);
					
					for(x = 0; x < 250; x++){
						for(y = 0; y < 4; y++){
							if(valoresRepetidos[x][y] == n){
								printf("[%i][%i] \n", x, y);
							}
						}
					}
				}
			
			}
			
			
		} else if(r == 6){
			
			if(tamanho == 0){
				printf("A matriz está vazia. Preencha ela primeiro para realizar essa operação \n");
			} else {
				printf("Valores pares existentes na matriz: \n");
			
				for(x = 0; x < 250; x++){
					for(y = 0; y < 4; y++){
						if(valores[x][y] % 2 == 0){
							printf("%i \n", valores[x][y]);
						}
					}
				}
			}
			
		} else if(r == 7){
			
			if(tamanho == 0){
				printf("A matriz está vazia. Preencha ela primeiro para realizar essa operação \n");
			} else {
				quantPar = 0;
				quantImpar = 0;
				somaPar = 0;
				somaImpar = 0;
				maiorPar = 0;
				menorPar = 5500;
				maiorImpar = 0;
				menorImpar = 5500;
				mediaPar = 0.0;
				mediaImpar = 0.0;
				
				for(x = 0; x < 250; x++){
					for(y = 0; y < 4; y++){
						if(valores[x][y] % 2 == 0){
							quantPar += 1;
							somaPar += valores[x][y];
							if(valores[x][y] > maiorPar){
								maiorPar = valores[x][y];
							}
							if(valores[x][y] < menorPar){
								menorPar = valores[x][y];
							}
						} else {
							quantImpar += 1;
							somaImpar += valores[x][y];
							if(valores[x][y] > maiorImpar){
								maiorImpar = valores[x][y];
							}
							if(valores[x][y] < menorImpar){
								menorImpar = valores[x][y];
							}
						}
					}
				}
				
				mediaPar = somaPar / quantPar;
			    mediaImpar = somaImpar / quantImpar;
				
				printf("Número de valores pares: %i \n", quantPar);
			    printf("Número de valores ímpares: %i \n", quantImpar);
			    printf("Soma dos valores pares: %i \n", somaPar);
			    printf("Soma dos valores ímpares: %i \n", somaImpar);
			    printf("Maior número par: %i \n", maiorPar);
			    printf("Menor número par: %i \n", menorPar);
			    printf("Maior número ímpar: %i \n", maiorImpar);
			    printf("Menor número ímpar: %i \n", menorImpar);
			    printf("Média de valores pares: %.2f \n", mediaPar);
				printf("Média de valores ímpares: %.2f \n", mediaImpar);
				
				if(somaPar > somaImpar){
					printf("Os valores pares tiveram maior soma \n");
				} else if(somaPar < somaImpar){
					printf("Os valores ímpares tiveram maior soma \n");
				} else {
					printf("Os valores ímpares e pares tiveram a mesma soma \n");
				}
				
				if(quantPar > quantImpar){
					printf("Os valores pares estão em maior quantidade \n");
				} else if(quantPar < quantImpar){
					printf("Os valores ímpares estão em maior quantidade \n");
				} else {
					printf("Os valores ímpares e pares estão na mesma quantidade \n");
				}
			}
			
		} else if(r == 9){
			
			printf("Encerrando a execução do programa... \n");
			
		} else {
			printf("Valor inválido. Tente novamente \n");
		}
		
	} while(r != 9);
	
	return 0;
}
