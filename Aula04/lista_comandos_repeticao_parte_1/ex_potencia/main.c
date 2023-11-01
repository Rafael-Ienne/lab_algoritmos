#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("POTENCIAS DE 3: \n");
	printf("\n");
	
	int i = 0;
	int r = 0;
	
	for(i = 0; i <= 15; i++) {
		r = pow(3, i);
		printf("3 ^ %i = %i \n", i, r);
	}
	
	system("pause");
	
	return 0;
}
