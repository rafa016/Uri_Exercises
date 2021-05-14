#include <stdio.h>
 
int main() {
	int vetorpar[5], vetorimpar[5], countpar = 0, countimpar = 0, i, j;
	int num;
	
	for(i = 0; i < 15; i++){
	
	scanf("%d", &num);
		if(num % 2 == 0){
		
			vetorpar[countpar] = num;
			
			
			countpar++;
		}else{
			vetorimpar[countimpar] = num;
			
			
			countimpar++;
			
			
		}
		
		if(countpar == 5){
			
			for(j = 0; j < 5; j++){
				
				printf("par[%d] = %d\n", j, vetorpar[j]);
				
			}
			countpar = 0;
		}
		if(countimpar == 5){
			
			for(j = 0; j < 5; j++){
				
				printf("impar[%d] = %d\n", j, vetorimpar[j]);
				
			}
			countimpar = 0;
		}
	}	
	
	for(j = 0; j < countimpar; j++){
				
		printf("impar[%d] = %d\n", j, vetorimpar[j]);
				
		}
	for(j = 0; j < countpar; j++){
				
				printf("par[%d] = %d\n", j, vetorpar[j]);
				
			}
	
	
	
	
	
	
		
		return 0;
}
