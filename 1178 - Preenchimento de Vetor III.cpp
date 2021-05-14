#include <stdio.h>
 
int main() {
	int count = 0;
	double num;
	double vetornum[100];
	scanf("%lf", &num);
	
	vetornum[0] = num;
	printf("N[%d] = %.4lf\n", count, vetornum[count]);
	count++;
	
	do{
		num = num/2;
		vetornum[count]	= num;
		printf("N[%d] = %.4lf\n", count, vetornum[count]);
		count++;
	}while(count < 100);
	
		return 0;
}
