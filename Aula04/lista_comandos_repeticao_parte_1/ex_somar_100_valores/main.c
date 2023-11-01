#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 0;
	int soma = 0;
	
	for(i = 1; i <= 100; i++){
		soma += i;
	}
	
	printf("SOMA DE TODOS OS VALORES DE 1 A 100: %i \n", soma);
	
	system("pause");
	
	return 0;
}
