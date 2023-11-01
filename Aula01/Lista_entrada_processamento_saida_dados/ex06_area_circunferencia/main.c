#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...ÁREA CIRCUNFERÊNCIA... \n");
	printf("\n");
	
	float raioCircunferencia = 0.0, areaCircunferencia = 0.0;
	
	printf("Digite o valor do raio da circunferência da qual se deseja calcular a área: ");
	scanf("%f", &raioCircunferencia);
	
	areaCircunferencia = 3.14 * raioCircunferencia * raioCircunferencia;
	
	printf("VALOR DA ÁREA: %.2f \n", areaCircunferencia);
	
	system("pause");
	return 0;
}

