#include <stdio.h>
#include <stdlib.h>

int (**foo(unsigned int n, unsigned int m, unsigned int k))[]{

    return malloc(n*sizeof(int[m][k]));

}

void freedom(unsigned int n, unsigned int m, unsigned int k, int tab[n][m][k]){

    free(tab);
}

void elementy(unsigned int n, unsigned int m, unsigned int k, int tab[n][m][k]){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int l=0; l<k; l++)
            {
                printf("[%d, %d, %d] = ", i, j, l);
                scanf("%d", &tab[i][j][l]);
            }

        }
    }
}
void wyswietl(unsigned int n, unsigned int m, unsigned int k, int tab[n][m][k]){

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            for(int l=0; l<k; l++)
            {
                printf("[%d %d %d] = %d\n", i, j, l, tab[i][j][l]);
            }

        }
    }
}

int main()
{
    int n=2;
    int m=2;
    int k=2;
    int (**tab1)[k]=foo(n, m, k);
    elementy(n, m, k, tab1);
    printf("\nTAB :\n");
    wyswietl(n, m, k, tab1);

    //zwolnienie pamieci
    freedom(n, m, k, tab1);
    wyswietl(n, m, k, tab1);

    return 0;
}
