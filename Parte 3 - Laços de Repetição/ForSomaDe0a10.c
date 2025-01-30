#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i;
	int soma = 0;
	
    for(int i = 0; i < 10; i++){
	
		//Imprime i e pula uma linha
		printf("i = %d (Soma: %d) \n", i, soma);
	
		//Incrementa o valor de i na soma
		//soma recebe -> o valor atual de soma + i
		soma = soma + i;
	}
	
	printf("Soma: %d", soma);
	
    return 0;
}

