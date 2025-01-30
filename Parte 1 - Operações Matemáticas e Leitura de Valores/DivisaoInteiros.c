#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;//Define valor a
    int b;//Define valor b
    
    scanf("%d", &a); //Lê valor a
    scanf("%d", &b); //Lê valor b
    
    //Resultado da soma
    int resultado = a / b; 
    
    //Exibe o resultado na tela
    printf("Resultado: %d", resultado); 
    return 0;
}

