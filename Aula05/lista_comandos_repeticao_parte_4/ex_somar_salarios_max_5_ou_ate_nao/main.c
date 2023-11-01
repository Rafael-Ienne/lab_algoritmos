#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float sal = 0, somaSal = 0, c = 1;
	int escolha = 0;
	
	printf("SOMAR SALÁRIOS (MÁXIMO 5 OU ATÉ INFORMAR ‘NAO’) \n");
	printf("\n");
	
	do{
		
		printf("Informe o valor de um salário: R$ ");
		scanf("%f", &sal);
		somaSal += sal;
		printf("Deseja informar outro salário (0 = Não, 1 = Sim)? ");
		scanf("%i", &escolha);
		c = c + 1;
		
	} while(c != 6 && escolha != 0);
	
	printf("A soma dos salários informados é: R$ %.2f \n", somaSal);
	
	return 0;
}
