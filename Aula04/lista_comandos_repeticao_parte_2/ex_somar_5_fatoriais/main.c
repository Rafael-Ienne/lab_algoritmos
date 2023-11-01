#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("SOMATÓRIA DE 5 FATORIAIS \n");
	printf("\n");
	
	long int i = 0;
	long int j = 0;
	long int soma = 0;
	long int n = 0;
	
	for(i = 1; i <= 5 ; i++){
		long int r = 1;
		printf("Informe o %lio número do qual se deseja saber o fatorial: ", i);
		scanf("%li", &n);
		
		for(j = 1; j <= n; j++){
			r *= j;
		}
		
		soma += r;
	}
	
	printf("Soma dos fatoriais: %li \n", soma);
	
	system("pause");
	
	return 0;
}
