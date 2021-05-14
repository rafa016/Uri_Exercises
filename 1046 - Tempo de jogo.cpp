#include <stdio.h>
 #include <math.h>
int main() {
	
	int a,b, tempo;
	
	scanf("%d%d", &a, &b);
	
	
	tempo = a - b;
	if(tempo < 0){
		
		tempo = tempo + 24;
	}
	
	if(tempo == 0){
		
		printf("O JOGO DUROU 24 HORA(S)\n");
	}else{
		printf("O JOGO DUROU %d HORA(S)\n", tempo);
	}

	
	return 0;
}
