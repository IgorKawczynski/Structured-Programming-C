#include <stdio.h>
#include <stdlib.h>

void print(unsigned int n, int *tab)
{

    printf("[");

    for(int i=0; i<n; i++)
    {
        printf(" %d ", *(tab+i));
    }
    printf("]");
    printf("\n");
}


void elements(unsigned int n, int *tab)
{

    for(int i = 0; i < n; i ++)
    {
        scanf("%d", &(*(tab + i)));

    }
}

double *dynamic_array(unsigned int n)
{

    double *temp = malloc(n*sizeof(double)); //tworzy tablice
    return temp;  //zwroci nam adres pierwszej wartosci, dzieki temu ze uzylismy wskaznika to zwraca w ten sposob

}



int main()
{
    int n = 14;
    printf("%p\n", dynamic_array(n));
    return 0;
}
