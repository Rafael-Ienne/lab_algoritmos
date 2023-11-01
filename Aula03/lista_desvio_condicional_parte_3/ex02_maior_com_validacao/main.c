#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	printf("MAIOR COM VALIDACAO \n");
	printf("\n");
	
	setlocale(LC_ALL, "Portuguese");
	
    int valor1 = 0, valor2 = 0;

    printf("Informe um valor inteiro: ");
    scanf("%i", &valor1);
    printf("Informe outro valor inteiro: ");
    scanf("%i", &valor2);
    printf("\n");

    if (valor1 == valor2) {
        printf("Valores iguais não são permitidos!\n");
    } else if (valor1 > valor2) {
        printf("O primeiro valor informado é maior que o segundo.\n");
    } else {
        printf("O segundo valor informado é maior que o primeiro.\n");
    }

    system("pause");

    return 0;
}
