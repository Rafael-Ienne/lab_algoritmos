#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void aprovadoOuNao(float media){
	if(media >= 5.0){
		printf("Aluno aprovado! A media obtida foi: %.2f \n", media);
	} else {
		printf("Aluno reprovado! A media obtida foi: %.2f \n", media);
	}
}

float calcularMedia1(float a, float b){
	return (a + b) / 2;
}

float calcularMedia2(float a, float b, float c){
	return (a + b + c) / 3;
}

float calcularMedia3(float a, float b, float atvC){
	return a * 0.4 + b * 0.4 + atvC * 0.2;
}

float calcularMedia4(float a, float b, float atvC, float pluri){
	return a * 0.3 + b * 0.3 + atvC * 0.2 + pluri * 0.2;
}

float calcularMedia5(float a, float b, float atvC1, float atvC2, float atvC3, float pluri){
	float atividadesC = 0.0;
	atividadesC = (atvC1 + atvC2 + atvC3) / 3;
	return a * 0.3 + b * 0.3 + atividadesC * 0.2 + pluri * 0.2;
}

float calcularMedia6(float a, float atv, float atvs1, float atvs2, float pluri, float b){
	float np1 = 0.0;
	float np2 = 0.0;
	
	np1 = atv * 0.3 + a * 0.7;
	np2 = ((atvs1 + atvs2) / 2) * 0.2 + pluri * 0.2 + b * 0.6;
	
	return (np1 + np2) / 2;
}

