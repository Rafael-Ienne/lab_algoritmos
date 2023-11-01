#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float valores[10], soma = 0.0;
	int i = 0, n = 0, r = 0, option = 0, idades[10];
	int somaInt = 0, somaPares = 0, quantPares = 0;
	int quantMaiores = 0, somaMaiores = 0, valoresAleatorios[60], quantImpar = 0, somaImpar = 0, quantRepetidos = 0, n1 = 0, n2 = 0, quantRepeticao = 0, j = 0, valoresRepetidos[60];
	
	do{
		printf("\n");
		printf("LISTA DE EXERCÍCIOS: VETORES \n");
		printf("1. Carregar e imprimir valores  \n");
		printf("2. Mensalidades   \n");
		printf("3. Idades \n");
		printf("4. Valores aleatórios \n");
		printf("5. Valores aleatórios 2 \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &r);
		printf("\n");
		
		if(r == 1){
			
			for (i = 0; i <= 9; i++){
				idades[i] = 0;
			}
			
			printf("CARREGAR E IMPRIMIR VALORES  \n");
			
			for(i = 0; i <= 9; i++){
				printf("Informe uma idade: ");
				scanf("%i", &idades[i]);
			}
	
			printf("\n");
	
			printf("Valores das idades e suas respectivas posições no vetor: \n");
	
			for(i = 0; i <= 9; i++){
				printf("Idade %i: posição %i \n", idades[i], i);
			}
			
		} else if(r == 2){
			
			for(i = 0; i <= 9; i++){
				valores[i] = 0.0;
			}
			
			do{
				
				printf("\n");
				printf("MENSALIDADES \n");
				printf("1. Zerar \n");
				printf("2. Carregar \n");
				printf("3. Imprimir \n");
				printf("4. Somar \n");
				printf("9. Sair \n");
				printf("Digite a opção: ");
				scanf("%i", &option);
				printf("\n");
				
				if(option == 1){
					
					for(i = 0; i <= 9; i++){
						valores[i] = 0.0;
					}
					
					printf("Mensalidades zeradas! \n");
					
				} else if(option == 2){
					
					for(i = 0; i <= 9; i++){
						printf("Informe o valor da mensalidade: ");
						scanf("%f", &valores[i]);
					}
					
				} else if(option == 3){
					
					for(i = 0; i <= 9; i++){
						printf("Posição %i: R$ %.2f \n", i, valores[i]);
					}
					
				} else if(option == 4){
					
					soma = 0.0;
					
					for(i = 0; i <= 9; i++){
						soma += valores[i];
					}
					
					printf("A soma dos valores das mensalidades é: R$ %.2f \n", soma);
					
				} else if(option == 9){
					
					printf("Retornando ao menu principal... \n");
					
				}
				
		    } while(option != 9);
			
		} else if(r == 3){
			
			do{
		
				printf("\n");
				printf("IDADES \n");
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
					
					for(i = 0; i <= 7; i++){
						idades[i] = 0;
					}
					
					printf("Idades zeradas! \n");
					
				} else if(option == 2){
					
					for(i = 0; i <= 7; i++){
						printf("Informe uma idade: ");
						scanf("%i", &idades[i]);
					}
					
					printf("Idades carregadas! \n");
					
				} else if(option == 3){
					
					for(i = 0; i <= 7; i++){
						printf("%i \n", idades[i]);
					}
					
				} else if(option == 4){
					
					somaInt = 0;
					
					for(i = 0; i <= 7; i++){
						somaInt += idades[i];
					}
					
					printf("A soma das idades é: %i", somaInt);
					
				} else if(option == 5){
					
					printf("Idades pares existentes no vetor: \n");
					
					for(i = 0; i <= 7; i++){
						if(idades[i] % 2 == 0){
							printf("%i \n", idades[i]);
						}
					}
					
				 }else if(option == 6){
				 	
				 	quantPares = 0;
				 	
				 	for(i = 0; i <= 7; i++){
						if(idades[i] % 2 == 0){
							quantPares += 1;
						}
					}
					
					printf("Quantidade total das idades pares no vetor: %i \n", quantPares);
				 	
				 } else if(option == 7){
				 	
				 	somaPares = 0;
				 	
				 	for(i = 0; i <= 7; i++){
						if(idades[i] % 2 == 0){
							somaPares += idades[i];
						}
					}
					
					printf("Soma total das idades pares no vetor: %i \n", somaPares);
				 	
				 } else if(option == 8){
				 	
				 	printf("Idades menores que 18: \n");
				 	
				 	for(i = 0; i <= 7; i++){
						if(idades[i] < 18){
							printf("%i \n", idades[i]);
						}
					}
				 	
				 }else if(option == 9){
				 	
				 	quantMaiores = 0;
				 	
				 	for(i = 0; i <= 7; i++){
						if(idades[i] >= 18){
							quantMaiores += 1;
						}
					}
					
					printf("Quantidade de idades maiores ou iguais a 18 anos : %i \n", quantMaiores);
					
				} else if(option == 10){
					
					somaMaiores = 0;
					
					for(i = 0; i <= 7; i++){
						if(idades[i] >= 18){
							somaMaiores += idades[i];
						}
					}
					
					printf("Soma das idades maiores ou iguais a 18 anos: %i \n", somaMaiores);
					
				} else if(option == 11){
					
					printf("Retornando ao menu principal... \n");
					
				}
		
			} while(option != 11);
			
		} else if(r == 4){
			
			do{
		
				printf("\n");
				printf("VALORES ALEATÓRIOS \n");
				printf("1. Zerar \n");
				printf("2. Carregar aleatório \n");
				printf("3. Imprimir \n");
				printf("4. Somar \n");
				printf("5. Relatório valores ímpares \n");
				printf("6. Maiores que \n");
				printf("7. Quantos existem/repetidos \n");
				printf("8. Sair do menu VALORES ALEATÓRIOS \n");
				printf("Digite a opção: ");
				scanf("%i", &option);
				printf("\n");
				
				if(option == 1){
					
					for(i = 0; i <= 59; i++){
						valoresAleatorios[i] = -1;
					}
					
					printf("Valores zerados! \n");
					
				} else if(option == 2){
					
					srand(time(NULL));
					
					for(i = 0; i <= 59; i++){
						valoresAleatorios[i] = 1 + rand() % 60;
					}
					
					printf("Valores leatórios carregados! \n");
					
				} else if(option == 3){
					
					for(i = 0; i <= 59; i++){
						printf("Valor %i: posição %i \n", valoresAleatorios[i], i);
					}
					
				} else if(option == 4){
					
					somaInt = 0;
					
					for(i = 0; i <= 59; i++){
						somaInt += valoresAleatorios[i];
					}
					
					printf("A soma dos valores é: %i", somaInt);
					
				} else if(option == 5){
					
					quantImpar = 0;
					somaImpar = 0;
					
					printf("Relatório valores ímpares \n");
					
					for(i = 0; i <= 59; i++){
						if(valoresAleatorios[i] % 2 != 0){
							quantImpar += 1;
							somaImpar += valoresAleatorios[i];
						}
					}
					
					printf("Quantidade de valores ímpares: %i \n", quantImpar);
					printf("Soma de valores ímpares: %i \n", somaImpar);
					
				} else if(option == 6){
				 	
				 	printf("Informe um valor inteiro entre 1 e 60: ");
				 	scanf("%i", &n);
				 	
				 	printf("\n");
				 	
				 	printf("Valores no vetor maiores que %i: \n", n);
				 	
				 	for(i = 0; i <= 59; i++){
				 		if(valoresAleatorios[i] > n){
				 			printf("%i \n", valoresAleatorios[i]);
						}
					}
				 	
				} else if(option == 7){
					
					quantRepeticao = 0;
				 	
				 	printf("Informe um valor inteiro entre 1 e 60: ");
				 	scanf("%i", &n);
				 	
				 	printf("\n");
				 	
				 	for(i = 0; i <= 59; i++){
				 		if(valoresAleatorios[i] == n){
				 			quantRepeticao += 1;
					    }
					}
					
					printf("Quantidade de vezes que o número %i aparece no vetor: %i \n", n, quantRepeticao);
				 	
				} else if(option == 8){
				 	
				    printf("Retornando ao menu principal... \n");
				 	
				}
		
			} while(option != 8);
			
		} else if(r == 5){
			
				do{
		
					printf("\n");
					printf("VALORES ALEATÓRIOS 2\n");
					printf("1. Zerar \n");
					printf("2. Carregar aleatório \n");
					printf("3. Imprimir \n");
					printf("4. Entre valores \n");
					printf("5. Exibir repetidos \n");
					printf("6. Sair \n");
					printf("Digite a opção: ");
					scanf("%i", &option);
					printf("\n");
					
					if(option == 1){
						
						for(i = 0; i <= 59; i++){
							valoresAleatorios[i] = -1;
						}
						
						printf("Valores zerados! \n");
						
					} else if(option == 2){
						
						srand(time(NULL));
						
						for(i = 0; i <= 59; i++){
							valoresAleatorios[i] = 1 + rand() % 60;
						}
						
						printf("Valores aleatórios carregados! \n");
						
					} else if(option == 3){
						
						for(i = 0; i <= 59; i++){
							printf("%i \n", valoresAleatorios[i]);
						}
						
					} else if(option == 4){
						
						printf("Informe um valor inteiro entre 1 e 60: ");
						scanf("%i", &n1);
						printf("Informe outro valor inteiro entre 1 e 60: ");
						scanf("%i", &n2);
						
						if(n1 > n2){
							i = n1;
							n1 = n2;
							n2 = i;
						}
						
						printf("Valores do vetor que estão entre %i e %i: \n", n1, n2);
						
						for(i = 0; i <= 59; i++){
							if(valoresAleatorios[i] >= n1 && valoresAleatorios[i] <= n2){
								printf("%i \n", valoresAleatorios[i]);
							}
						}
						
					} else if(option == 5){
						
						printf("Valores repetidos e suas respectivas quantidades de repetições: \n");
						
						for(i = 0; i <= 59; i++){
							
							quantRepeticao = 0;
							
							for(j = 0; j <= 59; j++){
								if(valoresAleatorios[i] == valoresAleatorios[j]){
									quantRepeticao += 1;
								}
							}
							if(quantRepeticao > 1){
								printf("%i = %i \n", valoresAleatorios[i], quantRepeticao);
							}
						}
						
					} else if(option == 6){
						
						printf("Encerrando a execução do programa...\n");
					 		
					} 
			
				} while(option != 6);
		} 
		
	} while(r != 9);
	
	return 0;
	
}
