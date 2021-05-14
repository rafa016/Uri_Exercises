#include <stdio.h>
 
int main() {
	
	int x, i, maior = 0, posicao = 0;
	
	for(i = 1; i <= 100; i++){
		
		scanf("%d", &x);
		
		if(x > maior){
			
			maior = x;
			posicao = i;
			
		}
	
		
		
	}
	printf("%d\n", maior);
	printf("%d\n", posicao);
		
	return 0;
}
