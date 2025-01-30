#include <stdio.h>
#include <stdlib.h>

int main(){
    float a = 5.4;//Define valor a
    float b = 2.5;//Define valor b
    
    //Resultado da divisão
    float resultado = a / b; 
    
    //Exibe o resultado na tela com 
    //apenas 2 casas por causa do %.2f
    printf("Resultado: %.2f", resultado); 
    return 0;
}

