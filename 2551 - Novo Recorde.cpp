#include <stdio.h>
int main (){
    int n, tempo, distancia, aux;
    float velocidade, velocidademaior;
    while (scanf("%i", &n)!=EOF) {
        velocidademaior = 0;
        for (aux=1; aux<=n; aux++) {
            scanf("%i %i", &tempo, &distancia);
            velocidade = (float) distancia/tempo;
            if (velocidade > velocidademaior) {
            	
			printf("%i\n", aux); velocidademaior = velocidade;
			
			}
        }
    }
    return 0;
}
