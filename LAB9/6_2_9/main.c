#include <stdio.h>
#include <stdlib.h>

int **create_table(unsigned int n, unsigned int m){

    int **tab=(int**)malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        *(tab+i)=malloc(m*sizeof(int));
    }
    return tab;


}

void foo(unsigned int n,  unsigned int m, int **tab){

    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            *(*(tab+i)+j)=0;
        }
    }
}


void wyswietl(unsigned int n, unsigned int m, int **tab){

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
    int **tab1=create_table(4, 5);
    printf("Przed Wyzerowaniem : \n");
    wyswietl(4, 5, tab1);
    foo(4, 5, tab1);
    printf("Po Wyzerowaniu : \n");
    wyswietl(4, 5, tab1);
    return 0;
}
