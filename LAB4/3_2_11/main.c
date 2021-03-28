#include <stdio.h>
#include <stdlib.h>

int* foo3(unsigned int n){

    return malloc(n*sizeof(int));

}

int main()
{
    printf("%p\n", foo3(21));
    return 0;
}
