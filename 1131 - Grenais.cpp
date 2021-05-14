#include <stdio.h>
 
int main() {
	
	int golInter = 0, i = 0, golGremio = 0, qnt = 0, vInter = 0, vGremio = 0, empate = 0;
	do{
		scanf("%d", &golInter);
		scanf("%d", &golGremio);
		qnt++;
		if(golInter > golGremio){
			
			vInter++;
			
		}else if(golGremio > golInter){
			
			vGremio++;
			
		}else{
			
			empate++;
			
		}
		
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &i);
		
	}while(i == 1);
	
	printf("%d grenais\n", qnt);
	printf("Inter:%d\n", vInter);
	printf("Gremio:%d\n", vGremio);
	printf("Empates:%d\n", empate);
	if(vInter > vGremio){
		
		printf("Inter venceu mais\n");
		
	}else if(vInter < vGremio){
		
		printf("Gremio venceu mais\n");
		
	}else{
		
		
		printf("Nao houve vencedor\n");
		
	}
	return 0;
}
