#include <stdio.h>
#include <stdlib.h>

int foo(unsigned int m, int tab[][m], unsigned int n){

    int suma=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            suma=suma+tab[i][j];
        }

    }
    return suma;
}

void wyswietl(int n, int m, int tab[n][m]){

    for(int i=0; i<n; i++)
    {
        printf("[");
        for(int j=0; j<m; j++)
        {
            printf(" %d ", *(*(tab+i)+j));
        }
        printf("]\n");
    }
}

int main()
{
    int n=5;
    int m=6;
    int tab1[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            tab1[i][j]=2;
        }
    }
    wyswietl(n, m, tab1);
    printf("Suma wartosci elementow tablicy jest rowna :  %d \n\n", foo(m, tab1, n));
    return 0;
}
