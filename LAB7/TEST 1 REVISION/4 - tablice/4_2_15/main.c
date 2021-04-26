#include <stdio.h>
#include <stdlib.h>

void foo(int *tab){

    free(tab);

}

int main()
{
    int tab1[5]={1,2,3,4,5};
    printf("%p\n", tab1);
    foo(tab1);
    printf("nowy : %p\n", tab1);
    printf("Hello world!\n");
    return 0;
}
