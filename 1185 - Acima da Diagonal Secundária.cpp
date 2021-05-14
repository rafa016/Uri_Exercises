#include <stdio.h>

 
int main() {
 
    int  i = 0 , j = 0, k = 0, l = 0;
    float M[12][12], soma = 0;
    char letra;
    
    
    scanf("%c", &letra);
    
    for(i = 0; i < 12; i++){
    	for(j = 0; j < 12; j++){
    		
    		scanf("%f", &M[i][j]);
    		
    		
    	}
    	
    	
	}
	for(k = 0; k < 12; k ++){
		for(l = 0; l < 11 - k; l ++){
			
			
				
				soma = soma + M[k][l];
				
			}
			
		}
		
		
	
	if(letra == 'M'){
		soma = soma / 66;
		printf("%.1f\n", soma);
	}else{
		
		printf("%.1f\n", soma);
		
	}
	
	
 
    return 0;
}
