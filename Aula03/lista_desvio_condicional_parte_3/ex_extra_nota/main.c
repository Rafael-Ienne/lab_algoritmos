#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2;
	float media;
	
	printf("Informe a primeira nota: ");
	scanf("%i", &n1);
	printf("Informe a segunda nota: ");
	scanf("%i", &n2);
	
	media = (n1 * 0.4) + (n2 * 0.6);
	
	if((n1 < 0) || (n1 > 10 )) {
		printf("Valor de n1 invalido!");
	} else if((n2 < 0) || (n2 > 10)) {
		printf("Valor de n2 invalido!");
	} else {
		media = (n1 * 0.4) + (n2 * 0.6);
	} 
	
	if(media < 6) {
		printf("Recuperacao! \n");
    } else if((media >= 6) && (media <= 7.5)) {
    	printf("Aprovado \n");
	}  else {
		printf("Parabens! Super aprovado. A media final e %.2f \n", media);
	}
	
	system("pause");

	return 0;
}
