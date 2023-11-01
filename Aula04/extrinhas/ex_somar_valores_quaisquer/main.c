#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int somaPar = 0, quantPar = 0, i = 0, inicio = 0, fim = 0, cont = 0;
	
	printf("Informe um valor inteiro: ");
	scanf("%i", &inicio);
	printf("Informe outro valor inteiro: ");
	scanf("%i", &fim);
	
	if(inicio > fim){
		i = inicio;
		inicio = fim;
		fim = i;
	}
	
	for(cont = inicio; cont <= fim; cont++){
		if(cont % 2 == 0) {
			somaPar += cont;
			quantPar += 1;
		}
	}
	
	printf("Quantidade de valores pares entre %i e %i: %i \n", inicio, fim, quantPar);
	printf("Soma de valores pares entre %i e %i: %i \n", inicio, fim, somaPar);
	
	return 0;
}
