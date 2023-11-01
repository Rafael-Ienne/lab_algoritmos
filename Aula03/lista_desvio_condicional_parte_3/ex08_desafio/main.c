#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("VERIFICAR SE VALOR X ESTÁ DENTRO DE INTERVALO DE VALORES (DADO DOIS INTERVALOS) \n");
	printf("\n");
	
	int valor1 = 0, valor2 = 0, valor3 = 0, valor4 = 0, valor5 = 0, i = 0;
	
	printf("Informe o primeiro valor: ");
	scanf("%i", &valor1);
	printf("Informe o segundo valor: ");
	scanf("%i", &valor2);
	printf("Informe o terceiro valor: ");
	scanf("%i", &valor3);
	printf("Informe o quarto valor: ");
	scanf("%i", &valor4);
	
	if(valor1 == valor2 || valor1 == valor3 || valor1 == valor4 || valor2 == valor3 || valor3 == valor4 || valor2 == valor4) {
		printf("\n");
		printf("Operação encerrada, pois foram informados valores repetidos! \n");
	} else {
		printf("Informe o quinto valor (X): ");
		scanf("%i", &valor5);
		printf("\n");
		
		if(valor1 > valor2) {
			i = valor1;
			valor1 = valor2;
			valor2 = i;
		}
		
		if(valor3 > valor4) {
			i = valor3;
			valor3 = valor4;
			valor4 = i;
		}
		
		if(valor5 >= valor1 && valor5 <= valor2 && valor5 >= valor3 && valor5 <= valor4) {
			printf("O quinto valor pertence ao primeiro [%i, %i] e ao segundo [%i, %i] intervalo \n", valor1, valor2, valor3, valor4);
		} else if(valor5 >= valor1 && valor5 <= valor2) {
			printf("O quinto valor pertence ao primeiro intervalo [%i, %i] \n", valor1, valor2);
		} else if(valor5 >= valor3 && valor5 <= valor4) {
			printf("O quinto valor pertence ao segundo intervalo [%i, %i] \n", valor3, valor4);
		} else {
			printf("O quinto valor não pertence a nenhum dos dois intervalos ([%i, %i] e [%i, %i]) \n", valor1, valor2, valor3, valor4);
		}
		
	}
	
	system("pause");
	
	return 0;
}
