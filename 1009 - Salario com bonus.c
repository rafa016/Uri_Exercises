#include <stdio.h>

int main() {
	
	char nome[60];
	float sal, vendas;
	
	scanf("%s", &nome);
	scanf("%f", &sal);
	scanf("%f", &vendas);
	

	printf("TOTAL = R$ %.2f\n", sal + vendas * 0.15);
	
	
		return 0;
}
