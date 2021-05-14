#include <stdio.h>
 
int main() {
 
    int qntFaculdades, i, alunos, total = 0, totalnegativo = 0;
    
    scanf("%d", &qntFaculdades);
    
    for(i = 0; i < qntFaculdades; i++){
    	
    	scanf("%d", &alunos);
    	
    	total += alunos;
    	
    	totalnegativo += alunos%3;
    	
	}
	total = total - totalnegativo;
	
	printf("%d\n", total);
 	
    return 0;
}
