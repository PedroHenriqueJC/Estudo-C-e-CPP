#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    
    setlocale(LC_ALL,"");
    
    
    int a = 2;

    if(a == 5){
        printf("A igual a 5");
    }else if(a==3){
        printf("A é 3");
    }else{
        printf("A não é 3 nem 5");
    }


}