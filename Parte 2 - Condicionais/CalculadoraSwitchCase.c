#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a, b, opcao, resultado;
	
	printf("Digite dois valores:");
	scanf("%d %d", &a, &b);
	
    //Apresenta o menu
    printf("Menu               \n");
    printf("1 -  Somar         \n");
    printf("2 -  Subtrair     \n");
    printf("Escolha uma opcao:");
    
	//Lê a opção escolhida
	scanf("%d", &opcao);
    
    //Seleção da opção
    switch(opcao){
    	case 1:
    		resultado = a +b;  //Faz a Soma
    		break;
    	case 2:
    		resultado = a - b; //Faz a Subtração
			break;
    	default:
    		printf("Opcao invalida!");
    		break;
	}
	
	printf("Resultado: %d", resultado);

    return 0;
}

