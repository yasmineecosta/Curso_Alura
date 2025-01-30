#include <stdio.h>
#include <stdlib.h>

int main(){
    //Apresenta o menu
    printf("Menu               \n");
    printf("1 -  Espresso      \n");
    printf("2 -  Cappuccino    \n");
    printf("3 -  Macchiato     \n");
    printf("Escolha uma opcao: \n");
    
	//Lê a opção escolhida
	int opcao;
	scanf("%d", &opcao);
    
    //Seleção da opção
    switch(opcao){
    	case 1:
    		printf("Espresso escolhido.");
    		break;
    	case 2:
    		printf("Cappuccino escolhido.");
			break;
    	case 3:
    		printf("Macchiato escolhido.");
    		break;
    	default:
    		printf("Opcao invalida!");
    		break;
	}

    return 0;
}

