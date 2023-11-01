#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int valores[10][3], x = 0, y = 0, r = 0, n = 0, somaLinhaX = 0, n1 = 0, n2 = 0, somaColunaY = 0, tamanho = 0;
	
	for(x = 0; x < 10; x++){
		for(y = 0; y < 3; y++){
			valores[x][y] = -1;
		}
	}
	
	do{
		printf("\n");
		printf("LINHAS X COLUNAS \n");
		printf("1. Carregar usuário  \n");
		printf("2. Carregar aleatório   \n");
		printf("3. Imprimir   \n");
		printf("4. Imprimir linhas x  \n");
		printf("5. Somar linha x \n");
		printf("6. Imprimir coluna y \n");
		printf("7. Somar linha x com coluna y \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &r);
		printf("\n");
		
		if(r == 1){
			
			for(x = 0; x <= 9; x++){
				for(y = 0; y <= 2; y++){
					printf("Informe um valor inteiro: ");
					scanf("%i", &valores[x][y]);
					tamanho++;
				}
			}
			
			printf("Valores carregados! \n");
			
		} else if(r == 2){
			
			srand(time(NULL));
			
			for(x = 0; x <= 9; x++){
				for(y = 0; y <= 2; y++){
					valores[x][y] = rand() % 51;
					tamanho++;
				}
			}
			
			printf("Valores aleatórios carregados! \n");
			
		} else if(r == 3){
			
			if(tamanho == 0){
				printf("A matriz esta vazia \n");
			} else {
				for(x = 0; x <= 9; x++){
					for(y = 0; y <= 2; y++){
						printf("[%i][%i]: %i\t", x, y, valores[x][y]);
					}
					printf("\n");
				}
			}
			
		} else if(r == 4){
			
			if(tamanho == 0){
				printf("A matriz esta vazia. Preencha ela primeiro para executar essa operação \n");
			} else {
				printf("Informe um número inteiro que corresponde a uma linha da matriz: ");
				scanf("%i", &n);
				
				if(n < 0 || n > 9){
					
					printf("A linha %i não existe na matriz. Tente novamente \n", n);
					
				} else {
					
					printf("Valores presentes na linha %i: \n", n);
					
					for(y = 0; y <= 2; y++){
						printf("%i\t", valores[n][y]);
					}
					
				}
			}
			
			printf("\n");
			
		} else if(r == 5){
			
			if(tamanho == 0){
				printf("A matriz esta vazia. Preencha ela primeiro para executar essa operação \n");
			} else {
				printf("Informe um número inteiro que corresponde a uma linha da matriz: ");
				scanf("%i", &n);
				
				somaLinhaX = 0;
				
				if(n < 0 || n > 9){
					
					printf("A linha %i não existe na matriz! \n", n);
					
				} else {
					
					for(y = 0; y <= 2; y++){
						somaLinhaX += valores[n][y];
					}
					
					printf("Soma dos valores pertencentes à linha %i: %i \n", n, somaLinhaX);
					
				}
			}
			
			printf("\n");
			
		} else if(r == 6){
			
			if(tamanho == 0){
				printf("A matriz esta vazia. Preencha ela primeiro para executar essa operação \n");
			} else {
				printf("Informe um número inteiro que corresponde a uma coluna da matriz: ");
				scanf("%i", &n);
				
				if(n < 0 || n > 2){
					
					printf("A coluna %i não existe na matriz! \n", n);
					
				} else {
					
					printf("Valores presentes na coluna %i: \n", n);
					
					for(x = 0; x <= 9; x++){
						printf("%i\t", valores[x][n]);
					}
					
				}
			}
			
			printf("\n");
			
		} else if(r == 7){
			
			if(tamanho == 0){
				printf("A matriz esta vazia. Preencha ela primeiro para executar essa operação \n");
			} else {
				printf("Informe um número inteiro que corresponde a uma linha da matriz: ");
				scanf("%i", &n1);
				
				printf("Informe um número inteiro que corresponde a uma coluna da matriz: ");
				scanf("%i", &n2);
				
				somaLinhaX = 0;
				somaColunaY = 0;
				
				if(n1 >= 0 && n1 <= 9 && n2 >= 0 && n2 <= 2){
					
						
					for(y = 0; y <= 2; y++){
						somaLinhaX += valores[n1][y];
					}
			
					for(x = 0; x <= 9; x++){
						somaColunaY += valores[x][n2];
					}
			
					printf("Soma dos valores pertencentes à linha %i: %i \n", n1, somaLinhaX);
					printf("Soma dos valores pertencentes à coluna %i: %i \n", n2, somaColunaY);
					printf("Soma de ambos os valores anteriores: %i \n", somaLinhaX + somaColunaY);
					
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
			
			printf("Valor invalido. Tente novamente \n");
			
		}
		
	} while(r != 9);
	
	return 0;
}
