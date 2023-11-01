#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("APROVADO\\REPROVADO \n");
	printf("\n");
	
	setlocale(LC_ALL, "Portuguese");
	
	float avaliacao1 = 0.0, avaliacao2 = 0.0, entregaTrab = 0.0, media = 0.0;
	
	printf("Informe a nota obtida na Avalia��o 1: ");
	scanf("%f", &avaliacao1);
	printf("Informe a nota obtida na Avalia��o 2: ");
	scanf("%f", &avaliacao2);
	printf("Informe a nota obtida com a entrega de trabalho: ");
	scanf("%f", &entregaTrab);
	printf("\n");
	
	if(avaliacao1 < 0.0 || avaliacao1 > 10 || avaliacao2 < 0.0 || avaliacao2 > 10.0 || entregaTrab < 0.0 || entregaTrab > 10.0){
		printf("Valor inv�lido! \n");
	} else {
		
		media = (avaliacao1 * 0.3) + (avaliacao2 * 0.4) + (entregaTrab * 0.3);
	
		if(media >= 0 && media <=4.99) {
			printf("Reprovado! \n");
		} else if (media >= 5 && media <= 7.49) {	
		    printf("Aprovado!\n");
	    } else {
	        printf("Parab�ns! Voc� foi aprovado(a) com excel�ncia!\n");
	    }
	}

	system("pause");
	
	return 0;
}
