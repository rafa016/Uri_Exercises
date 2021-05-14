#include <stdio.h>
#include <string.h>

int main() {
	
	char primeira[60], segunda[60], terceira[60];
	scanf("%s", &primeira);
	scanf("%s", &segunda);
	scanf("%s", &terceira);
	
	
	if(strcmp(primeira, "vertebrado") == 0){
		
		if(strcmp(segunda, "ave") == 0){
			
			if(strcmp(terceira, "carnivoro") == 0){
				
				printf("aguia\n");
			
			}else{
				
				printf("pomba\n");
				
			}
			
		}else{
			
			if(strcmp(terceira, "onivoro" )== 0){
				
				printf("homem\n");
			
			}else{
				
				printf("vaca\n");
				
			}
			
			
		}
		
	}else{
		
		if(strcmp(segunda, "inseto") == 0){
			
			if(strcmp(terceira, "hematofago") == 0){
				
				printf("pulga\n");
			
			}else{
				
				printf("lagarta\n");
				
			}
			
		}else{
			
			if(strcmp(terceira, "onivoro") == 0){
				
				printf("minhoca\n");
			
			}else{
				
				printf("sanguessuga\n");
				
			}
			
		
		
	}
}
	return 0;
}
