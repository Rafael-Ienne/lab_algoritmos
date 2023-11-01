#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...ACRESCENTAR SERVIÇO GARÇOM... \n");
	printf("\n");
	
	float amigo1 = 0.0, amigo2 = 0.0, amigo3 = 0.0, gastosSemServico = 0.0, acrescimoServico = 0.0, gastosComServico = 0.0;
	char servicoAtendimento;
	
	printf("Informe o valor gasto pelo primeiro amigo: R$");
	scanf("%f", &amigo1);
	printf("Informe o valor gasto pelo segundo amigo: R$");
	scanf("%f", &amigo2);
	printf("Informe o valor gasto pelo terceiro amigo: R$");
	scanf("%f", &amigo3);
	printf("Desejam incluir serviços de atendimento (10 por cento) ao valor total da conta? (digite 'S' para Sim ou 'N' para Não): ");
	scanf(" %c", &servicoAtendimento);
	printf("\n");
	
	gastosSemServico = amigo1 + amigo2 + amigo3;
	
	if(servicoAtendimento == 'S' || servicoAtendimento == 's') {
		acrescimoServico = 0.1 * gastosSemServico;
	} 
	
	gastosComServico = gastosSemServico + acrescimoServico;
	
	printf("VALOR TOTAL DOS GASTOS SEM SERVIÇO: R$ %.2f \n", gastosSemServico);
	printf("VALOR DO ACRÉSCIMO DOS SERVIÇOS: R$ %.2f \n", acrescimoServico);
	printf("VALOR TOTAL DA COMPRA: R$ %.2f \n", gastosComServico);
	
	system("pause");
	
	return 0;
}
