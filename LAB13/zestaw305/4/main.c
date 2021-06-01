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


////////////////TWORZENIE TABLICY ELEMENTOW////////////////////
int (*create_table2(unsigned int n, unsigned int m))[]{

    return malloc(n*sizeof(int[m]));

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

////////////////ZESKANOWANIE ELEMENTOW TABLICY ELEMENTOW////////////////////
void elementy2(int n, int m, int tab[n][m]){

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



///   fun float int int ( ) [ ] [ ] ** tab tab2 5

float fun(int **tab, int tab2[][5])
{
    float x=**tab+**tab2+3.14;
    return x;
}


int main()
{

    unsigned int n=5;
    unsigned int m=5;

    int **tab1=create_table(n, m);
    elementy(n, m, tab1);

    int (*tab2)[m]=create_table2(n, m);
    elementy2(n, m, tab2);

    printf(":   %f \n", fun(tab1, tab2));


    printf("Hello world!\n");
    return 0;
}
