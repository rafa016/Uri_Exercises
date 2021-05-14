#include <stdio.h>
 
int main() {
 
   int numero, i, qnt;
   double total = 1.0;
   char operacao;
   
   
   scanf("%d", &qnt);
   
   for(i = 0; i < qnt; i ++){
   	
   	scanf("%d", &numero);	
   	scanf(" %c", &operacao);	
   	
   	if(operacao == '*'){
   			
   			total = total * numero;
   		
	}else{
		
			total = total / numero;
		
		
	}
   	
   }
   printf("%.0f\n", total);
 
    return 0;
}
