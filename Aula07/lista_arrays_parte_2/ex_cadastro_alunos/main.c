#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int ras[5], quantAlunos = 0, i = 0, r = 0, ra = 0, existe = 0, removido = 0, j = 0, p = 0; 
	char nomes[5][30], nome[30];
	float mensalidades[5], media = 0.0, menorMensalidade = 0.0, mensalidade = 0.0;
	
	for(i = 0; i < 5; i++){
		ras[i] = 0;
	}
	
	for(i = 0; i < 5; i++){
		strcpy(nomes[i], "");
	}
	
	for(i = 0; i < 5; i++){
		mensalidades[i] = 0.0;
	}
	
	do{
		printf("\n");
		printf("CONTROLE DE ALUNOS \n");
		printf("1. Cadastrar  \n");
		printf("2. Relatório   \n");
		printf("3. Pesquisar RA   \n");
		printf("4. Remover (RA)  \n");
		printf("5. Média mensalidades \n");
		printf("6. Menor mensalidade \n");
		printf("7. Limpar base \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &r);
		printf("\n");
		
		switch(r){
			
			case 1:
				
				if (quantAlunos < 5) {
					
                    printf("Informe um valor para adicionar ao vetor de RA: ");
                    scanf("%i", &ra);
                    printf("Informe o primeiro nome para adicionar ao vetor de nomes: ");
                    scanf("%s", &nome);
                    printf("Informe uma mensalidade para adicionar ao vetor de mensalidades: ");
                    scanf("%f", &mensalidade);
                    if(ra <= 0 || nome == "" || mensalidade <= 0){
                    	printf("Não foi possível completar o cadastro, pois foram inseridos dados nulos ou negativos \n");
					} else {
						ras[quantAlunos] = ra;
						strcpy(nomes[quantAlunos], nome);
						mensalidades[quantAlunos] = mensalidade;
						quantAlunos++;
						printf("Aluno cadastrado \n");
					}
                    
                } else {
                    printf("Não é possível adicionar mais dados, pois o limite de alunos foi atingido \n");
                }
                
                break;
				
			case 2:
				
				printf("Relatório de alunos: \n");
				
				if(quantAlunos > 0){
					for(i = 0; i < quantAlunos; i++){
						printf("RA: %i \n", ras[i]);
						printf("Primeiro nome: %s \n", nomes[i]);
						printf("Mensalidade: R$ %.2f \n", mensalidades[i]);
						printf("\n");
					}	
				} else {
					printf("O vetor está vazio \n");
				}
				
				break;
				
			case 3:
				
				existe = 0;
				
				if(quantAlunos == 0){
					printf("Não há alunos para se pesquisar, pois o vetor está vazio \n");
				} else {
					printf("Informe o RA do aluno de cujos dados se deseja saber: ");
					scanf("%i", &ra);
					
					if(ra > 0){
						
						for(i = 0; i < quantAlunos; i++){
							
							if(ras[i] == ra){
								printf("\n");
								existe = 1;
								printf("Dados do aluno: \n");
								printf("RA: %i \n", ras[i]);
								printf("Primeiro nome: %s \n", nomes[i]);
								printf("Mensalidade: R$ %.2f \n", mensalidades[i]);
								printf("\n");
							}
						}
						
						if(existe == 0){
							printf("RA não encontrado! \n");
						}
						
					} else {
						printf("RA nulo ou negativo não é permitido \n");
					}
				}
				
				break;
				
			case 4:
				
				removido = 0;
				
				if(quantAlunos == 0){
					printf("Não é possível remover aluno, pois o vetor está vazio \n");
				} else {
					printf("Informe o RA do aluno que quer ser removido: ");
					scanf("%i", &ra);
					
					for(i = 0; i < quantAlunos; i++){
						
						if(ras[i] == ra){
							for(j = i; j < quantAlunos - 1; j++){
								ras[j] = ras[j + 1];
								strcpy(nomes[j], nomes[j + 1]);
								mensalidades[j] = mensalidades[j + 1];
							}
							quantAlunos--;
                            removido = 1;
                            printf("Aluno com RA %i removido com sucesso.\n", ra);
                            
                            break;
						}
						
					}
					
					if(removido == 0){
						printf("Aluno não encontrado \n");	
					}	
				}
				
				break;
				
			case 5:
				
				if(quantAlunos == 0){
					printf("Não é possível calcular a média, pois o vetor está vazio! \n");
				} else {
					
					media = 0.0;
					
					if(quantAlunos > 0){
						
						for(i = 0; i < quantAlunos; i++){
							media += mensalidades[i];
						}
						
						media /= quantAlunos;
						printf("Média das mensalidades: %.2f \n", media);
					} else {
						printf("Nenhum aluno com mensalidade cadastrada.\n");
					}
				}
				
				break;
				
			case 6:
				
				if(quantAlunos == 0){
					printf("Não há alunos cadastrados para saber qual mensalidade é a menor \n");
				} else {
					
					menorMensalidade = mensalidades[0];
					p = 0;
					
					for(i = 0; i < quantAlunos; i++){
						if(mensalidades[i] < menorMensalidade){
							menorMensalidade = mensalidades[i];
							p = i;
						}
					}
					
					printf("Aluno com menor mensalidade: \n");
					
					printf("\n");
					
					printf("RA: %i \n", ras[p]);
					printf("Primeiro nome: %s \n", nomes[p]);
					printf("Mensalidade: R$ %.2f \n", mensalidades[p]);
				}
				
				break;
				
			case 7:
				
				if(quantAlunos == 0){
					printf("Não há alunos para se limpar dados! \n");
				} else {
					quantAlunos = 0;
					for(i = 0; i < 5; i++){
						ras[i] = 0;
						strcpy(nomes[i], "");
						mensalidades[i] = 0.0;
					}
                	printf("Base de dados limpa.\n");
				}
				
				break;
				
			case 9:
				
				printf("Encerrando a execução do programa! \n");
				
				break;
				
			default:
				
				printf("Valor inválido \n");
			
				break;
		}
		
	} while (r != 9);
	
	return 0;
}
