#include <stdio.h>
#include <stdlib.h>

double *function3()
{
    double *temp = malloc(2 * sizeof(double));
    *temp = 5.2;
    *(temp + 1) = -4.2;

    return temp;

}


int main()
{

    printf("Wartosc : %lf\n",  *(function3()));
    printf("Adres : %p\n", function3());
    printf("Wartosc : %lf\n", *(function3()+1));
    printf("Adres : %p\n", function3()+1);


    return 0;
}
