#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int a = 0, b = 0, c = 0, somaA = 0, somaB = 0, somaC = 0, i = 0;
			
	printf("SOMAR INTERVALOS 3 VALORES \n");
	printf("\n");
	
	printf("Informe um valor inteiro: ");
	scanf("%i", &a);
	printf("Informe outro valor inteiro: ");
	scanf("%i", &b);
	printf("Informe outro valor inteiro: ");
	scanf("%i", &c);
	printf("\n");
	
	if(a == b || a == c || b == c){
		printf("Valores iguais não são válidos!");
		printf("\n");
	} else {
	
		for(i = 1; i <= a; i++){
			somaA += i;
		}
		
		for(i = 1; i <= b; i++){
			somaB += i;
		}
		
		for(i = 1; i <= c; i++){
			somaC += i;
		}
	
		printf("Resultado da soma dos valores do primero intervalo (1 até %i): %i \n", a, somaA);
		printf("Resultado da soma dos valores do segundo intervalo (1 até %i): %i \n", b, somaB);
		printf("Resultado da soma dos valores do terceiro intervalo (1 até %i): %i \n", c, somaC);
	
		if(somaA > somaB){
			i = somaA;
			somaA = somaB;
			somaB = i;
		}
		
		if(somaA > somaC){
			i = somaA;
			somaA = somaC;
			somaC = i;
		}
		if(somaB > somaC){
			i = somaB;
			somaB = somaC;
			somaC = i;
		}
		
		if(a > b){
			i = a;
			a = b;
			b = i;
		}
		
		if(a > c){
			i = a;
			a = c;
			c = i;
		}
		
		if(b > c){
			i = b;
			b = a;
			a = i;
		}
		
		printf("Menor valor de soma: %i \n", somaA);
		printf("Maior valor de soma: %i \n", somaC);
		printf("Valores ordenados do menor para o maior: %i, %i, %i \n", a, b, c);
	}
	
	return 0;
}
