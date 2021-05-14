#include <stdio.h>
#include <math.h>
 
int main() {
 
    int qnt, digitos, letras, tot, i;
    
    
    scanf("%d", &qnt);
    
    for(i = 0; i < qnt; i ++){
    	
    	scanf("%d%d", &letras, &digitos);
    	
    	tot = pow(26, letras) * pow(10, digitos);
    	
    	if(letras == 0 && digitos == 0){
    		
    		
    		tot = 0;
		}
		
		
    
    	printf("%d\n", tot);
	}
    
     
     
 
    return 0;
}
