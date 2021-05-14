#include <stdio.h>
 
int main() {
 
    int qnt, i;
	double lado, apotema, total;
	
	
    scanf("%d", &qnt);
    
    for(i = 0; i < qnt; i++){
    	
		scanf("%lf", &lado);
	    
	    apotema = (lado / 2) / 0.72654252800536088589546675748062;
	    
	    total = lado * 5 * apotema / 2;
	    
	    printf("%.3lf\n", total);
    
    	
    	
	}
    
    return 0;
}
