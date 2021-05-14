#include <stdio.h>

int main()
{
    double x1, y1, x2, y2, v, r1, r2, X, Y, distancia, totraio;
    
    while(scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2) != EOF)
    {
        scanf("%lf%lf%lf", &v, &r1, &r2);
        
        X = (x2 - x1) * (x2 - x1);
        Y = (y2 - y1) * (y2 - y1);
        distancia = sqrt(X+Y);
        distancia += v * 1.50;
        totraio = r1 + r2;
        
        if(distancia > totraio){
        	
        	printf("N\n");
        	
		}else{
			
			printf("Y\n");
			
		} 
    }
    return 0;
}
