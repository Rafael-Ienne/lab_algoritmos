#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...MÉDIA SEMESTRAL DA DISCIPLINA... \n");
	printf("\n");
	
	float ativPresenc = 0.0, ativOnline = 0.0, prova1 = 0.0, prova2 = 0.0, media = 0.0;
	
	printf("Digite a nota (de 0 a 10) obtida com as atividades presenciais: ");
	scanf("%f", &ativPresenc);
	printf("Digite a nota (de 0 a 10) obtida com as atividades online: ");
	scanf("%f", &ativOnline);
	printf("Digite a nota (de 0 a 10) obtida com a prova 1: ");
	scanf("%f", &prova1);
	printf("Digite a nota (de 0 a 10) obtida com a prova 2: ");
	scanf("%f", &prova2);
	
	media = (ativPresenc * 0.1) + (ativOnline * 0.2) + (prova1 * 0.3) + (prova2 * 0.4);
	
	printf("\n");
	printf("Média semestral da disciplina: %.2f \n", media);
	
	system("pause");
	
	return 0;
}
