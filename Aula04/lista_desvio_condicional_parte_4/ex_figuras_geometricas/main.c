#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float lado1r = 0.0, lado2r = 0.0, arear = 0.0, i = 0.0;
	float baset = 0.0, alturat = 0.0, areat = 0.0;
	float ladoq = 0.0, areaq = 0.0;
	float raioc = 0.0, areac = 0.0;
	
	printf("FIGURAS GEOMÉTRICAS \n");
	printf("------------------------------------------------ \n");
	printf("RETÂNGULO \n");
	printf("Informe o valor de um dos lados do retângulo: ");
	scanf("%f", &lado1r);
	printf("Informe o valor do outro lado do retângulo: ");
	scanf("%f", &lado2r);
	printf("\n");
	printf("TRIÂNGULO \n");
	printf("Informe o valor da base do triângulo: ");
	scanf("%f", &baset);
	printf("Informe o valor da altura do triângulo: ");
	scanf("%f", &alturat);
	printf("\n");
	printf("QUADRADO \n");
	printf("Informe o valor do lado do quadrado: ");
	scanf("%f", &ladoq);
	printf("\n");
	printf("CÍRCULO \n");
	printf("Informe o valor do raio do círculo: ");
	scanf("%f", &raioc);
	printf("------------------------------------------------ \n");
	
	arear = lado1r * lado2r;
	areat = (baset * alturat) / 2;
	areaq = ladoq * ladoq;
	areac = 3.14 * raioc * raioc;
	
	printf("ÁREA DE CADA FIGURA GEOMÉTRICA \n");
	printf("Área do retângulo: %.2f \n", arear);
	printf("Área do triângulo: %.2f \n", areat);
	printf("Área do quadrado: %.2f \n", areaq);
	printf("Área do círculo: %.2f \n", areac);
	printf("----------------------------------------------- \n");
	
	float areaMaior = arear;
	float areaMenor = arear;
	char textoMaior[30] = "retângulo";
	char textoMenor[30] = "retângulo";
	
	if(areat > areaMaior) {
		areaMaior = areat;
		strcpy(textoMaior, "triângulo");
	} 
	if(areat < areaMenor) {
		areaMenor = areat;
		strcpy(textoMenor, "triângulo" );
	}
	
	if(areaq > areaMaior) {
		areaMaior = areaq;
		strcpy(textoMaior, "quadrado");
	} 
	if(areaq < areaMenor) {
		areaMenor = areaq;
		strcpy(textoMenor, "quadrado");
	}
	
	if(areac > areaMaior) {
		areaMaior = areac;
		strcpy(textoMaior, "círculo");
	} 
	if(areac < areaMenor) {
		areaMenor = areac;
		strcpy(textoMenor, "círculo");
	}
	
	printf("COMPARACAO ENTRE AS ÁREAS DE CADA FIGURA GEOMÉTRICA \n");
	printf("Figura com maior área: %s \n", textoMaior);
	printf("Figura com menor área: %s \n", textoMenor);
	printf("----------------------------------------------- \n");
	
	if(arear > areat){
		i = arear;
		arear = areat;
		areat = i;
	}
	if(arear > areaq){
		i = arear;
		arear = areaq;
		areaq = i;
	}
	if(arear > areac){
		i = arear;
		arear = areac;
		areac = i;
	}
	if(areat > areaq){
		i = areat;
		areat = areaq;
		areaq = i;
	}
	if(areat > areac){
		i = areat;
		areat = areac;
		areac = i;
	}
	if(areaq > areac){
		i = areaq;
		areaq = areac;
		areac = i;
	}
	
	printf("ORDEM CRESCENTE DAS ÁREAS DE CADA FIGURA GEOMÉTRICA \n");
	printf("%.2f \n", arear);
	printf("%.2f \n", areat);
	printf("%.2f \n", areaq);
	printf("%.2f \n", areac);
	
	system("pause");
	
	return 0;
}
