#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	/*Usa-se double em vez de int ou long int porque os
	 valores podem se tornar muito grandes para serem
	representados com precisão por tipos de dados inteiros.*/
	
	double i = 0.0, somaGraos = 0.0, quantQuadrado = 1.0;
	
	for(i = 1.0; i <= 64.0; i++){
		somaGraos = somaGraos + quantQuadrado;
		quantQuadrado = quantQuadrado * 2;
	}
	
	printf("GRAOS DE TRIGO NO TABULEIRO: %.2lf \n", somaGraos);
	
	system("pause");
	
	return 0;
}
