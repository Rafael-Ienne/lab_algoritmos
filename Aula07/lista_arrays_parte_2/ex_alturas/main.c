#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float alturas[10], altura = 0.0, somaAlturas = 0.0;
	int i = 0, r = 0, p = 0, existe = 0, tamanho = 0, quantVazias = 0;
	
	for(i = 0; i < 10; i++){
		alturas[i] = -1;
	}
	
	do{
		printf("\n");
		printf("MENU ALTURAS \n");
		printf("1. Adicionar  \n");
		printf("2. Ler   \n");
		printf("3. Somar   \n");
		printf("4. Contar  \n");
		printf("5. Contar posições vazias \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &r);
		printf("\n");
		
		if(r == 1){
			
			existe = 0;
			
			if(tamanho < 10){
				printf("Informe a posição onde se deseja adicionar a altura: ");
				scanf("%i", &p);
				
				for(i = 0; i < 10; i++){
					if(p == i && alturas[i] == -1){
						printf("Informe a altura que se deseja adicionar: ");
						scanf("%f", &altura);
						if(altura > 0){
							existe += 1;
							alturas[i] = altura;
							tamanho++;
						} else {
							printf("Altura nula ou negativa não é permitida \n");
						}
					}
				}
			} else {
				printf("Vetor cheio! \n");
			}
			
			if(existe > 0){
				printf("Valor adicionado! \n");
			} else {
				printf("Posição ou valor inválidos. Valor não adicionado! \n");
			}
			
		} else if(r == 2){
			
			if(tamanho == 0){
				printf("Vetor vazio! \n");
			} else {
				printf("Informe a posição da qual se deseja saber a altura: ");
				scanf("%i", &p);
				
				if(p < 0 || p > 9){
					printf("Essa posição não existe! \n");
				} else if (alturas[p] != -1){
					printf("Valor na posição %i: %.2f \n", p, alturas[p]);
				} else {
					printf("A posição informada está vazia! \n");
				}
			}
			
		} else if(r == 3){
			
			somaAlturas = 0.0;
			
			if(tamanho > 0){
				for(i = 0; i < 10; i++){
					if(alturas[i] > 0){
						somaAlturas += alturas[i];
					}	
				}
				
				printf("Soma das alturas existentes no vetor: %.2f \n", somaAlturas);
			} else {
				printf("O vetor está vazio para fazer essa operação \n");
			}
			
		} else if(r == 4){
			
			printf("Quantidade de alturas existentes no vetor: %i \n", tamanho);
			
		} else if(r == 5){
			
			quantVazias = 0;
			
			for(i= 0; i < 10; i++){
				if(alturas[i] < 0){
					quantVazias += 1;
				}
			}
			
			printf("Quantidade de posições vazias existentes no vetor: %i \n", quantVazias);
			
		} else if(r == 9){
			printf("Encerrando a execução do programa... \n");
		} else {
			printf("Valor inválido. Tente novamente \n");
		}
		
	} while (r != 9);
	
	system("pause");
	
	return 0;
}
