#include <stdio.h>
 
int main() {
		int a,b,c;
		
		scanf("%d%d%d", &a, &b, &c);
		
		
		
		
		if(a > b && a > c){
			
			if(b > c){
				
				printf("%d\n", c);		
				printf("%d\n", b);		
				printf("%d\n\n", a);	
				
			}else{
				
				printf("%d\n", b);		
				printf("%d\n", c);		
				printf("%d\n\n", a);	
				
			}		
			
		}else if(a > b){
			
				printf("%d\n", b);		
				printf("%d\n", a);		
				printf("%d\n\n", c);
			
		}else if(a > c){
			
				printf("%d\n", c);		
				printf("%d\n", a);		
				printf("%d\n\n", b);
			
		}else if(b > c){
			
				printf("%d\n", a);		
				printf("%d\n", c);		
				printf("%d\n\n", b);
			
			
		}else{
			
				printf("%d\n", a);		
				printf("%d\n", b);		
				printf("%d\n\n", c);
			
		}
		
		printf("%d\n", a);		
		printf("%d\n", b);		
		printf("%d\n", c);	
			
			
			
		return 0;
}
