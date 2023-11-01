#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 0, soma = 0;
	
	for(i = 1; i <= 500; i++) {
		if(i % 2 == 0){
			soma += i;
		}
	}
	
	printf("SOMA DE TODOS OS VALORES PARES EXISTENTES DE 1 ATE 500: %i \n", soma);
	
	system("pause");
	
	return 0;
}
