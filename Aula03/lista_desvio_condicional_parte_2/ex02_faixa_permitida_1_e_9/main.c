#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("IDENTIFICAR SE O VALOR EST� NA FAIXA PERMITIDA DE 1 A 9 \n");
	printf("\n");
	
	int valorInteiro = 0;
	
	printf("Informe um valor inteiro: ");
	scanf("%i", &valorInteiro);
	
	if ((valorInteiro >= 1) && (valorInteiro <= 9)) {
		printf("O valor est� na faixa permitida! \n");
	} else {
		printf("O valor informado n�o � permitido, pois n�o est� na faixa de 1 a 9. \n");
	}
	
	system("pause");
	
	return 0;
}
