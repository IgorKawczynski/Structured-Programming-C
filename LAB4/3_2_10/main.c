#include <stdio.h>
#include <stdlib.h>

double* foo2(){

    return malloc(sizeof(double));

}


int main()
{

    printf("%I64d\n", sizeof(double));
    printf("%I64d\n", sizeof(double *));

    printf("%p\n", foo2());
    return 0;
}
