#include <stdio.h>
 
int main() {
 
    int i, qnt, compareceu, total = 0;
    
    scanf("%d", &qnt);
    
    for(i = 0; i < qnt; i ++){
    	
    	scanf("%d", &compareceu);
    	
    	if(compareceu == 1){
    		
    		total++;
		}
    	
    	
	}
	printf("%d", total);
 
    return 0;
}
