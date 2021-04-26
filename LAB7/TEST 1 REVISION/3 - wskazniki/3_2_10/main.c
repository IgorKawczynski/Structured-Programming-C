#include <stdio.h>
#include <stdlib.h>

int *rezerwacja(){

    return malloc(sizeof(double));

}

int main()
{


    printf("%p\n", rezerwacja());
    return 0;
}
