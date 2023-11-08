#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int valores[3][3], i = 0, j = 0, r = 0, soma = 0;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			valores[i][j] = 0;
		}
	}
	
	do{
		printf("\n");
		printf("BÁSICO \n");
		printf("1. Carregar  \n");
		printf("2. Imprimir   \n");
		printf("3. Somar \n");
		printf("4. Zerar \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &r);
		printf("\n");
		
		if(r == 1){
			
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					printf("Informe um valor para preencher a posição [%i][%i]: ", i, j);
					scanf("%i", &valores[i][j]);
				}
			}
			printf("Valores carregados \n");
	
		} else if(r == 2){
			
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					printf("[%i][%i]: %i\t",i, j, valores[i][j]);
				}
				printf("\n");
			}
			
		} else if(r == 3){
			
			soma = 0;
			
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					soma += valores[i][j];
				}
			}
			
			printf("Soma de todos os valores armazenados em cada uma das posições da matriz: %i \n", soma);
			
		} else if(r == 4){
			
			for(i = 0; i < 3; i++){
				for(j = 0; j < 3; j++){
					valores[i][j] = 0;
				}
			}
			printf("Valores zerados! \n");
			
		} else if(r == 9){
			
			printf("Encerrando a execução do programa... \n");
			
		} else {
			printf("Valor invalido. Tente novamente \n");
		}
		
	
	} while (r != 9);
	
	system("pause");
	
	return 0;
}
