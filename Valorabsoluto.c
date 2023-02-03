#include <stdio.h>
#include <stdlib.h>

void main(){

    //setlocale(LC_ALL, "pt-BR");



    int num1, num2;
    printf("Digite o valor1: ");
    scanf("%d", &num1);

    printf("Digite o valor2: ");
    scanf("%d", &num2);


    printf("O valor absuluto da subtracao e %d", abs(num1 - num2));



}