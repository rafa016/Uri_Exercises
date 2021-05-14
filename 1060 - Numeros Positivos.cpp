#include <stdio.h>
 
int main() {
	float x, z;
	int y = 0;
	for(x = 0; x < 6; x ++){
		scanf("%f", &z);
		if(z > 0){
			
			y ++;
			
		}	
	}
	printf("%d valores positivos\n", y);
	
	
	return 0;
}
