#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	//Usa o tempo atual como semente
	srand(time(NULL));   
	
	//Cria um número aleatório de 5 a 14
	int maximo = 14;
	int minimo = 5;
	
	//Traduzindo para a fórmula
	//                   14   -   5    + 1 = 10
	int r = (rand() % (maximo - minimo + 1)) + minimo; 
	
	//então teremos um numero de 0 a 9 + 5
	//ou seja, o mínimo será 5 e o máximo será 14
	
	//Imprime o número gerado
	printf("Numero gerado: %d", r);

    return 0;
}

