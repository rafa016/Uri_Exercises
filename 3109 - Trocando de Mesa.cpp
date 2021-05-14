#include <stdio.h>
 
int main() {
 
    int t[1010];
    int n, q, c, a, b, aux;

    scanf("%d %d", &n, &q);

    for (int i = 1; i <= n; ++i)
        t[i] = i;

    while (q--){

        scanf("%d %d", &c, &a);

        if (c == 1){

            scanf("%d", &b);

            ans = t[a];
            t[a] = t[b];
            t[b] = aux;
        }
        else{

            ans = 0;
            b = t[a];

            while (a != b)
                b = t[b], ++aux;

            printf("%d\n", aux);
        }
    }
    
    return 0;
}
