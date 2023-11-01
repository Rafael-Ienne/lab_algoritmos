#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*crie um programa que armazene 5 idades. o programa devera permitir que o usuario informe as idades, exiba as idades e some as idades*/

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int option = 0, idades[5], i = 0, soma = 0, idade = 0;
	
	do{
		
		printf("\n");
		printf("CONTROLE DE IDADES \n");
		printf("0. Inicializar vetor \n");
		printf("1. Carregar idades \n");
		printf("2. Exibir idades  \n");
		printf("3. Somar idades \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &option);
		printf("\n");
		
		if(option == 0){
			
			for(i = 0; i <= 4; i++){
				idades[i] = -1;
			}
			
			printf("O vetor foi inicializado! \n");
			
		} else if(option == 1){
			
			for(i = 0; i <= 4; i++){
				printf("Informe o valor da idade: ");
				scanf("%i", &idades[i]);
			}
			
		} else if(option == 2){
			
			for(i = 0; i <= 4; i++){
				printf("Posição %i: %i \n", i, idades[i]);
			}
			
		} else if(option == 3){
			
			for(i = 0; i <= 4; i++){
				soma += idades[i];
			}
			
			printf("A soma das idades é: %i \n", soma);
			
		} else if(option == 9){
			
			printf("Saindo do programa... \n");
			
		}
		
	}while(option != 9);
	
	return 0;
}
