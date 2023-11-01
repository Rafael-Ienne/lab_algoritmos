#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Crie um programa que verifica de o valor do pedagio informado e:
a) se for maior que o saldo, bloquear a passagem e exibir o saldo
b)se menor, deve liberar passagem e descontar o valor do pedagio do saldo e exibir o saldo final*/

int main(int argc, char *argv[]) {
	
	float valorPedagio, saldoFinal = 0.0;
	float saldoAtual = 20;
	
	printf("Digite o valor do pedagio: ");
	scanf("%f", &valorPedagio);
	
	if (valorPedagio > saldoAtual) {
		printf("Passagem negada! O saldo disponivel e R$ %.2f \n",saldoAtual);
	} else {
		saldoFinal = saldoAtual - valorPedagio;
		printf("Passagem permitida! O saldo agora e de R$ %.2f \n", saldoFinal);
	}
	
	system("pause");
	
	return 0;
}
