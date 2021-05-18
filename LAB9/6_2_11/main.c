#include <stdio.h>
#include <stdlib.h>

int foo(int tab[][100], unsigned int n){

    int suma=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<100; j++)
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
    int tab1[n][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<100; j++)
        {
            tab1[i][j]=1;
        }
    }
    wyswietl(n, 100, tab1);
    printf("Suma wartosci elementow tablicy jest rowna :  %d \n\n", foo(tab1, n));
    return 0;
}
