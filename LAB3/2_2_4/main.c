#include <stdio.h>
#include <stdlib.h>

int potega_dwa_n(unsigned int n){

    int wynik=2;
    for(int i=0;i<=n;i++)
    {
        wynik=wynik*2;
    }
    return wynik;
}


int main()
{
    printf("%d", potega_dwa_n(4));
    return 0;
}
