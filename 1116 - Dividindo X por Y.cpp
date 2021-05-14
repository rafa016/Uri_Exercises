#include <stdio.h>


int main() {
	
		int x, y, qnt, i; 
		float divisao;
		
			scanf("%d", &qnt);
		
		for(i = 0; i < qnt; i ++){
		
			scanf("%d", &x);
			scanf("%d", &y);
				
		
			if(y != 0){
				divisao = (float)x/ (float)y;
				printf("%.1f\n", divisao);
				
			}else{
				
				
				printf("divisao impossivel\n");
			}
		
		}
		
	
	
		return 0;
}
