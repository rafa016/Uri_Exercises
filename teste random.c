#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>


int main(){
	int i;
	srand(time(NULL));
	
	for(i = 0; i < 10; i++){
		
		printf("%d ", rand() % 10);
		
	}
	
	
	
	
	
	return 0;
}
