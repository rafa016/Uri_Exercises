#include <stdio.h>
 
int main() {
	
	float tempo, velmedia;
	scanf("%f", &tempo);
	scanf("%f", &velmedia);
	printf("%.3f\n", tempo*velmedia/12);
	
	return 0;
}
