#include <stdio.h>
 
int main() {
	int tamvetor, i, menor, posicao;
	
	scanf("%d", &tamvetor);
	int vetornum[tamvetor];
	
	for(i = 0; i < tamvetor; i++){
		
		scanf("%d", &vetornum[i]);
		
	}
	menor = vetornum[0];
	posicao = 0;
	for(i = 1; i < tamvetor; i++){
		
		if(menor > vetornum[i]){
			
			menor = vetornum[i];
			posicao = i;
			
		}
		
		
		
	}
	printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
		return 0;
}
