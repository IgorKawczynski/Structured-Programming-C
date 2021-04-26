#include <stdio.h>
#include <stdlib.h>

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
            printf("%d ", tab[i][j]);
        }
        printf("]\n");
    }
}


int main()
{
    int n;
    int m;
    printf("Podaj liczbe wierszy :  ");
    scanf("%d", &n);
    printf("Podaj liczbe kolumn :  ");
    scanf("%d", &m);
    int tab[n][m];
    elementy(n, m, tab);
    wyswietl(n, m, tab);


    return 0;
}
