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


void odwroc(unsigned int n, int tab[n]){

    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp=tab[i];
        tab[i]=tab[n-i-1];
        tab[n-i-1]=temp;
    }

}

void lewo(unsigned int n, int tab[n]){

    int temp=tab[0];
    for(int i=0;i<n-1;i++)
    {
        tab[i]=tab[i+1];

    }
    tab[n-1]=temp;

}


void prawo(unsigned int n, int tab[n]){

    int temp=tab[n-1];
    for(int i=n-2;i>=0;i--)
    {
        tab[i+1]=tab[i];

    }
    tab[0]=temp;

}

int max(unsigned int n, int tab1[]){

    int i;
    int maks = 0;
    for(i=1;i<n;i++)
        if(tab1[i]>tab1[maks])
            maks=i;

    return maks;

}


void sort(unsigned int n, int tab1[]){
    int pom=0;
    int temp=0;
    for(int i=0;i+1<n;i++)
    {
        temp=max(n-i, tab1);
        pom=tab1[n-i-1];;
        tab1[n-i-1]=tab1[temp];
        tab1[temp]=pom;
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
    printf("Po odwroceniu : \n");
    odwroc(n, tab1);
    print(n, tab1);
    printf("Po przesunieciu o 1 w lewo : \n");
    lewo(n, tab1);
    print(n, tab1);
    printf("Po przesunieciu o 1 w prawo : \n");
    prawo(n, tab1);
    print(n, tab1);
    printf("Po posortowaniu : \n");
    sort(n, tab1);
    print(n, tab1);



    return 0;
}
