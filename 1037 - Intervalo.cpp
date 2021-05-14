#include <stdio.h>
 
int main() {
	
	double x = 200;
	scanf("%lf", &x);
	x >= 0 && x <= 25 ? printf("Intervalo [0,25]\n") : x > 25 && x <= 50 ? printf("Intervalo (25,50]\n") : x > 50 && x <= 75 ? printf("Intervalo (50,75]\n") : x > 75 && x <= 100 ? printf("Intervalo (75,100]\n") : printf("Fora de intervalo\n");               
	
	 return 0;
}
