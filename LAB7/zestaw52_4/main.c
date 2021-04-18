#include <stdio.h>
#include <stdlib.h>

int function4(unsigned int n)
{
    if(n==0 || n==1)return 1;
    if(n>0)
    {
        if(n%3==0)return function4(n/3-1);
        if(n%3==1)return function4(n-1)+1;
    }
    if(n>=0)
    {
        if(n%3==2)return 5;
    }


}

int main()
{
    printf("%d\n", function4(2));
    printf("%d\n", function4(3));
    printf("%d\n", function4(4));
    printf("%d\n", function4(5));

    return 0;
}
