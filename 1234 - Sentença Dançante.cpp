#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
 	int i, maiusculo = 0, j;
    char frase[50];
    
    gets(frase);
	    
    for(i = 0; i < strlen(frase); i++){
    	
    	if(frase[i] != ' '){
    		if(maiusculo == 0){
    		
	    		frase[i] = toupper(frase[i]);
	    		maiusculo = 1;
			}else{
				
				frase[i] = tolower(frase[i]);
				maiusculo = 0;
			}
    		
		}
    		
	}
 	for(j = 0; j < strlen(frase); j++){
 		
 		printf("%c", frase[j]);
 		
	}
 
    return 0;
}
