#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int mesAtual = 0;
	int diasVividos = 0;
	int anoNascimento = 0;
	int anoAtual = 0;
	
	printf("Informe o seu ano de nascimento: ");
	scanf("%i", &anoNascimento);
	printf("Informe o ano atual: ");
	scanf("%i", &anoAtual);
	printf("Informe o mes atual: ");
	scanf("%i", &mesAtual);
	
	diasVividos = ((anoAtual - anoNascimento) * 365) + mesAtual * 30;
	
	printf("A quantidade total de dias vividos foi %i", diasVividos);
	
	return 0;
}
