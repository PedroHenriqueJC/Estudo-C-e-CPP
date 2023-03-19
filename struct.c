#include <stdio.h>
#include <string.h>

//No C++ na hora de criar o objeto tem que tratar como ponteiro:
//fruta *primeiraFruta = new fruta;
//E em vez de . tem que usar ->

struct palavra{
  int ordem;
  char texto[255];
};//Permite trabalhar com "objetos"

typedef struct Data{
  int dia;
  int mes;
  int ano;
}Data; //Typedef serve para que eu consiga passar com referencia e não ter que ficar digitando struct Data toda hora

struct Aluno{
  int id;
  Data nascimento;
};

void main(){
  struct palavra primeiraPalavra; //strcut palavra é o tipo de primeiraPalavra

  primeiraPalavra.ordem = 0;
  strcpy(primeiraPalavra.texto, "Olá Mundo");


  printf("Ordem: %d. Texto: %s\n",primeiraPalavra.ordem, primeiraPalavra.texto);

  struct palavra lista[3];

  lista[0].ordem = 1;
  lista[1].ordem = 2;
  lista[2].ordem = 3;

  strcpy(lista[0].texto, "Ufa");
  strcpy(lista[1].texto, "Olá");
  strcpy(lista[2].texto, "Legal");

  int i;
  for(i=0;i<3;i++){
    printf("Ordem: %d. Palavra: %s\n",lista[i].ordem,lista[i].texto);
  }

  //Aluno:

  struct Aluno aluno1;

  aluno1.id = 0;
  aluno1.nascimento.ano = 1990;
  aluno1.nascimento.mes = 10;
  aluno1.nascimento.dia = 14;

  printf("Nascido em: %d/%d/%d", aluno1.nascimento.dia,aluno1.nascimento.mes,aluno1.nascimento.ano);


}
