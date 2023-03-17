#include <stdio.h>
#include <stdlib.h>


void main(){
	int a, b, c;

	printf("Digite o primeiro e segundo valor\n");
	scanf("%d %d",&a,&b);

	printf("Digite a operacao a ser realizada:\n 1 para somar\n 2 para diminuir\n 3 para multiplicar\n 4 para dividir\n");
	scanf("%d", &c);

	switch(c){
		case 1:
			printf("A soma resulta em %d\n", a + b);
			break;
		case 2:
			printf("A subratacao resulta em %d\n", a-b);
			break;
		case 3:
			printf("A multiplicacao resulta em %d\n", a*b);
			break;
		case 4:
			printf("A divisao exata resulta em %d\n", a/b);
			break;
		default:
			printf("Entrada inexistente\n");
			break;
	}






}
