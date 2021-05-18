#include <stdio.h>
#include <stdlib.h>

void foo(int tab[][100], unsigned int n){

    for(int i=0;i<n;i++)
    {
        for(int j=0; j<100; j++)
        {
            *(*(tab+i)+j)=0;
        }
    }
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

    int tab1[4][100];
    foo(tab1, 4);
    wyswietl(4, 100, tab1);

    return 0;
}
