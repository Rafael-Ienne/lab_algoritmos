#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...COVERS�O MONET�RIA...\n");
	printf("\n");
	
	float valorReais = 0.0, cotacaoDolar = 0.0, cotataoEuro = 0.0, valorEmDolar = 0.0, valorEmEuro = 0.0;
	
	printf("Informe um valor monet�rio, em reais: R$ ");
	scanf("%f", &valorReais);
	printf("Informe a cota��o do D�lar: R$ ");
	scanf("%f", &cotacaoDolar);
	printf("Informe a cota��o do Euro: R$ ");
	scanf("%f", &cotataoEuro);
	
	valorEmDolar = valorReais / cotacaoDolar;
	valorEmEuro = valorReais / cotataoEuro;
	
	printf("\n");
	printf("Quanto vale R$ %.2f em outras moedas? \n", valorReais);
	printf("D�LAR: \t %.2f \n", valorEmDolar);
	printf("EURO: \t %.2f \n", valorEmEuro);
	system("pause");
	
	return 0;
}
