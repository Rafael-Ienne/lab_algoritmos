#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float nota1 = 0.0, nota2 = 0.0, nota3 = 0.0, media = 0.0;
	
	printf("...CALCULANDO MÉDIA PONDERADA...\n");
	printf("\n");
	
	printf("Digite o valor da nota 1 (de 0 a 10): ");
	scanf("%f", &nota1);
	printf("Digite o valor da nota 2 (de 0 a 10): ");
	scanf("%f", &nota2);
	printf("Digite o valor da nota 3 (de 0 a 10): ");
	scanf("%f", &nota3);
	
	media = (nota1 * 0.2) + (nota2 * 0.3) + (nota3 * 0.5);
	
	printf("\n");
	printf("Valor da média: %.2f \n", media);
	
	system("pause");
	
	return 0;
}
