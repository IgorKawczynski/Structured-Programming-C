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
        tab3[i]=tab1[i];
    for(int j=0;j<n;j++)
        tab3[j+n]=tab2[j];

}


void funkcja_b(unsigned int n, int tab1[], int tab2[], int tab3[]){

    for(int i=0;i<n;i++)
    {
        if(i%2!=0)tab3[i]=tab1[i];
        if(i%2==0)tab3[i]=tab2[i];

    }


}



int main()
{

    int n;
    printf("Enter the number of elements in tab1 and tab2 : ");
    scanf("%d", &n);
    int tab1[n];
    int tab2[n];
    int tab3[2*n];
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
    elements(2*n, tab3);
    printf("\n");
    print(2*n, tab3);
    printf("\n");
    printf("tab3 after prescribing firstly values from tab1 and secondly from tab2 : \n");
    funkcja_a(n, tab1, tab2, tab3);
    print(2*n, tab3);
    printf("\n");
    //Tablica indeksuje siê od 0
    printf("tab3 after prescribing firstly values from tab1 and secondly from tab2 : \n");
    funkcja_b(n, tab1, tab2, tab3);
    print(2*n, tab3);
    printf("\n");

    return 0;
}
