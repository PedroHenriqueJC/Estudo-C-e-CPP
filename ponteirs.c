#include <stdio.h>
#include <stdlib.h>

void main(){
  int a = 20;

  printf("%d", a);

  //Uma variável armazena um valor
  //Um ponteiro armazena uma localização da memória
  
  scanf("%d",&a); //& indica a posição da variável a

  //printf("%d",&a); //Imprime o endereço de A

  int b = 10;

  int *ponteiro;

  ponteiro = &b; //Ponteiro recebe a posição da memória da variável B

  //Dessa forma podemos alterar o valor de B utilizando o ponteiro
  
  printf("%d \n",b);

  *ponteiro = 40;

  printf("%d",b);
}
