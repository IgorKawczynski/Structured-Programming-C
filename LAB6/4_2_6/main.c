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

void funkcja_a(unsigned int n, int tab1[], int tab2[]){

    for(int i=0;i<n;i++)
        tab2[i]=tab1[i];



}

void funkcja_b(unsigned int n, int tab1[], int tab2[]){

    for(int i=0;i<n;i++)
    {


        tab2[i]=tab1[n-i-1];

    }

}



int main()
{
    int n;
    printf("Enter the numbers of elements in tab1 and tab2 : ");
    scanf("%d", &n);
    int tab1[n];
    int tab2[n];
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
    printf("tab1 and tab2 after prescribing elements from tab1 into tab2 : \n");
    funkcja_a(n, tab1, tab2);
    print(n, tab1);
    print(n, tab2);
    printf("tab1 and tab2 after prescribing elements from tab1 into tab2 and reversing it : \n");
    funkcja_b(n, tab1, tab2);
    print(n, tab1);
    print(n, tab2);



    return 0;
}
