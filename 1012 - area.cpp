#include <stdio.h>
 
int main() {
	
	double A, B, C, areaTriangulo, raioCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
	
	printf("A: ");
	scanf("%lf", &A);
	printf("B: ");
	scanf("%lf", &B);
	printf("C: ");
	scanf("%lf", &C);
	
	areaTriangulo = (A*C)/2;
	raioCirculo = 3.14159*C*C;
	areaTrapezio = C * (A + B) / 2;
	areaQuadrado = B*B;
	areaRetangulo = A*B;
	
	printf("TRIANGULO: %0.3lf\n", areaTriangulo);
	printf("CIRCULO: %0.3lf\n", raioCirculo);
	printf("TRAPEZIO: %0.3lf\n", areaTrapezio);
	printf("QUADRADO: %0.3lf\n", areaQuadrado);
	printf("RETANGULO: %0.3lf\n", areaRetangulo);
              
	 return 0;
}
