#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...VOLUME LATA DE ÓLEO... \n");
	printf("\n");
	
	float raioCircunferencia = 0.0, alturaLata = 0.0, volumeLata=0.0;
	
	printf("Digite o valor do raio da circunferência da base da lata de óleo: ");
	scanf("%f", &raioCircunferencia);
	printf("Digite o valor da altura da lata de óleo: ");
	scanf("%f", &alturaLata);
	
	volumeLata = 3.14149 * raioCircunferencia * raioCircunferencia * alturaLata;
	
	printf("\n");
	printf("Valor do volume da lata de óleo é: %.2f \n", volumeLata);
	
	system("pause");
	return 0;
}





