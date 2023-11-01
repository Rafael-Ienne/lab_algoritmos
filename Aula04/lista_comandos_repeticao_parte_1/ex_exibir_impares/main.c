#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 0;
	
	printf("VALORES IMPARES NA FAIXA DE 1 ATE 20: \n");
	
	for(i = 1; i <= 20; i++) {
		if(i % 2 != 0){
			printf("%i \n", i);
		}
	}
	
	system("pause");
	
	return 0;
}
