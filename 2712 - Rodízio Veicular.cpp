#include <stdio.h>
#include <ctype.h>
int main() {
 
    int qnt, i, errado = 0, j;
    
    char placa[9];
    
    scanf("%d", &qnt);
    
    for(j = 0; j < qnt; j ++){
    	
    	
	
    scanf("%s", placa);
    
    if(placa[3] != '-'){
    	
    	printf("FAILURE\n");
    	errado = 1;
	}
	for(i = 0; i < 2; i++){
		
		if(isalpha(placa[i])){
			
			if(islower(placa[i])){
				
				printf("FAILURE\n");
				errado = 1;
			}
			
		}else{
			
			printf("FAILURE\n");
			errado = 1;
		}
		
	}
	for(i = 4; i < 7; i++){
		
		if(isalnum(placa[i])){
			
			
			
		}else{
			
			printf("FAILURE\n");
			errado = 1;
		}
		
	}
	
	if(errado != 1){
		
		
		switch(placa[7]){
			
			case '1':
				printf("MONDAY\n");
				break;
			case '2':
				printf("MONDAY\n");
				break;
			case '3':
				printf("TUESDAY\n");
				break;
			case '4':
				printf("TUESDAY\n");
				break;
			case '5':
				printf("WEDNESDAY\n");
				break;
			case '6':
				printf("WEDNESDAY\n");
				break;
			case '7':
				printf("THURSDAY\n");
				break;
			case '8':
				printf("THURSDAY\n");
				break;
			case '9':
				printf("FRIDAY\n");
				break;
			case '0':
				printf("FRIDAY\n");
				break;
			
		}
		
		
	}
	errado = 0;
}
 
    return 0;
}
