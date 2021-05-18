#include <stdio.h>
#include <stdlib.h>

int **create(unsigned int n, unsigned int m){

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
//drugi indeks ? ? ?
void foo(int **tab1, int **tab2, unsigned int n, unsigned int m){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            *(*(tab2+i)+j)=*(*(tab1+i)+j);
        }
    }
}

int main()
{

    int n=2;
    int m=3;
    int **tab1=create(n, m);
    printf("TAB1 : \n");
    elementy(n, m, tab1);
    printf("TAB1 : \n");
    wyswietl(n, m, tab1);
    int **tab2=create(n, m);
    foo(tab1, tab2, n, m);
    printf("TAB2 po przepisaniu : \n");
    wyswietl(n, m, tab2);



    return 0;
}
