#include <stdio.h>
#include <string.h>

 
int main() {
	int qnt, i, j, total = 0;
	char numero[200];
	scanf("%d", &qnt);
	for(i = 0; i < qnt; i ++){
		
		scanf("%s", numero);
		
		for(j = 0; j < strlen(numero); j++){
			
			switch(numero[j]){
				case '1':
					
					total += 2;
					break;
				case '2':
					total += 5;
					break;
				case '3':
					total += 5;
					break;
				case '4':
					total += 4;
					break;
				case '5':
					total += 5;
					break;
				case '6':
					total += 6;
					break;
				case '7':
					total += 3;
					break;
				case '8':
					total += 7;
					break;
				case '9':
					total += 6;
					break;
				case '0':
					total += 6;
					break;
				default:
					break;	
			}
			
		}
		printf("%d leds\n", total);
		total = 0;
	}
	
	
	return 0;
}
