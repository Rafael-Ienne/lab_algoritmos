#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float r = 0.0, n1 = 0.0, n2 = 0.0;

void funcSomar(){

	printf("Informe o primeiro valor: ");
	scanf("%f", &n1);
	printf("Informe o segundo valor: ");
	scanf("%f", &n2);

	r = n1 + n2;
	
	printf("Resultado da soma: %.2f \n", r);
}

void funcSubtrair(){
	
	printf("Informe o primeiro valor: ");
	scanf("%f", &n1);
	printf("Informe o segundo valor: ");
	scanf("%f", &n2);
	
	r = n1 - n2;
	
	printf("Resultado da subtracao: %.2f \n", r);
}

void funcMultiplicar(){
	
	printf("Informe o primeiro valor: ");
	scanf("%f", &n1);
	printf("Informe o segundo valor: ");
	scanf("%f", &n2);
	
	r = n1 * n2;
	
	printf("Resultado da multiplicacao: %.2f \n", r);
}

void funcQuadrado(){
	
	printf("Informe um valor: ");
	scanf("%f", &n1);
	
	r = n1 * n1;
	
	printf("Resultado do quadrado de %.2f: %.2f \n", n1, r);
}

void funcDividir(){
	
	printf("Informe o primeiro valor: ");
	scanf("%f", &n1);
	printf("Informe o segundo valor: ");
	scanf("%f", &n2);
	
	if(n2 == 0){
		printf("Erro, pois o denominador nao pode ser nulo \n");
	} else {
		r = n1 / n2;
	
		printf("Resultado da divisao: %.2f \n", r);
	}
}

void funcRaizQuadrada(){
	
	printf("Informe um valor: ");
	scanf("%f", &n1);
	
	if(n1 < 0){
		printf("Nao e possivel calcular a raiz quadrada de um valor negativo \n");
	} else {
			r = pow(n1, 0.5);
	
		printf("Resultado da raiz quadrada: %.2f \n", r);
	}
}

int main(int argc, char *argv[]) {
	
	/*Essas variáveis possuem escopo local (só valem no método main)*/
	int resp = 0;
	float n1 = 0.0, n2 = 0.0;
	
	do{
		printf("\n");
		printf("CALCULADORA SIMPLES \n");
		printf("1 - Somar \n");
		printf("2 - Subtrair \n");
		printf("3 - Multiplicar \n");
		printf("4 - Dividir \n");
		printf("5 - Quadrado \n");
		printf("6 - Raiz quadrada \n");
		printf("9 - Sair \n");
		printf("Informe a opcao: ");
		scanf("%i", &resp);
		printf("\n");
		
		switch(resp){
			
			case 1: 
				
				funcSomar();
				
				break;
			
			case 2:
				
				
				
				funcSubtrair();
			
				break;
				
			case 3:
				
				funcMultiplicar();
			
				break;
				
			case 4:
				
				funcDividir();
			
				break;
					
			case 5:
				
				funcQuadrado();
				
				break;
				
			case 6:
				
				funcRaizQuadrada();
				
				break;
				
			case 9:
				
				printf("Encerrando o programa... \n");
				
				break;
				
			default:
				
				printf("Valor invalido. Tente novamente \n");
				
				break;
				
		}
		
	} while(resp != 9);
	
	system("pause");
	
	return 0;
}
