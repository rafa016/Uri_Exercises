#include <stdio.h>

 
int main() {
 
    int linhasomada, i = 0 , j = 0, k = 0;
    float M[12][12], soma = 0;
    char letra;
    
    
    scanf("%d\n %c", &linhasomada, &letra);
    
    for(i = 0; i < 12; i++){
    	for(j = 0; j < 12; j++){
    		
    		scanf("%f", &M[i][j]);
    		
    		
    	}
    	
    	
	}
	for(k = 0; k < 12; k ++){
		
		soma = soma + M[k][linhasomada];
		
	}
	if(letra == 'M'){
		soma = soma / 12;
		printf("%.1f\n", soma);
	}else{
		
		printf("%.1f\n", soma);
		
	}
	
	
 
    return 0;
}
