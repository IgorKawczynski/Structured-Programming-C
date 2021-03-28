#include <stdio.h>
#include <stdlib.h>

int* foo(){

    return malloc(sizeof(int));

}

int main()
{
    printf("%I64d\n", sizeof(int));
    printf("%I64d\n", sizeof(int *));

    printf("%p\n", foo());
    return 0;
}
