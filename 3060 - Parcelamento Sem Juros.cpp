#include <stdio.h>

int main(){

    int valor, parcelas;

    scanf("%d %d", &valor, &parcelas);

    if (valor % parcelas == 0){
        int x = valor / parcelas;
        for (int i = 0; i < parcelas; ++i)
            printf("%d\n", x);

    }
    else{

        int x = valor % parcelas;
        int y = valor / parcelas;
        for (int i = 0; i < x; ++i)
            printf("%d\n", y + 1);

        for (int i = 0; i < parcelas - x; ++i)
            printf("%d\n", y);

    }
    
    return 0;

}

