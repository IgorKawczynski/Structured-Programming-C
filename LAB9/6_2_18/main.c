#include <stdio.h>
#include <stdlib.h>

int **foo(unsigned int n, unsigned int m){

    int **tab=(int**)malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        *(tab+i)=malloc(m*sizeof(int));

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

int main()
{

    int n=2;
    int m=3;
    int **tab=foo(n, m);
    *(*(tab))=2;
    *(*(tab)+1)=3;
    *(*(tab)+2)=4;
    *(*(tab+1))=5;
    *(*(tab+1)+1)=6;
    *(*(tab+1)+2)=7;
    wyswietl(n, m, tab);

    return 0;
}
