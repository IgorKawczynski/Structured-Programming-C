#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potega(int n, int m){

    int potega=1;
    if(n==0 && m==0)
        return 0;
    if(n==0 && m<0)
    return NAN;

    for(int i=0;i<m;i++)
    {                           //SLOWO KLUCZOWE RETURN -- IF SIE KONCZY W MOMENCIE WIEC RETURNA.
        potega=potega*n;
    }
    return potega;

}

int main()
{
    int x,y;
    scanf("%d\n%d", &x, &y);
    printf("%d", potega(x, y));
    return 0;
}
