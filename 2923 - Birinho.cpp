#include <stdio.h>
 
int main() {
 
    float total, utilizado, warning, critical, porcentagem;
    
    scanf("%f%f%f%f", &total, &utilizado, &warning, &critical);
    
    porcentagem = utilizado/total;
    
    porcentagem = porcentagem*100;
    
    if(porcentagem >= critical){
    	
    	
    	printf("critical\n");
    	
	}else if(porcentagem >= warning){
		
		printf("warning\n");
		
	}else{
		
		
		printf("OK\n");
	}
 
    return 0;
}
