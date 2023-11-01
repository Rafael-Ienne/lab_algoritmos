#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("IMPRIMIR VALOR QUE NÃO É MAIOR QUE TRÊS \n");
	printf("\n");
	
	int valorInt = 0;
	
	printf("Informe um valor inteiro: ");
	scanf("%i", &valorInt);
	
	if(!(valorInt > 3)) {
		printf("%i \n", valorInt);
	} 

	system("pause");

	return 0;
}
