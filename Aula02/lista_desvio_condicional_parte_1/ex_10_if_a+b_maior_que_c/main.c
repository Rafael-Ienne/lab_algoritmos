#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("...VERIFICAR SE (A + B) > C... \n");
	printf("\n");
	
	int valorA = 0, valorB = 0, valorC = 0;
	
	printf("Informe o valor A: ");
	scanf("%i", &valorA);
	printf("Informe o valor B: ");
	scanf("%i", &valorB);
	printf("Informe o valor C: ");
	scanf("%i", &valorC);
	
	if((valorA + valorB) > valorC) {
		printf("A (%.2i) + B (%.2i) > C (%.2i) \n", valorA, valorB, valorC);
	} else {
		printf("A (%.2i) + B (%.2i) < C (%.2i) \n", valorA, valorB, valorC);
	}
	system("pause");
	
	return 0;
}
