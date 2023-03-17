#include <stdio.h>
#include <stdlib.h>


void main(){
    int nota1, nota2, nota3;


    printf("Digite suas 3 notas:\n");
    scanf("%d %d %d", &nota1, &nota2, &nota3);

    float media = (nota1 + nota2 + nota3)/3;

    if(media >= 7){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
}