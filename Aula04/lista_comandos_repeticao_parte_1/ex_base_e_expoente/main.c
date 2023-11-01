#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("BASE E EXPOENTE \n");
	printf("\n");
	
	float b = 0.0;
	float e = 0.0;
	float r = 0.0;
	float i = 0.0;
	
	printf("Informe o valor da base da potência (B): ");
	scanf("%f", &b);
	printf("Informe o valor do expoente da potência (E): ");
	scanf("%f", &e);
	
	if (e == 0) {
        r = 1.0; 
    } else if (e > 0) {
    	r = 1.0;
        for (i = 1.0; i <= e; i++) {
            r *= b;
        }
    } else {
    	r = 1.0;
        for (i = 1.0; i <= -e; i++) {
            r *= 1.0 / b;
        }
    }
	
	printf("%.2f ^ %.2f = %.2f \n", b, e, r);
	
	system("pause");
	
	return 0;
}
