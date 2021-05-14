#include <stdio.h>
#include <math.h>
int main() {
	
	//char nome[60];
	float sal, vendas;
	
	//scanf("%c", &nome);
	scanf("%f", &sal);
	scanf("%f", &vendas);
	

	printf("TOTAL = R$ %.2f\n", sal + vendas * 0.15);
	
	
		return 0;
}
