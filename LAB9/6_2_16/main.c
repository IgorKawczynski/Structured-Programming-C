#include <stdio.h>
#include <stdlib.h>

int **create(unsigned int n, unsigned int m){

    int **tab=(int**)malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        tab[i]=malloc(m*sizeof(int));

    }
    return tab;
}

int foo(int **tab, unsigned int n, unsigned int m){

    int temp=0;
    double temp2;
    int suma_wiersza=0;
    double srednia_wiersza=0;

    for(int i=0; i<n; i++)
    {
        suma_wiersza=0;
        for(int j=0; j<m; j++)
        {
            suma_wiersza=suma_wiersza+(*(*(tab+i)+j));
        }
        srednia_wiersza=(double)suma_wiersza/m;
        if( (srednia_wiersza>temp2) || (i==0) )
        {
            temp=i;
            temp2=(double)suma_wiersza/m;
        }

    }
    return temp;

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

int main()
{
    int **tab1=create(3, 4);
    elementy(3, 4, tab1);
    wyswietl(3, 4, tab1);
    printf("Numer indeksu wiersza o najwiekszej sredniej to : %d\n", foo(tab1, 3, 4));
    return 0;
}
