#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n = 0, r = 0, i = 0;
	
	char name[30] = "";
	
	printf("IMPRIMIR NOMES X VEZES E REPETIR \n");
	
	printf("\n");
			
	do {
		printf("Informe o seu nome: ");
		scanf("%s", &name);
		printf("Informe o número de repetições desejado: ");
		scanf("%i", &n);
		
		for(i = 1; i <= n; i++){
			printf("%i - %s \n", i, name);
		}
		
		printf("\n");
		
		printf("Deseja repetir o processamento? (0 = Não; 1 = Sim): ");
		scanf("%i", &r);
		printf("\n");
		
	} while(r != 0);
	
	return 0;
}
