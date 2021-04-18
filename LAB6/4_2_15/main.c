#include <stdio.h>
#include <stdlib.h>

void freedom(int *tab)
{
    free(tab);

}

int main()
{
    int *tablica = malloc(2*sizeof(int));
    *tablica = 1;
    *(tablica+1) = 2;
    printf("%p\n", tablica);
    freedom(tablica); //zwalniamy pamiec z tablicy
    printf("%p\n", tablica);
    printf("Hello world!\n");

    return 0;
}
