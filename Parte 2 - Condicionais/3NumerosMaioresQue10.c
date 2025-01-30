#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int a,b,c;
   
    //Lê 3 valores
    scanf("%d %d %d", &a, &b, &c);
    
  	//Analisa se são maiores que 10
	if(a > 10 && b > 10 && c > 10){
		printf("Todos sao maiores que 10");
	}else{
		printf("Um dos valores nao e maior que 10");
	}
	
    return 0;
}

