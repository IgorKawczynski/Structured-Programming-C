#include <stdio.h>
#include <stdlib.h>

void print(unsigned int n, double *tab){

    printf("[");

    for(int i=0; i<n; i++)
    {
        printf(" %lf ", *(tab+i));
    }
    printf("]");
    printf("\n");
}


void elements(unsigned int n, double *tab){

    for(int i = 0; i < n; i ++)
    {
        scanf("%lf", &(*(tab + i)));


    }
}


double *copythat(unsigned int n, double *tab){

    double *tab2=(double*)malloc(sizeof(*tab2)*n);
    for(int i=0;i<n;i++)
    {
        *(tab2+i)=*(tab+i);
    }

    return tab2;


}


int main()
{
    int n;
    printf("Enter the numbers of elements in tab1 and tab2 : ");
    scanf("%d", &n);
    double tab1[n];
    printf("\n");
    printf("Enter the values of elements in tab1 : \n");
    elements(n, tab1);
    printf("\n");
    print(n, tab1);
    printf("\n");
    double *nowa=copythat(n, tab1);
    printf("Copy of tab1 : \n");
    print(n, nowa);
    printf("\n");

    return 0;
}
