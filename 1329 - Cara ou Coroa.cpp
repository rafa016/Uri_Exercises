#include <stdio.h>
 
int main() {
 
	int cont, vencedor, i, pontosMaria = 0, pontosJoao = 0;
	
	
	
	do{
		scanf("%d", &cont);
		if(cont == 0){
			
			return 0;
			
		}
		for(i = 0; i < cont; i ++){
			
			scanf("%d", &vencedor);
			if(vencedor == 0){
				
				pontosMaria++;
				
			}else{
				
				pontosJoao++;
				
			}
			
		} 
	 	printf("Mary won %d times and John won %d times\n", pontosMaria, pontosJoao);
		pontosJoao = 0;
		pontosMaria = 0;
		
		
	}while(cont != 0);
	
 
    return 0;
}

