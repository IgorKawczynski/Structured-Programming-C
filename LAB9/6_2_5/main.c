#include <stdio.h>
#include <stdlib.h>

int ***foo(unsigned int n, unsigned int m, unsigned int k){

    int ***tab=(int***)malloc(n*sizeof(int**)); //n = liczba wierszy //int* = 8 bajtow zamiast 4 przy int
    for(int i=0; i<n; i++)
    {
        tab[i]=malloc(m*sizeof(int*));  //*(tab+i)  =malloc(m*sizeof(int));
        for(int j=0; j<m; j++)
        {
            tab[i][j]=malloc(k*sizeof(int)); //*(*(tab+i)+j)=malloc(k*sizeof(int));
        }
    }
    return tab;
}

void elementy(int n, int m, int k, int ***tab){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int l=0; l<k; l++)
            {
               printf("[%d, %d, %d] =  ", i, j, l);
                scanf("%d", &tab[i][j][l]);
                printf("\n");

            }

        }
    }
}

void wyswietl(int n, int m, int k, int ***tab){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int l=0; l<k; l++)
            {
                printf("Tab[%d][%d][%d] = %d | %p \n", i, j, l, *(*(*(tab+i)+j)+l), *(*(tab+i)+j)+l);
            }
        }
        printf("\n");
    }
}

void freedom(unsigned int n, unsigned int m, unsigned int k, int ***tab){

    int i=0;
    for(i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
        {
            free(*(*(tab+i)+j));  //najpierw zwalniamy 3ci wymiar
        }
        free(*(tab+i));  //nastepnie 2gi wymiar
    }
    free(tab);  //na koniec zwalniamy calosc
}

int main()
{
    unsigned int n=2;
    unsigned int m=2;
    unsigned int k=2;
    int ***tab=foo(n, m, k);
    elementy(n, m, k, tab);
    wyswietl(n, m, k, tab);
    freedom(n, m, k, tab);
    printf("Adres Tablicy : %p\n", tab);
    return 0;
}
