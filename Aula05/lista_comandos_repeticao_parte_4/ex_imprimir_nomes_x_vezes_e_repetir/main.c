#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n = 0, r = 0, i = 0;
	
	char name[30];
	
	printf("IMPRIMIR NOMES X VEZES E REPETIR \n");
	
	printf("\n");
			
	do {
		printf("Informe o seu nome: ");
		scanf("%s", &name);
		printf("Informe o n�mero de repeti��es desejado: ");
		scanf("%i", &n);
		
		if(n <= 0){
			printf("N�o s�o permitidos valores nulos ou negativos \n");
		} else {
			for(i = 1; i <= n; i++){
				printf("%i - %s \n", i, name);
			}
		}
		
		printf("\n");
		
		printf("Deseja repetir o processamento? (0 = N�o; 1 = Sim): ");
		scanf("%i", &r);
		printf("\n");
		
		if(r == 0){
			printf("Encerrando a execu��o do programa... \n");
		}
		
	} while(r != 0);
	
	system("pause");
	
	return 0;
}
