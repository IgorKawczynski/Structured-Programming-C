#include <stdio.h>
#include <stdlib.h>

void wyswietl(unsigned int n, int tab[n]){

    for(int i=0;i<n;i++)
    {
        printf("%d  ", tab[i]);
    }
    printf("\n");

}

float foo1(unsigned int n, int tab[n]){

    float srednia=0;
    for(int i=0;i<n;i++)
    {
        srednia=srednia+tab[i];

    }
    srednia=srednia/n;
    return srednia;

}

int foo2(unsigned int n, int tab[n]){

    int suma=0;
    for(int i=0;i<n;i++)
    {
        suma=suma+tab[i];

    }
    return suma;

}

int foo3(unsigned int n, int tab[n]){

    int sumakwadratow=0;
    for(int i=0;i<n;i++)
    {
        sumakwadratow=sumakwadratow+(tab[i]*tab[i]);

    }
    return sumakwadratow;

}

int main()
{
    int n=5;
    int tab[5]={1,3,4,4,21};

    printf("%f\n", foo1(n, tab));
    printf("%d\n", foo2(n, tab));
    printf("%d\n", foo3(n, tab));
    return 0;
}
