#include <stdio.h>
#include <string.h>

void main(){
  int cont=0;
  int c;
  char conteudoTexto[255];
  FILE *file;

  file = fopen("Arquivo.txt","r"); //Abrindo o arquivo no modo leitura

  if(file){ //Verificando se o arquivo foi aberto com sucesso
    while((c = getc(file)) != EOF){ //Lendo o arquivo até o final(EOF)
        printf("%c",c); //Imprime o caractere lido
        conteudoTexto[cont] =c; //Armazena o caractere lido

        cont++;

      }

  }

  fclose(file); //Fecha o arquivo

}
