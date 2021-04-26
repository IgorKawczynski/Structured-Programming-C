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

void foo1(unsigned int n, int tab1[], int tab2[], int tab3[]){

    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i]+tab2[i];

    }

}

void foo2(unsigned int n, int tab1[], int tab2[], int tab3[]){

    for(int i=0;i<n;i++)
    {
        if(tab1[i]>tab2[i])
            tab3[i]=tab1[i];
        else
            tab3[i]=tab2[i];

    }
}

void foo3(unsigned int n, int tab1[], int tab2[], int tab3[]){

    for(int i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
        tab3[i]=tab2[i];
        tab1[i]=tab3[i];

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
    int *tab3=malloc(n*sizeof(int));
    elements(n, tab3);
    print(n, tab3);
    printf("Po przepisaniu sumy tab1 i tab2 do tab3 : \n");
    foo1(n, tab1, tab2, tab3);
    print(n, tab1);
    print(n, tab2);
    print(n, tab3);
    printf("Po przepisaniu wiekszego elementu z tab1 i tab2 do tab3 : \n");
    foo2(n,tab1, tab2, tab3);
    print(n, tab1);
    print(n, tab2);
    print(n, tab3);
    printf("Po przepisaniu tab1 do tab2, tab2 do tab3, tab3 do tab1 : \n");
    foo3(n,tab1, tab2, tab3);
    print(n, tab1);
    print(n, tab2);
    print(n, tab3);





    printf("Hello world!\n");
    return 0;
}
