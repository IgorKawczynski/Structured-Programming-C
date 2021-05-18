#include <stdio.h>
#include <stdlib.h>

int **foo(unsigned int n){

    int **tab=(int**)malloc(n*sizeof(int*));
    for(int i=0; i<n; i++)
    {
        *(tab+i)=malloc((i+1)*sizeof(int));
    }
    return tab;
}

int main()
{

    int **tab=foo(3);
    printf("Adres tablicy : %p\n", &tab);
    return 0;
}
