#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("FATORIAL \n");
	printf("\n");
	
	long int i = 0;
	long int n = 0;
	long int r = 1;
	
	printf("Informe o fatorial do qual se quer saber: ");
	scanf("%li", &n);
	
	for(i = 1; i <= n; i++){
		r *= i;
	}
	
	printf("Fatorial de %li: %li \n", n, r);
	
	system("pause");
	
	return 0;
}
