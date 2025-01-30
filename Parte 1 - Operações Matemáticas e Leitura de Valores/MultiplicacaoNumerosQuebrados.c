#include <stdio.h>
#include <stdlib.h>

int main(){
    float a; //Define valor a
    float b; //Define valor b
    
    scanf("%f", &a); //Lê valor a
    scanf("%f", &b); //Lê valor b
    
    //Resultado da multiplicação
    float resultado = a * b; 
    
    //Exibe o resultado na tela
    printf("Resultado: %f", resultado); 
    return 0;
}

