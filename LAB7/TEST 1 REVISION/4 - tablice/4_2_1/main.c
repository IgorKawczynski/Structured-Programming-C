#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void wyswietl(unsigned int n, int tab[n]){

    for(int i=0;i<n;i++)
    {
        printf("%d  ", tab[i]);
    }
    printf("\n");

}

void foo1(unsigned int n, int tab[n]){

    for(int i=0; i<n; i++)
    {
        tab[i]=0;
    }
}

void foo2(unsigned int n, int tab[n]){

    for(int i=0; i<n; i++)
    {
        tab[i]=i;
    }
}

void foo3(unsigned int n, int tab[n]){

    for(int i=0; i<n; i++)
    {
        tab[i]=2*tab[i];
    }
}

void foo4(unsigned int n, int tab[n]){

    for(int i=0; i<n; i++)
    {
        tab[i]=abs(tab[i]);
    }
}

int main()
{
    int n=5;
    int tab[5]={1,2,3,4,5};
    wyswietl(n, tab);
    foo1(n, tab);
    wyswietl(n, tab);
     foo2(n, tab);
    wyswietl(n, tab);
     foo3(n, tab);
    wyswietl(n, tab);
     foo4(n, tab);
    wyswietl(n, tab);
    return 0;
}
