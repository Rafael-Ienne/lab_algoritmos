#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("QUADRADO DE 15 A 50 \n");
	
	int i = 0;
	int r = 0;
	
	for(i = 15; i <= 50; i++) {
		
		r = i * i;
		
		printf("%d ^ 2 = %d \n", i, r);
	}
	
	printf("\n");
	
	system("pause");
	
	return 0;
}
