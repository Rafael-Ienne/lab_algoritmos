#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("...PAR//�MPAR... \n");
	printf("\n");
	
	int valorInt = 0;
	
	printf("Digite um valor inteiro: ");
	scanf("%i", &valorInt);
	
	if (valorInt % 2 == 0){
        printf("O n�mero %i � PAR \n",valorInt);
    } else {
        printf("O n�mero %i � �MPAR \n",valorInt);
    }
	
	system("pause");
	
	return 0;
}
