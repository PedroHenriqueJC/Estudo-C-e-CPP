#include <stdio.h>
#include <stdlib.h>

void main(){

	int a = 1;
	char b = 'x';

	if(a == 1){
		printf("Opcao 1");
	}else if (a == 2){
		printf("Opcao 2");
	}else if(a == 3){
		printf("Opcao 3");
	}else{
		printf("Opcao invalida");
	}

	switch(a){
		case 1:
			printf("Opcao 1");
			break;
		case 2:
			printf("Opcao 2");
			break;
		case 3:
			printf("Opcao 3");
			break;
		default:
			printf("Opcao invalida");
			break;
	}	
}
