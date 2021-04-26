#include <stdio.h>
#include <stdlib.h>

void elements(unsigned int n, int *tab){

    for(int i=0;i<n;i++)
    {
        printf("Enter %d element of array : ", i+1);
        scanf("%d", &(*(tab+i)));
    }

}

void print(unsigned int n, int *tab){

    printf("[");
    for(int i=0;i<n;i++)
    {
        printf(" %d ", *(tab+i));
    }
    printf("]\n");
}


void printlf(unsigned int n, double *tab){

    printf("[");
    for(int i=0;i<n;i++)
    {
        printf(" %lf ", *(tab+i));
    }
    printf("]\n");
}

void foo1(unsigned int n, int tab1[n], int tab2[n], double tab3[2*n]){

    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i];
        tab3[n+i]=tab2[i];

    }

}


void foo2(unsigned int n, int tab1[n], int tab2[n], double tab3[2*n]){

    for(int i=0;i<n;i++)
    {

            tab3[i*2+1]=tab1[i];
            tab3[i*2]=tab2[i];
    }

}
int main()
{
 int n;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    int *tab1=malloc(n*sizeof(int));
    elements(n, tab1);
    print(n, tab1);
    int *tab2=malloc(n*sizeof(int));
    elements(n, tab2);
    print(n, tab2);
    int *tab3=malloc((2*n)*sizeof(double));
    elements(2*n, tab3);
    printlf(2*n, tab3);
    printf("Po przepisaniu tab1 i tab2 do tab3 : \n");
    foo1(n, tab1, tab2, tab3);
    printlf(2*n, tab3);
    printf("Po przepisaniu tab1 i tab2 do tab3 dla parzystych/nieparzystych indeksow : \n");
    foo2(n, tab1, tab2, tab3);
    printlf(2*n, tab3);

    return 0;
}
