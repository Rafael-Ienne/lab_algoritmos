#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	printf("IMC \n");
	printf("\n");
	setlocale(LC_ALL, "Portuguese");
	
	float pesoUsuario = 0.0, alturaUsuario = 0.0, imc = 0.0;
	
	printf("Informe o seu peso, em kg: ");
	scanf("%f", &pesoUsuario);
	printf("Informe a sua altura, em metros: ");
	scanf("%f", &alturaUsuario);
	printf("\n");
	
	imc = pesoUsuario/(alturaUsuario * alturaUsuario);
	
	if(pesoUsuario < 0 || alturaUsuario < 0) {
		printf("Digite um valor válido! \n");
	} else if(imc < 18.5) {
		printf("Abaixo do peso. Seu IMC é %.2f \n", imc);
	} else if(imc <= 24.9) {
		printf("Peso normal. Seu IMC é %.2f \n", imc);
	} else if(imc <= 29.9) {
		printf("Sobrepeso. Seu IMC é %.2f \n", imc);
	} else if(imc <= 34.9) {
		printf("Obesidade grau I. Seu IMC é %.2f \n", imc);
	} else if(imc <= 39.9) {
		printf("Obesidade grau II. Seu IMC é %.2f \n", imc);
	} else {
		printf("Obesidade mórbida. Seu IMC é %.2f \n", imc);
	}

	system("pause");
	
	return 0;
}
