#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element* utworz()
{
    return NULL;
};

int main()
{
    struct element*lista1=utworz();
    printf("%p\n",lista1);
    printf("%p\n",&lista1);
    return 0;
}
