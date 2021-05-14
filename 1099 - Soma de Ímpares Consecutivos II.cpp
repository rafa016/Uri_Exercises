#include <stdio.h>
 
int main() {
	
	
	int x, i, y = 0, j, n;
	scanf("%d", &n);
	int soma[n + 1];
	for(j = 0; j < n; j ++){
	 	y = 0;
		scanf("%d", &x);
		scanf("%d", &i);
		
			if(x > i){
				i = i+1;
				for(i; i < x ; i ++){
			
					if( i % 2 != 0){
						
						y += i;
					
					}
			
				}
				soma[j] = y;
				
			
			}else{
				x = x+1;
				for(x + 1; x < i ; x ++){
			
					if(x % 2 != 0){
						
						y += x;
			
					}
					
				}
				soma[j] = y;
					
				
			}
	}
	
	for(j = 0; j < n; j ++){
		
		printf("%d\n", soma[j]);
		
	}
	return 0;
}
