#include <stdio.h>
#include <math.h> 
int main() {
	
		double a, b, c, delta, raiz1, raiz2;
		scanf("%lf", &a);
		scanf("%lf", &b);
		scanf("%lf", &c);
		delta = (b*b) -(4*a*c) ;
		
		if(delta >= 0 && a != 0){
			
			raiz1 = (-b + sqrt(delta)) / (2 * a);
			raiz2 = (-b - sqrt(delta)) / (2 * a);
			
			printf("R1 = %.5lf\n", raiz1);
			printf("R2 = %.5lf\n", raiz2);
		} else{
			
			
			printf("Impossivel calcular\n");
		}
		
	return 0;
}
