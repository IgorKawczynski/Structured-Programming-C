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

int *kopia(unsigned int n, int *tab1){

    int *new_tab1 = (int*)malloc(sizeof(*new_tab1) * n);
    for(int i=0;i<n;i++)
    {
        new_tab1[i]=tab1[i];
    }


    return new_tab1;


}




int main()
{

    int n;

    printf("Enter the numbers of elements in tab1 and tab2 : ");
    scanf("%d", &n);
    int tab1[n];
    printf("\n");
    printf("Enter the values of elements in tab1 : \n");
    elements(n, tab1);
    printf("\n");
    print(n, tab1);
    printf("\n");
    int *nowa=kopia(n, tab1);
    printf("Copy of tab1 : \n");
    print(n, nowa);
    printf("\n");


    return 0;
}
