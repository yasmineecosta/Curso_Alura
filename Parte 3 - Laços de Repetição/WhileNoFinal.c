#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 10;
	
	do{
		
		printf("Vai ser executado ao menos uma vez\n");
		printf("Mesmo que a condicao seja falsa.");
			
	}while(i < 5);
	
	//Usamos do while() quando o código precisará
	//ser executado ao menos uma vez, independente
	//da comparação feita
	
    return 0;
}

