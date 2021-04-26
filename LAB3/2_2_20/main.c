#include <stdio.h>
#include <stdlib.h>

int silnia(unsigned int n){

    if(n==0)
        return 1;

    return n*silnia(n-1);
}


int main()
{



    printf("%d\n", silnia(6));
    return 0;
}
