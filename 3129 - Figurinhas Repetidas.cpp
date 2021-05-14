#include <stdio.h>
 
int main() {
 	int v[10123];
    int n, x,i;

    scanf("%d", &n);

    int r, d;
    r = 0;
	d = 0;
    for (i = 0; i < n; ++i)
    {

        scanf("%d", &x);

       
        if(!v[x]){
        	
        	d++;
        	
		}else{
			
			r++;
			
		}
        ++v[x];
    }

    printf("%d\n%d\n", d, r);

 
    return 0;
}
