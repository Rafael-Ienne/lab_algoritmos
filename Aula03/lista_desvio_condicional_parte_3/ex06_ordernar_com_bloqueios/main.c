#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("ORDENAR COM BLOQUEIOS \n");
	printf("\n");
	
	float valor1 = 0.0, valor2 = 0.0, valor3 = 0.0, i = 0.0;
	
	printf("Informe o primeiro valor: ");
	scanf("%f", &valor1);
	printf("Informe o segundo valor: ");
	scanf("%f", &valor2);
	printf("Informe o terceiro valor: ");
	scanf("%f", &valor3);
	printf("\n");
	
	if(valor1 == valor2 || valor1 == valor3 || valor2 == valor3) {
		printf("Valores repetidos não são permitidos! \n");
	} else {
		
		if(valor1 > valor2) {
			i = valor1;
			valor1 = valor2;
			valor2 = i;
		}

		if(valor1 > valor3) {
			i = valor1;
			valor1 = valor3;
			valor3 = i;
		}
	
    	if(valor2 > valor3) {
			i = valor2;
			valor2 = valor3;
			valor3 = i;
		}
		
		printf("A ordem crescente dos valores informados é: %.1f; %.1f; %.1f \n", valor1, valor2, valor3);
		
	}	
	
	system("pause");
	
	return 0;
}
