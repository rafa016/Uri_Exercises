#include <stdio.h>
#include <string.h>

 
int main() {
	int i, j, k = 0, l, cont = 0;
	char caracterTirado;
	char totalDigitado[100], novoValor[100];
	
	do{
	
	scanf("%c", &caracterTirado);
	scanf("%s", &totalDigitado);
	
	
	
	for(i = 0; i < strlen(totalDigitado); i++){
		
		if(totalDigitado[i] != caracterTirado){
			
			novoValor[k] = totalDigitado[i];
			k++;
		}else{
			
			
		}
	
	}
	for(l = 0; l < strlen(novoValor); l++){
		
		if(novoValor[l] != '0'){
			
			cont++;
		}
		
	
	}
	if(cont == 0){
		
		printf("%c", '0');
	
	}else{
		for(j = 0; j < strlen(novoValor); j++){
			
			
			printf("%c", novoValor[j]);
		}
	}
	
	}while(caracterTirado != '0' && totalDigitado[0] != '0');
	return 0;
}
