#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n...INFORMAÇÕES SALARIAIS... \n");
	printf("\n");
	
	float salarioMensal = 0.0, valeAlimentacao = 0.0, auxilioTransporte = 0.0, salarioBruto = 0.0, descontoINSS = 0.0, descontoIR = 0.0, salarioLiquido = 0.0;
	int aulasSemanais = 0;
	
	printf("Informe a quantidade de aulas lecionadas em uma semana: ");
	scanf("%i", &aulasSemanais);
	
	salarioMensal = 25 * aulasSemanais * 4;
	valeAlimentacao = 0.1 * salarioMensal;
	auxilioTransporte = 0.06 * salarioMensal;
	salarioBruto = salarioMensal + valeAlimentacao + auxilioTransporte;
	descontoINSS = 0.03 * salarioMensal;
	descontoIR = 0.04 * salarioMensal;
	salarioLiquido = salarioBruto - descontoINSS - descontoIR;
	
	printf("\n");
	printf("RESULTADO:\n");
    printf("SALÁRIO MENSAL: R$ %.2f\n", salarioMensal);
    printf("VALE ALIMENTAÇÃO: R$ %.2f\n", valeAlimentacao);
    printf("AUXÍLIO TRANSPORTE: R$ %.2f\n", auxilioTransporte);
    printf("SALÁRIO BRUTO: R$ %.2f\n", salarioBruto);
    printf("DESCONTO DE INSS: R$ %.2f\n", descontoINSS);
    printf("DESCONTO DE IR: R$ %.2f\n", descontoIR);
    printf("SALÁRIO LÍQUIDO: R$ %.2f\n", salarioLiquido);
    
    system("pause");
	return 0;
} 
