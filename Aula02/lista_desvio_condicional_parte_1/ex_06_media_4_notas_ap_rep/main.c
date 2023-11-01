#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...MÉDIA 4 NOTAS, APROVADO//REPROVADO... \n");
	printf("\n");
	
	float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, nota4 = 0.0, mediaFinal = 0.0;
	
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
	
	if(mediaFinal >= 6) {
		printf("APROVADO! MÉDIA OBTIDA: %.2f \n", mediaFinal);
	} else {
		printf("REPROVADO! MÉDIA OBTIDA: %.2f \n", mediaFinal);
	}
	
	system("pause");
	
	return 0;
}
