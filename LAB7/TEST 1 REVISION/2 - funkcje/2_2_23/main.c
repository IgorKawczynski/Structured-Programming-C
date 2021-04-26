#include <stdio.h>
#include <stdlib.h>

int rekFib(unsigned int n){

    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return rekFib(n-1) + rekFib(n-2);


}


int main()
{

    printf("%d\n", rekFib(0));
    printf("%d\n", rekFib(1));
    printf("%d\n", rekFib(2));
    printf("%d\n", rekFib(3));
    printf("%d\n", rekFib(4));
    printf("%d\n", rekFib(5));
    printf("%d\n", rekFib(6));
    printf("%d\n", rekFib(7));
    printf("%d\n", rekFib(8));
    printf("%d\n", rekFib(9));
    printf("%d\n", rekFib(10));
    printf("%d\n", rekFib(11));
    printf("Hello world!\n");
    return 0;
}
