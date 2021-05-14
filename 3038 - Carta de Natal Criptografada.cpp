#include <stdio.h>
#include <string.h>
 
int main() {
 
    char frase[300];
    int  i;
    
    while(scanf("%[^\n]%*c", frase) != EOF){
    	
    	for(i = 0; i < strlen(frase); i++){
    		if(frase[i] == '@'){
    			
    			frase[i] = 'a';
			}else if(frase[i] == '&'){
			
				frase[i] = 'e';
				
			}else if(frase[i] == '!'){
			
				frase[i] = 'i';
				
			}else if(frase[i] == '!'){
			
				frase[i] = 'i';
				
			}else if(frase[i] == '*'){
			
				frase[i] = 'o';
				
			}else if(frase[i] == '#'){
			
				frase[i] = 'u';
				
			}
   	
		}
    	
    	
    	printf("%s\n", frase);
	}
    
    
    
 
    return 0;
}
