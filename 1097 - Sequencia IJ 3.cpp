#include <stdio.h>
 
int main() {
	
	int i, k, l = 7;
	
	for(i = 1; i <= 9; i += 2){
	
		for(k = l; k > l - 3; k--){
			
			printf("I=%d J=%d\n", i , k);
			
		}
		l = l+2;
	}
	return 0;
}
