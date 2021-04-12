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


void funkcja_a(unsigned int n, int tab1[]){

    //dla i<n, tzn inkrementacja przez cala tablice - tablica zostalaby odwrocona dwukrotnie, dlatego tez n/2

    int temp = 0;
    for(int i=0;i<n/2;i++)
    {
        temp=tab1[i];
        tab1[i]=tab1[n-i-1];
        tab1[n-i-1]=temp;

    }

}


void funkcja_b(unsigned int n, int tab1[]){

    int temp = tab1[0];
    for(int i=0;i+1<n;i++)
    {
        tab1[i]=tab1[i+1];

    }
        tab1[n-1]=temp;


}

void funkcja_c(unsigned int n, int tab1[]){

    int temp = tab1[n-1];
    for(int i=n-2;i>=0;i--)
    {
        tab1[i+1]=tab1[i];

    }
        tab1[0]=temp;


}
//yet to be done
int funkcja_d1(unsigned int n, int tab1[]){

    int i=0;
    int maks = 0;
    for(i=1;i<n;i++)
        if(tab1[i]>tab1[maks])
            maks=i;

    return maks;

}

//yet to be done
void funkcja_d2(unsigned int n, int tab1[]){
    int pom=0;
    int temp=0;
    for(int i=0;i+1<n;i++)
    {
        temp=funkcja_d1(n-i, tab1);
        pom=tab1[n-i-1];;
        tab1[n-i-1]=tab1[temp];
        tab1[temp]=pom;
    }
}


int main()
{
    //wszystkie przyklady zrobione dla jednej tablicy
    int n;
    printf("Enter the number of elements in tab1 : ");
    scanf("%d", &n);
    int tab1[n];
    printf("\n");
    printf("Enter the values of elements in tab1 : \n");
    elements(n, tab1);
    printf("\n");
    print(n, tab1);
    printf("\n");
    printf("tab1 after reverse : \n");
    funkcja_a(n, tab1);
    print(n, tab1);
    printf("\n");
    //przesuniecie w lewo ju¿ po odwróceniu tablicy
    printf("tab1 after reversion and then left shift : \n");
    funkcja_b(n, tab1);
    print(n, tab1);
    printf("\n");
    //przesuniecie w prawo juz po przesunieciu w lewo i odwróceniu tablicy
    printf("tab1 after reversion and then left shift and then right shift : \n");
    funkcja_c(n, tab1);
    print(n, tab1);
    //posortowanie tablicy z przykladu c
    printf("sorted tab1 non-descendingly : \n");
    funkcja_d2(n, tab1);
    print(n, tab1);


    return 0;
}
