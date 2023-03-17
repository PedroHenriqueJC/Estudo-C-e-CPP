#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    setlocale(LC_ALL, "");

    int nota1, nota2, nota3, resultado;

    printf("Digite as 3 notas: ");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    resultado = nota1*nota2*nota3;

    printf("%d", resultado);
}