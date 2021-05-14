#include <stdio.h>
 
int main() {
 
 

    char cpf[10];
    int cpfint[10];
    int i, soma = 0, b1, soma2 = 0, b2, j = 0;
 
    while(scanf("%s", &cpf) != EOF){
    	
    	for(i = 0; i < 9; i++){
    	cpfint[i] = cpf[i] - '0';
    	soma += cpfint[i] * (i + 1);
    	soma2 += cpfint[i] * (9 - i);
    	
	}
	
    b1 = soma%11;
    
    if(b1 == 10){
    	
    	b1 = 0;
	}
	
	b2 = soma2%11;
    
    if(b2 == 10){
    	
    	b2 = 0;
	}
	for(i = 0; i < 14; i++){
    	
    	if(i == 3 || i == 7){
    		
    		printf(".");
    		
		}else if(i == 11){
			
			printf("-");
			
		}else if(i == 12){
			
			printf("%d", b1);
			
		}else if(i == 13){
			
			printf("%d", b2);
			
	 	}else{
			
			printf("%c", cpf[j]);
			j++;
			
		}
    	
	}

	printf("\n");
    j = 0;	
    soma = 0;
    soma2 = 0;
	}
    
    return 0;
}
