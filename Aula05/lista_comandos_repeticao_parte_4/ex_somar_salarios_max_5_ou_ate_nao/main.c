#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float sal = 0, somaSal = 0, c = 1;
	int escolha = 0;
	
	printf("SOMAR SAL�RIOS (M�XIMO 5 OU AT� INFORMAR �NAO�) \n");
	printf("\n");
	
	do{
		
		printf("Informe o valor de um sal�rio: R$ ");
		scanf("%f", &sal);
		somaSal += sal;
		printf("Deseja informar outro sal�rio (0 = N�o, 1 = Sim)? ");
		scanf("%i", &escolha);
		c = c + 1;
		
	} while(c != 6 && escolha != 0);
	
	printf("A soma dos sal�rios informados �: R$ %.2f \n", somaSal);
	
	return 0;
}
