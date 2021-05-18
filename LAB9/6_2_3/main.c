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

void freedom(unsigned int n, unsigned int m, int **tab){

    int i=0;
    for(i=0; i<n; i++)
    {
        free(*(tab+i));
    }
    free(tab);
}


int main()
{

    int n=2;
    int m=3;
    int **tab=foo(n, m);
    printf("ADRES TABLICY PRZED ZWOLNIENIEM PAMIECI: %p\n", tab);
    elementy(n, m, tab);
    wyswietl(n, m, tab);
    freedom(n, m, tab);
    printf("ADRES TABLICY PO ZWOLNIENIU PAMIECI: %p\n", &tab);


    return 0;
}
