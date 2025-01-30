#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 10;
	
	while(i > -1){
		
		//Imprime i e pula uma linha
		printf("%d \n", i);
		
		//Diminui em 1 o valor do i atual
		i -= 1;
		//Também poderia ser i = i - 1;
		
		//Quando chega aqui, o código volta para
		//a linha 8 e verifica se a condição
		//i > 0 continua verdadeira, para 
		//executar o laço novamente ou sair
	}
    return 0;
}

