#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("TABUADA \n");
	printf("\n");
	
	float n = 0;
	float i = 0;
	float r = 0;
	
	printf("Informe a tabuada da qual se deseja saber: ");
	scanf("%f", &n);
	printf("\n");
	
	printf("TABUADA DO %.1f: \n", n);
	for(i = 1; i <= 10; i++) {
		
		r = i * n;
		
		printf("%.1f x %.1f = %.1f \n", n, i, r);
	}
	
	system("pause");
	
	return 0;
}
