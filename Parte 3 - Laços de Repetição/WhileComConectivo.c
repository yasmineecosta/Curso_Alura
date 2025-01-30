#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a = 0;
	int b = 0;
	
	while(a < 10 || b < 10){
		
		printf("Digite dois valores maiores que 10. \n");
		
		printf("Digite um valor para a:");
		scanf("%d", &a);
		
		printf("Digite um valor para b:");
		scanf("%d", &b);
		
		//Quando chega aqui, o código volta para
		//a linha 8 e verifica se os dois valores
		//são maiores ou iguais a 10 OU se algum
		//deles é menor que 10
	}
	
	printf("Fim");
	
    return 0;
}

