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
		printf("Insira uma idade v�lida! \n");
	} else if(userAge <= 10) {
		printf("Ol�, crian�a! \n");
	} else if(userAge <= 14){
		printf("Ol�, voc� � um(a) pr�-adolescente! \n");
	} else if(userAge <= 18){
		printf("Parab�ns, voc� j� pode ser um eleitor! \n");
	} else if(userAge <= 21){
		printf("Hummm, voc� j� � um adulto! \n");
	} else {
		printf("Bem, agora j� est� na hora de sair de casa e seguir sua vida... \n");
	}
	
	system("pause");
	
	return 0;
}
