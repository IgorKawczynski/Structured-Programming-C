#include <stdio.h>
#include <stdlib.h>

double* foo4(unsigned int n){

    return malloc(n*sizeof(double));

}

int main()
{
    printf("%p\n", foo4(25));
    return 0;
}
