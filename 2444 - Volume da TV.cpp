#include <stdio.h>

int main ()
{
		int volumeTot, qnt, i, mudancaVolume;
		
		scanf("%d", &volumeTot);
		scanf("%d", &qnt);
		
		for(i = 0; i < qnt; i ++){
			
			scanf("%d", &mudancaVolume);
			volumeTot = volumeTot + mudancaVolume;
			if(volumeTot >  100){
				volumeTot = 100;
				
			}
			if(volumeTot < 0){
				
				
				volumeTot = 0;
			}
		
			
		}
		printf("%d\n", volumeTot);
		
		
	return 0;
}	

