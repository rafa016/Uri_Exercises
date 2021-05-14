#include <stdio.h>
 
int main() {
	
	int n, qnthrs;
	float valorhr;
	
	scanf("%d", &n);
	scanf("%d", &qnthrs);
	scanf("%f", &valorhr);
	
	printf("NUMBER = %d\n", n);
	printf("SALARY = U$ %.2f\n", qnthrs * valorhr);
	
	
		return 0;
}
