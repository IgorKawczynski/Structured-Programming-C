#include <stdio.h>
#include <stdlib.h>

int **foo(unsigned int n, unsigned int m){

    int **tab=(int**)malloc(n*sizeof(int*)); //n = liczba wierszy //int* = 8 bajtow zamiast 4 przy int
    for(int i=0; i<n; i++)
    {
        tab[i]=malloc(m*sizeof(int));  //*(tab+i) = malloc(m*sizeof(int));

    }
    return tab;
}

void elementy(int n, int m, int tab[n][m]){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("[%d, %d] =  ", i, j);
            scanf("%d", &tab[i][j]);
            printf("\n");

        }
    }
}

void wyswietl(int n, int m, int tab[n][m]){


    for(int i=0; i<n; i++)
    {
        printf("[");
        for(int j=0; j<m; j++)
        {
            printf(" %d ", tab[i][j]);
        }
        printf("]\n");
    }
}

int main()
{
    unsigned int n=3;
    unsigned int m=2;
    int **tab=foo(n, m);
    elementy(n, m, tab);
    wyswietl(n, m, tab);
    return 0;
}
