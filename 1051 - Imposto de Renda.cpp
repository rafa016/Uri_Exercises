#include <stdio.h>
 
int main() {
	
	float sal, tot;
	
	scanf("%f", &sal);
	
	if(sal > 4500){
		
		tot = (sal - 4500) * 0.28 + 1500 * 0.18 + 1000 * 0.08;
		printf("R$ %.2f\n", tot);
		
	}else if(sal > 3000.01){
		
		tot = (sal - 3000) * 0.18 + 1000 * 0.08;
		printf("R$ %.2f\n", tot);
		
	}else if(sal > 2000.01){
		
		tot = (sal - 2000) * 0.08;
		printf("R$ %.2f\n", tot);
		
	}else{
		
		printf("Isento\n");
		
	}
	
	return 0;
}
