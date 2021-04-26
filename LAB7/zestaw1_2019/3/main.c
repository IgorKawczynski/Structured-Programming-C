#include <stdio.h>
#include <stdlib.h>

void maks3(int *x, int *y){

    if(*x>*y)
        *y=*x;
    if(*x<*y)
        *x=*y;
}


int main()
{

    int x=5;
    int y=7;
    printf("Przed zamiana : x=%d,  y=%d\n", x, y);
    int x2=41;
    int y2=41;
    printf("Przed zamiana : x2=%d,  y2=%d\n", x2, y2);
    maks3(&x, &y);
    printf("Po zamianie : x=%d,  y=%d\n", x, y);
    maks3(&x2, &y2);
    printf("Po zamianie : x2=%d,  y2=%d\n", x2, y2);


    printf("Hello world!\n");
    return 0;
}
