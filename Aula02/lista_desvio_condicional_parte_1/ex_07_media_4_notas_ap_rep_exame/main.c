#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...M�DIA 4 NOTAS, APROVADO/REPROVADO 7.00, SOLICITAR NOTA EXAME... \n");
	printf("\n");
	
	float nota1, nota2, nota3, nota4, mediaFinal, notaExame = 0.0;
	
	printf("Digite a nota 1: ");
	scanf("%f", &nota1);
	printf("Digite a nota 2: ");
	scanf("%f", &nota2);
	printf("Digite a nota 3: ");
	scanf("%f", &nota3);
	printf("Digite a nota 4: ");
	scanf("%f", &nota4);
	printf("\n");
	
	mediaFinal = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if(mediaFinal >= 7) {
		printf("APROVADO! M�DIA OBTIDA: %.2f \n", mediaFinal);
	} else {
		printf("M�dia calculada: %.2f. Informe a nota obtida no exame: ", mediaFinal);
		scanf("%f", &notaExame);
		
		mediaFinal = (notaExame + mediaFinal) / 2;
		
		if(mediaFinal >= 5) {
			printf("APROVADO EM EXAME! M�DIA OBTIDA: %.2f \n", mediaFinal);
		} else {
			printf("REPROVADO! M�DIA OBTIDA: %.2f \n", mediaFinal);
		}
	}
	
	system("pause");
	
	return 0;
}
