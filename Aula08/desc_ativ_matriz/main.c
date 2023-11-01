#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int r = 0, tamanho = 0, valores[10][5], x = 0, y = 0, somasLinhasX[10], somaLinhaX = 0, p = 0;
	int maior = 0, quantParesColunaY = 0, paresColunasY[5], pSomas = 0, pLinhaOuColuna = 0;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
	int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, somas[4], posicoes[4];
	
	for(x = 0; x < 10; x++){
		somasLinhasX[x] = -1;
	}
	
	for(x = 0; x < 4; x++){
		somas[x] = -1;
	}
	
	for(x = 0; x < 4; x++){
		posicoes[x] = -1;
	}
	
	for(y = 0; y < 5; y++){
		paresColunasY[y] = -1;
	}
	
	for(x = 0; x < 10; x++){
		for(y = 0; y < 5; y++){
			valores[x][y] = -1;
		}
	}
	
	do{
		printf("\n");
		printf("OPÇOES: \n");
		printf("1. Carregar matriz com valores aleatórios entre 1 e 40  \n");
		printf("2. Impressão dos valores da matriz   \n");
		printf("3. Linha com maior soma   \n");
		printf("4. Coluna maior número valores pares \n");
		printf("5. Linha com o maior valor \n");
		printf("6. 2 linhas e 2 colunas \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &r);
		printf("\n");
		
		if(r == 1){
			
			srand(time(NULL));
			
			for(x = 0; x < 10; x++){
				for(y = 0; y < 5; y++){
					valores[x][y] = 1 + (rand() % 40);
					tamanho++;
				}
			}
			
			printf("Valores aleatórios carregados \n");
			
		} else if(r == 2){
			
			if(tamanho == 0){
				printf("A matriz está vazia \n");
			} else {
				for(x = 0; x < 10; x++){
					for(y = 0; y < 5; y++){
						printf("%i\t", valores[x][y]);
					}
					printf("\n");
				}
			}
			
		} else if(r == 3){
			
			if(tamanho == 0){
				printf("A matriz está vazia. Preencha ela primeiro para realizar essa operação \n");
			} else {
				
				for(x = 0; x < 10; x++){
				
					somaLinhaX = 0;
					
					for(y = 0; y < 5; y++){
						somaLinhaX += valores[x][y];
					}
					
					printf("Soma dos valores da linha %i: %i \n", x, somaLinhaX);
					
					somasLinhasX[x] = somaLinhaX;
				}
				
				printf("\n");
				
				maior = somasLinhasX[0];
				p = 0;
				
				for(x = 0; x < 10; x++){
					if(somasLinhasX[x] > maior){
						maior = somasLinhasX[x];
						p = x;
					}
				}
				
				printf("Linha que apresenta maior soma: %i \n", p);
			}
			
		} else if(r == 4){
			
			if(tamanho == 0){
				printf("A matriz está vazia. Preencha ela primeiro para realizar essa operação \n");
			} else {
				
				for(y = 0; y < 5; y++){
				
					quantParesColunaY = 0;
					
					for(x = 0; x < 10; x++){
						if(valores[x][y] % 2 == 0){
							quantParesColunaY += 1;
						}
					}
					
					printf("Quantidade de valores pares na coluna %i: %i \n", y, quantParesColunaY);
					
					paresColunasY[y] = quantParesColunaY;
				}
				
				printf("\n");
				
				maior = paresColunasY[0];
				p = 0;
				
				for(y = 0; y < 5; y++){
					if(paresColunasY[y] > maior){
						maior = paresColunasY[y];
						p = y;
					}
				}
				
				printf("Coluna que apresenta maior quantidade de valores pares: %i \n", p);
			}
		
			
		} else if(r == 5){
			
			if(tamanho == 0){
				printf("A matriz está vazia. Preencha ela primeiro para realizar essa operação \n");
			} else {
				
				maior = valores[0][0];
				p = 0;
				
				for(x = 0; x < 10; x++){
					for(y = 0; y < 5; y++){
						if(valores[x][y] > maior){
							maior = valores[x][y];
							p = x;
						}
					}
				}
				
				printf("Linha que possui maior valor: %i \n", p);
			
			}
			
			
		} else if(r == 6){
			
			if(tamanho == 0){
				printf("A matriz está vazia. Preencha ela primeiro para realizar essa operação \n");
			} else {
				printf("Informe um número inteiro que corresponde a uma linha da matriz: ");
				scanf("%i", &n1);
				
				printf("Informe outro número inteiro que corresponde a uma linha da matriz: ");
				scanf("%i", &n2);
				
				printf("Informe um número inteiro que corresponde a uma coluna da matriz: ");
				scanf("%i", &n3);
				
				printf("Informe outro número inteiro que corresponde a uma coluna da matriz: ");
				scanf("%i", &n4);
				
				printf("\n");
				
				if(n1 == n2 || n3 == n4){
					printf("Valores repetidos entre linhas ou colunas não são permitidos \n");
				} else if(n1 >= 0 && n1 < 10 && n2 >= 0 && n2 < 10 && n3 >= 0 && n3 < 5 && n4 >= 0 && n4 < 5){
					
					soma1 = 0;
					soma2 = 0;
					soma3 = 0;
					soma4 = 0;
					
					printf("Valores presentes na linha %i: \n", n1);
					for(y = 0; y < 5; y++){
						soma1 += valores[n1][y];
						printf("%i\t", valores[n1][y]);
					}
					
					somas[0] = soma1;
					posicoes[0] = n1;
					
					printf("\n");
			
					printf("Valores presentes na linha %i: \n", n2);
					for(y = 0; y < 5; y++){
						soma2 += valores[n2][y];
						printf("%i\t", valores[n2][y]);
					}
					
					somas[1] = soma2;
					posicoes[1] = n2;
					
					printf("\n");
					
					printf("Valores presentes na coluna %i: \n", n3);
					for(x = 0; x < 10; x++){
						soma3 += valores[x][n3];
						printf("%i\t", valores[x][n3]);
					}
					
					somas[2] = soma3;
					posicoes[2] = n3;
					
					printf("\n");
					
					printf("Valores presentes na coluna %i: \n", n4);
					for(x = 0; x < 10; x++){
						printf("%i\t", valores[x][n4]);
						soma4 += valores[x][n4];
					}
					
					somas[3] = soma4;
					posicoes[3] = n4;
					
					printf("\n");
					
					printf("Soma dos valores da linha %i: %i \n", n1, soma1);
					printf("Soma dos valores da linha %i: %i \n", n2, soma2);
					printf("Soma dos valores da coluna %i: %i \n", n3, soma3);
					printf("Soma dos valores da coluna %i: %i \n", n4, soma4);
					
					maior = somas[0];
					pSomas = posicoes[0];
					pLinhaOuColuna = 0;
					
					for(x = 0; x < 4; x++){
						if(somas[x] > maior){
							maior = somas[x];
							pSomas = posicoes[x];
							pLinhaOuColuna = x;
						}
					}
					
					if(pLinhaOuColuna < 2){
						printf("Maior soma: linha %i \n", pSomas);
					} else {
						printf("Maior soma: coluna %i \n", pSomas);
					}
					
				} else {
					printf("Erro ao se procurar os valores informados. Tente novamente \n");
				} 
			}
			
			printf("\n");
			
		} else if(r == 9){
			
			printf("Encerrando a execução do programa... \n");
			
		} else {
			printf("Valor inválido. Tente novamente \n");
		}
		
	} while(r != 9);
	
	return 0;
}
