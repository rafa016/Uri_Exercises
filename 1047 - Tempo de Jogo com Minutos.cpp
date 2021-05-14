#include <stdio.h>
int main()
{
    int hr,hrfim,c,d,min,minfim;
    scanf("%d%d%d%d", &hr, &min, &hrfim, &minfim);
    if(hr==minfim && hrfim==minfim && minfim==min)
    {
        c=min-minfim;
        d=24+hr-hrfim;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(hr==hrfim && minfim>min)
    {
        c=minfim-min;
        d=hr-hrfim;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(hr==hrfim && min>minfim)
    {
        c=60-min+minfim;
        d=24-hr+hrfim-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(min==minfim && hr<hrfim)
    {
        c=0;
        d=hrfim-hr;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(min==minfim && hr>hrfim)
    {
        c=0;
        d=24-hr+hrfim;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(hrfim>hr && minfim>min)
    {
        c=minfim-min;
        d=hrfim-hr;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(hr<hrfim && min>minfim)
    {
        c=60-min+minfim;
        d=hrfim-hr-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(hr>hrfim && min<minfim)
    {
        c=minfim-min;
        d=24-hr-1+hrfim;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    else if(hr>hrfim && min>minfim)
    {
        c=60+minfim-min;
        d=24+hrfim-hr-1;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", d, c);
    }
    return 0;
}
