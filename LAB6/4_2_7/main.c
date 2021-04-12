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

void funkcja_a(unsigned int n, int tab1[], int tab2[], int tab3[]){

    for(int i=0;i<n;i++)
        tab3[i]=tab1[i]+tab2[i];



}

void funkcja_b(unsigned int n, int tab1[], int tab2[], int tab3[]){

    for(int i=0;i<n;i++)
    {
        if(tab1[i]>=tab2[i])
            tab3[i]=tab1[i];
        else
            tab3[i]=tab2[i];

    }

}



int main()
{
    int n;
    printf("Enter the number of elements in tab1 and tab2 and tab3 : ");
    scanf("%d", &n);
    int tab1[n];
    int tab2[n];
    int tab3[n];
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
    printf("Enter the values of elements in tab3 : \n");
    elements(n, tab3);
    printf("\n");
    print(n, tab3);
    printf("\n");
    printf("tab3 after prescribing sum of values from tab1 and tab2 : \n");
    funkcja_a(n, tab1, tab2, tab3);
    print(n, tab1);
    print(n, tab2);
    print(n, tab3);
    printf("\n");
    printf("tab3 after prescribing bigger values from elements from tab1 and tab2 : \n");
    funkcja_b(n, tab1, tab2, tab3);
    print(n, tab1);
    print(n, tab2);
    print(n, tab3);
    printf("\n");



    return 0;
}