int main(int argc, char *argv[]) {
	
	float provaA = 0.0, provaB = 0.0, provaC = 0.0, atvC = 0.0, atvsC1 = 0.0, atvsC2 = 0.0, atvsC3 = 0.0, pluri = 0.0, media = 0.0, atvs1 = 0.0, atvs2 = 0.0, atv = 0.0;
	int r = 0;
	
	do{
		
		printf("\n");
		printf("CALCULADORA SIMPLES \n");
		printf("1 - Media 1 (Prova A, Prova B) \n");
		printf("2 - Media 2 (Prova A, Prova B, Prova C) \n");
		printf("3 - Media 3 (Prova A = 40%%, Prova B = 40%%, Atividade C = 20%%) \n");
		printf("4 - Media 4 (Prova A = 30%%, Prova B = 30%%, Atividade C = 20%%, Pluridisciplinar = 20%%) \n");
		printf("5 - Media 5 (Prova A = 30%%, Prova B = 30%%, Atividades C = 20%% (3 atividades), Pluridisciplinar = 20%%) \n");
		printf("6 - Média 6 ((NP1 + NP2) / 2) Considere: (NP1 = [Atividade 30%% + Prova A 70%%], NP2 = [Atividades 20%% (2 atividades) + Pluridisciplinar 20%% + Prova B 60%%]) \n");
		printf("9 - Sair \n");
		printf("Informe a opcao: ");
		scanf("%i", &r);
		printf("\n");
		
		switch(r){
			
			case 1:
				printf("Informe a nota obtida na prova A: ");
				scanf("%f", &provaA);
				printf("Informe a nota obtida na prova B: ");
				scanf("%f", &provaB);
				
				if(provaA < 0.0 || provaB < 0.0 || provaA > 10.0 || provaB > 10.0){
					printf("Notas negativas ou maiores que 10 nao sao permitidas. Tente novamente \n");
				} else {
					media = calcularMedia1(provaA, provaB);
				
					printf("\n");
				
					aprovadoOuNao(media);
				}
				
				break;
				
			case 2:
				
				printf("Informe a nota obtida na prova A: ");
				scanf("%f", &provaA);
				printf("Informe a nota obtida na prova B: ");
				scanf("%f", &provaB);
				printf("Informe a nota obtida na prova C: ");
				scanf("%f", &provaC);
				
				if(provaA < 0.0 || provaB < 0.0 || provaC < 0.0 || provaA > 10.0 || provaB > 10.0 || provaC > 10.0){
					printf("Notas negativas ou maiores que 10 nao sao permitidas. Tente novamente \n");
				} else {
					media = calcularMedia2(provaA, provaB, provaC);
				
					printf("\n");
				
					aprovadoOuNao(media);
				}
				
				break;
				
			case 3:
				
				printf("Informe a nota obtida na prova A: ");
				scanf("%f", &provaA);
				printf("Informe a nota obtida na prova B: ");
				scanf("%f", &provaB);
				printf("Informe a nota obtida na Atividade C: ");
				scanf("%f", &atvC);
				
				if(provaA < 0.0 || provaB < 0.0 || atvC < 0.0 || provaA > 10.0 || provaB > 10.0 || atvC > 10.0){
					printf("Notas negativas ou maiores que 10 nao sao permitidas. Tente novamente \n");
				} else {
					media = calcularMedia3(provaA, provaB, atvC);
				
					printf("\n");
				
					aprovadoOuNao(media);
				}
				
				break;
				
			case 4:
				
				printf("Informe a nota obtida na prova A: ");
				scanf("%f", &provaA);
				printf("Informe a nota obtida na prova B: ");
				scanf("%f", &provaB);
				printf("Informe a nota obtida na Atividade C: ");
				scanf("%f", &atvC);
				printf("Informe a nota obtida na prova Pluridisciplinar: ");
				scanf("%f", &pluri);
				
				if(provaA < 0.0 || provaB < 0.0 || atvC < 0.0 || pluri < 0.0 || provaA > 10.0 || provaB > 10.0 || atvC > 10.0 || pluri > 10.0){
					printf("Notas negativas ou maiores que 10 nao sao permitidas. Tente novamente \n");
				} else {
					
					media = calcularMedia4(provaA, provaB, atvC, pluri);
				
					printf("\n");
				
					aprovadoOuNao(media);
				}
				
				break;
				
				
			case 5:
				
				printf("Informe a nota obtida na prova A: ");
				scanf("%f", &provaA);
				printf("Informe a nota obtida na prova B: ");
				scanf("%f", &provaB);
				printf("Informe a nota obtida com a execucao da 1a das 3 atividades das Atividades C: ");
				scanf("%f", &atvsC1);
				printf("Informe a nota obtida com a execucao da 2a das 3 atividades das Atividades C: ");
				scanf("%f", &atvsC2);
				printf("Informe a nota obtida com a execucao da 3a das 3 atividades das Atividades C: ");
				scanf("%f", &atvsC3);
				printf("Informe a nota obtida na prova Pluridisciplinar: ");
				scanf("%f", &pluri);
				
				if(provaA < 0.0 || provaB < 0.0 || atvsC1 < 0.0 || atvsC2 < 0.0 || atvsC3 < 0.0 || pluri < 0.0 || provaA > 10.0 || provaB > 10.0 || atvsC1 > 10.0 || atvsC2 > 10.0 || atvsC3 > 10.0 || pluri > 10.0){
					printf("Notas negativas ou maiores que 10 nao sao permitidas. Tente novamente \n");
				} else {
					media = calcularMedia5(provaA, provaB, atvsC1, atvsC2, atvsC3, pluri);
				
					printf("\n");
				
					aprovadoOuNao(media);
				
				}
				
				break;
				
				
			case 6:
				
				printf("Informe a nota obtida na Atividade que compoe a NP1: ");
				scanf("%f", &atv);
				printf("Informe a nota obtida na prova A que compoe a NP1: ");
				scanf("%f", &provaA);
				printf("Informe a nota obtida com a execucao da 1a das 2 atividades que compoem a NP2: ");
				scanf("%f", &atvs1);
				printf("Informe a nota obtida com a execucao da 2a das 2 atividades que compoem a NP2: ");
				scanf("%f", &atvs2);
				printf("Informe a nota obtida na prova Pluridisciplinar que compoe a NP2: ");
				scanf("%f", &pluri);
				printf("Informe a nota obtida na Prova B que compoe a NP2:");
				scanf("%f", &provaB);
				
				if(provaA < 0.0 || provaB < 0.0 || atv < 0.0 || atvs1 < 0.0 || atvs2 < 0.0 || pluri < 0.0 || provaA > 10.0 || provaB > 10.0 || atv > 10.0 || atvs1 > 10.0 || atvs2 > 10.0 || pluri > 10.0){
					printf("Notas negativas ou maiores que 10 nao sao permitidas. Tente novamente \n");
				} else {
					media = calcularMedia6(provaA, atv, atvs1, atvs2, pluri, provaB);
				
					printf("\n");
				
					aprovadoOuNao(media);
				}
				
				break;
				
			case 9:
				
				printf("Encerrando a execucao do programa... \n");
				
				break;
				
			default:
				
				printf("Valor invalido. Tente novamente \n");
				
				break;
		}
		
	} while(r != 9);
	
	return 0;
}
