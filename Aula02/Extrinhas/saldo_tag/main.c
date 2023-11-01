#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Crie um programa que devera solicitar o valor do pedagio e caso o valor do pedagio seja superior
 ao saldo da tag devera bloquear a passagem*/

int main(int argc, char *argv[]) {
	
	float valorPedagio = 0.0;
	float valorTag = 20;
	
	printf("Informe o valor do pedagio: ");
	scanf("%f", &valorPedagio);
	
	if (valorPedagio > valorTag) {
		printf("Passagem negada por falta de saldo! \n");
	} else {
		printf("Passagem permitida! \n");
	}
	
	system("pause");
	
	return 0;
}
