#include <stdio.h>
 
int main() {
 
    int pessoasNaFesta, totalPessoas, i, aux, j, k, iguais = 0;
    do{
	
    scanf("%d", &pessoasNaFesta);
    scanf("%d", &totalPessoas);
    
    int convites[totalPessoas];
    
    /*for(k = 0; k < totalPessoas; k ++){
    	
    	convites[k] = -1;
    	
	}*/
    
    for(i = 0; i < totalPessoas; i ++){
    	
		scanf("%d", &convites[i]);
	 
    	for(j = 0; j < totalPessoas; j++){
    		
    		if(convites[i] == convites[j] && i != j){
    			printf("%d  ", convites[i]);
    			printf("%d\n", convites[j]);
    			iguais++;
    			
			}
    		
		}
    	
    	
	}
    printf("%d\n", iguais);
    
    iguais = 0;
	}while(pessoasNaFesta != 0 || totalPessoas != 0);
    return 0;
}
