#include <stdio.h>
#include <stdlib.h>

int foo1(unsigned int n, unsigned int m, unsigned int k){

    if((m%n==0)&&(m%k==0))
        return 2;
    if((m%n==0)||(m%k==0))
        return 1;
    return 0;



}


int main()
{

    printf("%d\n", foo1(2, 8, 4)); //2
    printf("%d\n", foo1(2, 6, 8)); //1
    return 0;
}
