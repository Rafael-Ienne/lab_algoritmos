#include <stdio.h>
#include <stdlib.h>

/* Sistema simples de controle de peso para uso da roda
 * gigante, cada célula permite 2 pessoas e o peso má-
 * ximo é de 180.00 Kg
 */
int main(int argc, char *argv[]) {
	float peso1, peso2, pesototal = 0.0;	
	
	printf("\n");
	printf(":: SISTEMA CONTROLE RODA GIGANTE ::..\n");
	printf("Informe o peso do primeiro passageiro: ");
	scanf("%f", &peso1);
	printf("Informe o peso do segundo passageiro: ");
	scanf("%f", &peso2);
	
	pesototal = peso1 + peso2;
	
	if (pesototal >= 180.00) {
		printf("ATENCAO! O peso maximo permitido e 180.00 KG \n");
	}
	
	return 0;
}
