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


void scalar_product(unsigned int n, double tab1[], double tab2[], double tab3[]){

    for(int i = 0; i < n; i ++)
    {
      tab3[i]=tab1[i] * tab2[i];

    }

}


int main()
{
    int n;
    printf("Enter the number of elements in tab1 and tab2 : ");
    scanf("%d", &n);
    double tab1[n];
    double tab2[n];
    double tab3[n];
    printf("\n");
    printf("Enter the values of elements in tab1 : \n");
    elements(n, tab1);
    printf("\n");
    print(n, tab1);
    printf("\n");
    printf("Enter the values of elements in tab2 : \n");
    elements(n, tab2);
    printf("\n");
    print(n, tab2);
    printf("\n");
    printf("SCALAR PRODUCT of vectors from tab1 and tab2 is : \n");
    scalar_product(n, tab1, tab2, tab3);
    print(n, tab3);

    return 0;
}
