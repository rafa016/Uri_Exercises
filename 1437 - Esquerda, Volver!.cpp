#include <stdio.h>
#include <string.h>


int main() {
 	int qnt, i; 
	int direcao = 100;
	char comando[1001];
 		
 		scanf("%d", &qnt);
 	
   	while(qnt != 0){	
    	
    	scanf("%s", &comando);
    	for(i = 0; i < strlen(comando); i ++){
    		
    		
    		if(comando[i] == 'D'){
    			
    			direcao = direcao - 25;
    			
			}else{
				
				direcao = direcao + 25;
				
			}
    		
    		if(direcao == 0){
				
				direcao = 100;
			}
			if(direcao == 200){
				
				direcao = 100;
			}
		}
			switch(direcao){
				case 100:
					printf("N\n");
					break;
				case 75:
					printf("L\n");
					break;
				case 50:
					printf("S\n");
					break;
				case 25:
					printf("O\n");
					break;
				case 0:
					printf("N\n");
					break;
				case 125:
					printf("O\n");
					break;
				case 150:
					printf("S\n");
					break;
				case 175:
					printf("L\n");
					break;
				default:
					
					break;
			}
		

    	direcao = 100;
    	scanf("%d", &qnt);
	}
	
	

    return 0;
}
