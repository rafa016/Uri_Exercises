#include <stdio.h>
 
int main() {
	
	int x = 30, ano, mes, dias;
	//scanf("%d", &x);
	if(x > 360){
		ano = x/365;
		if(x%365 >= 30){
			mes = x%365/30;
			dias = x%365%30;
	
		}else{
			mes = 0;
			dias = x%365;
		}
	}else{
		ano = 0;
		if(x%365 >= 30){
			mes = x%365/30;
			dias = x%365%30;
		}else{
			mes = 0;
			dias = x%365;
		}
	}
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dias);
	
	return 0;
}
