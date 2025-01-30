#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 0;
	
	while(i < 10){
		
		printf("Digite um valor maior que 10:");
		scanf("%d", &i);
		
		//Quando chega aqui, o código volta para
		//a linha 8 e verifica se o valor digitado
		//foi errado (menor que 10), ou se o programa
		//pode continuar (valor maior/igual a 10)
	}
	
	printf("Fim");
	
    return 0;
}

