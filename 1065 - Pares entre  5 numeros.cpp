#include <stdio.h>
 
int main() {
	int x, z, a = 0, pares = 0, impares = 0, negativos = 0, positivos = 0;
	
	for(x = 0; x < 5; x ++){
		scanf("%d", &z);
		if(z % 2 == 0){
			
			pares ++;
		
			
		}
		if(z % 2 != 0){
			
			impares ++;
		
			
		}
		if(z < 0){
			
			negativos ++;
		
			
		}	
		if(z > 0){
			
			positivos ++;
		
			
		}				
	}
	printf("%d valor(es) par(es)\n", pares);
	printf("%d valor(es) impar(es)\n", impares);
	
	printf("%d valor(es) positivo(s)\n", positivos);
	printf("%d valor(es) negativo(s)\n", negativos);
	return 0;
}
