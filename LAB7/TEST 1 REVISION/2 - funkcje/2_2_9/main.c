#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potega_n(int n, int m){

    int wynik=1;
    if(n==0)
        return 0;
    if(m==0)
        return 1;
    if(m<1)
        return NAN;
    if(m>1)
    {
        for(int i=0;i<m;i++)
        {
            wynik=wynik*n;
        }

    }
    return wynik;

}


float pierwiastek_n(unsigned int n, int m){

    float wynik=0;
    if(m>1)
    {
        for(int i=0; potega_n(i, m)<=n; i++)
        {
            wynik=i;
        }

    }
    return (float)wynik;

}

int main()
{

    printf("%d\n", potega_n(-6, 3));
    printf("%f\n", pierwiastek_n(9, 3));
    return 0;
}
