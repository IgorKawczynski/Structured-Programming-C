#include <stdio.h>
#include <stdlib.h>


void foo(unsigned int m, int tab[][m], unsigned int n){

    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            *(*(tab+i)+j)=0;
        }
    }
}


void wyswietl(unsigned int n, unsigned int m, int tab[][m]){

    for(int i=0; i<n; i++)
    {
        printf("[");
        for(int j=0; j<m; j++)
        {
            printf(" %d ", *(*(tab+i)+j));
        }
        printf("]\n");
    }
    printf("\n");
}

int main()
{
    int tab1[4][5];
    printf("Przed Wyzerowaniem : \n");
    wyswietl(4, 5, tab1);
    foo(5, tab1, 4);
    printf("Po Wyzerowaniu : \n");
    wyswietl(4, 5, tab1);
    return 0;
}
