#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float n1 = 0.0;
	float n2 = 0.0;
	float media = 0.0;
	int i = 0;
	int n = 0;
	
	printf("De quantos alunos voce quer calcular a media? ");
	scanf("%i", &n);
	
	for(i=1; i<=n; i++){
		printf("---------------------------------- \n");
		printf("ALUNO %i \n", i);
		printf("Informe a nota 1: ");
		scanf("%f", &n1);
		printf("Informe a nota 2: ");
		scanf("%f", &n2);
		
		media = (n1+n2) / 2;
		
		if(media >= 6){
			printf("APROVADO! A MEDIA FOI %.2f \n", media);
		}else{
			printf("REPROVADO! A MEDIA FOI %.2f \n", media);
		}
	}
	
	system("pause");
	
	return 0;
}
