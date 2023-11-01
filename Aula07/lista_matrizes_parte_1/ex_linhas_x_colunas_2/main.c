#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int valores[10][3], x = 0, y = 0, r = 0, somaLinhaX = 0, n1 = 0, n2 = 0, somaColunaY = 0, somasLinhas[10], somasColunas[3];
	int maior = 0, p = 0, tamanho = 0;
	
	for(x = 0; x < 10; x++){
		somasLinhas[x] = -1;
	}
	
	for(x = 0; x < 3; x++){
		somasColunas[x] = -1;
	}
	
	for(x = 0; x < 10; x++){
		for(y = 0; y < 3; y++){
			valores[x][y] = -1;
		}
	}
	
	do{
		printf("\n");
		printf("LINHAS X COLUNAS 2 \n");
		printf("1. Carregar aleatório  \n");
		printf("2. Imprimir todos   \n");
		printf("3. Soma por linha   \n");
		printf("4. Soma por coluna  \n");
		printf("5. Linha com a maior soma \n");
		printf("6. Coluna com maior soma \n");
		printf("7. Maior soma linha x coluna y \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &r);
		printf("\n");
		
		if(r == 1){
			
			srand(time(NULL));
			
			for(x = 0; x < 10; x++){
				for(y = 0; y < 3; y++){
					valores[x][y] = rand() % 51;
					tamanho++;
				}
			}
			
			printf("Valores aleatórios carregados \n");
			
		} else if(r == 2){
			
			if(tamanho == 0){
				printf("A matriz esta vazia \n");
			} else {
				for(x = 0; x < 10; x++){
					for(y = 0; y < 3; y++){
						printf("[%i][%i]: %i\t", x, y, valores[x][y]);
					}
					printf("\n");
				}
			}
			
		} else if(r == 3){
			
			if(tamanho == 0){
				printf("A matriz esta vazia. Preencha ela primeiro para realizar essa operação \n");
			} else {
				for(x = 0; x < 10; x++){
				
					somaLinhaX = 0;
					
					for(y = 0; y < 3; y++){
						somaLinhaX += valores[x][y];
					}
					
					printf("Soma dos valores da linha %i: %i \n", x, somaLinhaX);
					
					printf("\n");
				}
			}
			
		} else if(r == 4){
			
			if(tamanho == 0){
				printf("A matriz esta vazia. Preencha ela primeiro para realizar essa operação \n");
			} else {
				for(y = 0; y < 3; y++){
				
					somaColunaY = 0;
					
					for(x = 0; x < 10; x++){
						somaColunaY += valores[x][y];
					}
					
					printf("Soma dos valores da coluna %i: %i \n", y, somaColunaY);
					
					printf("\n");
				}
			}
			
		} else if(r == 5){
			
			if(tamanho == 0){
				printf("A matriz esta vazia. Preencha ela primeiro para realizar essa operação \n");
			} else {
				for(x = 0; x < 10; x++){
				
					somaLinhaX = 0;
					
					for(y = 0; y < 3; y++){
						somaLinhaX += valores[x][y];
					}
					
					somasLinhas[x] = somaLinhaX;
				}
				
				maior = somasLinhas[0];
				p = 0;
				
				for(x = 0; x < 10; x++){
					
					if(somasLinhas[x] > maior){
						maior = somasLinhas[x];
						p = x;
					}
				}
				
				printf("Linha que apresenta maior soma: %i \n", p);
				printf("Valores presentes na linha %i: \n", p);
				
				for(y = 0; y < 3; y++){
					printf("%i ", valores[p][y]);
				}
			}
			
			printf("\n");
			
			
		} else if(r == 6){
			
			if(tamanho == 0){
				printf("A matriz esta vazia. Preencha ela primeiro para realizar essa operação \n");
			} else {
				for(y = 0; y < 3; y++){
				
					somaColunaY = 0;
					
					for(x = 0; x < 10; x++){
						somaColunaY += valores[x][y];
					}
					
					somasColunas[y] = somaColunaY;
				}
				
				maior = somasColunas[0];
				p = 0;
				
				for(y = 0; y < 3; y++){
					
					if(somasColunas[y] > maior){
						maior = somasColunas[y];
						p = y;
					}
				}
				
				printf("Coluna que apresenta maior soma: %i \n", p);
				printf("Valores presentes na coluna %i: \n", p);
				
				for(x = 0; x < 10; x++){
					printf("%i ", valores[x][p]);
				}
			}
			
			printf("\n");
			
		} else if(r == 7){
			
			if(tamanho == 0){
				printf("A matriz esta vazia. Preencha ela primeiro para realizar essa operação \n");
			} else {
				printf("Informe um número inteiro que corresponde a uma linha da matriz: ");
				scanf("%i", &n1);
				
				printf("Informe um número inteiro que corresponde a uma coluna da matriz: ");
				scanf("%i", &n2);
				
				somaLinhaX = 0;
				somaColunaY = 0;
				
				if(n1 >= 0 && n1 < 10 && n2 >= 0 && n2 < 3){
					
					for(y = 0; y < 3; y++){
						somaLinhaX += valores[n1][y];
					}
			
					for(x = 0; x < 10; x++){
						somaColunaY += valores[x][n2];
					}
					
					printf("Soma dos valores da linha %i: %i \n", n1, somaLinhaX);
					printf("Soma dos valores da coluna %i: %i \n", n2, somaColunaY);
			
					if(somaLinhaX > somaColunaY){
						printf("A soma dos valores da linha %i (%i) é maior que a soma dos valores da coluna %i (%i) \n", n1, somaLinhaX, n2, somaColunaY);
					} else if(somaLinhaX < somaColunaY) {
						printf("A soma dos valores da coluna %i (%i) é maior que a soma dos valores da linha %i (%i) \n", n2, somaColunaY, n1, somaLinhaX);
					} else {
						printf("A soma dos valores da coluna e a soma dos valores da linha são iguais \n");
					}
					
				} else if((n1 < 0 || n1 > 9) && (n2 < 0 || n2 > 2)){
					printf("A linha %i e a coluna %i não existem na matriz. Tente novamente \n", n1, n2);
				} else if(n1 < 0 || n1 > 9){
					printf("A linha %i não existe na matriz. Tente novamente \n", n1);
				} else {
					printf("A coluna %i não existe na matriz. Tente novamente \n", n2);
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
