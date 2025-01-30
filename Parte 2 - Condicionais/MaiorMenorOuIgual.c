#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int a, b;
   
    //Lê os valores
    scanf("%d", &a);
    scanf("%d", &b);
    
  	//Compara os números
	if(a > b){
		printf("A é maior que B");
	}else if(a < b){
	  	printf("A é menor que B");
	}else{
		printf("A e B sao iguais");
	}
	
    return 0;
}

