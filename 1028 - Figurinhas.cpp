#include <stdio.h>
 
int main() {
 
    int qntRicardo, qntVicente, qnt, mdc = 0, i;
    
    scanf("%d", &qnt);
    
    for(i = 0; i < qnt; i++){
    	
    	scanf("%d", &qntRicardo);
    	scanf("%d", &qntVicente);
    		
    	while(qntVicente != 0){
    		mdc = qntRicardo % qntVicente;
    		qntRicardo = qntVicente;
    		qntVicente = mdc;
    		
    		
		}
    	
    	printf("%d\n", qntRicardo);
    	
	}
    
 
    return 0;
}
