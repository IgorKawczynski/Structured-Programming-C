#include <stdio.h>
#include <stdlib.h>

////////////////TWORZENIE TABLICY ELEMENTOW////////////////////
float (*create_table(unsigned int n, unsigned int m))[]{

    return malloc(n*sizeof(float[m]));

}

////////////////ZESKANOWANIE ELEMENTOW TABLICY ELEMENTOW////////////////////
void elementy(int n, int m, float tab[n][m]){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("[%d, %d] =  ", i, j);
            scanf("%f", &tab[i][j]);
            printf("\n");

        }
    }
}


////////////////WYSWIETLENIE TABLICY ELEMENTOW////////////////////
void wyswietl(int n, int m, float tab[n][m]){


    for(int i=0; i<n; i++)
    {
        printf("[");
        for(int j=0; j<m; j++)
        {
            printf(" %f ", tab[i][j]);
        }
        printf("]\n");
    }
}

//////////////////////ODWRACA ELEMENTY WE WIERSZACH - TABLICE ELEMENTOW///////////////////
void odwroc(unsigned int n, unsigned int m, float tab[n][m]){

    float temp=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m/2; j++)
        {
            if(i%2!=0)
            {
                temp=tab[i][j];
                tab[i][j]=tab[i][m-j-1];
                tab[i][m-j-1]=temp;
            }

        }
    }
}

int main()
{
    int n=4;
    int m=4;
    float (*tab2)[m]=create_table(n, m);
    elementy(n, m, tab2);
    wyswietl(n, m, tab2);
    odwroc(n, m, tab2);
    printf("\n ----- PO ODWROCENIU : ------\n");
    wyswietl(n, m, tab2);


    return 0;
}
