#include <stdio.h>
#include <stdlib.h>

int **create_table(unsigned int n){

    int **tab=(int**)malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        *(tab+i)=malloc(100*sizeof(int));
    }
    return tab;
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

int foo(int **tab, unsigned int n){

    int suma=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<100; j++)
        {
            suma=suma+(*(*(tab+i)+j));
        }

    }
    return suma;
}

int main()
{
    int n=2;
    int **tab1=create_table(n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<100; j++)
        {
            *(*(tab1+i)+j)=2;
        }
    }
    wyswietl(n, 100, tab1);
    printf("Suma wartosci elementow tablicy jest rowna :  %d \n\n", foo(tab1, n));
    return 0;
}
