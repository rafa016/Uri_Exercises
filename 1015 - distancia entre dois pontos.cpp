#include <stdio.h>
#include <math.h>
int main() {
	
	float x1 = -2.5, y1 = 0.4, x2 = 12.1, y2 = 7.3;
	
	//scanf("%f", &x1);
	//scanf("%f", &y1);
	//scanf("%f", &x2);
	//scanf("%f", &y2);
	printf("%0.4f", sqrt((x2*x2) - 2*x2*x1 + (x1*x1) +  (y2*y2) - 2*y2*y1 + (y1*y1)));
	
	
	
	return 0;
}
