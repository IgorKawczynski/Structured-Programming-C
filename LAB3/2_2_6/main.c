#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float potega_n(float n, float m){

    if(n==0 && m==0)
        return 0;
    if(m==0)
        return 1;
    if(m<0)
        return NAN;

    float wynik=1;
    for(int i=0; i<m; i++)
    {
        wynik=wynik*n;

    }
    return wynik;

}


int main()
{
    printf("%f", potega_n(12, 3));
    return 0;
}
