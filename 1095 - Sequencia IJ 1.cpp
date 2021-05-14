#include <stdio.h>
 
int main() {
	
	int i, x = 1;
	
	for(i = 60; i >= 0; i -= 5 ){
		
		printf("I=%d J=%d\n", x, i);
		x += 3;
	}
		
	return 0;
}
