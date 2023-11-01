#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...CONVERSÕES DE TEMPERATURA... \n");
	printf("\n");
	
	float temperaturaCelsius = 0.0, temperaturaFahrenheit = 0.0;
	
	printf("Digite o valor de uma temperatura em Celsius: ");
	scanf("%f", &temperaturaCelsius);
	
	temperaturaFahrenheit = (temperaturaCelsius * 1.8) + 32;
	
	printf("\n");
	printf("A temperatura de %.1f graus Celsius corresponde a %.1f graus Fahrenheit \n", temperaturaCelsius, temperaturaFahrenheit);
	system("pause");
	return 0;
}
