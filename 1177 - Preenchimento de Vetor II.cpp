#include <stdio.h>
 
int main() {
	
	int num, i = 0, count = 0;
	int vetornum[1000];
	scanf("%d", &num);
	while(count <= 1000){
	
	for(i = 0; i < num; i ++){
		if(count == 1000){
			break;
		}	
		vetornum[count] = i;
		printf("N[%d] = %d\n", count, vetornum[count]);
		count ++;
	
	}
}	
	
		return 0;
}
