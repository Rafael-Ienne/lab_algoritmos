#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0;
	
	printf("NUMEROS DIVISIVEIS POR 4 QUE ESTAO NA FAIXA DE 1 ATE 200: \n");
	
	for(i = 1; i <= 200; i++){
		if(i % 4 == 0){
			printf("%i  \n", i);
		}
	}
	
	printf("\n");
	
	system("pause");
	
	return 0;
	
}
