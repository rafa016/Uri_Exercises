#include <stdio.h>
 
int main() {
 
    int qnt, i;
    
    scanf("%d", &qnt);
    
    for(i = 0; i < qnt; i ++){
    	
    	int comprimento1, comprimento2, altura1, altura2;
    	
    	scanf("%d%d%d%d", &altura1, &comprimento1, &altura2, &comprimento2);
    	
    	if(altura1 < altura2 && comprimento1 < comprimento2 || altura1 < comprimento2 && comprimento1 < altura2){
    		
    		printf("S");
    	
		}else{
			
			printf("N");
			
		}
    	
    	
	}
 
    return 0;
}
