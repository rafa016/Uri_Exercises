#include <stdio.h>
 
int main() {
	
	int x, i, y = 0;
	
	scanf("%d", &x);
	scanf("%d", &i);
		
		
		
		if(x > i){
			i = i+1;
			for(i; i < x ; i ++){
		
				if( i % 2 != 0){
					
					y += i;
				
				}
		
			}
			printf("%d\n", y);
		
		}else{
			x = x+1;
			for(x + 1; x < i ; x ++){
		
				if(x % 2 != 0){
					
					y += x;
		
				}
				
			}
				printf("%d\n", y);
			
		}
		
	return 0;
}
