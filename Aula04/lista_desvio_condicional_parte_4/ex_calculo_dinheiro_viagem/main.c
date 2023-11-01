#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	float i = 0, somaTotal = 0.0, quant1 = 0.0, quant2 = 0.0, quant3 = 0.0, quant4 = 0.0, cotDolar = 0.0;
	float cotEuro = 0.0, cotLibra = 0.0, nome1D = 0.0, nome1E = 0.0, nome1L = 0.0, nome2D = 0.0, nome2E = 0.0;
	float nome2L = 0.0, nome3D = 0.0, nome3E = 0.0, nome3L = 0.0, nome4D = 0.0, nome4E = 0.0, nome4L = 0.0;
	char nome1[30], nome2[30], nome3[30], nome4[30],nomeMaisDinheiro[30], nomeMenosDinheiro[30];
	
	printf("CÁLCULO DINHEIRO PARA VIAGEM \n");
	printf("------------------------------------------------------------------------------------------------------------------- \n");
	
	printf("COTAÇÃO DAS MOEDAS \n");
	printf("Informe a cotação atual do Dólar: ");
	scanf("%f", &cotDolar);
	printf("Informe a cotação atual do Euro: ");
	scanf("%f", &cotEuro);
	printf("Informe a cotação atual da Libra Esterlina: ");
	scanf("%f", &cotLibra);
	
	
	printf("------------------------------------------------------------------------------------------------------------------- \n");
	
	printf("DADOS DE CADA UM DOS AMIGOS QUE IRÃO VIAJAR \n");
	printf("AMIGO 1 \n");
	printf("Informe o seu primeiro nome: ");
	scanf("%s", &nome1);
	printf("Informe a quantidade de reais que você está levando: ");
	scanf("%f", &quant1);
	printf("\n");
	
	printf("AMIGO 2 \n");
	printf("Informe o seu primeiro nome: ");
	scanf("%s", &nome2);
	printf("Informe a quantidade de reais que você está levando: ");
	scanf("%f", &quant2);
	printf("\n");
	
	printf("AMIGO 3 \n");
	printf("Informe o seu primeiro nome: ");
	scanf("%s", &nome3);
	printf("Informe a quantidade de reais que você está levando: ");
	scanf("%f", &quant3);	
	printf("\n");
	
	printf("AMIGO 4 \n");
	printf("Informe o seu primeiro nome: ");
	scanf("%s", &nome4);
	printf("Informe a quantidade de reais que você está levando: ");
	scanf("%f", &quant4);
	
	somaTotal = quant1 + quant2 + quant3 + quant4;
	
	float maisDinheiro = quant1;
	float menosDinheiro = quant1;
	strcpy(nomeMaisDinheiro, nome1);
	strcpy(nomeMenosDinheiro, nome1);
	
	if(quant2 > maisDinheiro) {
		maisDinheiro = quant2;
		strcpy(nomeMaisDinheiro, nome2);	
	} 
	if(quant2 < menosDinheiro) {
		menosDinheiro = quant2;
		strcpy(nomeMenosDinheiro, nome2);
	}
	
	if(quant3 > maisDinheiro) {
		maisDinheiro = quant3;
		strcpy(nomeMaisDinheiro, nome3);	
	} 
	if(quant3 < menosDinheiro) {
		menosDinheiro = quant3;
		strcpy(nomeMenosDinheiro, nome3);
	}
	
	if(quant4 > maisDinheiro) {
		maisDinheiro = quant4;
		strcpy(nomeMaisDinheiro, nome4);	
	} 
	if(quant4 < menosDinheiro) {
		menosDinheiro = quant4;
		strcpy(nomeMenosDinheiro, nome4);
	}
	
	printf("------------------------------------------------------------------------------------------------------------------- \n");
	printf("COMPARAÇÃO ENTRE AS QUANTIDADES DE DINHEIRO LEVADA POR CADA AMIGO E SOMA TOTAL DE TODOS OS VALORES EM REAIS \n");
	printf("Nome e quantidade de dinheiro do amigo que está levando maior quantia monetária: %s, R$ %.2f \n", nomeMaisDinheiro, maisDinheiro);
	printf("Nome e quantidade de dinheiro do amigo que está levando menor quantia monetária: %s, R$ %.2f \n", nomeMenosDinheiro, menosDinheiro);
	printf("Soma total dos valores dos 4 amigos: R$ %.2f \n", somaTotal);
	
	nome1D = quant1 / cotDolar;
	nome1E = quant1 / cotEuro;
	nome1L = quant1 / cotLibra;
	
	nome2D = quant2 / cotDolar;
	nome2E = quant2 / cotEuro;
	nome2L = quant2 / cotLibra;
	
	nome3D = quant3 / cotDolar;
	nome3E = quant3 / cotEuro;
	nome3L = quant3 / cotLibra;
	
	nome4D = quant4 / cotDolar;
	nome4E = quant4 / cotEuro;
	nome4L = quant4 / cotLibra;
	
	printf("------------------------------------------------------------------------------------------------------------------- \n");
	printf("QUANTIDADE QUE CADA AMIGO ESTÁ LEVANDO EM CADA TIPO DE MOEDA \n");
	printf("AMIGO 1 \n");
	printf("%s tem %.2f reais, convertidos terá %.2f dólares, %.2f euros e %.2f libras. \n", nome1, quant1, nome1D, nome1E, nome1L);
	printf("\n");
	printf("AMIGO 2 \n");
	printf("%s tem %.2f reais, convertidos terá %.2f dólares, %.2f euros e %.2f libras. \n", nome2, quant2, nome2D, nome2E, nome2L);
	printf("\n");
	printf("AMIGO 3 \n");
	printf("%s tem %.2f reais, convertidos terá %.2f dólares, %.2f euros e %.2f libras. \n", nome3, quant3, nome3D, nome3E, nome3L);
	printf("\n");
	printf("AMIGO 4 \n");
	printf("%s tem %.2f reais, convertidos terá %.2f dólares, %.2f euros e %.2f libras. \n", nome4, quant4, nome4D, nome4E, nome4L);
	
	if(quant1 > quant2){
		i = quant1;
		quant1 = quant2;
		quant2 = i;
	}
	if(quant1 > quant3){
		i = quant1;
		quant1 = quant3;
		quant3 = i;
	}
	if(quant1 > quant4){
		i = quant1;
		quant1 = quant4;
		quant4 = i;
	}
	if(quant2 > quant3){
		i = quant2;
		quant2 = quant3;
		quant3 = i;
	}
	if(quant2 > quant4){
		i = quant2;
		quant2 = quant4;
		quant4 = i;
	}
	if(quant3 > quant4){
		i = quant3;
		quant3 = quant4;
		quant4 = i;
	}
	
	printf("------------------------------------------------------------------------------------------------------------------- \n");
	printf("VALORES ORDENADOS, EM REAIS, DO MENOR PARA O MAIOR \n");
	printf("%.2f \n", quant1);
	printf("%.2f \n", quant2);
	printf("%.2f \n", quant3);
	printf("%.2f \n", quant4);
	
	system("pause");
	
	return 0;
}
