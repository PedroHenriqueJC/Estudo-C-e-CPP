#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Utilizada para otimizar a escrita de um código

// TIPO + NOME(){ } 

//Se a função ainda não estiver sido definida quando for chamada no main ele retorná um erro, para sairmos disso assinamos a função desse modo:
void desenhaBorda();
int dez();
float meio();
char letra();
bool boolean();

void desenhaBorda(){
  printf("|-----------| \n");
} //Funções void não tem o return;

int dez(){
  printf("teste");
  return 10;
  //return 10*2;
} //Funções int retornam um valor inteiro

float meio(){
  return 0.5
} //Retornam valores float

char letra(){
  return 'x';

  //return 120; -> vai retornar o caractere referente a 120 na tabela ASCII
} //Retorna um valor do tipo char (caractere)

bool boolean(){
  return true;

  //return false;
  //return 1 -> true
  //return 0 -> false
} //Retorna true ou false (necessita de incluir stdbool.h


void main(){
  int a = dez();
  float b = meio();
  char c = letra();
  bool d = boolean();


  desenhaBorda();

  system("clear") //Utilizado para limpar a tela após a execução de algo

}
