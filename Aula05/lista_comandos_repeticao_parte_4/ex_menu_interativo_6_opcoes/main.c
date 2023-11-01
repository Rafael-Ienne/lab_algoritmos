#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, answer = 0, number = 0, quantPar = 0, quantImpar = 0, prodPar = 1, prodImpar = 1;
			
    do{
		printf("\n");
		printf("MENU INTERATIVO 6 OPCOES \n");
		printf("1. Contar pares \n");
		printf("2. Contar ímpares \n");
		printf("3. Produto pares \n");
		printf("4. Produto ímpares \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &answer);
		printf("\n");
		
		switch(answer){
			
			case 1:
				
				quantPar = 0;
				
				printf("\n");
				printf("Contar pares \n");
				printf("\n");
				
				printf("Informe um número inteiro: ");
				scanf("%i", &number);
				for(i = 1; i <= number; i++){
					if(i % 2 == 0){
						quantPar += 1;
					}
				}
				printf("Quantidade de valores pares no intervalo[1, %i]: %i", number, quantPar);
				printf("\n");
				
				break;
				
			case 2:
				
				quantImpar = 0;
				
				printf("\n");
				printf("Contar ímpares \n");
				printf("\n");
				
				printf("Informe um número inteiro: ");
				scanf("%i", &number);
				for(i = 1; i <= number; i++){
					if(i % 2 != 0){
						quantImpar += 1;
					}
				}
				printf("Quantidade de valores ímpares no intervalo[1, %i]: %i", number, quantImpar);
				printf("\n");
				
				break;
				
			case 3:
				
				prodPar = 1;
				
				printf("\n");
				printf("Produto pares \n");
				printf("\n");
				
				printf("Informe um número inteiro: ");
				scanf("%i", &number);
				for(i = 1; i <= number; i++){
					if(i % 2 == 0){
						prodPar *= i;
					}
				}
				printf("Produto dos valores pares no intervalo[1, %i]: %i", number, prodPar);
				printf("\n");
				
				break;
				
			case 4:
				
				prodImpar = 1;
				
				printf("\n");
				printf("Produto ímpares \n");
				printf("\n");
				
				printf("Informe um número inteiro: ");
				scanf("%i", &number);
				for(i = 1; i <= number; i++){
					if(i % 2 != 0){
						prodImpar *= i;
					}
				}
				printf("Produto dos valores ímpares no intervalo[1, %i]: %i", number, prodImpar);
				printf("\n");
				
				break;
				
			case 9:
				
				printf("Encerrando execução... \n");
				printf("\n");
				
				break;
				
			default: 
			
				printf("Valor inválido! \n");
				printf("\n");
				
				break;
				
		}
		
	} while(answer != 9);
	
	return 0;
}
