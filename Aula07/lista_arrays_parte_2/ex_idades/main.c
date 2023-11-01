#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int idades[100], i = 0, r = 0, x = 0, quantIdades = 0, somaIdades = 0, somaIdadesImpares = 0, idade = 0, j = 0, removido = 0, tamanho = 0, ocupado = 0;
	
	for(i = 0; i <= 99; i++){
		idades[i] = -1;
	}
	
	do{
		printf("\n");
		printf("MENU - IDADES \n");
		printf("1. Adicionar  \n");
		printf("2. Adicionar Idade na Posi��o X   \n");
		printf("3. Imprimir Posi��o X   \n");
		printf("4. Imprimir Todas  \n");
		printf("5. Remover Idade da Posi��o X \n");
		printf("6. Remover Todas \n");
		printf("7. Contar Idades \n");
		printf("8. Somar Idades \n");
		printf("9. Somar Idades �mpares \n");
		printf("10. Imprimir Idades Pares \n");
		printf("99. Sair \n");
		printf("Digite a op��o: ");
		scanf("%i", &r);
		printf("\n");
		
		if(r == 1){
			
			printf("Informe a idade que se deseja adicionar: ");
			scanf("%i", &idade);
			
			if(idade > 0){
				idades[tamanho] = idade;
				tamanho++;
				printf("Idade adicionada \n");
			} else {
				printf("Idades nulas ou negativas n�o s�o permitidas \n");
			}
			
			printf("\n");
			
		} else if(r == 2){
			
			if(tamanho < 100){
				printf("Informe a idade que se quer adicionar: ");
				scanf("%i", &idade);
				
				if(idade > 0){
					
					ocupado = 0;
					
					printf("Informe a posi��o onde se quer adicionar: ");
					scanf("%i", &x);
					if(x >= 0 && x <= 99){
						if(idades[x] == -1){
							idades[x] = idade;
							printf("Valor adicionado \n");
							tamanho++;
						} else {
							printf("Posi��o ocupada \n");
						}
					} else {
						printf("Posi��o inv�lida \n");
					}
					
				} else {
					printf("Idades nulas ou negativas n�o s�o permitidas \n");
				}
				
			} else {
				printf("O vetor est� cheio para realizar tal opera��o \n");
			}
			
			printf("\n");
			
		} else if(r == 3){
			
			if(tamanho == 0){
				printf("O vetor est� vazio \n");
			} else {
				printf("Informe a posi��o X sobre a qual quer saber a idade: ");
				scanf("%i", &x);
				
				if(x >= 0 && x <= 99){
					if(idades[x] == -1){
						printf("A posi��o est� vazia \n");
					} else {
						printf("Posi��o %i: idade %i \n", x, idades[x]);
					}
				} else {
					printf("A posi��o informada � inv�lida! \n");
				}
			}
			
		} else if(r == 4){
			
			if(tamanho == 0){
				printf("O vetor est� vazio \n");
			} else {
				for(i = 0; i <= 99; i++){
					if(idades[i] != -1){
						printf("%i \n", idades[i]);
					}
				}
			}
			
			printf("\n");
			
		} else if(r == 5){
			
			removido = 0;
			
			if(tamanho == 0){
				printf("O vetor est� vazio \n");
			} else {
				printf("Informe a posi��o X da qual se quer remover a idade: ");
				scanf("%i", &x);
				
				if(x >= 0 && x <= 99){
					if(idades[x] != -1){
						for(j = x; j < 99; j++){
							idades[j] = idades[j + 1];
							removido = 1;
						}
						tamanho--;
						printf("Idade removida \n");
					} else {
						printf("A posi��o est� vazia! \n");
					}
				} else {
					printf("A posi��o informada n�o existe! \n");
				}
			}
			
			if(removido == 0){
				printf("Valor n�o removido \n");
			}
			
			printf("\n");
			
		} else if(r == 6){
			
			for(i = 0; i <= 99; i++){
				idades[i] = -1;
			}
			
			tamanho = 0;
			
			printf("Idades removidas! \n");
			
		} else if(r == 7){
			
			printf("Quantidade de idades: %i \n", tamanho);
			
		} else if(r == 8){
			
			somaIdades = 0;
			
			for(i = 0; i <= 99; i++){
				if(idades[i] != -1){
					somaIdades += idades[i];
				}
			}
			
			printf("Soma das idades: %i \n", somaIdades);
			
		} else if(r == 9){
			
			somaIdadesImpares = 0;
			
			for(i = 0; i <= 99; i++){
				if(idades[i] % 2 != 0 && idades[i] != -1){
					somaIdadesImpares += idades[i];
				}
			}
			
			printf("Soma das idades �mpares: %i \n", somaIdadesImpares);
			
		} else if(r == 10){
			
			for(i = 0; i <= 99; i++){
				if(idades[i] % 2 == 0){
					printf("%i \n", idades[i]);
				}
			}
			
		} else if(r == 99){
			printf("Encerrando a execu��o do programa... \n");
			printf("\n");
		} else {
			printf("Valor inv�lido! \n");
			printf("\n");
		}
		
	} while (r != 99);
	
	return 0;
}
