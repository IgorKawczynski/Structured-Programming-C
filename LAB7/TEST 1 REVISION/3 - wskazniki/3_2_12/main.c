#include <stdio.h>
#include <stdlib.h>

int *rezerwacja_n(unsigned int n){

    return malloc(n*sizeof(double));

}


int main()
{

    printf("%p\n", rezerwacja_n(5));
    return 0;
}
