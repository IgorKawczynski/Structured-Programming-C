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

void foo1(unsigned int n, int *tab1, int *tab2){

    for(int i=0; i<n; i++)
    {
        *(tab2+i)=*(tab1+i);
    }
}

void foo2(unsigned int n, int *tab1, int *tab2){

    for(int i=0; i<n; i++)
    {
        *(tab2+n-i-1)=*(tab1+i);
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
    printf("Po przepisaniu tab1 do tab2 : \n");
    foo1(n, tab1, tab2);
    print(n, tab1);
    print(n, tab2);
    printf("Po przepisaniu tab1 do tab2 w odwrotnej kolejnosci : \n");
    foo2(n,tab1, tab2);
    print(n, tab1);
    print(n, tab2);


    return 0;
}
