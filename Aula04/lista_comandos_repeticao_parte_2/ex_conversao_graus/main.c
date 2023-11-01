#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float tempCelsius = 0.0, tempFahrenheit = 0.0;
	
	printf("CONVERSÃO GRAUS CELSIUS DE 10 EM 10 \n");
	printf("\n");
	
	for(tempCelsius = 10.0; tempCelsius <= 100.0; tempCelsius += 10.0){
		tempFahrenheit = (tempCelsius * 1.8) + 32;
		printf("%.2f graus Celsius em Fahrenheit: %.2f \n",tempCelsius, tempFahrenheit);
	}
	
	return 0;
}
