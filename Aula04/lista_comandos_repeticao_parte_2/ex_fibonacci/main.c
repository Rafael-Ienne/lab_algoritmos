#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int i = 1, j = 1, k = 0, interm = 0, cont = 0;
	
	printf("SEQUÊNCIA DE FIBONACCI ATÉ O DÉCIMO QUINTO TERMO: \n");
	printf("\n");
	printf("%i  ", i);
	printf("%i  ", j);
	for(cont = 1; cont <= 13; cont++){
		k = i + j;
		printf("%i  ", k);
		interm = j;
		j = k;
		i = interm;
	}
	printf("\n");
	
	system("pause");
	
	return 0;
}
