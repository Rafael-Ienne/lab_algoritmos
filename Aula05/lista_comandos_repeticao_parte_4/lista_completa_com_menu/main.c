#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int option = 0, i = 0, valor1 = 0, valor2 = 0, valor3 = 0, interm = 0;
	
	do{
		printf("\n");
		printf("EXERC. COMANDOS REPETICAO PT. 4 \n");
		printf("1. Imprimir nomes x vezes e repetir \n");
		printf("2. Imprimir múltiplos \n");
		printf("3. Imprimir 3 contagens \n");
		printf("4. Imprimir 3 contagens decrescente \n");
		printf("5. Somar intervalos 3 valores \n");
		printf("6. Produto intervalo 3 valores \n");
		printf("7. Somar salários(máximo 5 ou até informar 'Não') \n");
		printf("8. Menu interativo 6 opções \n");
		printf("9. Sair \n");
		printf("Digite a opção: ");
		scanf("%i", &option);
		printf("\n");
		
		if(option == 1){
			int n = 0, r = 0;
			char name[30];
			
			printf("IMPRIMIR NOMES X VEZES E REPETIR \n");
			printf("\n");
			
			do{
				printf("Informe o seu nome: ");
				scanf("%s", &name);
				printf("Informe o número de repetições: ");
				scanf("%i", &n);
				
				for(i = 1; i <= n; i++){
					printf("%i - %s \n", i, name);
				}
				
				printf("\n");
				
				printf("Deseja repetir o processamento? (0 = Não; 1 = Sim): ");
				scanf("%i", &r);
				printf("\n");
			} while(r != 0);
			
			
		} else if(option == 2){
			int cont = 0, inc = 0;
			
			printf("IMPRIMIR MÚLTIPLOS \n");
			printf("\n");
			
			printf("Informe um número inteiro: ");
			scanf("%i", &cont);
			printf("Informe o valor do incremento: ");
			scanf("%i", &inc);
			
			if(inc == 0){
				inc = 1;
				for(i = 0; i <= cont; i++){
					printf("%i \n", i);
				}
			} else{
				for(i = 0; i <= cont; i = i + inc){
					printf("%i \n", i);
				}
			}
			
		} else if(option == 3){
			
			printf("IMPRIMIR 3 CONTAGENS \n");
			printf("\n");
			
			printf("Informe um valor inteiro: ");
			scanf("%i", &valor1);
			printf("Informe outro valor inteiro: ");
			scanf("%i", &valor2);
			printf("Informe outro valor inteiro: ");
			scanf("%i", &valor3);
			printf("\n");
			
			printf("Impressão contagem do valor %i: \n", valor1);
			for(i = 1; i <= valor1; i++){
				printf("%i \n", i);
			}
			
			printf("\n");
			
			printf("Impressão contagem do valor %i: \n", valor2);
			for(i = 1; i <= valor2; i++){
				printf("%i \n", i);
			}
			
			printf("\n");
			
			printf("Impressão contagem do valor %i: \n", valor3);
			for(i = 1; i <= valor3; i++){
				printf("%i \n", i);
			}
			
		} else if(option == 4){
			
			printf("IMPRIMIR 3 CONTAGENS DECRESCENTE \n");
			printf("\n");
			
			printf("Informe um valor inteiro: ");
			scanf("%i", &valor1);
			printf("Informe outro valor inteiro: ");
			scanf("%i", &valor2);
			printf("Informe outro valor inteiro: ");
			scanf("%i", &valor3);
			printf("\n");
			
			printf("Impressão contagem do valor %i: \n", valor1);
			for(i = valor1; i >= 1; i--){
				printf("%i \n", i);
			}
			
			printf("\n");
			
			printf("Impressão contagem do valor %i: \n", valor2);
			for(i = valor2; i >= 1; i--){
				printf("%i \n", i);
			}
			
			printf("\n");
			
			printf("Impressão contagem do valor %i: \n", valor3);
			for(i = valor3; i >= 1; i--){
				printf("%i \n", i);
			}
			
		}else if(option == 5){
			int soma1 = 0, soma2 = 0, soma3 = 0;
			
			printf("SOMAR INTERVALOS 3 VALORES \n");
			printf("\n");
			
			printf("Informe um valor inteiro: ");
			scanf("%i", &valor1);
			printf("Informe outro valor inteiro: ");
			scanf("%i", &valor2);
			printf("Informe outro valor inteiro: ");
			scanf("%i", &valor3);
			printf("\n");
			
			if(valor1 == valor2 || valor1 == valor3 || valor2 == valor3){
				printf("Valores iguais não são válidos!");
				printf("\n");
			} else {
			
				for(i = 1; i <= valor1; i++){
					soma1 += i;
				}
				
				for(i = 1; i <= valor2; i++){
					soma2 += i;
				}
				
				for(i = 1; i <= valor3; i++){
					soma3 += i;
				}
			
				printf("Resultado da soma dos valores do primero intervalo (1 até %i): %i \n", valor1, soma1);
				printf("Resultado da soma dos valores do segundo intervalo (1 até %i): %i \n", valor2, soma2);
				printf("Resultado da soma dos valores do terceiro intervalo (1 até %i): %i \n", valor3, soma3);
			
				if(soma1 > soma2){
					interm = soma1;
					soma1 = soma2;
					soma2 = interm;
				}
				
				if(soma1 > soma3){
					interm = soma1;
					soma1 = soma3;
					soma3 = interm;
				}
				if(soma2 > soma3){
					interm = soma2;
					soma2 = soma3;
					soma3 = interm;
				}
				
				if(valor1 > valor2){
					interm = valor1;
					valor1 = valor2;
					valor2 = interm;
				}
				
				if(valor1 > valor3){
					interm = valor1;
					valor1 = valor3;
					valor3 = interm;
				}
				
				if(valor2 > valor3){
					interm = valor2;
					valor2 = valor3;
					valor3 = interm;
				}
				
				printf("Menor valor de soma: %i \n", soma1);
				printf("Maior valor de soma: %i \n", soma3);
				printf("Valores ordenados do menor para o maior: %i, %i, %i \n", valor1, valor2, valor3);
			}
			
		} else if(option == 6){
			int prodA = 1, prodB = 1, prodC = 1;
			
			printf("PRODUTO INTERVALO 3 VALORES \n");
			printf("\n");
			
			printf("Informe um valor inteiro: ");
			scanf("%i", &valor1);
			printf("Informe outro valor inteiro: ");
			scanf("%i", &valor2);
			printf("Informe outro valor inteiro: ");
			scanf("%i", &valor3);
			printf("\n");
			
			if(valor1 == valor2 || valor1 == valor3 || valor2 == valor3){
				printf("Valores iguais não são válidos!");
				printf("\n");
			} else {
			
				for(i = 1; i <= valor1; i++){
					prodA *= i;
				}
				
				for(i = 1; i <= valor2; i++){
					prodB *= i;
				}
				
				for(i = 1; i <= valor3; i++){
					prodC *= i;
				}
				
				printf("Resultado do produto dos valores do primero intervalo (1 até %i): %i \n", valor1, prodA);
				printf("Resultado do produto dos valores do segundo intervalo (1 até %i): %i \n", valor2, prodB);
				printf("Resultado do produto dos valores do terceiro intervalo (1 até %i): %i \n", valor3, prodC);
				
				if(prodA > prodB){
					interm = prodA;
					prodA = prodB;
					prodB = interm;
				}
				
				if(prodA > prodC){
					interm = prodA;
					prodA = prodC;
					prodC = interm;
				}
				if(prodB > prodC){
					interm = prodB;
					prodB = prodC;
					prodC = interm;
				}
				
				if(valor1 > valor2){
					interm = valor1;
					valor1 = valor2;
					valor2 = interm;
				}
				
				if(valor1 > valor3){
					interm = valor1;
					valor1 = valor3;
					valor3 = interm;
				}
				
				if(valor2 > valor3){
					interm = valor2;
					valor2 = valor3;
					valor3 = interm;
				}
				
				printf("Menor valor de produto: %i \n", prodA);
				printf("Maior valor de produto: %i \n", prodC);
				printf("Valores ordenados do menor para o maior: %i, %i, %i \n", valor1, valor2, valor3);
			}
			
		} else if(option == 7){
			
			float sal = 0, somaSal = 0, c = 1;
			int escolha = 0;
			
			printf("SOMAR SALÁRIOS (MÁXIMO 5 OU ATÉ INFORMAR ‘NAO’) \n");
			printf("\n");
			
			do{
				printf("Informe o valor de um salário: R$ ");
				scanf("%f", &sal);
				somaSal += sal;
				printf("Deseja informar outro salário (0 = Não, 1 = Sim)? ");
				scanf("%i", &escolha);
				c = c + 1;
			} while(c != 6 && escolha != 0);
			
			printf("A soma dos salários informados é: R$ %.2f \n", somaSal);
			
		} else if(option == 8){
			
			int answer = 0, number = 0, quantPar = 0, quantImpar = 0, prodPar = 1, prodImpar = 1;
			
		    do{
				printf("\n");
				printf("MENU INTERATIVO 6 OPCOES \n");
				printf("1. Contar pares \n");
				printf("2. Contar ímpares \n");
				printf("3. Produto pares \n");
				printf("4. Produto ímpares \n");
				printf("9. Sair \n");
				printf("Digite a opção: ");
				scanf("%i", &answer);
				printf("\n");
				
				switch(answer){
					
					case 1:
						printf("Contar pares \n");
						printf("\n");
						
						printf("Informe um número inteiro: ");
						scanf("%i", &number);
						for(i = 1; i <= number; i++){
							if(i % 2 == 0){
								quantPar += 1;
							}
						}
						printf("Quantidade de valores pares no intervalo[1, %i]: %i", number, quantPar);
						printf("\n");
						break;
						
					case 2:
						printf("Contar ímpares \n");
						printf("\n");
						
						printf("Informe um número inteiro: ");
						scanf("%i", &number);
						for(i = 1; i <= number; i++){
							if(i % 2 != 0){
								quantImpar += 1;
							}
						}
						printf("Quantidade de valores ímpares no intervalo[1, %i]: %i", number, quantImpar);
						printf("\n");
						break;
						
					case 3:
						
						printf("\n");
						printf("Produto pares \n");
						printf("\n");
						
						printf("Informe um número inteiro: ");
						scanf("%i", &number);
						for(i = 1; i <= number; i++){
							if(i % 2 == 0){
								prodPar *= i;
							}
						}
						printf("Produto dos valores pares no intervalo[1, %i]: %i", number, prodPar);
						printf("\n");
						break;
						
					case 4:
						
						printf("Produto ímpares \n");
						printf("\n");
						
						printf("Informe um número inteiro: ");
						scanf("%i", &number);
						for(i = 1; i <= number; i++){
							if(i % 2 != 0){
								prodImpar *= i;
							}
						}
						printf("Produto dos valores ímpares no intervalo[1, %i]: %i", number, prodImpar);
						printf("\n");
						break;
						
					case 9:
						printf("Retornando ao menu principal... \n");
						printf("\n");
						break;
						
				}
				
			}while(answer != 9);
			
		} else if(option == 9){
			printf("Encerrando a execução do programa... \n");
		}
		
	} while(option != 9);
	
	system("pause");
	
	return 0;
}
