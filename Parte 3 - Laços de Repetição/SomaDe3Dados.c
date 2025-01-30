#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	//Usa o tempo atual como semente
	srand(time(NULL));   
	
	//Dados de 1 a 6
	int dado1 = (rand() % 6) + 1; 
	int dado2 = (rand() % 6) + 1; 
	int dado3 = (rand() % 6) + 1; 
	
	//Soma dos resultados
	int soma = dado1 + dado2 + dado3;
	
	//Imprime o número gerado
	printf("Valores: %d %d %d \n", dado1,dado2,dado3);
	printf("Resultado da soma: %d", soma);

    return 0;
}

