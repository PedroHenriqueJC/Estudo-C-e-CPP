#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(){
    
    float num1, num2, resul;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    resul = (num1 + num2) /2;

    printf("\nA media entre %f e %f e igual a %f", num1, num2, resul);

    sleep(5);

    //printf("\nPressione qualquer tecla para continuar...");
    //scanf("%s");
}