#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int vetorA[10], vetorB[10], tamanhoA = 0, tamanhoB = 0, p = 0, somaA = 0, somaB = 0, maiorA = 0, maiorB = 0, menorA = 0, menorB = 0, i = 0, j = 0;
	float mediaA = 0.0, mediaB = 0.0;
	
	for(i = 0; i < 10; i++){
		vetorA[i] = 0;
	}
	
	for(i = 0; i < 10; i++){
		vetorB[i] = 0;
	}
	
	int r = 0;
	
	do {
		printf("\n");
        printf("\MENU - VETORES A E B\n");
        printf("1 - Adicionar vetor A\n");
        printf("2 - Adicionar vetor B\n");
        printf("3 - Remover do vetor A valor da posição X\n");
        printf("4 - Remover do vetor B valor da posição X\n");
        printf("5 - Imprimir vetor A\n");
        printf("6 - Imprimir vetor B\n");
        printf("7 - Contar valores vetor A\n");
        printf("8 - Contar valores vetor B\n");
        printf("9 - Somar valores de cada vetor e apresentar\n");
        printf("10 - Qual vetor tem maior quantidade de valores?\n");
        printf("11 - Qual vetor tem a maior soma de valores?\n");
        printf("12 - Transferir valores Pares do vetor A para o B\n");
        printf("13 - Transferir valores Ímpares do vetor B para o A\n");
        printf("14 - Media de valores de cada vetor\n");
        printf("15 - Qual vetor apresenta a maior média?\n");
        printf("16 - Maior valor de cada vetor\n");
        printf("17 - Menor valor de cada vetor\n");
        printf("18 - Qual vetor apresenta o maior valor?\n");
        printf("99 - Sair\n");

        printf("Digite a opção desejada: ");
        scanf("%d", &r);
        
        printf("\n");
        
        switch(r){
        	
        	case 1:
        		
                if (tamanhoA < 10) {
                    printf("Informe um valor para adicionar ao vetor A: ");
                    scanf("%i", &vetorA[tamanhoA]);
                    tamanhoA++;
                    printf("Valor adicionado \n");
                } else {
                    printf("Não é possível adicionar um valor ao vetor A, pois está cheio \n");
                }
                
                printf("\n");
                break;

            case 2:
            	
                if (tamanhoB < 10) {
                    printf("Digite um valor para adicionar ao vetor B: ");
                    scanf("%i", &vetorB[tamanhoB]);
                    tamanhoB++;
                    printf("Valor adicionado \n");
                } else {
                    printf("Não é possível adicionar um valor ao vetor B, pois está cheio \n");
                }
                break;

            case 3:
            	
                if (tamanhoA > 0) {
                    printf("Digite a posição (0 a %i) para remover do vetor A: ", tamanhoA - 1);
                    scanf("%i", &p);
                    if (p >= 0 && p < tamanhoA) {
                        for (i = p; i < tamanhoA - 1; i++) {
                            vetorA[i] = vetorA[i + 1];
                        }
                        tamanhoA--;
                        printf("Valor removido \n");
                    } else {
                        printf("Posição não existente no vetor \n");
                    }
                } else {
                    printf("O vetor A está vazio.\n");
                }
                break;

            case 4:
            	
                if (tamanhoB > 0) {
                    printf("Digite a posição (0 a %i) para remover do vetor B: ", tamanhoB - 1);
                    scanf("%d", &p);
                    if (p >= 0 && p < tamanhoB) {
                        for (i = p; i < tamanhoB - 1; i++) {
                            vetorB[i] = vetorB[i + 1];
                        }
                        tamanhoB--;
                        printf("Valor removido \n");
                    } else {
                        printf("Posição não existente no vetor\n");
                    }
                } else {
                    printf("O vetor B está vazio.\n");
                }
                break;

            case 5:
            	
                if (tamanhoA > 0) {
                    printf("Vetor A: ");
                    for (i = 0; i < tamanhoA; i++) {
                    	printf("%i ", vetorA[i]);
                    }
                    printf("\n");
                } else {
                    printf("O vetor A está vazio.\n");
                }
                break;

            case 6:
            	
                if (tamanhoB > 0) {
                    printf("Vetor B: ");
                    for (i = 0; i < tamanhoB; i++) {
                    	printf("%i ", vetorB[i]);	
                    }
                    printf("\n");
                } else {
                    printf("O vetor B está vazio.\n");
                }
                break;

            case 7:
            	
                printf("Número de valores no vetor A: %d\n", tamanhoA);
                break;

            case 8:
            	
                printf("Número de valores no vetor B: %d\n", tamanhoB);
                break;

            case 9:
            	
                somaA = 0;
                somaB = 0;
                
                for (i = 0; i < tamanhoA; i++) {
                    somaA += vetorA[i];
                }
                
                for (i = 0; i < tamanhoB; i++) {
                    somaB += vetorB[i];
                }
                
                printf("Soma dos valores em A: %i \n", somaA);
                printf("Soma dos valores em B: %i \n", somaB);
                
                break;

            case 10:
            	
                if (tamanhoA > tamanhoB) {
                    printf("O vetor A tem mais valores \n");
                } else if (tamanhoB > tamanhoA) {
                    printf("O vetor B tem mais valores \n");
                } else {
                    printf("Os vetores A e B possuem a mesma quantidade de valores \n");
                }
                
                break;

            case 11:
            	
                somaA = 0;
                somaB = 0;
                
                for (i = 0; i < tamanhoA; i++) {
                    somaA += vetorA[i];
                }
                for (i = 0; i < tamanhoB; i++) {
                    somaB += vetorB[i];
                }
                if (somaA > somaB) {
                    printf("O vetor A tem maior soma de valores \n");
                } else if (somaB > somaA) {
                    printf("O vetor B tem maior soma de valores \n");
                } else {
                    printf("Os vetores A e B possuem a mesma soma de valores \n");
                }
                break;

            case 12:
            	
                for (i = 0; i < tamanhoA; i++) {
                    if (vetorA[i] % 2 == 0) {
                        if (tamanhoB < 10) {
                            vetorB[tamanhoB] = vetorA[i];
                            tamanhoB++;
                            for (j = i; j < tamanhoA - 1; j++) {
                                vetorA[j] = vetorA[j + 1];
                            }
                            tamanhoA--;
                            i--;
                            printf("Valores pares transferidos \n");
                        } else {
                            printf("O vetor B está cheio. Não é possível transferir mais valores pares \n");
                            break;
                        }
                    }
                }
                break;

            case 13:
            	
                for (i = 0; i < tamanhoB; i++) {
                    if (vetorB[i] % 2 != 0) {
                        if (tamanhoA < 10) {
                            vetorA[tamanhoA] = vetorB[i];
                            tamanhoA++;
                            for (j = i; j < tamanhoB - 1; j++) {
                                vetorB[j] = vetorB[j + 1];
                            }
                            tamanhoB--;
                            i--; 
                            printf("Valores ímpares transferidos \n");
                        } else {
                            printf("O vetor A está cheio. Não é possível transferir mais valores ímpares \n");
                            break;
                        }
                    }
                }
                break;

            case 14:
            	
                if (tamanhoA > 0) {
                	
                    mediaA = 0;
                    
                    for (i = 0; i < tamanhoA; i++) {
                        mediaA += vetorA[i];
                    }
                    
                    mediaA /= tamanhoA;
                    printf("Média dos valores em A: %f \n", mediaA);
                    
                } else {
                    printf("O vetor A está vazio.\n");
                }

                if (tamanhoB > 0) {
                	
                    mediaB = 0;
                    
                    for (i = 0; i < tamanhoB; i++) {
                        mediaB += vetorB[i];
                    }
                    
                    mediaB /= tamanhoB;
                    printf("Média dos valores em B: %f \n", mediaB);
                    
                } else {
                    printf("O vetor B está vazio \n");
                }
                break;

            case 15:
            	
                if (tamanhoA > 0 && tamanhoB > 0) {
                	
                    mediaA = 0;
                    mediaB = 0;
                    
                    for (i = 0; i < tamanhoA; i++) {
                        mediaA += vetorA[i];
                    }
                    
                    mediaA /= tamanhoA;
                    
                    for (i = 0; i < tamanhoB; i++) {
                        mediaB += vetorB[i];
                    }
                    
                    mediaB /= tamanhoB;
                    
                    if (mediaA > mediaB) {
                        printf("O vetor A possui maior média \n");
                    } else if (mediaB > mediaA) {
                        printf("O vetor B possui maior média \n");
                    } else {
                        printf("Os vetores A e B possuem a mesma média \n");
                    }
                } else {
                    printf("Pelo menos um dos vetores está vazio, não sendo possível comparar as médias \n");
                }
                break;

            case 16:
            	
                if (tamanhoA > 0) {
                	
                    maiorA = vetorA[0];
                    
                    for (i = 0; i < tamanhoA; i++) {
                        if (vetorA[i] > maiorA) {
                            maiorA = vetorA[i];
                        }
                    }
                    printf("Maior valor em A: %i \n", maiorA);
                } else {
                    printf("O vetor A está vazio.\n");
                }

                if (tamanhoB > 0) {
                    maiorB = vetorB[0];
                    for (i = 0; i < tamanhoB; i++) {
                        if (vetorB[i] > maiorB) {
                            maiorB = vetorB[i];
                        }
                    }
                    printf("Maior valor em B: %i \n", maiorB);
                } else {
                    printf("O vetor B está vazio \n");
                }
                break;

            case 17:
            	
                if (tamanhoA > 0) {
                	
                    menorA = vetorA[0];
                    
                    for (i = 0; i < tamanhoA; i++) {
                        if (vetorA[i] < menorA) {
                            menorA = vetorA[i];
                        }
                    }
                    printf("Menor valor em A: %i \n", menorA);
                } else {
                    printf("O vetor A está vazio \n");
                }

                if (tamanhoB > 0) {
                    menorB = vetorB[0];
                    for (i = 0; i < tamanhoB; i++) {
                        if (vetorB[i] < menorB) {
                            menorB = vetorB[i];
                        }
                    }
                    printf("Menor valor em B: %i \n", menorB);
                } else {
                    printf("O vetor B está vazio \n");
                }
                break;

            case 18:
            	
                if (tamanhoA > 0 && tamanhoB > 0) {
                    maiorA = vetorA[0];
                    maiorB = vetorB[0];
                    for (i = 0; i < tamanhoA; i++) {
                        if (vetorA[i] > maiorA) {
                            maiorA = vetorA[i];
                        }
                    }
                    for (i = 0; i < tamanhoB; i++) {
                        if (vetorB[i] > maiorB) {
                            maiorB = vetorB[i];
                        }
                    }
                    if (maiorA > maiorB) {
                        printf("O vetor A tem o maior valor \n");
                    } else if (maiorB > maiorA) {
                        printf("O vetor B tem o maior valor \n");
                    } else {
                        printf("Os vetores A e B possuem o mesmo maior valor \n");
                    }
                }else {
                    printf("Um dos vetores está vazio, não sendo possível determinar o maior valor.\n");
                }
                break;

            case 99:
            	
                printf("Encerrando o programa.\n");
                break;

            default:
            	
                printf("Valor inválido. Tente novamente.\n");
                break;
		}
		
	} while (r != 99);
	
	return 0;
}
