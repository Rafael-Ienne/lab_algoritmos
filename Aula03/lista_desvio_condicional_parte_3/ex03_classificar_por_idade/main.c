#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
	
	
	int main(int argc, char *argv[]) {
		
	setlocale(LC_ALL, "Portuguese");
	
	int userAge = 0;
	
	printf("CLASSIFICAR POR IDADE \n");
	printf("\n");
	
	printf("Informe a sua idade: ");
	scanf("%i", &userAge);
	printf("\n");
	
	
	if(userAge < 0) {
		printf("Insira uma idade válida! \n");
	} else if(userAge <= 10) {
		printf("Olá, criança! \n");
	} else if(userAge <= 14){
		printf("Olá, você é um(a) pré-adolescente! \n");
	} else if(userAge <= 18){
		printf("Parabéns, você já pode ser um eleitor! \n");
	} else if(userAge <= 21){
		printf("Hummm, você já é um adulto! \n");
	} else {
		printf("Bem, agora já está na hora de sair de casa e seguir sua vida... \n");
	}
	
	system("pause");
	
	return 0;
}
