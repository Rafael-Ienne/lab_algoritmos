#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	int somaImpar = 0, quantImpar = 0, i = 0;
	
	for(i = 150; i <= 260; i++){
		if(i % 2 != 0){
			somaImpar += i;
			quantImpar += 1;
		} 
	}
	
	printf("Soma dos valores impares de 150 a 260: %i \n", somaImpar);
	printf("Quantidade de valores impares de 150 a 260: %i \n", quantImpar);
	
	system("pause");
	
	return 0;
}
