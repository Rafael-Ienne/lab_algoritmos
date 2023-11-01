#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int option = 0, valoresAleatorios[60], i = 0, j = 0, n1 = 0, n2 = 0, quantRepeticao = 0;
	
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
				valoresAleatorios[i] = 1 + rand() % 59;
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
			
			if((n1 < 1 || n1 > 59) && (n2 < 1 || n2 > 59)){
				printf("Os dois valores não pertencem ao intervalo informado. Tente novamente \n");
			} else if(n1 < 1 || n1 > 59){
				printf("O primeiro valor informado não pertence ao intervalo especificado. Tente novamente \n");
			} else if(n2 < 1 || n2 > 59){
				printf("O segundo valor informado não pertence ao intervalo especificado. Tente novamente \n");
			} else {
				
				if(n1 > n2){
					i = n1;
					n1 = n2;
					n2 = i;
				}
				
				printf("Valores do vetor que estão entre %i e %i: \n", n1, n2);
				
				for(i = 0; i <= 59; i++){
					if(valoresAleatorios[i] > n1 && valoresAleatorios[i] < n2){
						printf("%i \n", valoresAleatorios[i]);
					}
				}
			}
			
			
		} else if(option == 5){
			
			printf("Valores repetidos e suas respectivas quantidades de repetições: \n");
			
			for(i = 0; i <= 58; i++){
				
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
		 		
		} else{
			printf("Valor inválido. Tente novamente \n");
		}
			
	} while(option != 6);
	
	return 0;
}
