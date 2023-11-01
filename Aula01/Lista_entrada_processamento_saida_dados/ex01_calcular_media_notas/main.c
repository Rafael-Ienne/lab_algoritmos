#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...CALCULAR A MÉDIA DAS NOTAS...\n");
	printf("\n");
	
	float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, media = 0.0;
	
	printf("Digite a nota escolar 1 (de 0 A 10): ");
	scanf("%f", &nota1);
	printf("Digite a nota escolar 2 (de 0 A 10): ");
	scanf("%f", &nota2);
	printf("Digite a nota escolar 3 (de 0 A 10): ");
	scanf("%f", &nota3);
	
	printf("\n");
	media = ((nota1 + nota2 + nota3) / 3);
	
	printf("Média final: %.2f \n", media);
	
	system("pause");
	
	return 0;
}
