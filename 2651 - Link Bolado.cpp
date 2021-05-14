#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
	
	int linkBolado = 0, i = 0, j;
	char palavra[100001];
	scanf("%s", palavra);
	
	for(j = 0; j < strlen(palavra); j++){
		
		palavra[j] = toupper(palavra[j]);
		
	}
	
	while(palavra[i] != '\0') {
		
		if(palavra[i+0] == 'Z'){
			
			if(palavra[i+1] == 'E'){
				
				if(palavra[i+2] == 'L'){
					
					if(palavra[i+3] == 'D'){
						
						if(palavra[i+4] == 'A'){
							
								linkBolado = 1;
								break;
						}
					}
				}
			}
		}
		
		i++;
	}
	if(linkBolado == 1) {
		
		printf("Link Bolado\n");
		
	}else{
		
		printf("Link Tranquilo\n");
		
	}
	return 0;
}
