#include <stdio.h>
 
int main() {
	
	float  i, k;
	float  l = 0.0, m = 0.0;
	
	for(i = 0; i <= 20; i += 2){
	
		for(k = 1; k <= 3 ; k++){
			l = k + m;
			if(i == 0 || i == 10 || i == 20){
				
				
				
				if(l == 0 || l == 1 || l == 2 || l == 3 || l == 4 || l == 5){
					
					printf("I=%.0f J=%.0f\n", i/10 , l);
					
				}else{
					
					printf("I=%.0f J=%.0f\n", i/10 , l);
					
				}
			}else{
				
				printf("I=%.1f J=%.1f\n", i/10 , l);
			}
			
			
		}
		m += 0.2;
		
	}
	return 0;
}
