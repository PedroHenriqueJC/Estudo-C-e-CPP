#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 10

//Estrutura FIFO

//Assinaturas
void fila_build(int *inicio, int *fim);
void enfileirar(int fila[TAM], int valor, int *fim);
void imprimir(int fila[TAM], int tamanho);
void desenfileirar(int fila[TAM], int fim, int *inicio);
int fila_tamanho(int inicio, int fim);
bool fila_vazia(int inicio, int fim);

void fila_build(int *inicio,int *fim){
  *inicio = 0;
  *fim = -1;
}

void enfileirar(int fila[TAM], int valor, int *fim){
  if(*fim == TAM-1){
    printf("Fila cheia");
  }else{
    *fim = *fim + 1;
    fila[*fim] = valor;
  }
}

void imprimir(int fila[TAM],int tamanho){
  int i;
  for(i = 0; i<tamanho;i++){
    printf("%d ",fila[i]);
  }
  printf("\n");
}

void desenfileirar(int fila[TAM], int fim,int *inicio){
  if(!(fila_vazia(*inicio, fim))){
    printf("O valor removido foi %d\n",fila[*inicio]);
    *inicio = *inicio + 1;
  }else{
    printf("\nFila vazia\n");
  }
}


int fila_tamanho(int inicio, int fim){
  return (fim-inicio)+1;
}

bool fila_vazia(int inicio, int fim){
  if(inicio > fim){
    return true;
  }else{
    return false;
  }
}

bool fila_cheia(int inicio, int fim){
  if(fim == TAM-1){
    return true;
  }else{
    return false;
  }
}

void main(){
  int fila[TAM]={0,0,0,0,0,0,0,0,0,0};
  int inicio,fim;
  int valor;

  fila_build(&inicio,&fim);

  enfileirar(fila,10,&fim);
  enfileirar(fila, 20, &fim);
  enfileirar(fila, 30,&fim);

  imprimir(fila, (fim-inicio)+1);

  desenfileirar(fila, fim, &inicio);
}
