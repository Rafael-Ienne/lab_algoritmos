#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("SOMAR VALORES POSITIVOS ATÉ APARECER NEGATIVO \n");
	printf("\n");
	
	float valor = 0.0, soma = 0.0, media = 0.0;
    int contador = 0;
    
    while(valor >= 0){
    	printf("Informe um valor numérico: ");
    	scanf("%f", &valor);
    	soma += valor;
    	contador += 1;
    	if(valor < 0){
    		printf("Valor negativo inserido. Operação encerrada! \n");
		}
    	
	}
	
	media = soma / contador;	
	
	printf("\n");
	printf("Soma dos valores: %.2f \n",soma);
	printf("Quantidade de valores somados: %i \n", contador);
	printf("Média dos valores: %.2f \n", media);
	
	system("pause");
	
	return 0;
}
