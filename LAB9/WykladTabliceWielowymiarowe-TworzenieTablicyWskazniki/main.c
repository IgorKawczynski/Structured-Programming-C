#include <stdio.h>
#include <stdlib.h>
//DOOOOOOOOKONCZ
int tablica(int n, int m, int **tab){

    **tab=(int**)malloc(sizeof(int*)*n);
    for(int i=0; i<n; i++)
    {
        tab[i]=(int*)malloc(sizeof(int)*m);
    }
    return tab;
}



int main()
{


    return 0;
}
