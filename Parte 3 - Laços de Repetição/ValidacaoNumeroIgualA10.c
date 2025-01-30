#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 0;
	
	while(i != 10){
		
		printf("Digite 10:");
		scanf("%d", &i);
		
		//Quando chega aqui, o código volta para
		//a linha 8 e verifica se o valor digitado
		//é 10 para poder continuar, ou se ele 
		//NÃO FOR == 10, então executa de novo
	}
	
	printf("Fim");
	
    return 0;
}

