#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int vRas[10], r = 0, ra = 0, i= 0, existe = 0, quantRa = 0, tamanho = 0;
	
	for(i = 0; i <= 9; i++){
		vRas[i] = -1;
	}
	
	do{
		printf("\n");
		printf("MENU RA'S' \n");
		printf("1. Adicionar  \n");
		printf("2. Remover   \n");
		printf("3. Imprimir posição   \n");
		printf("4. Imprimir todos  \n");
		printf("5. Contar \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &r);
		printf("\n");
		
		if(r == 1){
			
			if(tamanho < 10){
				printf("Informe um valor de RA: ");
				scanf("%i", &ra);
				
				if(ra > 0){
					vRas[tamanho] = ra;
					printf("Valor adicionado! \n");
					printf("\n");
					tamanho = tamanho + 1;
				} else {
					printf("Valores negativos ou nulos não são inválidos! \n");
				}
			} else {
				printf("O vetor está cheio \n");
			}
			
		} else if(r == 2){
			
			if(tamanho == 0){
				printf("O vetor está vazio para fazer a operação \n");
			} else {
				printf("Informe o RA que se deseja remover (deixar nulo): ");
				scanf("%i", &ra);
				
				if(ra > 0){
					for(i = 0; i <= 9; i++){
						if(vRas[i] == ra){
							existe += 1;
							vRas[i] = -1;
							printf("Valor removido! \n");
							tamanho = tamanho - 1;
						} 
					}
				} else {
					printf("Valores nulos ou negativos não são válidos \n");
				}
				
			}
			
			if(existe == 0){
				printf("Valor não encontrado! \n");
			}
			
			printf("\n");
			
		} else if(r == 3){
			
			existe = 0;
			
			if(tamanho == 0){
				printf("Não é possível realizar a operação, pois o vetor está vazio \n");
			} else {
				printf("Informe o RA do qual se deseja saber a posição: ");
				scanf("%i", &ra);
				
				if(ra > 0){
					for(i = 0; i <= 9; i++){
						if(vRas[i] == ra){
							existe += 1;
							printf("Posição do RA %i: %i \n", ra, i);
						} 
					}
				} else {
					printf("Valores nulos ou negativos não são permitidos \n");
				}
			}
			
			if(existe == 0){
				printf("Valor não encontrado! \n");
				printf("\n");
			}
			
		} else if(r == 4){
			
			if(tamanho == 0){
				printf("O vetor está vazio \n");
			} else {
				for(i = 0; i <= 9; i++){
					if(vRas[i] > 0){
						printf("%i \n", vRas[i]);
					}
				}
			}
			
			printf("\n");
			
		} else if(r == 5){
			
			quantRa = 0;
			
			for(i = 0; i <= 9; i++){
				if(vRas[i] > 0){
					quantRa += 1;
				}
			}
			
			printf("Quantidade de RA's: %i \n", quantRa);
			
		} else if(r == 9){
			printf("Encerrando a execução do programa... \n");
		} else {
			printf("Valor inválido. Tente novamente \n");
		}
		
	} while (r != 9);
	
	return 0;
}
