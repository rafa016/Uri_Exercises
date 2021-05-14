#include <stdio.h>
 
int main() {
	
	float nota, j = 0, media;
	int i = 3;
	do{
	
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
		do{
		
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d", &i);
	
		}while(i != 1 && i != 2);
		j = 0;
		media = 0;
	}while(i == 1);
	return 0;
}
