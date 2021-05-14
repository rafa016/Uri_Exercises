#include <stdio.h>
 
int main() {
	
	float nota, j = 0, media;
	
	while(j < 2){
		scanf("%f", &nota);
		if(nota >= 0 && nota <= 10){
			
			if(j == 0){
				
				media = nota;
				j++;
				
			}else{
				
				media = (media + nota) / 2;
				
				printf("media = %.2f\n", media);
				
				break;
				
			}
			
			
		}else{
			
			printf("nota invalida\n");
			
		}
		
		
		
	}
	
	
	return 0;
}
