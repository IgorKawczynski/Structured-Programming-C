#include <stdio.h>
#include <stdlib.h>

int rek(unsigned int n){

    if(n==0)
        return 1;
    if(n==1)
        return 1;
    return rek(n-1)+rek(n-1); // albo return 2 * rek(n-1);

}


int main()
{

    printf("%d\n", rek(0));
    printf("%d\n", rek(1));
    printf("%d\n", rek(2));
    printf("%d\n", rek(3));
    printf("%d\n", rek(4));
    printf("%d\n", rek(5));
    printf("%d\n", rek(6));
    printf("%d\n", rek(7));
    printf("%d\n", rek(8));
    printf("%d\n", rek(9));
    printf("%d\n", rek(10));
    printf("%d\n", rek(11));

    printf("Hello world!\n");
    return 0;
}
