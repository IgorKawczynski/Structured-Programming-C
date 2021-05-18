#include <stdio.h>
#include <stdlib.h>

int **foo(unsigned int n, unsigned int m){

    int **tab=(int**)malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        *(tab+i)=malloc(m*sizeof(int));

    }
    return tab;
}

void elementy(int n, int m, int **tab){

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

void wyswietl(int n, int m, int **tab){


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

//Z POPRZEDNIEGO ZADANIA
void wprawo(int **tab, unsigned int n, unsigned int m){

    int i=0;
    int j=0;
    int temp;
    for(i=0; i<n; i++)
    {
        temp=tab[i][m-1];
        for(j=m-1; j>0; j--)
        {
            tab[i][j]=tab[i][j-1];
        }
        tab[i][0]=temp;
    }
}

int main()
{

    int n=4;
    int m=3;
    int **tab1=foo(n, m);
    printf("   TAB1: \n");
    elementy(n, m, tab1);
    printf("   TAB1: \n");
    wyswietl(n, m, tab1);
    printf("  TAB1 po przesunieciu kolumn w prawo: \n");
    wprawo(tab1, n, m);
    wyswietl(n, m, tab1);

    return 0;
}
