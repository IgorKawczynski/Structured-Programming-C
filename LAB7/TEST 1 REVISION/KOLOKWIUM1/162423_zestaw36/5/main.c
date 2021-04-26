#include <stdio.h>
#include <stdlib.h>

void print(unsigned int n, float *tab){

    printf("[");

    for(int i=0; i<n; i++)
    {
        printf(" %f ", *(tab+i));
    }
    printf("]");
    printf("\n");
}

void elements(unsigned int n, float *tab){

    for(int i = 0; i < n; i ++)
    {
        scanf("%f", &(*(tab + i)));


    }
}


void foo5(unsigned int n, float *tab1, float *tab2){

    float *temp=malloc(n*sizeof(float));
    for(int j=0; j<n; j++)
    {
        *(temp+j)=*(tab1+j);


    }
    for(int i=0;i<n;i++)
    {
       if(i%2==1)
       {
           *(tab1+i)=*(tab2+i);
           *(tab2+i)=*(temp+i);

       }

    }


}


int main()
{

    int n=5;
    float *tab1=malloc(n*sizeof(float));
    printf("Podaj elementy 1wszej tablicy :\n");
    elements(n, tab1);
    print(n, tab1);
    float *tab2=malloc(n*sizeof(float));
    printf("Podaj elementy 2giej tablicy :\n");
    elements(n, tab2);
    print(n, tab2);
    printf("\n");
    float *tab3=malloc(n*sizeof(float));
    printf("Podaj elementy 3ciej tablicy :\n");
    elements(n, tab3);
    print(n, tab3);
    float *tab4=malloc(n*sizeof(float));
    printf("Podaj elementy 4tej tablicy :\n");
    elements(n, tab4);
    print(n, tab4);
    printf("\n");
    foo5(n, tab1, tab2);
    printf("1wsza tablica po przeniesieniu elementow o nieparzystych indeksach z tablicy numer 2 :\n");
    print(n, tab1);
    printf("2ga tablica po przeniesieniu elementow o nieparzystych indeksach z tablicy numer 1 :\n");
    print(n, tab2);
    foo5(n, tab3, tab4);
    printf("3cia tablica po przeniesieniu elementow o nieparzystych indeksach z tablicy numer 4 :\n");
    print(n, tab3);
    printf("4ta tablica po przeniesieniu elementow o nieparzystych indeksach z tablicy numer 3 :\n");
    print(n, tab4);

    printf("Hello world!\n");
    return 0;
}
