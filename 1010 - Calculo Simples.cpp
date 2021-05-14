#include <stdio.h>

int main() {
	
	int c1, n1, c2, n2;
	float v1,v2;
	
	scanf("%d", &c1);
	scanf("%d", &n1);
	scanf("%f", &v1);
	scanf("%d", &c2);
	scanf("%d", &n2);
	scanf("%f", &v2);
	
	
	
	printf("VALOR A PAGAR: R$ %.2f\n", v1 * n1 + v2 * n2);
	
	
		return 0;
}
