#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //Necessária para condicional booleana


void main(){
    bool a = true, b = false;


    //Não há necessidade de deixar explicito a == true
    if(a){
        printf("A e verdadeiro\n");
    }
    if(b){

    }else{
        printf("B e falso");
    }

    if(!b){//Se a variável for falsa
        printf("B e falso");
    }

}