#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int x;
    struct lista* next;

};

int main()
{

    struct lista l1;
    l1.x=5;

    printf("Hello world!\n");
    return 0;
}
