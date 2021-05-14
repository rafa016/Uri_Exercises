#include <stdio.h>
 
int main() {
	float x, z, a = 0;
	int y = 0;
	for(x = 0; x < 6; x ++){
		scanf("%f", &z);
		if(z > 0){
			
			y ++;
			a = a + z;
			
		}	
	}
	printf("%d valores positivos\n", y);
	printf("%.1f\n", a/y);
	
	return 0;
}
