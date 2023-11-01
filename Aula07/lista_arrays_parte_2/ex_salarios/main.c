#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float salarios[100], salario = 0.0, somaTotal = 0.0, somaX = 0.0, maiorSalario = 0.0, menorSalario = 0.0, mediaSalarios = 0.0, porcentagem = 0.0;
	int r = 0, i = 0, n = 0, quantRepeticoes = 0, existe = 0, quantSalarios = 0, tamanho = 0, x = 0;
	
	for(i = 0; i < 100; i++){
		salarios[i] = 0.0;
	}
	
	
	do {
		printf("\n");
        printf("MENU - SAL�RIOS\n");
        printf("01 - Adicionar\n");
        printf("02 - Remover posi��o Y\n");
        printf("03 - Imprimir todos\n");
        printf("04 - Pesquisar sal�rio X\n");
        printf("05 - Adicionar na posi��o\n");
        printf("06 - Pesquisar a quantidade sal�rios X\n");
        printf("07 - Somar sal�rios\n");
        printf("08 - Somar sal�rios X\n");
        printf("09 - Contar sal�rios\n");
        printf("10 - Contar sal�rios X\n");
        printf("11 - Contar sal�rios maiores que X\n");
        printf("12 - Maior sal�rio\n");
        printf("13 - Menor sal�rio\n");
        printf("14 - M�dia sal�rios\n");
        printf("15 - Remover sal�rios valor X\n");
        printf("16 - Remover todos os sal�rios\n");
        printf("17 - Imprimir sal�rio posi��o Y\n");
        printf("18 - Imprimir sal�rios menores que X\n");
        printf("19 - Aplicar acr�scimo de Z%% em todos os sal�rios\n");
        printf("20 - Aplicar desconto de Z%% em sal�rios maiores que X\n");
        printf("99 - Sair\n");
        printf("Digite a op��o desejada: ");
        scanf("%i", &r);
        printf("\n");
        
        switch(r){
        	
        	case 1:
        		
        		if(tamanho < 100){
					printf("Informe o salario que se deseja adicionar: ");
					scanf("%f", &salario);
					if(salario > 0.0){
						salarios[tamanho] = salario;
						tamanho++;
						printf("Valor adicionado! \n");
					} else {
						printf("Valores nulos os negativos n�o s�o permitidos! \n");
					}
				} else {
					printf("Vetor cheio! \n");
				}
				
				break;
        		
        	case 2:
        		
        		if(tamanho == 0){
					printf("Vetor vazio! \n");
				} else {
					printf("Informe a posi��o X da qual se quer remover o sal�rio: ");
					scanf("%i", &x);
					
					if(x < 0 || x > 99){
						printf("Posi��o inv�lida \n");
					} else if (salarios[x] > 0.0){
						salarios[x] = 0.0;
						printf("Sal�rio removido \n");
						tamanho--;
					} else {
						printf("A posi��o est� vazia \n");
					} 
				}
				
				break;
        		
        	case 3:
        		
        		if(tamanho == 0){
        			printf("Vetor vazio! \n");
				} else {
					for(i = 0; i < 100; i++){
	        			if(salarios[i] > 0.0){
	        				printf("R$ %.2f \n", salarios[i]);
						}
					}
				}
				
				break;
        		
        	case 4:
        		
        		existe = 0;
        		
        		if(tamanho == 0){
        			printf("O vetor est� vazio \n");
				} else {
					printf("Informe o sal�rio do qual se deseja saber: R$ ");
	        		scanf("%f", &salario);
	        		
	        		for(i = 0; i < 100; i++){
	        			if(salarios[i] == salario && salario > 0.0){
	        				printf("O sal�rio R$ %.2f existe na posi��o %i \n", salarios[i], i);
	        				existe = 1;
	        				break;
						}
					}
				}
				
				if(existe == 1){
					printf("O valor n�o existe no vetor \n");
				}
				
				break;
        		
        	case 5:
        		
        		if(tamanho < 100){
        			
        			printf("Informe o sal�rio que se deseja adicionar: R$ ");
	        		scanf("%f", &salario);
	        		
	        		if(salario > 0){
	        			
	        			printf("Informe a posi��o que se deseja ser acessada: ");
		        		scanf("%i", &n);
		        		
		        		if(n >= 0 && n < tamanho && salarios[n] == 0.0){
		        			salarios[n] = salario;
		        			tamanho++;
		        			printf("Valor adicionado! \n");
						} else if(n < 0 || n >= tamanho){
							printf("Posi��o n�o encontrada! \n");
						} else {
							printf("Posi��o j� ocupada por outro valor \n");
						}
	        			
					} else {
						printf("Sal�rios nulos ou negativos n�o s�o permitidos! \n");
					}
        			
				} else {
					printf("O vetor est� cheio! \n");
				}
				
				break;
        		
        	case 6:
        		
        		existe = 0;
        		
        		quantRepeticoes = 0;
        		
        		if(tamanho == 0){
        			printf("O vetor est� vazio! \n");
				} else {
					
					printf("Informe o sal�rio que se deseja saber repeti��es: R$ ");
	        		scanf("%f", &salario);
	        		
	        		if(salario > 0){
	        			
	        			for(i = 0; i < tamanho; i++){
		        			if(salarios[i] == salario){
		        				existe = 1;
		        				quantRepeticoes += 1;
							}
						}
	        			
					} else {
						printf("Sal�rios nulos ou negativos n�o s�o permitidos! \n");
					}
					
					if(existe == 0){
						printf("O sal�rio informado n�o existe \n");
					} else {
						printf("Quantidade de vezes que o sal�rio R$ %.2f aparece: %i \n", salario, quantRepeticoes);
					}
				}
				
				break;
        		
        	case 7:
        		
        		somaTotal = 0.0;
        		
        		for (i = 0; i < tamanho; i++){
        			somaTotal += salarios[i];
				}
				
				printf("Soma total dos sal�rios: R$ %.2f \n", somaTotal);
				
				break;
        		
        	case 8:
        		
        		somaX = 0.0;
        		
        		quantRepeticoes = 0;
        		
        		if(tamanho == 0){
        			printf("O vetor est� vazio! \n");
				} else {
					
					printf("Informe o sal�rio que se deseja somar com as ocorr�ncias de igual valor: R$ ");
	        		scanf("%f", &salario);
	        		
	        		if(salario > 0){
	        			
	        			for(i = 0; i < tamanho; i++){
		        			if(salarios[i] == salario){
		        				quantRepeticoes += 1;
							}
						}
	        			
					} else {
						printf("Sal�rios nulos ou negativos n�o s�o permitidos! \n");
					}
					
					if(quantRepeticoes > 1){
						somaX = quantRepeticoes * salario;
						printf("Soma dos sal�rios R$ %.2f: R$ %.2f \n", salario, somaX);
					} else {
						printf("N�o existem sal�rios iguais a %.2f para somar.\n", salario);
					}
				}
				
				break;
        		
        	case 9:
        		
        		quantSalarios = 0;
        		
        		for(i = 0; i < 100; i++){
        			if(salarios[i] > 0){
        				quantSalarios += 1;
					}
				}
				
				printf("Quantidade de sal�rios: %i \n", quantSalarios);
				
				break;
        		
        	case 10:
        		
        		quantRepeticoes = 0;
        		
        		if(tamanho == 0){
        			printf("O vetor est� vazio! \n");
				} else {
					
					printf("Informe o sal�rio sobre o qual se deseja saber a quantidade de ocorr�ncias: ");
	        		scanf("%f", &salario);
	        		
	        		if(salario > 0){
	        			
	        			for(i = 0; i < tamanho; i++){
		        			if(salarios[i] == salario){
		        				quantRepeticoes += 1;
							}
						}
	        			
					} else {
						printf("Sal�rios nulos ou negativos n�o s�o permitidos! \n");
					}
					
					if(quantRepeticoes > 0){
						printf("Quantidade de vezes que o sal�rio R$ %.2f aparece: %i \n", salario, quantRepeticoes);
					} else {
						printf("O sal�rio informado n�o aparece no vetor.\n", salario);
					}
				}
				
				break;
        		
        	case 11: 
        	
        		quantSalarios = 0;
        		
        		if(tamanho == 0){
        			printf("O vetor est� vazio! \n");
				} else {
					printf("Informe o valor base: R$ ");
	        		scanf("%f", &salario);
	        		
	        		for(i = 0; i < tamanho; i++){
	        			if(salarios[i] > salario && salarios[i] > 0.0){
	        				quantSalarios += 1;
						}
					}
					
					printf("Quantidade de sal�rios maiores que R$ %.2f: %i \n", salario, quantSalarios);
					
				}
        		
				break;
        	
        	case 12:
        		
        		if(tamanho == 0){
        			printf("O vetor est� vazio \n");
				} else {
					maiorSalario = salarios[0];
        		
	        		for(i = 0; i < tamanho; i++){
	        			if(salarios[i] > maiorSalario && salarios[i] > 0.0){
	        				maiorSalario = salarios[i];
						}
					}
					
					printf("Maior sal�rio: R$ %.2f \n", maiorSalario);
				}
        		
				
				break;
        		
        	case 13:
        		
        		if(tamanho == 0){
        			printf("O vetor est� vazio! \n");
				} else {
					
					menorSalario = salarios[0];
        		
	        		for(i = 0; i < tamanho; i++){
	        			if(salarios[i] < menorSalario && salarios[i] > 0.0){
	        				menorSalario = salarios[i];
						}
					}
					
					printf("Menor sal�rio: R$ %.2f \n", menorSalario);
				}
        		
				
				break;
        		
        	case 14:
        		
        		if(tamanho == 0){
        			printf("O vetor est� vazio para fazer essa opera��o! \n");
				} else {
					
					mediaSalarios = 0.0;
	        		somaTotal = 0.0;
	        		
	        		for(i = 0; i < 100; i++){
	        			somaTotal += salarios[i];
					}
					
					mediaSalarios = somaTotal / tamanho;
					
					printf("M�dia salarial: R$ %.2f \n", mediaSalarios);
				}
				
				break;
        		
        	case 15:
        		
        		existe = 0;
        		
        		if(tamanho == 0){
					printf("Vetor vazio! \n");
				} else {
					printf("Informe o salario X que se deseja remover: ");
					scanf("%f", &salario);
					
					if (salario > 0.0){
						for(i = 0; i < 100; i++){
							if(salarios[i] == salario){
								existe += 1;
								salarios[i] = 0.0;
								tamanho--;
							}
						}
						
						if(existe == 0){
							printf("O valor informado n�o existe no vetor \n");
						}
						
					} else {
						printf("O sal�rio informado n�o pode ser nulo ou negativo \n");
					} 
				}
				
				break;
        		
        	case 16: 
        	
        		for(i = 0; i < 100; i++){
					salarios[i] = 0.0;
				}
				
				tamanho = 0;
				
				printf("Sal�rios removidos! \n");
				
				break;
        	
        	case 17:
        		
        		if(tamanho == 0){
        			printf("O vetor est� vazio para fazer essa opera��o \n");
				} else {
					printf("Informe a posi��o da qual se quer saber o sal�rio: ");
	        		scanf("%i", &n);
	        		
	        		if(n >= 0 && n < 100){
	        			if(salarios[n] > 0.0){
	        				printf("Sal�rio na posi��o %i: %.2f \n", n, salarios[n]);
						} else {
							printf("A posi��o informada est� vazia \n");
						}
					} else {
						printf("A posi��o informada n�o existe! \n");
					}
				}
				
				break;
        		
        	case 18:
        		
        		quantSalarios = 0;
        		
        		if(tamanho == 0){
        			printf("O vetor est� vazio! \n");
				} else {
					printf("Informe o valor base: R$ ");
	        		scanf("%f", &salario);
	        		
	        		printf("Sal�rios menores que R$ %.2f: \n", salario);
	        		
	        		for(i = 0; i < 100; i++){
	        			if(salarios[i] < salario && salarios[i] > 0.0){
	        				quantSalarios += 1;
	        				printf("R$ %.2f \n", salarios[i]);
						}
					}
					
					if(quantSalarios == 0){
						printf("N�o h� sal�rios menores que R$ %.2f \n");
					}
					
				}
				
				break;
        		
        	case 19:
        		
        		if(tamanho == 0){
        			printf("O vetor est� vazio e n�o � poss�vel fazer essa opera��o \n");
				} else {
					printf("Informe a porcentagem de acr�scimo desejada aos sal�rios: ");
	        		scanf("%f", &porcentagem);
	        		
	        		if(porcentagem <= 0){
	        			printf("Porcentagem nula ou negativa n�o � permitida \n");
					} else {
						for(i = 0; i < 100; i++){
	        				salarios[i] += ((salarios[i] * porcentagem) / 100);
						}
						
						printf("Porcentagem adicionada! \n");
					}
				}
        		
				break;
        		
        	case 20:
        		
        		if(tamanho == 0){
        			printf("O vetor est� vazio e n�o � poss�vel fazer essa opera��o \n");
				} else {
					printf("Informe a porcentagem de decr�scimo desejada aos sal�rios: ");
	        		scanf("%f", &porcentagem);
	        		
	        		if(porcentagem <= 0){
	        			printf("Porcentagem nula ou negativa n�o � permitida \n");
					} else {
						for(i = 0; i < 100; i++){
	        				salarios[i] -= ((salarios[i] * porcentagem) / 100);
						}
						
						printf("Porcentagem retirada! \n");
					}
				}
				
				break;
        		
        	case 99:
        		
        		printf("Encerrando a execu��o do programa... \n");
        		
        	default:
        		
        		printf("Valor inv�lido. Tente novamente \n");
        		
		}
        
	} while (r != 99);
	
	return 0;
}
