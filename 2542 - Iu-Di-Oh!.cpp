#include <stdio.h>
 
int main() {
	
 	int qnt;
 	
 	while((scanf ("%d", &qnt) != EOF)){
	 
	    int qntCartasLeonardo, qntCartasMarcos, vencedor, i, j, k, l, cartaEscolhidaMarcos, cartaEscolhidaLeonardo, atributoSorteado; 
	    
	    
	    scanf("%d%d", &qntCartasMarcos, &qntCartasLeonardo);
	    
	    int cartasMarcos[qntCartasMarcos + 1][qnt + 1], cartasLeonardo[qntCartasLeonardo + 1][qnt + 1];
		
		for(i = 1; i <= qntCartasMarcos; i ++){
			for(j = 1; j <= qnt; j ++){
				scanf("%d", &cartasMarcos[i][j]);
			}
		}
		for(k = 1; k <= qntCartasLeonardo; k ++){
			for(l = 1; l <= qnt; l ++){
				scanf("%d", &cartasLeonardo[k][l]);
			}
		}
		
		scanf("%d", &cartaEscolhidaMarcos);
		scanf("%d", &cartaEscolhidaLeonardo);
		scanf("%d", &atributoSorteado);
		
		if(cartasMarcos[cartaEscolhidaMarcos][atributoSorteado] > cartasLeonardo[cartaEscolhidaLeonardo][atributoSorteado]){
			
			printf("Marcos\n");
			
		}else if(cartasMarcos[cartaEscolhidaMarcos][atributoSorteado] == cartasLeonardo[cartaEscolhidaLeonardo][atributoSorteado]){
			
			printf("Empate\n");
			
		}else{
			
			printf("Leonardo\n");
		}
		
	}
    return 0;
}
