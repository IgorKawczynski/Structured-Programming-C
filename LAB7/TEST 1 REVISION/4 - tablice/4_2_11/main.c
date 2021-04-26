#include <stdio.h>
#include <stdlib.h>

void elements(unsigned int n, double *tab){

    for(int i=0;i<n;i++)
    {
        printf("Enter %d element of array : ", i+1);
        scanf("%lf", &(*(tab+i)));
    }

}

void print(unsigned int n, double *tab){

    printf("[");
    for(int i=0;i<n;i++)
    {
        printf(" %lf ", *(tab+i));
    }
    printf("]\n");
}



double scalar_product(unsigned int n, double tab1[n], double tab2[n]){

    double sum=0;
    double product=1;
    for(int i=0; i<n; i++)
    {
        product=tab1[i]*tab2[i];
        sum=sum+product;

    }
    return sum;
}


double foo (unsigned int n, double *tab1, double *tab2)
{
    double scalar_product = *(tab1) * *(tab2);
    for (int i = 1; i < n; i++)
    {
        scalar_product = scalar_product + *(tab1 + i) * *(tab2 + i);
    }
    return scalar_product;
}


int main()
{

    int n;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    int *tab1=malloc(n*sizeof(double));
    elements(n, tab1);
    print(n, tab1);
    int *tab2=malloc(n*sizeof(double));
    elements(n, tab2);
    print(n, tab2);
    printf("Scalar product of tab1 and tab2 is : %lf\n", scalar_product(n, tab1, tab2));
    printf("Scalar product of tab1 and tab2 is : %lf\n", foo(n, tab1, tab2));


    printf("Hello world!\n");
    return 0;
}
