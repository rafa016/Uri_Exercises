#include <stdio.h>
 
int main() {
 
    int peso1, comprimento1, peso2, comprimento2, tot2, tot1;
    scanf("%d%d%d%d", &peso1, &comprimento1, &peso2, &comprimento2);
    tot1 = peso1*comprimento1;
    tot2 = peso2*comprimento2;
    
    if(tot1 == tot2){
    	
    	printf("0\n");
    	
    	
	}else if(tot1 > tot2){
		
		
		printf("-1\n");
		
	}else{
		
		
		printf("1\n");
		
	}
 
    return 0;
}
