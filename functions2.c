#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int numero){
  printf("%d",numero+1);
  
}//Não altera o valor dentro de A pois não é passado com ponteiro

int retornaAntecessor(int numero){
  return numero-1;

}

void main(){
  int a;

  a = 10;

  printf("%d \n",a);
  mostraSucessor(a);

  printf("\n%d",retornaAntecessor(a));


}
