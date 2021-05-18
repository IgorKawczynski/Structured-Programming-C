#include <stdio.h>
#include <stdlib.h>

int **foo(unsigned int n){

    int **tab=(int**)malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        *(tab+i)=malloc(n*sizeof(int));

    }
    return tab;
}

void elementy(int n, int **tab){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("[%d, %d] =  ", i, j);
            scanf("%d", &tab[i][j]);
            printf("\n");

        }
    }
}

void wyswietl(int n, int **tab){


    for(int i=0; i<n; i++)
    {
        printf("[");
        for(int j=0; j<n; j++)
        {
            printf(" %d ", *(*(tab+i)+j));
        }
        printf("]\n");
    }
}

void transpozycja(int **tab, unsigned int n){

    int i=0;
    int j=0;
    int **temp=foo(n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            temp[i][j]=tab[j][i];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            tab[i][j]=temp[i][j];
        }
    }
}

int main()
{

    int n=4;
    int **tab1=foo(n);
    printf("   TAB1: \n");
    elementy(n, tab1);
    printf("   TAB1: \n");
    wyswietl(n, tab1);
    printf("  TAB1 po transpozycji: \n");
    transpozycja(tab1, n);
    wyswietl(n, tab1);

    return 0;
}
