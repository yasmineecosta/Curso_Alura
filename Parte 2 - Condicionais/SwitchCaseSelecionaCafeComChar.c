#include <stdio.h>
#include <stdlib.h>

int main(){
    //Apresenta o menu
    printf("Menu               \n");
    printf("a -  Espresso      \n");
    printf("b -  Cappuccino    \n");
    printf("c -  Macchiato     \n");
    printf("Escolha uma opcao: \n");
    
	//Lê a opção escolhida
	char opcao;
	scanf("%c", &opcao);
    
    //Seleção da opção
    switch(opcao){
    	case 'a':
    		printf("Espresso escolhido.");
    		break;
    	case 'b':
    		printf("Cappuccino escolhido.");
			break;
    	case 'c':
    		printf("Macchiato escolhido.");
    		break;
    	default:
    		printf("Opcao invalida!");
    		break;
	}

    return 0;
}

