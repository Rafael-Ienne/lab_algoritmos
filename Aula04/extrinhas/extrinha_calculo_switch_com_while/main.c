#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int operacao;
	float v1, v2, r;
	
	while(operacao != 9){
		
		printf("Informe a operacao que sera desenvolvida: \n");
		printf("1 - soma \n");
		printf("2 - subtracao \n");
		printf("3 - multiplicacao \n");
		printf("4 - divisao \n");
		printf("9 - sair \n");
		scanf("%i", &operacao);
		printf("--------------------------------------------- \n");
		
		switch (operacao){
		
			case 1:
				printf("Informe o valor 1: ");
				scanf("%f", &v1);
				printf("Informe o valor 2: ");
				scanf("%f", &v2);
				r = v1 + v2;
				printf("O resultado da operacao e %.2f \n", r);
				break;
				printf("--------------------------------------------- \n");
			case 2:
				printf("Informe o valor 1: ");
				scanf("%f", &v1);
				printf("Informe o valor 2: ");
				scanf("%f", &v2);
				r = v1 - v2;
				printf("O resultado da operacao e %.2f \n", r);
				printf("--------------------------------------------- \n");
				break;
			case 3:
				printf("Informe o valor 1: ");
				scanf("%f", &v1);
				printf("Informe o valor 2: ");
				scanf("%f", &v2);
				r = v1 * v2;
				printf("O resultado da operacao e %.2f \n", r);
				printf("--------------------------------------------- \n");
				break;
			case 4:
				printf("Informe o valor 1: ");
				scanf("%f", &v1);
				printf("Informe o valor 2: ");
				scanf("%f", &v2);
				r = v1 / v2;
				printf("O resultado da operacao e %.2f \n", r);
				printf("--------------------------------------------- \n");
				break;
			
			default:
				printf("Operacao finalizada! \n");
				return 9;
				
				break;			
	} 
	
} 
	
	
	return 0;
}
