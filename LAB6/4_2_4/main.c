#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float geometric_average(unsigned int n, const int tab[n]){
    float sum = 1;
    float avg = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum * tab[i];
    }

    avg = pow(sum, ((float)1/n));

    printf("Geometric Average of this tab is : ");
    return avg;

}

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


int main()
{
    int n;
    printf("Enter number of elements in table : ");
    scanf("%u", &n);
    int tab[n];
    elements(n, tab);
    print(n, tab);
    printf("%f\n", geometric_average(n, tab));

    return 0;
}
