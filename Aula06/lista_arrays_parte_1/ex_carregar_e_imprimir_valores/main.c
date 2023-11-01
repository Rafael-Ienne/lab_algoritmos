#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, idades[10];
	
	for(i = 0; i <= 9; i++){
		idades[i] = -1;
	}
	
	printf("CARREGAR E IMPRIMIR VALORES  \n");
			
	for(i = 0; i <= 9; i++){
		printf("Informe uma idade: ");
		scanf("%i", &idades[i]);
	}

	printf("\n");

	printf("Valores das idades e suas respectivas posições no vetor: \n");

	for(i = 0; i <= 9; i++){
		printf("Idade %i: posição %i \n", idades[i], i);
	}
	
	return 0;
}
