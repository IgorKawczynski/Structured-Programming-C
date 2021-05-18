#include <stdio.h>
#include <stdlib.h>

int foo(int tab[][100][100], unsigned int n){

    int suma=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<100; j++)
        {
            for(int l=0; l<100; l++)
            {
                suma=suma+tab[i][j][l];
            }
        }
    }
    return suma;
}


int main()
{

    int n=6;
    int tab1[n][100][100];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<100; j++)
        {
            for(int l=0; l<100; l++)
            {
                tab1[i][j][l]=1;
            }
        }
    }
    printf("%d\n", foo(tab1, n));
    return 0;
}
