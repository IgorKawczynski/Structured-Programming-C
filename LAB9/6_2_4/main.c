#include <stdio.h>
#include <stdlib.h>

int (*foo(unsigned int n, unsigned int m))[]{

    return malloc(n*sizeof(int[m]));
}

void elementy(int n, int m, int tab[][m]){

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

void wyswietl(int n, int m, int tab[][m]){

    for(int i=0; i<n; i++)
    {
        printf("[");
        for(int j=0; j<m; j++)
        {
            printf(" %d ", (*(*(tab+i)+j)));
        }
        printf("]\n");
    }
}

void freedom(unsigned int n, unsigned int m, int tab[n][m]){

    free(tab);
}

int main()
{

    int n=2;
    int m=3;
    int (*tab)[m]=foo(n, m);
    printf("ADRES TABLICY PRZED ZWOLNIENIEM PAMIECI: %p\n", tab);
    elementy(n, m, tab);
    wyswietl(n, m, tab);
    printf("ADRES TABLICY PO ZWOLNIENIU PAMIECI: ");
    freedom(n, m, tab);
    printf(" %p\n", tab);

    return 0;
}
