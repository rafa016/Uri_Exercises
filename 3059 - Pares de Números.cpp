#include <stdio.h>
 
int main() {
 
    int min, max, qnt, i, j, total = 0;
    
    scanf("%d", &qnt);
    scanf("%d", &min);
    scanf("%d", &max);
    
    int num[qnt];
    
    for(i = 0; i < qnt; i ++){
    	
    	scanf("%d", &num[i]);
    	
	}
	
	for(i = 0; i < qnt; i++){
		for(j = i + 1; j < qnt; j++){
			
			
			if(num[i] + num[j] <= max && num[i] + num[j] >= min){
				
				total++;
				
			}
			
		}
		
		
	}
	
	printf("%d\n", total);
	
 
    return 0;
}
