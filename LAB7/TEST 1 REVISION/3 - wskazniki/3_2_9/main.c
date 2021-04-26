#include <stdio.h>
#include <stdlib.h>

int *reserwa(){

    return malloc(1*sizeof(int));

}

int main()
{

    printf("%I64d\n", sizeof(int));
    printf("%I64d\n", sizeof(int *));
    printf("%p\n", reserwa());
    return 0;
}
