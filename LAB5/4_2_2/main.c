#include <stdio.h>
#include <stdlib.h>

void wyswietl(unsigned int n, int tab[]){

    printf("[");

    for(int i=0; i<n; i++)
    {
        printf(" %d ", tab[i]);
    }
    printf("]");
    printf("\n");
}

float funkcja_a(unsigned int n, int *tab){
    float suma = 0;
    float srednia = 0;
    for(int i=0; i<n; i++)
    {
        suma = *(tab+i)+suma;
    }
    srednia = suma/n;
    return srednia;
}


float funkcja_b(unsigned int n, int *tab){
    float suma = 0;
    for(int i=0; i<n; i++)
    {
        suma = suma + *(tab+i);
    }
    return suma;

}


float funkcja_c(unsigned int n, int *tab){
    float suma = 0;
    for(int i=0; i<n; i++)
    {
        *(tab+i) = *(tab+i) * *(tab+i);
        suma = suma + *(tab+i);

    }
    return suma;

}


int main()
{

    int *tab1 = malloc(4 * sizeof(int));
    *(tab1)=4;
    *(tab1+1)=6;
    *(tab1+2)=2;
    *(tab1+3)=8;
    *(tab1+4)=2;
    wyswietl(5, tab1);
    printf("Srednia arytmetyczna elementow tej tablicy to : %f \n", funkcja_a(5, tab1));
    printf("Suma elementow tej tablicy to : %f \n", funkcja_b(5, tab1));
    printf("Suma kwadratow elementow tej tablicy to : %f \n", funkcja_c(5, tab1));


    return 0;
}
