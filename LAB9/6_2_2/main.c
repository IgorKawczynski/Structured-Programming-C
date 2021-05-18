#include <stdio.h>
#include <stdlib.h>

int (*foo(unsigned int n, unsigned int m))[]{

    return malloc(n*sizeof(int[m]));

}

void elementy(unsigned int n, unsigned int m, int tab[n][m]){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("[%d, %d] = ", i, j);
            scanf("%d", &tab[i][j]);
        }
    }
}
void wyswietl(unsigned int n, unsigned int m, int tab[n][m]){


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
    int n=2;
    int m=3;
    int (*tab)[m]=foo(n, m);
    elementy(n, m, tab);
    wyswietl(n, m, tab);

    printf("Hello world!\n");
    return 0;
}
