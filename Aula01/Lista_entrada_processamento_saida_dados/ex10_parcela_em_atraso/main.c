#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...PARCELA EM ATRASO... \n");
	printf("\n");
	
	float valorAtraso = 0.0, valorReal = 0.0, percentualAcrescimo = 0.0;
	
	printf("Informe o valor real da parcela: R$ ");
	scanf("%f", &valorReal);
	printf("Informe o valor percentual de acréscimo/juros: ");
	scanf("%f", &percentualAcrescimo);
	
	
	valorAtraso = valorReal + ((valorReal * percentualAcrescimo) / 100);
	
	printf("\n");
	printf("Valor da parcela em atraso: R$ %.2f \n", valorAtraso);
	system("pause");
	
	return 0;
}
