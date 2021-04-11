#include <stdio.h>
#include <stdlib.h>

void wyswietl(unsigned int n, int tab[]){
    printf("[");
    for(int i=0; i<n; i++){

        printf(" %d ", tab[i]);
    }
    printf("]");
    printf("\n");
}


void funkcja_a(unsigned int n, int *tab){

    for(int i=0; i<n; i++){

        *(tab+i)=0;
    }

}


void funkcja_b(unsigned int n, int tab[]){

    for(int i=0; i<n; i++){

        tab[i]=i;
    }

}


void funkcja_c(unsigned int n, int tab[]){

    for(int i=0; i<n; i++){

        tab[i]=2*(tab[i]);
    }

}

void funkcja_d(unsigned int n, int tab[]){

    for(int i=0; i<n; i++){

        tab[i]=abs(tab[i]);
    }

}


int main()
{

    int *tab1=malloc(4*sizeof(int)); //zarezerwowanie pamieci dla 4 elementow w tablicy
    *(tab1)=5;     //dla pierwszego elementu
    *(tab1+1)=6;   //dla drugiego
    *(tab1+2)=2;   //itd
    *(tab1+3)=9;
    *(tab1+4)=21;
    wyswietl(5, tab1);
    funkcja_a(5, tab1);
    wyswietl(5, tab1);
    int tab2[5]={4,4,-7,3,8};
    wyswietl(5, tab2);
    funkcja_b(5, tab2);
    wyswietl(5, tab2);
    int tab3[5]={4,4,-1,3,8};
    wyswietl(5, tab3);
    funkcja_c(5, tab3);
    wyswietl(5, tab3);
    int tab4[5]={4,-5,4,2,3,8};
    wyswietl(6, tab4);
    funkcja_d(6, tab4);
    wyswietl(6, tab4);

    return 0;
}
