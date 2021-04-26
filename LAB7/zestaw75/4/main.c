#include <stdio.h>
#include <stdlib.h>

int rek(unsigned int n){

    if(n==0)
        return 1;
    if(n==1)
        return 2;
    if(n%2==0)
        return rek(n-2)+n;
    if(n%2==1)
        return rek(n-2)*n;
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
    return 0;
}
