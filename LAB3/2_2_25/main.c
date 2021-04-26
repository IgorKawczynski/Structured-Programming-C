#include <stdio.h>
#include <stdlib.h>

int rek(unsigned int n){

    if(n<=1)
        return 1;
    if(n%2==0)
        return rek(n-1) + n;
    if(n%2==1)
        return rek(n-1) * n;


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
