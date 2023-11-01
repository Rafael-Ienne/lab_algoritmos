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
        printf("MENU - SALÁRIOS\n");
        printf("01 - Adicionar\n");
        printf("02 - Remover posição Y\n");
        printf("03 - Imprimir todos\n");
        printf("04 - Pesquisar salário X\n");
        printf("05 - Adicionar na posição\n");
        printf("06 - Pesquisar a quantidade salários X\n");
        printf("07 - Somar salários\n");
        printf("08 - Somar salários X\n");
        printf("09 - Contar salários\n");
        printf("10 - Contar salários X\n");
        printf("11 - Contar salários maiores que X\n");
        printf("12 - Maior salário\n");
        printf("13 - Menor salário\n");
        printf("14 - Média salários\n");
        printf("15 - Remover salários valor X\n");
        printf("16 - Remover todos os salários\n");
        printf("17 - Imprimir salário posição Y\n");
        printf("18 - Imprimir salários menores que X\n");
        printf("19 - Aplicar acréscimo de Z%% em todos os salários\n");
        printf("20 - Aplicar desconto de Z%% em salários maiores que X\n");
        printf("99 - Sair\n");
        printf("Digite a opção desejada: ");
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
						printf("Valores nulos os negativos não são permitidos! \n");
					}
				} else {
					printf("Vetor cheio! \n");
				}
				
				break;
        		
        	case 2:
        		
        		if(tamanho == 0){
					printf("Vetor vazio! \n");
				} else {
					printf("Informe a posição X da qual se quer remover o salário: ");
					scanf("%i", &x);
					
					if(x < 0 || x > 99){
						printf("Posição inválida \n");
					} else if (salarios[x] > 0.0){
						salarios[x] = 0.0;
						printf("Salário removido \n");
						tamanho--;
					} else {
						printf("A posição está vazia \n");
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
        			printf("O vetor está vazio \n");
				} else {
					printf("Informe o salário do qual se deseja saber: R$ ");
	        		scanf("%f", &salario);
	        		
	        		for(i = 0; i < 100; i++){
	        			if(salarios[i] == salario && salario > 0.0){
	        				printf("O salário R$ %.2f existe na posição %i \n", salarios[i], i);
	        				existe = 1;
	        				break;
						}
					}
				}
				
				if(existe == 1){
					printf("O valor não existe no vetor \n");
				}
				
				break;
        		
        	case 5:
        		
        		if(tamanho < 100){
        			
        			printf("Informe o salário que se deseja adicionar: R$ ");
	        		scanf("%f", &salario);
	        		
	        		if(salario > 0){
	        			
	        			printf("Informe a posição que se deseja ser acessada: ");
		        		scanf("%i", &n);
		        		
		        		if(n >= 0 && n < tamanho && salarios[n] == 0.0){
		        			salarios[n] = salario;
		        			tamanho++;
		        			printf("Valor adicionado! \n");
						} else if(n < 0 || n >= tamanho){
							printf("Posição não encontrada! \n");
						} else {
							printf("Posição já ocupada por outro valor \n");
						}
	        			
					} else {
						printf("Salários nulos ou negativos não são permitidos! \n");
					}
        			
				} else {
					printf("O vetor está cheio! \n");
				}
				
				break;
        		
        	case 6:
        		
        		existe = 0;
        		
        		quantRepeticoes = 0;
        		
        		if(tamanho == 0){
        			printf("O vetor está vazio! \n");
				} else {
					
					printf("Informe o salário que se deseja saber repetições: R$ ");
	        		scanf("%f", &salario);
	        		
	        		if(salario > 0){
	        			
	        			for(i = 0; i < tamanho; i++){
		        			if(salarios[i] == salario){
		        				existe = 1;
		        				quantRepeticoes += 1;
							}
						}
	        			
					} else {
						printf("Salários nulos ou negativos não são permitidos! \n");
					}
					
					if(existe == 0){
						printf("O salário informado não existe \n");
					} else {
						printf("Quantidade de vezes que o salário R$ %.2f aparece: %i \n", salario, quantRepeticoes);
					}
				}
				
				break;
        		
        	case 7:
        		
        		somaTotal = 0.0;
        		
        		for (i = 0; i < tamanho; i++){
        			somaTotal += salarios[i];
				}
				
				printf("Soma total dos salários: R$ %.2f \n", somaTotal);
				
				break;
        		
        	case 8:
        		
        		somaX = 0.0;
        		
        		quantRepeticoes = 0;
        		
        		if(tamanho == 0){
        			printf("O vetor está vazio! \n");
				} else {
					
					printf("Informe o salário que se deseja somar com as ocorrências de igual valor: R$ ");
	        		scanf("%f", &salario);
	        		
	        		if(salario > 0){
	        			
	        			for(i = 0; i < tamanho; i++){
		        			if(salarios[i] == salario){
		        				quantRepeticoes += 1;
							}
						}
	        			
					} else {
						printf("Salários nulos ou negativos não são permitidos! \n");
					}
					
					if(quantRepeticoes > 1){
						somaX = quantRepeticoes * salario;
						printf("Soma dos salários R$ %.2f: R$ %.2f \n", salario, somaX);
					} else {
						printf("Não existem salários iguais a %.2f para somar.\n", salario);
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
				
				printf("Quantidade de salários: %i \n", quantSalarios);
				
				break;
        		
        	case 10:
        		
        		quantRepeticoes = 0;
        		
        		if(tamanho == 0){
        			printf("O vetor está vazio! \n");
				} else {
					
					printf("Informe o salário sobre o qual se deseja saber a quantidade de ocorrências: ");
	        		scanf("%f", &salario);
	        		
	        		if(salario > 0){
	        			
	        			for(i = 0; i < tamanho; i++){
		        			if(salarios[i] == salario){
		        				quantRepeticoes += 1;
							}
						}
	        			
					} else {
						printf("Salários nulos ou negativos não são permitidos! \n");
					}
					
					if(quantRepeticoes > 0){
						printf("Quantidade de vezes que o salário R$ %.2f aparece: %i \n", salario, quantRepeticoes);
					} else {
						printf("O salário informado não aparece no vetor.\n", salario);
					}
				}
				
				break;
        		
        	case 11: 
        	
        		quantSalarios = 0;
        		
        		if(tamanho == 0){
        			printf("O vetor está vazio! \n");
				} else {
					printf("Informe o valor base: R$ ");
	        		scanf("%f", &salario);
	        		
	        		for(i = 0; i < tamanho; i++){
	        			if(salarios[i] > salario && salarios[i] > 0.0){
	        				quantSalarios += 1;
						}
					}
					
					printf("Quantidade de salários maiores que R$ %.2f: %i \n", salario, quantSalarios);
					
				}
        		
				break;
        	
        	case 12:
        		
        		if(tamanho == 0){
        			printf("O vetor está vazio \n");
				} else {
					maiorSalario = salarios[0];
        		
	        		for(i = 0; i < tamanho; i++){
	        			if(salarios[i] > maiorSalario && salarios[i] > 0.0){
	        				maiorSalario = salarios[i];
						}
					}
					
					printf("Maior salário: R$ %.2f \n", maiorSalario);
				}
        		
				
				break;
        		
        	case 13:
        		
        		if(tamanho == 0){
        			printf("O vetor está vazio! \n");
				} else {
					
					menorSalario = salarios[0];
        		
	        		for(i = 0; i < tamanho; i++){
	        			if(salarios[i] < menorSalario && salarios[i] > 0.0){
	        				menorSalario = salarios[i];
						}
					}
					
					printf("Menor salário: R$ %.2f \n", menorSalario);
				}
        		
				
				break;
        		
        	case 14:
        		
        		if(tamanho == 0){
        			printf("O vetor está vazio para fazer essa operação! \n");
				} else {
					
					mediaSalarios = 0.0;
	        		somaTotal = 0.0;
	        		
	        		for(i = 0; i < 100; i++){
	        			somaTotal += salarios[i];
					}
					
					mediaSalarios = somaTotal / tamanho;
					
					printf("Média salarial: R$ %.2f \n", mediaSalarios);
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
							printf("O valor informado não existe no vetor \n");
						}
						
					} else {
						printf("O salário informado não pode ser nulo ou negativo \n");
					} 
				}
				
				break;
        		
        	case 16: 
        	
        		for(i = 0; i < 100; i++){
					salarios[i] = 0.0;
				}
				
				tamanho = 0;
				
				printf("Salários removidos! \n");
				
				break;
        	
        	case 17:
        		
        		if(tamanho == 0){
        			printf("O vetor está vazio para fazer essa operação \n");
				} else {
					printf("Informe a posição da qual se quer saber o salário: ");
	        		scanf("%i", &n);
	        		
	        		if(n >= 0 && n < 100){
	        			if(salarios[n] > 0.0){
	        				printf("Salário na posição %i: %.2f \n", n, salarios[n]);
						} else {
							printf("A posição informada está vazia \n");
						}
					} else {
						printf("A posição informada não existe! \n");
					}
				}
				
				break;
        		
        	case 18:
        		
        		quantSalarios = 0;
        		
        		if(tamanho == 0){
        			printf("O vetor está vazio! \n");
				} else {
					printf("Informe o valor base: R$ ");
	        		scanf("%f", &salario);
	        		
	        		printf("Salários menores que R$ %.2f: \n", salario);
	        		
	        		for(i = 0; i < 100; i++){
	        			if(salarios[i] < salario && salarios[i] > 0.0){
	        				quantSalarios += 1;
	        				printf("R$ %.2f \n", salarios[i]);
						}
					}
					
					if(quantSalarios == 0){
						printf("Não há salários menores que R$ %.2f \n");
					}
					
				}
				
				break;
        		
        	case 19:
        		
        		if(tamanho == 0){
        			printf("O vetor está vazio e não é possível fazer essa operação \n");
				} else {
					printf("Informe a porcentagem de acréscimo desejada aos salários: ");
	        		scanf("%f", &porcentagem);
	        		
	        		if(porcentagem <= 0){
	        			printf("Porcentagem nula ou negativa não é permitida \n");
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
        			printf("O vetor está vazio e não é possível fazer essa operação \n");
				} else {
					printf("Informe a porcentagem de decréscimo desejada aos salários: ");
	        		scanf("%f", &porcentagem);
	        		
	        		if(porcentagem <= 0){
	        			printf("Porcentagem nula ou negativa não é permitida \n");
					} else {
						for(i = 0; i < 100; i++){
	        				salarios[i] -= ((salarios[i] * porcentagem) / 100);
						}
						
						printf("Porcentagem retirada! \n");
					}
				}
				
				break;
        		
        	case 99:
        		
        		printf("Encerrando a execução do programa... \n");
        		
        	default:
        		
        		printf("Valor inválido. Tente novamente \n");
        		
		}
        
	} while (r != 99);
	
	return 0;
}
