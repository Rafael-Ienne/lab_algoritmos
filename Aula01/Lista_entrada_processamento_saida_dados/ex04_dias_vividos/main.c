#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("...CALCULAR A QUANTIDADE DE DIAS VIVIDOS... \n");
	printf("\n");
	
	int anoAtual = 0, anoNascimento = 0, diasVividos = 0;
	
	printf("Informe o ano atual: ");
	scanf("%i", &anoAtual);
	printf("Informe o seu ano de nascimento: ");
	scanf("%i", &anoNascimento);
	
	diasVividos = (anoAtual - anoNascimento) * 365;
	
	printf("\n");
	printf("Quantidade total de dias vividos: %i \n", diasVividos);
	
	system("pause");
	
	return 0;
}
