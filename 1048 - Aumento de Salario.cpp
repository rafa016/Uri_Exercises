#include <stdio.h>
 
int main() {
	
	float sal, aumento;
	scanf("%f", &sal);
	
	if(sal <= 400){
		
		aumento = sal * 0.15;
		
		printf("Novo salario: %.2f\n", sal + aumento);
		printf("Reajuste ganho: %.2f\n", aumento);
		printf("Em percentual: 15 %%\n");
		
	}else if( sal <= 800){
		
		aumento = sal * 0.12;
		
		printf("Novo salario: %.2f\n", sal + aumento);
		printf("Reajuste ganho: %.2f\n", aumento);
		printf("Em percentual: 12 %%\n");
		
		
		
	}else if( sal <= 1200){
		
		aumento = sal * 0.10;
		
		printf("Novo salario: %.2f\n", sal + aumento);
		printf("Reajuste ganho: %.2f\n", aumento);
		printf("Em percentual: 10 %%\n");
		
	}else if( sal <= 2000){
		
		aumento = sal * 0.07;
		
		printf("Novo salario: %.2f\n", sal + aumento);
		printf("Reajuste ganho: %.2f\n", aumento);
		printf("Em percentual: 7 %%\n");
		
	}else{
		
		aumento = sal * 0.04;
		
		printf("Novo salario: %.2f\n", sal + aumento);
		printf("Reajuste ganho: %.2f\n", aumento);
		printf("Em percentual: 4 %%\n");
		
	}
		
	
	
		return 0;
}
