#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void mostrarResultado(float r){
	printf("Area: %.2f \n", r);
}

void erro(){
	printf("Valores nulos ou negativos nao sao permitidos. Tente novamente \n");
}

float funcAreaTrapezio(float n1, float n2, float n3){
	return ((n1 + n2) * n3) / 2;
}

float funcCalcularGeratriz(float n1, float n2){
	return pow((n1 * n1 + n2 * n2) , 0.5);
}

float funcAreaRetangulo(float n1, float n2){
	return n1 * n2;
}

float funcAreaTriangulo(float n1, float n2){
	return (funcAreaRetangulo(n1, n2) / 2);
}

float funcAreaQuadrado(float n1){
	return funcAreaRetangulo(n1, n1);
}

float funcAreaCirculo(float n1){
	return 3.14 * funcAreaQuadrado(n1);
}

float funcAreaParalelepipedo(float n1, float n2, float n3){
	return funcAreaRetangulo(n1, n2) * 2 + funcAreaRetangulo(n1, n3) * 2 + funcAreaRetangulo(n2, n3) * 2;
}

float funcAreaLosango(float n1, float n2){
	return funcAreaTriangulo(n1, n2);
}

float funcAreaCone(float raio, float altura){
	return 3.14 * raio * funcCalcularGeratriz(raio, altura) + 3.14 * funcAreaQuadrado(raio);
}

int main(int argc, char *argv[]) {
	
	int r = 0;
	float n1 = 0.0, n2 = 0.0, n3 = 0.0, resultado = 0.0;
	
	do{
		printf("\n");
		printf("AREAS FIGURAS GEOMETRICAS \n");
		printf("1 - Retangulo \n");
		printf("2 - Triangulo \n");
		printf("3 - Quadrado \n");
		printf("4 - Circulo \n");
		printf("5 - Paralelepipedo \n");
		printf("6 - Losango \n");
		printf("7 - Cone \n");
		printf("8 - Trapezio \n");
		printf("9 - Sair \n");
		printf("Informe a opcao: ");
		scanf("%i", &r);
		printf("\n");
		
		switch(r){
			
			case 1: 
			
				printf("Informe o valor da base do retangulo: ");
				scanf("%f", &n1);
				printf("Informe o valor da altura do retangulo: ");
				scanf("%f", &n2);
				
				if(n1 <= 0.0 || n2 <= 0.0){
					erro();
				} else {
					resultado = funcAreaRetangulo(n1, n2);
			
					mostrarResultado(resultado);
				}
				
				break;
			
			case 2:
				
				printf("Informe o valor da base do triangulo: ");
				scanf("%f", &n1);
				printf("Informe o valor da altura do triangulo: ");
				scanf("%f", &n2);
				
				if(n1 <= 0.0 || n2 <= 0.0){
					erro();
				} else {
					resultado = funcAreaTriangulo(n1, n2);
					
					mostrarResultado(resultado);
				}
			
				break;
				
			case 3:
				
				printf("Informe o valor do lado do quadrado: ");
				scanf("%f", &n1);
				
				if(n1 <= 0.0){
					erro();
				} else {
					resultado = funcAreaQuadrado(n1);
					
					mostrarResultado(resultado);
				}
				
				break;
				
			case 4:
				
				printf("Informe o valor do raio do circulo: ");
				scanf("%f", &n1);
				
				if(n1 <= 0.0){
					erro();
				} else {
				
					resultado = funcAreaCirculo(n1);
					
					mostrarResultado(resultado);
				}
				
				break;
					
			case 5:
				
				printf("Informe o valor do comprimento do paralelepipedo: ");
				scanf("%f", &n1);
				printf("Informe o valor da largura do paralelepipedo: ");
				scanf("%f", &n2);
				printf("Informe o valor da altura do paralelepipedo: ");
				scanf("%f", &n3);
				
				if(n1 <= 0.0 || n2 <= 0.0 || n3 <= 0.0){
					erro();
				} else { 
				
					resultado = funcAreaParalelepipedo(n1, n2, n3);
					
					mostrarResultado(resultado);
					
				}
				
				break;
				
			case 6:
				
				printf("Informe o valor de uma diagonal do losango: ");
				scanf("%f", &n1);
				printf("Informe o valor de outra diagonal do losango: ");
				scanf("%f", &n2);
				
				if(n1 <= 0.0 || n2 <= 0.0){
					erro();
				} else {
				
					resultado = funcAreaLosango(n1, n2);
					
					mostrarResultado(resultado);
					
				}
				
				break;
				
			case 7:
				
				printf("Informe o valor do raio da base do cone: ");
				scanf("%f", &n1);
				printf("Informe o valor da altura do cone: ");
				scanf("%f", &n2);
				
				if(n1 <= 0.0 || n2 <= 0.0){
					erro();
				} else {
				
					resultado = funcAreaCone(n1, n2);
					
					mostrarResultado(resultado);
				}
				
				break;
				
			case 8:
				
				printf("Informe o valor de um base do trapezio: ");
				scanf("%f", &n1);
				printf("Informe o valor de outra base do trapezio: ");
				scanf("%f", &n2);
				printf("Informe o valor da altura do trapezio: ");
				scanf("%f", &n3);
				
				if(n1 <= 0.0 || n2 <= 0.0 || n3 <= 0.0){
					erro();
				} else {
				
					resultado = funcAreaTrapezio(n1, n2, n3);
					
					mostrarResultado(resultado);
				}
				
				break;
				
			case 9:
				
				printf("Encerrando o programa... \n");
				
				break;
				
			default:
				
				printf("Valor invalido. Tente novamente \n");
				
				break;
				
		}
		
	} while(r != 9);
	
	return 0;
}
