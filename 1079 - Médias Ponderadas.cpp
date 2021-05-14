#include <stdio.h>
 
int main() {
	
	int n, i;
	float a, b, c, media;
	
	scanf("%d", &n);
	float medias[n + 1];
		
		for(i = 0; i < n; i++){
			media = 0;
			scanf("%f", &a);
			scanf("%f", &b);
			scanf("%f", &c);
			
			media = (a * 2 + b * 3 + c * 5) / 10;
			medias[i] = media;
		}
			for(i = 0; i < n; i++){
				printf("%.1f\n", medias[i]);
			}
		
	return 0;
}
