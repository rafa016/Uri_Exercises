#include <stdio.h>
 
int main() {
	
	float tot, n001;
	int n100, n50, n20, n10, n5, n2, n1, n050, n025, n010, n005 ;
	scanf("%f", &tot);
	n100 = tot/100;
	tot = tot - (n100*100);
	n50 = tot/50;
	tot = tot - (n50*50);
	n20 = tot/20;
	tot = tot - (n20*20);
	n10 = tot/10;
	tot = tot - (n10*10);
	n5 = tot/5;
	tot = tot - (n5*5);
	n2 = tot/2;
	tot = tot - (n2*2);
	n1 = tot/1;
	tot = tot - (n1*1);
	n050 = tot/0.50;
	tot = tot - (n050*0.50);
	n025 = tot/0.25;
	tot = tot - (n025*0.25);
	n010 = tot/0.10;
	tot = tot - (n010*0.10);
	n005 = tot/0.05;
	tot = tot - (n005*0.05);
	n001 = tot/0.01;
	tot = tot - (n001*0.01);
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", n1);
	printf("%d moeda(s) de R$ 0.50\n", n050);
	printf("%d moeda(s) de R$ 0.25\n", n025);
	printf("%d moeda(s) de R$ 0.10\n", n010);
	printf("%d moeda(s) de R$ 0.05\n", n005);
	printf("%.0f moeda(s) de R$ 0.01\n", n001);

	
	return 0;
}
