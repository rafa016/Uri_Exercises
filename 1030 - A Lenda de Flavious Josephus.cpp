#include <stdio.h>
int main(void) {
long long int NC, n, k, x , i, j=0;
scanf(&quot;%lli&quot;, &NC);
while(NC--) {
scanf(&quot;%lli %lli&quot;, &n, &k);
for(i = 1; i <= n; i++) {
x = k * i;
while(x > n) {
x = ((k * (x - n) - 1) / (k - 1));//Calcula o pulo
}
}
printf (&quot;Case %lli: %lli\n&quot;, ++j, x);
}
return 0;
}
