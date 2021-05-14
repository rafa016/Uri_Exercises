#include <stdio.h>
#include <string.h>


int main(){
	int i, j;
	char respostas[40][11];
	
	
	for(i = 0; i < 10; i++){
		
		respostas[1][i] = 'b';
		
	}
	for(j = 0; j < 10; j++){
		
		printf("%c", respostas[1][i]);
		
	}
	
	return 0;
}
