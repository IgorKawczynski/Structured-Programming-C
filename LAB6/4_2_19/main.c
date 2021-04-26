#include <stdio.h>
#include <stdlib.h>

void print(unsigned int n, int *tab){

    printf("[");

    for(int i=0; i<n; i++)
    {
        printf(" %d ", *(tab+i));
    }
    printf("]");
    printf("\n");
}


void elements(unsigned int n, int *tab){

    for(int i = 0; i < n; i ++)
    {
        scanf("%d", &(*(tab + i)));


    }
}



int *przepis_rozne_od_zera(unsigned int n, int *tab1){

    int liczba_n=0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]!=0)
            liczba_n=liczba_n+1;
    }
    int *tab2=(int*)malloc(sizeof(*tab1)*liczba_n);
    int temp=1;
    for(int j=0;j<liczba_n;j++)
    {
        if(tab1[j]!=0)
        {
            *(tab2 + j) = *(tab1 + j);

        }
        else
            j=j+1;

    }
    return tab2;

}


int main()
{
    int n;
    printf("Enter the numbers of elements in tab1 : ");
    scanf("%d", &n);
    int tab1[n];
    printf("\n");
    printf("Enter the values of elements in tab1 : \n");
    elements(n, tab1);
    printf("\n");
    print(n, tab1);
    printf("\n");
    int *nowa=przepis_rozne_od_zera(n, tab1);
    int liczba_n=0;
    for(int i=0;i<n;i++)
    {
        if(tab1[i]!=0)
            liczba_n=liczba_n+1;
    }
    printf("Copy of tab1 without zeros : \n");
    print(liczba_n, nowa);
    printf("\n");


    printf("Hello world!\n");
    return 0;
}
