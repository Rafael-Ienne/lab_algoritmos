#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int option = 0;
	float n1 = 0.0, n2 = 0.0, media = 0.0;
	
	do{
		printf("CALCULAR MEDIAS \n");
		printf("1. Simples \n");
		printf("2.Ponderada (40%, 60%) \n");
		printf("3.Ponderada (30%, 30%, 40%) \n");
		printf("9.Sair \n");
		printf("Digite a opcao: \n");
		scanf("%i", &option);
		
		if(option == 1){
				scanf("%f", &n1);
				scanf("%f", &n2);
				media = (n1 + n2) / 2;
		} else if(option == 2){
			
		} else if(option == 3){
			
		} else if(option == 9){
			
		}
		
	} while(option != 9);
	
	return 0;
}
