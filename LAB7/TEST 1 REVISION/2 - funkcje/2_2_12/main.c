#include <stdio.h>
#include <stdlib.h>

int potega_n(unsigned int n, unsigned int m){

    if(m==0)
        return 1;
    if(n==0 && m)
        return 0;
    int wynik=1;
    for(int i=0;i<m;i++)
    {
        wynik=wynik*n;
    }
    return wynik;


}

int pierwiastek_n(unsigned int n, unsigned int m){

    int wynik=0;
    if(n==0)
        return 0;
    if(m>1)
    {
        for(int i=0; potega_n(i, m)<=n; i++)
        {
            wynik=i;
        }
    }
    return wynik;
}

int SUMA(unsigned int n, unsigned int m){

    int wynik=0;
    if(m>1)
    {
        for(int i=0; i<=n; i++)
        {
            wynik=wynik+pierwiastek_n(i, m);

        }

    }
    return wynik;
}


int main()
{

    printf("%d\n", SUMA(9, 3));
    return 0;
}
