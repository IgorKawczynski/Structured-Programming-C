#include <stdio.h>
#include <stdlib.h>

int *foo(unsigned int n){

    int *tab=malloc(n*sizeof(int));
    return tab;


}


int main()
{

    printf("%p\n", foo(21));
    printf("Hello world!\n");
    return 0;
}
