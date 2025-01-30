#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 0;
	
    for(i = 10; i > 0; i = i - 3){
	
		//Imprime i e pula uma linha
		printf("%d \n", i);
			
		//Quando chega aqui, o código volta para
		//a linha 8 e verifica se a condição
		//i > 0 continua verdadeira, para 
		//executar o laço novamente ou sair
	}
    return 0;
}

