#include <stdio.h>
#include <string.h>
#include <math.h> 
int main() {
 
    int qnt, i, r, g, b, menor;
    char teste[10];
    scanf("%d", &qnt);
    for(i = 1; i <= qnt; i++){
    	
    	scanf("%s", teste);
    	scanf("%d%d%d", &r, &g, &b);
    	
    	if(strcmp(teste, "min") == 0){
    		
    		if(r < g){
    			if(r < b){
    				
    				printf("Caso #%d: %d\n", i, r);
				}else{
					
					printf("Caso #%d: %d\n", i, b);
				}
    			
			}else{
				
				if(g < b){
    				
    				printf("Caso #%d: %d\n", i, g);
				}else{
					
					printf("Caso #%d: %d\n", i, b);
					
				}
			
			}
    		
		}else if(strcmp(teste, "mean") == 0){
			
			printf("Caso #%d: %d\n", i, (r + g + b)/3);
		
		}else if(strcmp(teste, "eye") == 0){
			
			printf("Caso #%d: %.0f\n", i, floor(0.30 * r + 0.59 * g + 0.11 * b));
				
		}else if(strcmp(teste, "max") == 0){
			
			if(r > g){
    			if(r > b){
    				
    				printf("Caso #%d: %d\n", i, r);
				}else{
					
					printf("Caso #%d: %d\n", i, b);
				}
    			
			}else{
				
				if(g > b){
    				
    				printf("Caso #%d: %d\n", i, g);
				}else{
					
					printf("Caso #%d: %d\n", i, b);
					
				}
			
			}
		}
    	
	}
 
 
 
 
 
 
 
 
    return 0;
}
