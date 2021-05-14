#include <stdio.h>

#include <string.h>

int main (){	

	char frase[1100];
	int casos, qtsLetras = 0, i, j, tam, tam2, k;
	int haletra = 0;

	scanf("%d", &casos);
	
	for(k = 0; k < casos; k++){
		char alfabeto[30] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0' };

		scanf(" %[^\n]", frase);

		tam = strlen(alfabeto);
		tam2 = strlen(frase);

		for (i = 0; i < tam2; i++){

			for (j = 0; j < tam; j++){
			
				if (frase[i] == alfabeto[j]){
					haletra = 1;
					alfabeto[j] = '1';
					break;
				}
			}

			if (haletra == 1)
				qtsLetras++;

			haletra = 0;

		}

		if (qtsLetras == 26)
			printf("frase completa\n");
		else if (qtsLetras > 12 && qtsLetras < 26)
			printf("frase quase completa\n");
		else
			printf("frase mal elaborada\n");

		qtsLetras = 0;

		
	}
	return 0;
}

