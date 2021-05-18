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

void foo(int **tab1, int **tab2, unsigned int n, unsigned int m){

    int i,j;
    //utworzenie pomocniczej tablicy
    int **temp=(int**)malloc(n*sizeof(int*)); //n = liczba wierszy //int* = 8 bajtow zamiast 4 przy int
    for(i=0; i<n; i++)
    {
        *(temp+i)=malloc(m*sizeof(int));  //*(tab+i)  =malloc(m*sizeof(int));

    }
    //wypelnienie pomocniczej tablicy elementami tab2
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            *(*(temp+i)+j)=*(*(tab2+i)+j);

        }
    }
    //zamiania wartosci obu tablic
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            *(*(tab2+i)+j)=*(*(tab1+i)+j);

        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            *(*(tab1+i)+j)=*(*(temp+i)+j);

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
    printf("TAB2 : \n");
    elementy(n, m, tab2);
    printf("TAB2 : \n");
    wyswietl(n, m, tab2);
    foo(tab1, tab2, n, m);
    printf("TAB1 po zamianie: \n");
    wyswietl(n, m, tab1);
    printf("TAB2 po zamianie: \n");
    wyswietl(n, m, tab2);

    return 0;
}
