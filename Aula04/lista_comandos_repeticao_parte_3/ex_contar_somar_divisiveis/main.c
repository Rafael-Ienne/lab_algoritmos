#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int a = 0, b = 0, c = 0, i = 0, contador = 0, quantDivisiveis = 0, soma = 0;
	
	printf("CONTAR E SOMAR DIVISÍVEIS \n");
	printf("\n");
	
	printf("Informe o primeiro valor inteiro(A): ");
	scanf("%i", &a);
	printf("Informe o segundo valor inteiro(B): ");
	scanf("%i", &b);
	printf("Informe o terceiro valor inteiro(C): ");
	scanf("%i", &c);
	
	if(a == b || a == c || b == c){
		printf("Todos os valores fornecidos deverão ser diferentes \n");
	}  else {
		
		if(a > b){
		i = a;
		a = b;
		b = i;
	}
	
	for(contador = a; contador <= b; contador++){
		if(contador % c == 0){
			soma += contador;
			quantDivisiveis += 1;
		}
	}
	
	printf("Quantidade de valores divisíveis por C (%i) no intervalo [%i, %i]: %i \n", c, a, b, quantDivisiveis);
	printf("Soma dos valores divisíveis por C (%i) no intervalo [%i, %i]: %i \n", c, a, b, soma);	
	}
	
	return 0;
}
