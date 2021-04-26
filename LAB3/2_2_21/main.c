#include <stdio.h>
#include <stdlib.h>

int rek(unsigned int n){

    if(n==0)
        return 1;
    if(n>0)
        return 2 * rek(n-1) + 5;

}

int main()
{

    printf("%d\n", rek(0));
    printf("%d\n", rek(1));
    printf("%d\n", rek(2));
    printf("%d\n", rek(3));
    printf("%d\n", rek(4));
    printf("%d\n", rek(5));
    return 0;
}
