#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//RYSOWANIE
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

//MAX - MIN - MAXINDEX - MININDEX
int funkcja_a(unsigned int n, int tab1[]){
    int maks = tab1[0];
    for(int i=0;i<n;i++)
        if(tab1[i]>maks)
            maks=tab1[i];

    return maks;

}

int funkcja_b(unsigned int n, int tab1[]){
    int min = tab1[0];
    for(int i=0;i<n;i++)
        if(tab1[i]<min)
            min=tab1[i];

    return min;

}

int funkcja_c(unsigned int n, int tab1[]){
    int max = tab1[0];
    int maxindeks = 0;
    for(int i=0;i<n;i++)
    {

        if(tab1[i]>max)
        {
            max=tab1[i];
            maxindeks=i;
        }
    }


    return maxindeks;
}

int funkcja_d(unsigned int n, int tab1[]){
    int min = tab1[0];
    int minindeks = 0;
    for(int i=0;i<n;i++)
    {

        if(tab1[i]<min)
        {
            min=tab1[i];
            minindeks=i;
        }
    }


    return minindeks;
}

//DO TAB3 NAJPIERW ELEMENTY TAB1 POTEM TAB2
void foo1(unsigned int n, int tab1[n], int tab2[n], double tab3[2*n]){

    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i];
        tab3[n+i]=tab2[i];

    }

}

//DO TAB3 ELEMENTY O INDKSIE PARZYSTYM Z TAB2 A NIEPARZYSTYM TAB1
void foo2(unsigned int n, int tab1[n], int tab2[n], double tab3[2*n]){

    for(int i=0;i<n;i++)
    {

            tab3[i*2+1]=tab1[i];
            tab3[i*2]=tab2[i];
    }

}


//ODWRACANIE ELEMENTOW W TABLICY
void funkcja_a(unsigned int n, int tab1[]){


    int temp = 0;
    for(int i=0;i<n/2;i++)
    {
        temp=tab1[i];
        tab1[i]=tab1[n-i-1];
        tab1[n-i-1]=temp;
    }
}

//1 W LEWO
void funkcja_b(unsigned int n, int tab1[]){

    int temp = tab1[0]; //pierwszy element tablicy zapisujemy do zmiennej tymczasowej, bo elementu pierwszego nie mozemy przesunac w lewo
    for(int i=0;i+1<n;i++) //elementy po pierwszym dziêki pêtli przesuwamy o 1 w lewo
    {
        tab1[i]=tab1[i+1];

    }
        tab1[n-1]=temp;  //ustawiamy element n-1 na ten pierwszy element, który wczeœniej zapisaliœmy w zmiennej tymczasowej, czyli pierwszy


}

//1 W PRAWO
void funkcja_c(unsigned int n, int tab1[]){

    int temp = tab1[n-1];
    for(int i=n-2;i>=0;i--)  //to samo co wyzej, trzeba do zmiennej tymczasowej ustawic, bo pierwszego elementu nie mozemy przesunac w lewo, a ostatniego nie mozemy przesunac w prawo, bo tam nic nie ma
    {
        tab1[i+1]=tab1[i];

    }
        tab1[0]=temp;


}

//SORTOWANIE NIEMALEJACE
int funkcja_d1(unsigned int n, int tab1[]){

    int i=0;
    int maks = 0;
    for(i=1;i<n;i++)
        if(tab1[i]>tab1[maks])
            maks=i;

    return maks;

}

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


//SORTOWANIE NIEROSNACE
int *wsk(unsigned int n, int *tab1, int*tab2){

    int *tab3=(int*)malloc((2*n)*sizeof(int));
    for(int i=0;i<n;i++)
    {
        *(tab3+i)=*(tab1+i);

    }
    for(int j=n;j<2*n;j++)
    {
        *(tab3+j)=*(tab2+(j-n));

    }
    sort(2*n, tab3);

    return tab3;



}

int min(unsigned int n, int tab1[]){

    int i=0;
    int min = 0;
    for(i=1;i<n;i++)
        if(tab1[i]<tab1[min])
            min=i;

    return min;

}


void sort(unsigned int n, int tab1[]){
    int pom=0;
    int temp=0;
    for(int i=0;i+1<n;i++)
    {
        temp=min(n-i, tab1);
        pom=tab1[n-i-1];;
        tab1[n-i-1]=tab1[temp];
        tab1[temp]=pom;
    }
}




//rezerwacja bloku n zmiennych i zwraca jako wartosc wskaznik do poczatku zarezerowanego bloku pamieci
int* foo3(unsigned int n){

    return malloc(n*sizeof(int));

}

//wskazniki na funkcje - zwraca true jesli funckje sa rowne dla argumentow od 0 do n
int int_na_int(int n){

    return n;

}

int int_na_int2(int n2){

    return n2;

}


bool foo5(int(*int_na_int)(int jeden), int(*int_na_int2)(int dwa), unsigned int n){

    for(int i=0;i<=n;i++){

        if (int_na_int(i) != int_na_int2(i))return false;

    }
    return true;
}







int main()
{
    int n;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    int *tab1=malloc(n*sizeof(int));
    elements(n, tab1);
    print(n, tab1);

    printf("Hello world!\n");
    return 0;
}
