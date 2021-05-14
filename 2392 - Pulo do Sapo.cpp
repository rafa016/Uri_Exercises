#include <stdio.h>
 
int main() {
 
    int qntSapo, qntPedra, i, localSapo, j, tamanhoPulo, k, l;
    int pedras[101];
    
    scanf("%d", &qntPedra);
 	scanf("%d", &qntSapo);
 
 	for(j = 0; j < 101; j ++){
 		pedras[j] = 0;
	 }
 	for(i = 0; i < qntSapo; i++){
 		scanf("%d", &localSapo);
 		scanf("%d", &tamanhoPulo);
 		pedras[localSapo - 1] = 1;
 		for(k = 0; k < qntPedra; k ++){
 			if(k % tamanhoPulo == 0){
 				pedras[k] = 1;	
			 }
		 }
	 }
	 for(l = 0; l < qntPedra; l++){
	 	printf("%d", pedras[l]);
	 }
    return 0;
}
