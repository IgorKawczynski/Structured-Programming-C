#include <stdio.h>
#include <stdlib.h>

////////////////TWORZENIE TABLICY TABLIC////////////////////
int **create_table(unsigned int n, unsigned int m){

    int **tab=(int**)malloc(n*sizeof(int*)); //n = liczba wierszy //int* = 8 bajtow zamiast 4 przy int
    for(int i=0; i<n; i++)
    {
        tab[i]=malloc(m*sizeof(int));  //*(tab+i) = malloc(m*sizeof(int));

    }
    return tab;
}


////////////////ZESKANOWANIE ELEMENTOW TABLICY TABLIC////////////////////
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

////////////////WYSWIETLENIE TABLICY TABLIC////////////////////
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

int *foo(int n, int m, int **tab){

    if(m>2)
        return *(*(tab+n-1)+2);
    else
        return NULL;
}

int main()
{
    unsigned int n=3;
    unsigned int m=4;

    int **tab1=create_table(n, m);
    elementy(n, m, tab1);
    wyswietl(n, m, tab1);
    printf("%d \n", foo(n, m, tab1));




    return 0;
}
