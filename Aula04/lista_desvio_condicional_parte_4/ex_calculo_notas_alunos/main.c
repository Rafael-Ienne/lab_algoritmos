#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"Portuguese");
	
	int quantAprovados = 0, quantReprovados = 0; 
	float i = 0.0;
	int ra1 = 0, ra2 = 0, ra3 = 0, i2 = 0;
	float nota11 = 0.0, nota21 = 0.0, pluri1 = 0.0, media1 = 0.0;
	float nota12 = 0.0, nota22 = 0.0, pluri2 = 0.0, media2 = 0.0;
	float nota13 = 0.0, nota23 = 0.0, pluri3 = 0.0, media3 = 0.0, mediaGeral = 0.0;
	char s1[15];
	char s2[15];
	char s3[15];
	
	
	printf("CÁLCULO NOTAS DE 3 ALUNOS \n");
	printf("------------------------------------------------------------------- \n");
	printf("ALUNO 1 \n");
	printf("Informe seu RA: ");
	scanf("%i", &ra1);
	printf("Informe a NOTA1: ");
	scanf("%f", &nota11);
	printf("Informe a NOTA2: ");
	scanf("%f", &nota21);
	printf("Informe a NOTAPLURI: ");
	scanf("%f", &pluri1);
	printf("\n");
	
	printf("ALUNO 2 \n");
	printf("Informe seu RA: ");
	scanf("%i", &ra2);
	printf("Informe a NOTA1: ");
	scanf("%f", &nota12);
	printf("Informe a NOTA2: ");
	scanf("%f", &nota22);
	printf("Informe a NOTAPLURI: ");
	scanf("%f", &pluri2);
	printf("\n");
	
	printf("ALUNO 3 \n");
	printf("Informe seu RA: ");
	scanf("%i", &ra3);
	printf("Informe a NOTA1: ");
	scanf("%f", &nota13);
	printf("Informe a NOTA2: ");
	scanf("%f", &nota23);
	printf("Informe a NOTAPLURI: ");
	scanf("%f", &pluri3);
	
	media1 = (nota11 * 0.3) + (nota21 * 0.4) + (pluri1 * 0.3);
	media2 = (nota12 * 0.3) + (nota22 * 0.4) + (pluri2 * 0.3);
	media3 = (nota13 * 0.3) + (nota23 * 0.4) + (pluri3 * 0.3);
	mediaGeral = (media1 + media2 + media3) / 3;
	
	printf("------------------------------------------------------------------- \n");
	printf("RA, MÉDIA DE CADA ALUNO E MÉDIA GERAL \n");
	printf("RA %i: média %.2f \n", ra1, media1);
	printf("RA %i: média %.2f \n", ra2, media2);
	printf("RA %i: média %.2f \n", ra3, media3);
	printf("Média geral dos alunos: %.2f \n", mediaGeral);
	
	if(media1 >= 7){
		strcpy(s1, "APROVADO!");
		quantAprovados += 1;
	} else{
		strcpy(s1, "REPROVADO!");
		quantReprovados += 1;
	}
	
	if(media2 >= 7){
		strcpy(s2, "APROVADO!");
		quantAprovados += 1;
	} else{
		strcpy(s2, "REPROVADO!");
		quantReprovados += 1;
	}
	if(media3 >= 7){
		strcpy(s3, "APROVADO!");
		quantAprovados += 1;
	} else{
		strcpy(s3, "REPROVADO!");
		quantReprovados += 1;
	}
	
	printf("------------------------------------------------------------------- \n");
	printf("SITUAÇÃO DOS ALUNOS, QUANTIDADE DE APROVADOS E REPROVADOS \n");
	printf("RA %i: %s \n", ra1, s1);
	printf("RA %i: %s \n", ra2, s2);
	printf("RA %i: %s \n", ra3, s3);
	printf("Quantidade de aprovados: %i \n", quantAprovados);
	printf("Quantidade de reprovados: %i \n", quantReprovados);
	printf("------------------------------------------------------------------- \n");
	
	if(media1 > media2){
		i = media1;
		media1 = media2;
		media2 = i;
		i2 = ra1;
		ra1 = ra2;
		ra2 = i2;
	}
	if(media1 > media3){
		i = media1;
		media1 = media3;
		media3 = i;
		i2 = ra1;
		ra1 = ra3;
		ra3 = i2;
	}
	if(media2 > media3){
		i = media2;
		media2 = media3;
		media3 = i;
		i2 = ra2;
		ra2 = ra3;
		ra3 = i2;
	}
	
	printf("RA E MÉDIA ORDENADOS DO MENOR PARA O MAIOR (COM BASE NAS MÉDIAS)\n");
	printf("RA %i: média %.2f \n", ra1, media1);
	printf("RA %i: média %.2f \n", ra2, media2);
	printf("RA %i: média %.2f \n", ra3, media3);
	system("pause");
	
	return 0;
}
