#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a = 0;
	int b = 0;
	
	while(!(a > 5 && a < 10) || !(b > 5 && b < 10)){
		
		printf("\nDigite valores entre 5 e 10. \n");
		
		printf("Digite um valor para a:");
		scanf("%d", &a);
		
		printf("Digite um valor para b:");
		scanf("%d", &b);
		
		//Quando chega aqui, o código volta para
		//a linha 8 e verifica se os dois valores
		//estão no intervalo de 5 a 10
	}
	
	printf("Soma: %d", a + b);
	
    return 0;
}

