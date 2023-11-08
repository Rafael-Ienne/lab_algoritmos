#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int option = 0, i = 0, tamanho = 0;
	float mensalidades[10], somaMensalidades = 0.0, mensalidade = 0.0;
	
	for(i = 0; i < 10; i++){
		mensalidades[i] = 0.0;
	}
	
	do {
				
		printf("\n");
		printf("MENSALIDADES \n");
		printf("1. Zerar \n");
		printf("2. Carregar \n");
		printf("3. Imprimir \n");
		printf("4. Somar \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &option);
		printf("\n");
		
		if(option == 1){
			
			for(i = 0; i < 10; i++){
				mensalidades[i] = 0.0;
			}
			
			tamanho = 0;
			
			printf("Mensalidades zeradas! \n");
			
		} else if(option == 2){
			
			tamanho = 0;
			
			while(tamanho < 10){
				printf("Informe o valor da mensalidade: ");
				scanf("%f", &mensalidade);
				
				if(mensalidade <= 0.0){
					printf("Mensalidades nulas ou negativas não são permitidas. Tente novamente \n");
				} else {
					mensalidades[tamanho] = mensalidade;
					tamanho++;
				}
			}
			
			printf("\n");
			
			printf("Mensalidades carregadas \n");
			
		} else if(option == 3){
			
			if(tamanho == 0){
				printf("O vetor está zerado \n");
			} else {
				for(i = 0; i < 10; i++){
					printf("Posição %i: R$ %.2f \n", i, mensalidades[i]);
				}
			}
			
		} else if(option == 4){
			
			somaMensalidades = 0.0;
			
			for(i = 0; i < 10; i++){
				somaMensalidades += mensalidades[i];
			}
			
			printf("A soma dos valores das mensalidades é: R$ %.2f \n", somaMensalidades);
			
		} else if(option == 9){
			
			printf("Encerrando a execução do programa... \n");
			
		} else {
			printf("Valor inválido. Tente novamente \n");
		}
				
	} while(option != 9);
	
	system("pause");
	
	return 0;
}
