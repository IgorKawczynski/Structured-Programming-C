#include <stdio.h>
#include <stdlib.h>

//funkcja na stworzenie tablicy
int **foo(int n, int m){

    int **tab=(int**)malloc(n*sizeof(int*)); //n = liczba wierszy //int* = 8 bajtow zamiast 4 przy int
    for(int i=0; i<n; i++)
    {
        tab[i]=malloc(m*sizeof(int)); //teraz nadajemy komórkom w wierszach ilosc pamieci ( liczba kolumn )
        //*(tab+i)  =malloc(m*sizeof(int));                  //np. tab[0] = 10 ( 10 kolumn )
    }
    return tab;
}

//funkcja na wypelnienie tablicy elementami
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

//funkcja na wyswietlenie tablicy
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
    int n=2;
    int m=3;
    int **tab=foo(n, m);
    elementy(n, m, tab);
    wyswietl(n, m, tab);
    return 0;
}
