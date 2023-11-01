#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf ("...CALCULAR O GASTO TOTAL DA FACULDADE...\n");
	printf("\n");
	
	float mens = 0.0, transp = 0.0, aliment = 0.0, custoMensal = 0.0, custoAnual = 0.0;
	
	printf("Digite o valor gasto com a mensalidade da faculdade: ");
	scanf("%f", &mens);
	
	printf("Digite o valor gasto com transporte mensalmente (van, ônibus, uber, taxi, carona, etc.): ");
	scanf("%f", &transp);
	
	printf("Digite o valor gasto com alimentação mensalmente (lanches, refrigerantes, etc.): ");
	scanf("%f", &aliment);
	
	custoMensal = mens + transp + aliment;
	custoAnual = custoMensal * 12;
	
	printf("\n");
	printf("Gasto mensal com a faculdade: R$ %.2f \n",custoMensal);
	printf("Gasto anual com a faculdade: R$ %.2f \n",custoAnual);
	
	system("pause");
	
	return 0;
}
