#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n = 0, p = 0, i = 0;
			
	printf("IMPRIMIR MÚLTIPLOS \n");
	printf("\n");
	
	printf("Informe um número inteiro: ");
	scanf("%i", &n);
	printf("Informe o valor do incremento: ");
	scanf("%i", &p);
	
	printf("\n");
	
	if(p == 0) {
		for(i = 0; i <= n; i++){
			printf("%i \n", i);
		}
	} else {
		for(i = 0; i <= n; i = i + p){
			printf("%i \n", i);
		}
	}
	
	return 0;
}
