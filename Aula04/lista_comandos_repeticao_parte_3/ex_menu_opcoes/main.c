#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int escolhaPrincipal = 0, escolhaSubmenu = 0;
	
		do{
		printf("..:: MENU SISTEMA CLIENTES ::..\n");
        printf("1. CLIENTES\n");
        printf("2. FORNECEDORES\n");
        printf("3. CIDADES\n");
        printf("9. SAIR\n");
        printf("Escolha uma opção: ");
        scanf("%i", &escolhaPrincipal);
        printf("\n");
        
        switch (escolhaPrincipal) {
            case 1:
            	printf("Pressionada a opção 1 \n");
                while (escolhaSubmenu != 19) {
                	printf("\n");
                    printf("Menu CLIENTES\n");
                    printf("11. CADASTRAR CLIENTE\n");
                    printf("12. ALTERAR CLIENTE\n");
                    printf("13. PESQUISAR CLIENTE\n");
                    printf("14. EXCLUIR CLIENTE\n");
                    printf("19. SAIR\n");
                    printf("Escolha uma opção: ");
                    scanf("%d", &escolhaSubmenu);

                    if (escolhaSubmenu == 19) {
                    	printf("\n");
                        printf("Saindo do submenu CLIENTES.\n");
                        printf("\n");
                    }
					
					printf("\n");
                    printf("Pressionada a opção %d\n", escolhaSubmenu);
                    printf("\n");
                }
                break;

            case 2:
            	printf("Pressionada a opção 2 \n");
                while (escolhaSubmenu != 29) {
                	printf("\n");
                    printf("Menu FORNECEDORES\n");
                    printf("21. CADASTRAR FORNECEDOR\n");
                    printf("22. ALTERAR FORNECEDOR\n");
                    printf("23. PESQUISAR FORNECEDOR\n");
                    printf("24. EXCLUIR FORNECEDOR\n");
                    printf("29. SAIR\n");
                    printf("Escolha uma opção: ");
                    scanf("%d", &escolhaSubmenu);

                    if (escolhaSubmenu == 29) {
                    	printf("\n");
                        printf("Saindo do submenu FORNECEDORES.\n");
                        printf("\n");
                    }

					printf("\n");
                    printf("Pressionada a opção %d\n", escolhaSubmenu);
                    printf("\n");
                }
                break;

            case 3:
            	printf("Pressionada a opção 3 \n");
                while (escolhaSubmenu != 39) {
                	printf("\n");
                    printf("Menu CIDADES\n");
                    printf("31. CADASTRAR CIDADE\n");
                    printf("32. ALTERAR CIDADE\n");
                    printf("33. PESQUISAR CIDADE\n");
                    printf("34. EXCLUIR CIDADE\n");
                    printf("39. SAIR\n");
                    printf("Escolha uma opção: ");
                    scanf("%d", &escolhaSubmenu);

                    if (escolhaSubmenu == 39) {
                    	printf("\n");
                        printf("Saindo do submenu CIDADES.\n");
                        printf("\n");
                    }

					printf("\n");
                    printf("Pressionada a opção %d\n", escolhaSubmenu);
                    printf("\n");
                }
                break;
                
            case 9:
            	printf("Pressionada a opção 9 \n");
            	break;
        }
    }	while(escolhaPrincipal != 9);
	
	return 0;
}
