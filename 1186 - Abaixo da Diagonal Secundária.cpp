#include <stdio.h>

 
int main() {
 
    int  i = 0 , j = 0, k = 0, l = 0, m = 1;
    float M[12][12], soma = 0;
    char letra;
    
    
    scanf("%c", &letra);
    
    for(i = 0; i < 12; i++){
    	for(j = 0; j < 12; j++){
    		
    		scanf("%f", &M[i][j]);
    		
    		
    	}
    	
    	
	}
	for(k = 11; k >= 0; k --){
		for(l = 11; l >= 0 + m ; l --){
			
			
				
				soma = soma + M[k][l];
				
			}
			m++;
		}
		
		
	
	if(letra == 'M'){
		soma = soma / 66;
		printf("%.1f\n", soma);
	}else{
		
		printf("%.1f\n", soma);
		
	}
	
	
 
    return 0;
}
