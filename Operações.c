#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 5, b =3;

    printf("A soma entre %d e %d é %d", a , b , a + b);

    printf("\nA subtração entre %d e %d é %d",a,b,a-b);

    printf("\nA divisão de %d e %d é %d", a,b,a/b);

    printf("\nA multiplicação de %d e %d é %d",a,b,a*b);

    printf("\nO resto da divisão entre %d e %d é %d",a,b,a % b);

    printf("\nO modulo de -3 é %d", abs(-3));

    return 1;
}