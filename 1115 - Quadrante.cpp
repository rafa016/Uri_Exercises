#include <stdio.h>


int main() {
	
		int x, y, j = 0;
		
		while(j == 0){
			
			scanf("%d%d", &x, &y);
			
			if (x == 0 || y == 0){
				
				j = 1;
				
			}else {
				
				
				if(x > 0 && y > 0){
					
					
					printf("primeiro");
					
				}else if(x > 0){
					
					printf("quarto");
					
					
				}else if(y > 0){
					
					
					printf("segundo");
					
				}else{
					
					printf("terceiro");
					
				}
				
			}
			
		}
	
	
	
		return 0;
}
