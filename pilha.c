#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TAM 10

//Pilha é uma estrutura LIFO(Last In First Out)
//Ou seja, o ultimo elemento inserido será o primeiro retirado.
//
//Um dos usos de pilha está em verificar expressões matemáticas corretamente.
//Por exemplo ([)]. Inserimos o parenteses abrindo, inserimos o colchetes abrindo.
//Agora batemos no parenteses fechando, ele não é igual ao ultimo elemento da pilha.
//Logo não vamos retirá-lo, o ultimo cochetes fechando, retiramos o colchete do topo
//A pilha ainda tem um elemento então a expressão está errada.

//Assinaturas
void push(int pilha[TAM], int *topo);
void print(int pilha[TAM]);
int pop(int pilha[TAM], int *topo);
void pilha_builder(int pilha[TAM], int *topo);
bool pilha_vazia(int topo);
bool pilha_cheia(int topo);
int pilha_tamanho(int topo);
int pilha_get(int pilha[TAM], int *topo);

void main(){
  int pilha[TAM];
  int topo;
  int escolha;
  pilha_builder(pilha, &topo);
  while(1){
    printf("\nDigite 1 para mostrar a pilha\nDigite 2 para empilhar\nDigite 3 para desempilhar\nDigite 4 para verificar o tamanho\nDigite 5 para verificar se esta vazia\nDigite 6 para verificar se esta cheia\nDigite 7 para verificar o ultimo elemento.\n");
    scanf("%d",&escolha);
    
    switch(escolha){
      case 1: print(pilha); break;
      case 2: push(pilha, &topo); break;
      case 3: pop(pilha, &topo); break;
      case 4: printf("%d",pilha_tamanho(topo)); break;
      case 5: printf("%d",pilha_vazia(topo)); break;
      case 6: printf("%d", pilha_cheia(topo)); break;
      case 7: printf("%d",pilha_get(pilha, &topo)); break;
    }
  }

}

void push(int pilha[TAM], int *topo){
  int valor;
  if(*topo >= TAM -1){
    printf("Pilha cheia");
  }else{
    *topo = *topo +1;
    printf("Digite o valor que voce deseja: ");
    scanf("%d", &valor);
    pilha[*topo] = valor;
  }
}

void print(int pilha[TAM]){
  int i;

  for(i = 0; i< TAM; i++){
    printf("%d ", pilha[i]);
  }
}

int pop(int pilha[TAM], int *topo){
  if(*topo == -1){
    printf("\nPilha vazia");
  }else{
    pilha[*topo] = 0;
    *topo = *topo -1;
  }
}

void pilha_builder(int pilha[TAM], int *topo){
  *topo = -1;
  int i;

  for(i = 0;i<TAM;i++){
    pilha[i] = 0;
  }

}

bool pilha_vazia(int topo){
  if(topo == -1){
    return true;
  }else{
    return false;
  }
}

bool pilha_cheia(int topo){
  if(topo == TAM-1){
    return true;
  }else{
    return false;
  }
}

int pilha_tamanho(int topo){
  return topo+1;
}

int pilha_get(int pilha[TAM], int *topo){
  if(pilha_vazia(*topo)){
    printf("Pilha vazia");
    return 0;
  }else{
    return pilha[*topo];
  }
}
