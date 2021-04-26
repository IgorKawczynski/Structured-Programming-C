#include <stdio.h>
#include <stdlib.h>

int rek(unsigned int n){

    if(n==0)
        return 1;
    if(n==1)
        return 2;
    if(n==2)
        return -2;
    if(n%3==0)
        return 2 * rek(n/3);
    if(n%3==1)
        return rek(((n-1)/3)*2)-1;
    if(n%3==2)
        return rek(n-1);

}

int main()
{

    printf("%d\n", rek(4));
    printf("%d\n", rek(6));

    return 0;
}
