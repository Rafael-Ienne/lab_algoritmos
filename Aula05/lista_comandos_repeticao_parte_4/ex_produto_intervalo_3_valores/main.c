#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int a = 0, b = 0, c = 0, prodA = 1, prodB = 1, prodC = 1, i = 0;
			
	printf("PRODUTO INTERVALO 3 VALORES \n");
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
			prodA *= i;
		}
		
		for(i = 1; i <= b; i++){
			prodB *= i;
		}
		
		for(i = 1; i <= c; i++){
			prodC *= i;
		}
		
		printf("Resultado do produto dos valores do primero intervalo (1 até %i): %i \n", a, prodA);
		printf("Resultado do produto dos valores do segundo intervalo (1 até %i): %i \n", b, prodB);
		printf("Resultado do produto dos valores do terceiro intervalo (1 até %i): %i \n", c, prodC);
		
		if(prodA > prodB){
			i = prodA;
			prodA = prodB;
			prodB = i;
		}
		
		if(prodA > prodC){
			i = prodA;
			prodA = prodC;
			prodC = i;
		}
		if(prodB > prodC){
			i = prodB;
			prodB = prodC;
			prodC = i;
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
			b = c;
			c = i;
		}
		
		printf("Menor valor de produto: %i \n", prodA);
		printf("Maior valor de produto: %i \n", prodC);
		printf("Valores ordenados do menor para o maior: %i, %i, %i \n", a, b, c);
	}
	
	return 0;
}
