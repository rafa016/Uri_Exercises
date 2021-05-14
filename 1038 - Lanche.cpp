#include <stdio.h>
 
int main() {
	
	
	int cod, qnt;
	float tot;
	
	scanf("%d", &cod);
	scanf("%d", &qnt);
	switch(cod){
		
		case 1:
			tot = qnt * 4;
			printf("Total: R$ %.2f\n", tot);
			break;
		case 2:
			tot = qnt * 4.5;
			printf("Total: R$ %.2f\n", tot);
			break;
		case 3:
			tot = qnt * 5;
			printf("Total: R$ %.2f\n", tot);
			break;
		case 4:
			tot = qnt * 2;
			printf("Total: R$ %.2f\n", tot);
			break;
		case 5:
			tot = qnt * 1.5;
			printf("Total: R$ %.2f\n", tot);
			break;
	}
	
	return 0;
}
