#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float valorA = 0.0, valorB = 0.0, valorC = 0.0, valorDelta = 0.0, resultado1 = 0.0, resultado2 = 0.0;
	
	printf("...FÓRMULA BÁSKARA... \n");
	printf("\n");
	
	printf("Informe o valor de A da equação de segundo grau: ");
	scanf("%f", &valorA);
	printf("Informe o valor de B da equação de segundo grau: ");
	scanf("%f", &valorB);
	printf("Informe o valor de C da equação de segundo grau: ");
	scanf("%f", &valorC);
	printf("\n");
	
	
	if(valorA != 0 && valorB !=0 && valorC != 0) {
		
		valorDelta = valorB * valorB - 4 * valorA * valorC;
		
		if(valorDelta == 0.0) {
			resultado1 = (- valorB) / (2 * valorA);
			printf("Raíz da equação: %.2f \n", resultado1);
	}   else if(valorDelta > 0.0) {
			resultado1 = (-valorB + sqrt(valorDelta)) / (2 * valorA);
			resultado2 = (-valorB - sqrt(valorDelta)) / (2 * valorA);
			printf("Raízes da equação: %.2f e %.2f \n", resultado1, resultado2);
	}   else {
			printf("A equação não tem solução real. \n");
	}
	} else {
		
		printf("A equação informada não á completa \n");
	}

	system("pause");
	
	return 0;
  }  
