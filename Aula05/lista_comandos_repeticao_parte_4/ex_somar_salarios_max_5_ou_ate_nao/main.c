#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float sal = 0, somaSal = 0, c = 0;
	int escolha = 0;
	
	printf("SOMAR SAL�RIOS (M�XIMO 5 OU AT� INFORMAR �NAO�) \n");
	printf("\n");
	
	do{
		
		printf("Informe o valor de um sal�rio: R$ ");
		scanf("%f", &sal);
		
		if(sal <= 0.0){
			printf("Salarios nulos ou negativos n�o s�o permitidos \n");
		} else {
			somaSal += sal;
		}
		
		c = c + 1;
		
		if (c < 5) {
            printf("Deseja informar outro sal�rio (0 = N�o, 1 = Sim)? ");
            scanf("%i", &escolha);
        } else {
            printf("N�mero m�ximo de sal�rios informados\n");
            break;
        }
		
	} while(c != 6 && escolha != 0);
	
	printf("A soma dos sal�rios v�lidos �: R$ %.2f \n", somaSal);
	
	return 0;
}
