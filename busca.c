#include <stdio.h>
#include <stdlib.h>

#define TAM 10


//Busca simples
void imprimeVetor(int *vetor){
  int i;
  for(i = 0;i<TAM;i++){
    printf("%d ", vetor[i]);
  }
}

int buscaSimples(int *vetor){
  int i;
  int valorProcurado;
  printf("\nQual número você deseja encontrar:\n");
  scanf("%d", &valorProcurado);

  for(i = 0;i<TAM;i++){
    if(vetor[i] == valorProcurado){
      printf("Valor na posição: %d\n", i);
      break;
    }
  }

}

//Busca binária. So funciona se a lista ja estiver ordenada.
//Começa em um ponto pre-definido(meio). Verifica se o valor encontrado é maior ou menor que o valor procurado.
//Se for maior vai para o meio dos elementos que sobrou na direita. Se for menor vai para o meio dos valores que sobraram na esquerda.
//
//{10,20,30,40,50,60,70,80,90,100,110)
//
//O valor procurado é 100. Vamos ao meio, ou seja, 50 ou 60. Aqui escolhemos 60.
//Como 60 é menor que 100, vamos para a direita, o meio dos elementos que sobraram na direita é 90.
//Como 90 é menor que 100 vamos ao meio dos elementos que sobraram na direita. 100. E esse é o valor desejado.

int buscaBinaria(int *vetor){
  int i;
  int valorProcurado;
  
  int limEsquerda = 0;
  int limDireita = TAM -1;
  int meio;

  meio = (limEsquerda + limDireita) / 2;

  printf("\nDigite o valor que você deseja procurar:\n");
  scanf("%d", &valorProcurado);

  while(limEsquerda <= limDireita){
    meio = (limEsquerda+limDireita);

    if(vetor[meio] < valorProcurado){
      limEsquerda = ++meio;  
    }else if(vetor[meio] > valorProcurado){
      limDireita = --meio;
    }else{
      return 1; //Valor encontrado
    }
  }
  return 0; //Valor não encontrado

}


void main(){
  int vetor[TAM] = {1,2,3,4,5,6,7,8,9,10};

  imprimeVetor(vetor);

  buscaSimples(vetor);

  if(buscaBinaria(vetor)){
    printf("Valor encontrado");
  }else{
    printf("Valor não encontrado");
  }
  
}
