#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int i = 0, idades[10], idade = 0, tamanho = 0;
	
	for(i = 0; i < 10; i++){
		idades[i] = -1;
	}
	
	printf("CARREGAR E IMPRIMIR VALORES  \n");
			
	while(tamanho < 10){
		printf("Informe uma idade: ");
		scanf("%i", &idade);
		if(idade <= 0){
			printf("Idades nulas ou negativas não são permitidas. Tente novamente \n");
		} else {
			idades[tamanho] = idade;
			tamanho ++;
		}
	}

	printf("\n");

	printf("Valores das idades e suas respectivas posições no vetor: \n");

	for(i = 0; i < 10; i++){
		if (idades[i] != -1) {
            printf("Idade %i: posição %i \n", idades[i], i);
        }
	}

	system("pause");
	
	return 0;
}
