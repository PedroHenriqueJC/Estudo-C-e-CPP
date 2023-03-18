#include <stdio.h>
#include <stdlib.h>

//Para incluir parâmetros e funções de outros arquivos podemos utilizar uma bilbioteca(com a extensão h) e incluir utilizando o comando include e aspas

//Utilizado para criar/aumentar um vetor, matriz ou aumentar a alocação de mais variáveis

//Para alocação dinâmica em C++ podemos somente utilizar da biblioteca new utilizando um new int(tamanho) para criar um vetor de inteiro com o tamanho especificado.


int* alocaVetor(int tamanho){
  int *aux;

  aux = (int*)malloc(tamanho * sizeof(int)); //Alocação dinamica, aloca a quantidade de int(tamanho) * o tamanho de cada int, (int*) serve para dar cast para inteiro
  
  return aux;

}//int* -> retorna um ponteiro auxiliar


void main(){
  int *vetor, tamanho;
  //Criamos um ponteiro que aloca para o primeiro elemento de um ponteiro
  int i;
  int j;

  int linhas =3,colunas=3;
  int **matriz; //Matriz é ponteiro para ponteiro (**)
  //Podemos trabalar com matrizes como se fosse uma array de ponteiros e cada ponteiro indica uma coluna

  matriz = (int **)malloc(linhas*sizeof(int *)); //Alocando memória para a array de ponteiros(vetor que indica as linhas, onde cada linha se origina de um vetor desse array)

  //Em C++: matriz = (int **) new int[linhas];


  for(i = 0; i<linhas;i++){
    matriz[i] = (int *)malloc(colunas*sizeof(int)); //Percorre dentro da array de ponteiros
    //Em C++: matriz[i] = (int *) new int[colunas];
  }

  for(i = 0; i< linhas;i++){
    for(j = 0; j<colunas;j++){
      matriz[i][j] = (i + j) * 10;
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  free(matriz); //Libera a memória de matriz

  printf("Digite o tamanho do vetor:\n");
  scanf("%d",&tamanho);


  vetor = alocaVetor(tamanho);
  //Agora vetor tem é um vetor inteiro do mesmo tamanho que o inserido pelo usuário
  for(i = 0;i<tamanho; i++){
    vetor[i] = 10 * i;
  }

  for(i=0;i<tamanho;i++){
    printf("%d\n",vetor[i]);
  }
}
