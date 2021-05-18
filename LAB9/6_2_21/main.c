#include <stdio.h>
#include <stdlib.h>

int **foo(unsigned int n, unsigned int m){

    int **tab=(int**)malloc(n*sizeof(int*)); //n = liczba wierszy //int* = 8 bajtow zamiast 4 przy int
    for(int i=0; i<n; i++)
    {
        *(tab+i)=malloc(m*sizeof(int));  //*(tab+i)  =malloc(m*sizeof(int));

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

void odwroc(int **tab, unsigned int n, unsigned int m){

    int temp=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m/2; j++)
        {
            temp=tab[i][j];
            tab[i][j]=tab[i][m-j-1];
            tab[i][m-j-1]=temp;
        }
    }


}

int main()
{

    int n=2;
    int m=4;
    int **tab1=foo(n, m);
    printf("   TAB1: \n");
    elementy(n, m, tab1);
    printf("   TAB1: \n");
    wyswietl(n, m, tab1);
    odwroc(tab1, n, m);
    printf("  TAB1 po odwroceniu: \n");
    wyswietl(n, m, tab1);



    return 0;
}
