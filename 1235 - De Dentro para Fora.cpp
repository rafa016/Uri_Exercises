#include <stdio.h>
#include <string.h>

int main() {
 
	char linha[101];
	char metadeDireita[52];
	char metadeEsquerda[52];
 	int qnt, i, m,  qntCaracteres;
 	
 	scanf("%d", &qnt);
 	setbuf(stdin, NULL);
 	for(i = 0; i < qnt; i++){
 		
 		scanf(" %[^\n]s",linha);
 		setbuf(stdin, NULL);
 		qntCaracteres = strlen(linha);
 		
		 for(m = qntCaracteres / 2 - 1; m > -1; m--){
		 	
 			printf("%c", linha[m]);
 			
		 }
		 for(m = qntCaracteres - 1; m > qntCaracteres / 2 -1; m--){
 			
 			printf("%c", linha[m]);
 			
		 }
 	
 	
 		
 		printf("\n");
 		
	}
 	printf("\n");
 
 
 
 
    return 0;
}
