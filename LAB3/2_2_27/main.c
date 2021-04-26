#include <stdio.h>
#include <stdlib.h>

int rek(unsigned int n, unsigned int m){

    if(m==0)
        return n;
    if(n==0)
        return m;
    return rek(n-1, m)+rek(n,m-1)+rek(n-1,m-1);
}



int main()
{

    printf("%d\n", rek(0, 0));
    printf("%d\n", rek(1, 0));
    printf("%d\n", rek(2, 0));
    printf("%d\n", rek(3, 1));
    printf("%d\n", rek(4, 2));
    printf("%d\n", rek(5, 5));
    printf("%d\n", rek(6, 3));
    printf("%d\n", rek(7, 4));
    printf("%d\n", rek(8, 9));
    printf("%d\n", rek(9, 0));
    printf("%d\n", rek(0, 10));
    printf("%d\n", rek(11, 14));
    printf("Hello world!\n");
    return 0;
}
