#include <stdio.h>
 
int main() {
	int tipo = 0, alcool = 0, gas = 0, diesel = 0;
	do{
		scanf("%d", &tipo);
		switch(tipo){
			
		case 1:
			alcool ++;	
			break;
		case 2:
			gas ++;	
			break;	
		case 3:
			diesel ++;	
			break;
		default:
			break;
		}
		
		
	}while(tipo != 4);
	
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d", alcool, gas, diesel);
}
