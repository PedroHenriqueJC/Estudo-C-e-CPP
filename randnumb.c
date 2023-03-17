#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main(){
	//Alimentando o rand
	srand((unsigned) time(NULL));
	
	//Variavel que recebe o resto do valor de time
	
	int r = rand() % 3; //Ao colocar 3 ele pega um valor aleatorio entre 0 e 2, pois o resto nunca sera maior ou igual a 3

	int r2 = (rand() % 5) + 1; //Aqui ele gera de 1 a 5

	printf("%d", r);
	printf("%d", r2);

	//Podemos usar para embaralhar novamente usando que o segundo valor receba o primeiro e realize uma operação

}
