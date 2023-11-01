#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float valor = 0.0, soma = 0.0, media = 0.0;
	int i = 0;
	
	printf("SOMAR 6 VALORES E CALCULAR A MÉDIA");
	printf("\n");
	
	for(i = 1; i <= 6; i++){
		printf("Informe o %io valor: ", i);
		scanf("%f", &valor);
		soma += valor;
	}
	
	media = soma / 6.0;
	
	printf("\n");
	printf("Soma dos valores informados: %.2f \n", soma);
	printf("Média dos 6 valores informados: %.2f \n", media);
	
	system("pause");
	
	
	return 0;
}
