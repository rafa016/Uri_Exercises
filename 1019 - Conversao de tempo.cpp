#include <stdio.h>
 
int main() {
	
	int x, min, hr, seg;
	scanf("%d", &x)
	if(x > 60){
		min = x/60;
		seg = x%60;
		if(min > 60){
			hr = min/60;
			min = min%60;
		}else{
			hr = 0;
		}
	}else{
		min = 0;
		hr = 0;
		seg = x;
	}
	printf("%d:%d:%d", hr, min, seg);
	return 0;
}
