#include <stdio.h>
 
int main() {
 
    char teclas[48] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
	char c;
	int i;
	
	while( scanf("%c",&c)!=EOF) {
	
		for (i = 0; i < 48; i++) {
			if (c == teclas[i]) {
				printf("%c",teclas[i - 1]);
				break;
			}
			else if (c == ' ') {
				printf(" ");
				break;
			}
			else if (c == '\n') {
				printf("\n");
				break;
			}
		}
	}
	
 
    return 0;
}
