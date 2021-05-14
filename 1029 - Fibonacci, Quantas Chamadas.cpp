 #include <stdio.h>
 
int main() {
 
    int n, i;
    long long int a;
    long long int acum[61];
    long long int chamadas[60];
    
    scanf("%d",&n);
    
    for (i = 0; i < n; i++) {
        scanf("%lld", &a);

        int i;

        acum[0] = 0;
        acum[1] = 1;

        chamadas[0] = 0;
        chamadas[1] = 0;
        
        for(i = 2; i <= a; i++) {
            acum[i] = acum[i-1] + acum[i-2];
            chamadas[i] = chamadas[i-1] + chamadas[i-2] + 2;
        }
    
        printf("fib(%lld) = %lld calls = %lld\n", a, chamadas[a], acum[a]);
    }
 
    return 0;
}
