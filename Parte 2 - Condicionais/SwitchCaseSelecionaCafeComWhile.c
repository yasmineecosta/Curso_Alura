#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int opcao = 0;
	
	//Enquanto opcao não estiver entre 1 e 3
	while(opcao < 1 || opcao > 3){
		
		//Apresenta o menu
	    printf("Menu               \n");
	    printf("1 -  Espresso      \n");
	    printf("2 -  Cappuccino    \n");
	    printf("3 -  Macchiato     \n");
	    printf("Escolha uma opcao: \n");
	    
		//Lê a opção escolhida
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
	    		printf("Opcao invalida! \n");
	    		break;
		}
	}
	
    return 0;
}

