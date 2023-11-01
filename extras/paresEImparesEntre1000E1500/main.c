#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	int i;
	int fatorial = 1;
	
	printf("Informe um numero: ");
	scanf("%i", &n);
	
	for(i = n; i>=1; i--) {
		fatorial*=i;
	}
	
	printf("%i", fatorial);

	
	return 0;
}
