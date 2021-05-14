#include <stdio.h>
#include <string.h>
 
int main() {
	
	int coelhos = 0, ratos = 0, sapos = 0, n, i, qnt = 0;
	char tipo[2];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		
		scanf("%d", &qnt);
		scanf("%s", &tipo);
		
		if(strcmp(tipo, "R") == 0 ){
			
			ratos += qnt;
			
		}else if(strcmp(tipo, "C") == 0 ){
			
			coelhos += qnt;
		}else if(strcmp(tipo, "S") == 0 ){
			
			sapos += qnt;
		}
		
		
	}
	printf("Total: %d cobaias\n", coelhos + ratos + sapos);
	printf("Total de coelhos: %d\n", coelhos);
	printf("Total de ratos: %d\n", ratos);
	printf("Total de sapos: %d\n", sapos);
	printf("Percentual de coelhos: %.2f %%\n", coelhos * 100.0 / (coelhos + ratos + sapos));	
	printf("Percentual de ratos: %.2f %%\n", ratos * 100.0 / (coelhos + ratos + sapos));
	printf("Percentual de sapos: %.2f %%\n", sapos * 100.0 / (coelhos + ratos + sapos));	
	return 0;
}
