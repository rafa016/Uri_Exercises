#include <stdio.h>
 
int main() {
 
    int qnt, qntmin, x;

    scanf("%d%d", &qnt, &qntmin);

    for(int i = 0; i < qnt; i++){

        scanf("%d", &x);

        if(x <= 0){
        	
        	 qntmin--;
        	 
		}
           
    }
	
	if(qntmin <= 0){

            printf("YES\n");
           	

    }else{
    	
    		printf("NO\n");
    	
	}
        
    

    return 0;
}
