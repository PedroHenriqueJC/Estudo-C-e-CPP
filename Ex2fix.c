#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int a, b, c;

    printf("Digite os lados do triangulo: \n");
    scanf("%d %d %d", &a, &b, &c);

    if((a == b) && (a == c)){
        printf("Os lados são iguais");
    }else{
        printf("Os lados não são iguais");
    }
}