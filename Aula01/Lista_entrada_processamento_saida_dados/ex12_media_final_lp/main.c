#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...MÉDIA FINAL LP... \n");
	printf("\n");
	
	float mediafinal = 0.0, atv1 = 0.0, av1 = 0.0, np1 = 0.0, atv2 = 0.0, av2 = 0.0, np2 = 0.0;
	
	printf("NP1 \n");
	printf("\n");
	printf("Informe a nota, de 0 a 10, obtida nas ATVs que compõem a NP1: ");
	scanf("%f", &atv1);
	printf("Informe a nota, de 0 a 10, obtida na AV1 que compõe a NP1: ");
	scanf("%f", &av1);
	printf("\n");
	printf("NP2 \n");
	printf("\n");
	printf("Informe a nota, de 0 a 10, obtida nas ATVs que compõem a NP2: ");
	scanf("%f", &atv2);
	printf("Informe a nota, de 0 a 10, obtida na AV2 que compõe a NP2: ");
	scanf("%f", &av2);
	
	np1 = ((atv1 * 0.5) + (av1 * 0.5)) * 0.4;
	np2 = ((atv2 * 0.5) + (av2 * 0.5))* 0.6;
	mediafinal = np1 + np2;
	
	printf("\n");
	printf("NOTAS FINAIS \n");
	printf("NP1: \t \t %.2f \n", np1);
	printf("NP2: \t \t %.2f \n", np2);
	printf("MÉDIA FINAL: \t %.2f \n", mediafinal);
	system("pause");
	
	return 0;
}
