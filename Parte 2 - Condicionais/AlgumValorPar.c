#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int a,b;
   
    //Lê os valores
    scanf("%d", &a);
    scanf("%d", &b);
    
  	//Analisa se algum valor é par
	if((a % 2 == 0) || ( b % 2 == 0)){
		printf("Algum valor foi par");
	}else{
		printf("Nenhum valor foi par");
	}
	
    return 0;
}

