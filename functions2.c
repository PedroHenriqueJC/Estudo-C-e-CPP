#include <stdio.h>
#include <stdlib.h>

void mostraSucessor(int numero){
  printf("%d",numero+1);
  
}//Não altera o valor dentro de A pois não é passado com ponteiro

int retornaAntecessor(int numero){
  return numero-1;

}

void sum(int num1, int num2){
  printf("\n%d + %d = %d",num1, num2, num1+num2);

}//Funções com mis de um parâmetro, também pode usar retornando utilizando uma função int e return.

void sum10(int *num){
  *num = *num + 10;
}//Dessa forma altera o valor diretamente, caso não seja passado com ponteiro ele criaria um clone da variável, porem dessa forma ele indica o proprio acesso de memória da variável

void showVetor(int *v, int tamanho){
  int i;
  for(i = 0; i<tamanho;i++){
    printf("%d\n",v[i]);
  }

}//Trabalhando como parametros sendo vetor, vetores sempre serão trabalhados com ponteiros em funções

void modificaVetor(int *v, int tamanho){
  int i;
  for(i = 0; i<tamanho;i++){
    v[i] = v[i] + 1;
  }

}



void main(){
  int a, b;
  int vetor[3] = {1,2,3};
  a = 10;
  b = 15;

  printf("%d \n",a);
  mostraSucessor(a);

  printf("\n%d",retornaAntecessor(a));

  sum(a,b);
  sum10(&a);
  printf("\n a = %d",a);
  
  printf("\n");
  showVetor(vetor,3);
  
  modificaVetor(vetor,3);
  
  showVetor(vetor,3);

}
