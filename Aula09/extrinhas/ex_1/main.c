#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct{
	int rg;
	char nome[30];
	int idade;
	float peso;
}tipoAnimal;

tipoAnimal animais[20];
int r = 0, x = 0, j = 0;

void limparBase(){
	int i = 0;
	for(i = 0; i < 20; i++){
		animais[i].rg = 0;
		animais[i].idade = 0;
		strcpy(animais[i].nome,"NU");
		animais[i].peso = 0;
	}
}

void relatorio(){
	for(x = 0; x < 20; x++ ){
		if(animais[x].rg != 0){
			printf("Relatorio: \n");
			printf("Nome: %s \n", animais[x].nome);
			printf("RG : %i \n", animais[x].rg);
			printf("Idade : %i \n", animais[x].idade);
			printf("Peso : %.2f kg \n", animais[x].peso);
		}
	}
}

void pesquisarRg(){
	int rg = 0, i = 0;
	
	printf("Informe o rg do animal: ");
	scanf("%i", &rg);
	
	for(i = 0; i < 20; i++){
		if(animais[i].rg == rg){
			printf("Relatorio: \n");
			printf("Nome: %s \n", animais[i].nome);
			printf("RG : %i \n", animais[i].rg);
			printf("Idade : %i \n", animais[i].idade);
			printf("Peso : %.2f kg \n", animais[i].peso);
			rg = -1;
			break;
		}
	}
	
	if(rg != 0){
		printf("RG nao encontrado \n");
	}
}

int main(int argc, char *argv[]) {
	
	int i = 0;
	
	limparBase();
	
	do{
		printf("\n");
		printf("SISTEMA VACINACAO: \n");
		printf("1. Cadastrar  \n");
		printf("2. Relatorio   \n");
		printf("3. Pesquisar(RG)   \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &r);
		printf("\n");
		
		switch(r){
			
			case 1:
				
				j = -1;
				
				for(i = 0; i < 20; i++){
					if(animais[i].rg == 0){
						j = i;
						break;
					}
				}
				
				if(j != -1){
					printf("Informe o nome do animal: ");
					scanf("%s", &animais[i].nome);
					printf("Informe o RG do animal: ");
					scanf("%i", &animais[i].rg);
					printf("Informe a idade do animal: ");
					scanf("%i", &animais[i].idade);
					printf("Informe o peso do animal: ");
					scanf("%f", &animais[i].peso);
				} else {
					printf("O vetor esta cheio");
				}
				
				break;
				
			case 2:
				relatorio();
				break;
			case 3:
				
				pesquisarRg();
				break;
			case 9:
				
				
				break;
			
		}
	}while(r != 9);
	
	return 0;
}
