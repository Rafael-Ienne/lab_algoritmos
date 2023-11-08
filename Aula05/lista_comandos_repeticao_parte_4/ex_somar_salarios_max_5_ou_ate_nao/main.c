#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float sal = 0, somaSal = 0, c = 0;
	int escolha = 0;
	
	printf("SOMAR SALÁRIOS (MÁXIMO 5 OU ATÉ INFORMAR ‘NAO’) \n");
	printf("\n");
	
	do{
		
		printf("Informe o valor de um salário: R$ ");
		scanf("%f", &sal);
		
		if(sal <= 0.0){
			printf("Salarios nulos ou negativos não são permitidos \n");
		} else {
			somaSal += sal;
		}
		
		c = c + 1;
		
		if (c < 5) {
            printf("Deseja informar outro salário (0 = Não, 1 = Sim)? ");
            scanf("%i", &escolha);
        } else {
            printf("Número máximo de salários informados\n");
            break;
        }
		
	} while(c != 6 && escolha != 0);
	
	printf("A soma dos salários válidos é: R$ %.2f \n", somaSal);
	
	return 0;
}
