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
		printf("2. Contar �mpares \n");
		printf("3. Produto pares \n");
		printf("4. Produto �mpares \n");
		printf("9. Sair \n");
		printf("Digite a op��o: ");
		scanf("%i", &answer);
		printf("\n");
		
		switch(answer){
			
			case 1:
				
				quantPar = 0;
				
				printf("Contar pares \n");
				printf("\n");
				
				printf("Informe um n�mero inteiro: ");
				scanf("%i", &number);
				
				if(number <= 0){
					printf("N�o s�o permitidos valores nulos ou negativos \n");
				} else {
					for(i = 1; i <= number; i++){
						if(i % 2 == 0){
							quantPar += 1;
						}
					}
					
					printf("Quantidade de valores pares no intervalo[1, %i]: %i \n", number, quantPar);
				}
				
				break;
				
			case 2:
				
				quantImpar = 0;
				
				printf("Contar �mpares \n");
				printf("\n");
				
				printf("Informe um n�mero inteiro: ");
				scanf("%i", &number);
				
				if(number <= 0){
					printf("N�o s�o permitidos valores nulos ou negativos \n");
				} else {
					for(i = 1; i <= number; i++){
						if(i % 2 != 0){
							quantImpar += 1;
						}
					}
					
					printf("Quantidade de valores �mpares no intervalo[1, %i]: %i \n", number, quantImpar);
				}
				
				break;
				
			case 3:
				
				prodPar = 1;
				
				printf("Produto pares \n");
				printf("\n");
				
				printf("Informe um n�mero inteiro: ");
				scanf("%i", &number);
				
				if(number <= 0){
					printf("N�o s�o permitidos valores nulos ou negativos \n");
				} else {
					for(i = 1; i <= number; i++){
						if(i % 2 == 0){
							prodPar *= i;
						}
					}
					printf("Produto dos valores pares no intervalo[1, %i]: %i \n", number, prodPar);
				}
				
				break;
				
			case 4:
				
				prodImpar = 1;
				
				printf("Produto �mpares \n");
				printf("\n");
				
				printf("Informe um n�mero inteiro: ");
				scanf("%i", &number);
				if(number <= 0){
					printf("Valores nulos ou negativos n�o s�o permitidos \n");
				} else {
					for(i = 1; i <= number; i++){
						if(i % 2 != 0){
							prodImpar *= i;
						}
					}
					
					printf("Produto dos valores �mpares no intervalo[1, %i]: %i \n", number, prodImpar);
				}
				
				break;
				
			case 9:
				
				printf("Encerrando execu��o... \n");
				
				break;
				
			default: 
			
				printf("Valor inv�lido! \n");
				
				break;
				
		}
		
	} while(answer != 9);
	
	return 0;
}
